/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E800
// Address: 0x0003E800

//----- (0003E800) --------------------------------------------------------
char __cdecl sub_3E800(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // kr00_8
  unsigned int v10; // esi
  int *v11; // esi
  __int64 v12; // rax
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  signed int v17; // esi
  unsigned int v18; // ecx
  char *v19; // eax
  unsigned int v20; // esi
  __int64 v21; // [esp-10h] [ebp-6Ch]
  int v22; // [esp+4h] [ebp-58h]
  __int64 v23; // [esp+8h] [ebp-54h]
  int *v24; // [esp+10h] [ebp-4Ch]
  int v25; // [esp+14h] [ebp-48h]
  unsigned __int64 v26; // [esp+18h] [ebp-44h] BYREF
  char *v27; // [esp+24h] [ebp-38h] BYREF
  int v28; // [esp+28h] [ebp-34h] BYREF
  unsigned int v29; // [esp+2Ch] [ebp-30h]
  unsigned int v30; // [esp+30h] [ebp-2Ch]
  _DWORD v31[3]; // [esp+38h] [ebp-24h] BYREF
  char v32; // [esp+44h] [ebp-18h]
  unsigned int v33; // [esp+48h] [ebp-14h]

  v2 = a2;
  v3 = a1;
  v33 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 56) )
  {
    v4 = *(_DWORD *)(a1 + 48);
    v5 = *(_DWORD *)(a1 + 52);
    if ( v4 < v5 )
    {
LABEL_3:
      *(_DWORD *)(v3 + 48) = v4 + 1;
      *v2 = *(_DWORD *)(v3 + 28) + 24 * v4;
      return 1;
    }
    if ( !v5 )
    {
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v10 = *(_DWORD *)(a1 + 16);
      if ( v10 )
      {
        v28 = (int)qvector_reserve((int)&v28, nullptr, v10, 1u);
        memset((void *)(v29 + v28), 0, v10 - v29);
        v29 = v10;
      }
      v11 = *(int **)(a1 + 4);
      LODWORD(v12) = qlseek(v11[90], 0, 1);
      v13 = v11[92];
      v14 = v11[91];
      v23 = v12 - __PAIR64__(v13, v14);
      v24 = v11;
      v15 = qlseek(v11[90], *(_QWORD *)(a1 + 8) + __PAIR64__(v13, v14), 0);
      v22 = 1;
      if ( (v16 & v15) == 0xFFFFFFFF )
      {
LABEL_30:
        qlseek(v24[90], *(_QWORD *)(v24 + 91) + v23, 0);
        v2 = a2;
        v3 = a1;
        if ( v28 )
        {
          v29 = 0;
          qfree((void *)v28);
          v28 = 0;
          v30 = 0;
        }
        if ( !v22 )
        {
          v4 = *(_DWORD *)(a1 + 48);
          goto LABEL_3;
        }
        return 0;
      }
      HIDWORD(v21) = v28;
      LODWORD(v21) = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 360);
      v17 = qlread(v21, *(_DWORD *)(a1 + 16));
      if ( (unsigned __int64)v17 < *(_QWORD *)(a1 + 16) )
      {
        sub_1C900();
        if ( v17 < 9 )
          goto LABEL_30;
        v18 = v29;
        if ( v29 < v17 )
        {
          v19 = (char *)v28;
          if ( v30 < v17 )
          {
            v19 = (char *)qvector_reserve((int)&v28, (void *)v28, v17, 1u);
            v28 = (int)v19;
            v18 = v29;
          }
          memset(&v19[v18], 0, v17 - v18);
          v29 = v17;
          goto LABEL_24;
        }
        if ( v29 == v17 )
        {
LABEL_24:
          v27 = (char *)v28;
          v20 = v28 + v17;
          v25 = *(_DWORD *)v28;
          v27 = (char *)(v28 + 4);
          v22 = 1;
          if ( unpack_xleb128((int *)&v26, 64, 1, &v27, v20) && (__int64)v26 >= 1 && v26 < *(_QWORD *)(a1 + 16) )
          {
            if ( v25 == 844320833 )
            {
              v31[0] = v27;
              v31[1] = v20;
              v31[2] = 0;
              v32 = 1;
              sub_3ED00((int)v31, (char **)(a1 + 28), v26);
              *(_DWORD *)(a1 + 52) = v26;
              v22 = 0;
            }
            else
            {
              sub_3ECA0((int)"The relocation packing method '%4.4s' is not supported yet.", v28);
            }
          }
          goto LABEL_30;
        }
        LOBYTE(v31[0]) = 0;
        sub_43860((char **)&v28, v17, (char *)v31);
      }
      v17 = v29;
      if ( v29 < 4 )
        goto LABEL_30;
      goto LABEL_24;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 52);
    if ( v6 >= v7 )
    {
      v8 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 40);
      if ( !v8 )
        return 0;
      sub_42990((char **)(a1 + 28), v8);
      *(_DWORD *)(a1 + 48) = 0;
      v7 = sub_3E500(a1, v8);
      *(_DWORD *)(a1 + 52) = v7;
      if ( !v7 )
        return 0;
      *(_QWORD *)(a1 + 40) += v7;
      v6 = *(_DWORD *)(a1 + 48);
      v2 = a2;
    }
    if ( v6 < v7 )
    {
      *v2 = *(_DWORD *)(a1 + 28) + 24 * v6;
      ++*(_DWORD *)(a1 + 48);
      return 1;
    }
  }
  return 0;
}
// 3E945: variable 'v12' is possibly undefined
// 3E96E: variable 'v16' is possibly undefined
