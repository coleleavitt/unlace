/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8096690
// Address: 0x08096690

//----- (08096690) --------------------------------------------------------
int __cdecl sub_8096690(int a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // ebx
  int i; // eax
  int v5; // edi
  char *v6; // eax
  int v7; // edi
  unsigned int v8; // edx
  char v9; // cl
  void *v10; // eax
  char v11; // dl
  __int64 *v12; // kr04_4
  int v13; // ecx
  int v14; // edi
  unsigned int v15; // edx
  void *v16; // eax
  void *v17; // eax
  int v19; // edx
  int v20; // eax
  char *v21; // edx
  char *v22; // eax
  void *v23; // ecx
  void *v24; // edx
  __int64 v25; // xmm0_8
  int v26; // edi
  unsigned int v27; // edx
  char v28; // cl
  void *v29; // eax
  int v30; // edi
  unsigned int v31; // ecx
  void *v32; // eax
  int v33; // edx
  char *v34; // eax
  char *v35; // edx
  void *v36; // edi
  int v37; // ecx
  char v38; // [esp-41h] [ebp-41h]
  char v39; // [esp-41h] [ebp-41h]
  char v40; // [esp-41h] [ebp-41h]
  unsigned int v41; // [esp-40h] [ebp-40h]
  unsigned int v42; // [esp-40h] [ebp-40h]
  unsigned int v43; // [esp-40h] [ebp-40h]
  __int64 *v44; // [esp-3Ch] [ebp-3Ch]
  char v45; // [esp-38h] [ebp-38h]
  unsigned int v46; // [esp-38h] [ebp-38h]
  int v47; // [esp-30h] [ebp-30h]
  void *v48; // [esp-2Ch] [ebp-2Ch] BYREF
  __int64 v49; // [esp-28h] [ebp-28h]
  unsigned int v50; // [esp-20h] [ebp-20h]

  v3 = a3;
  v50 = __readgsdword(0x14u);
  v48 = nullptr;
  v49 = 0;
  *(_BYTE *)a3 = 1;
  v45 = 0;
  v44 = nullptr;
  LOBYTE(v47) = 0;
  for ( i = sub_8096470(a1); ; i = sub_8096470(a1) )
  {
    v5 = i;
    if ( i == 34 )
    {
      v5 = sub_80C7880((v47 << 31 >> 31) & 0x26);
      v17 = v48;
      goto LABEL_22;
    }
    if ( i )
    {
LABEL_21:
      v17 = v48;
      goto LABEL_22;
    }
    v6 = *(char **)(a1 + 4);
    if ( (_BYTE)v47 )
      break;
    if ( *v6 != 40 )
    {
      *(_BYTE *)a3 = 0;
      v17 = v48;
      goto LABEL_22;
    }
    *(_DWORD *)(a1 + 4) = v6 + 1;
    if ( v6[1] == 41 )
    {
      *(_DWORD *)(a1 + 4) = v6 + 2;
      goto LABEL_21;
    }
LABEL_7:
    LOBYTE(v47) = 1;
  }
  while ( 2 )
  {
    v11 = *v6;
    v12 = v3;
    v3 = &qword_811CFF4;
    switch ( *v6 )
    {
      case 0:
        goto LABEL_16;
      case 9:
      case 10:
      case 32:
        if ( v45 )
        {
          *(_DWORD *)(a1 + 4) = ++v6;
          continue;
        }
        v3 = (__int64 *)(unsigned __int8)v47;
        v45 = v47;
        goto LABEL_10;
      case 34:
        v3 = (__int64 *)&v48;
        while ( 2 )
        {
          v26 = v49;
          v13 = v49;
          if ( !v11 )
            goto LABEL_17;
          *(_DWORD *)(a1 + 4) = v6 + 1;
          v27 = 2;
          v28 = *v6;
          if ( v26 )
            v27 = v26-- + 1;
          v29 = v48;
          if ( HIDWORD(v49) < v27 )
          {
            v39 = v28;
            v42 = v27;
            v3 = &qword_811CFF4;
            v29 = sub_80CF920((int)&v48, v48, v27, 1u);
            v28 = v39;
            v27 = v42;
            v48 = v29;
          }
          LODWORD(v49) = v27;
          *((_BYTE *)v29 + v26) = v28;
          *((_BYTE *)v48 + v26 + 1) = 0;
          v6 = *(char **)(a1 + 4);
          v11 = *v6;
          if ( v28 != 92 )
            goto LABEL_48;
          if ( v11 )
          {
            v30 = v49;
            v31 = 2;
            if ( (_DWORD)v49 )
            {
              v31 = v49 + 1;
              v30 = v49 - 1;
            }
            v32 = v48;
            if ( HIDWORD(v49) < v31 )
            {
              v40 = v11;
              v43 = v31;
              v3 = &qword_811CFF4;
              v32 = sub_80CF920((int)&v48, v48, v31, 1u);
              v11 = v40;
              v31 = v43;
              v48 = v32;
            }
            LODWORD(v49) = v31;
            *((_BYTE *)v32 + v30) = v11;
            *((_BYTE *)v48 + v30 + 1) = 0;
            v6 = (char *)(*(_DWORD *)(a1 + 4) + 1);
            *(_DWORD *)(a1 + 4) = v6;
            v11 = *v6;
LABEL_48:
            if ( v11 == 34 )
              goto LABEL_10;
            continue;
          }
          break;
        }
LABEL_16:
        v13 = v49;
LABEL_17:
        v14 = v13;
        v15 = 2;
        if ( v13 )
        {
          v16 = v48;
          v15 = v13 + 1;
          v14 = v13 - 1;
          if ( HIDWORD(v49) >= v13 + 1 )
            goto LABEL_19;
        }
        else
        {
          v16 = v48;
          if ( HIDWORD(v49) >= 2 )
            goto LABEL_19;
        }
        v46 = v15;
        v3 = &qword_811CFF4;
        v16 = sub_80CF920((int)&v48, v16, v15, 1u);
        v15 = v46;
        v48 = v16;
LABEL_19:
        LODWORD(v49) = v15;
        *((_BYTE *)v16 + v14) = 32;
        *((_BYTE *)v48 + v14 + 1) = 0;
        v45 = v47;
        goto LABEL_7;
      case 40:
        if ( (*(_BYTE *)(a1 + 408) & 2) != 0 && v6[1] == 42 )
          goto LABEL_7;
        v44 = (__int64 *)((char *)v44 + 1);
        goto LABEL_10;
      case 41:
        if ( v44 )
        {
          v44 = (__int64 *)((char *)v44 - 1);
LABEL_10:
          v7 = v49;
          *(_DWORD *)(a1 + 4) = v6 + 1;
          v8 = 2;
          v9 = *v6;
          if ( v7 )
            v8 = v7-- + 1;
          v10 = v48;
          if ( HIDWORD(v49) < v8 )
          {
            v38 = v9;
            v41 = v8;
            v3 = &qword_811CFF4;
            v10 = sub_80CF920((int)&v48, v48, v8, 1u);
            v9 = v38;
            v8 = v41;
            v48 = v10;
          }
          LODWORD(v49) = v8;
          *((_BYTE *)v10 + v7) = v9;
          *((_BYTE *)v48 + v7 + 1) = 0;
          v6 = *(char **)(a1 + 4);
          continue;
        }
        v33 = *((_DWORD *)a2 + 1);
        v34 = *(char **)a2;
        if ( *((_DWORD *)a2 + 2) < (unsigned int)(v33 + 1) )
        {
          v34 = (char *)sub_80CF920((int)a2, v34, v33 + 1, 0xCu);
          v33 = *((_DWORD *)a2 + 1);
          *(_DWORD *)a2 = v34;
        }
        v35 = &v34[12 * v33];
        *(_DWORD *)v35 = 0;
        v36 = v48;
        *((_DWORD *)v35 + 1) = 0;
        *((_DWORD *)v35 + 2) = 0;
        ++*((_DWORD *)a2 + 1);
        v17 = *(void **)v35;
        *(_DWORD *)v35 = v36;
        v37 = *((_DWORD *)v35 + 2);
        v48 = v17;
        *(_QWORD *)(v35 + 4) = v49;
        v5 = 0;
        ++*(_DWORD *)(a1 + 4);
        HIDWORD(v49) = v37;
LABEL_22:
        if ( v17 )
        {
          LODWORD(v49) = 0;
          sub_80CF780(v17);
        }
        if ( v50 != __readgsdword(0x14u) )
          sub_80D7AB0();
        return v5;
      case 44:
        v3 = v44;
        if ( v44 )
          goto LABEL_10;
        v20 = *((_DWORD *)a2 + 1);
        v21 = *(char **)a2;
        if ( *((_DWORD *)a2 + 2) < (unsigned int)(v20 + 1) )
        {
          v21 = (char *)sub_80CF920((int)a2, v21, v20 + 1, 0xCu);
          *(_DWORD *)a2 = v21;
          v20 = *((_DWORD *)a2 + 1);
        }
        v3 = a2;
        v22 = &v21[12 * v20];
        *(_DWORD *)v22 = 0;
        v23 = v48;
        *((_DWORD *)v22 + 1) = 0;
        *((_DWORD *)v22 + 2) = 0;
        ++*((_DWORD *)a2 + 1);
        v24 = *(void **)v22;
        *(_DWORD *)v22 = v23;
        v25 = *(_QWORD *)(v22 + 4);
        v48 = v24;
        *(_QWORD *)(v22 + 4) = v49;
        v49 = v25;
        ++*(_DWORD *)(a1 + 4);
        goto LABEL_7;
      case 47:
        v19 = *(_DWORD *)(a1 + 408);
        if ( (v19 & 1) != 0 && v6[1] == 42 || (v19 & 4) != 0 && v6[1] == 47 )
          goto LABEL_7;
        goto LABEL_9;
      case 59:
        if ( (*(_BYTE *)(a1 + 408) & 8) != 0 )
          goto LABEL_7;
        goto LABEL_9;
      default:
        v3 = v12;
LABEL_9:
        v45 = 0;
        goto LABEL_10;
    }
  }
}
// 809698E: variable 'v47' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
