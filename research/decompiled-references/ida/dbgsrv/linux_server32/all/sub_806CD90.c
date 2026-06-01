/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806CD90
// Address: 0x0806CD90

//----- (0806CD90) --------------------------------------------------------
unsigned int __cdecl sub_806CD90(_DWORD *a1, int *a2)
{
  _DWORD *v2; // ebp
  char v3; // dl
  unsigned int v4; // eax
  void *v5; // ecx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // esi
  char *v9; // ecx
  int v10; // eax
  char *v11; // esi
  char *v12; // edi
  int v13; // ebp
  int v14; // ecx
  __int64 v15; // xmm0_8
  int v16; // ecx
  __int64 v17; // xmm1_8
  int v18; // ecx
  void *v19; // ecx
  void *v20; // ecx
  int v22; // eax
  unsigned int result; // eax
  int v24; // eax
  int v25; // esi
  void *v26; // eax
  void *v27; // eax
  char v28; // [esp+8h] [ebp-40h]
  int v29; // [esp+Ch] [ebp-3Ch]
  char *v30; // [esp+10h] [ebp-38h]
  void *v31; // [esp+10h] [ebp-38h]
  _DWORD *v32; // [esp+14h] [ebp-34h]
  unsigned int v33; // [esp+24h] [ebp-24h] BYREF
  unsigned int v34; // [esp+28h] [ebp-20h]

  v2 = a1;
  v3 = *(_BYTE *)(*a1 + 476);
  v34 = __readgsdword(0x14u);
  v4 = 0;
  v33 = 0;
  v28 = v3;
  while ( v4 < a2[1] )
  {
    v7 = v2[2];
    v8 = v2[3];
    if ( v8 >= v7 + 1 )
    {
      v5 = (void *)v2[1];
    }
    else
    {
      v9 = (char *)sub_80CF920((int)(a1 + 1), nullptr, v7 + 1, 0x1Cu);
      v10 = v2[3];
      v2[3] = v8;
      v11 = (char *)v2[1];
      v29 = v10;
      if ( v2[2] - 1 >= 0 )
      {
        v30 = v9;
        v12 = v9;
        v32 = v2;
        v13 = v2[2] - 1;
        do
        {
          v14 = *(_DWORD *)v11;
          v15 = *(_QWORD *)(v11 + 4);
          *(_DWORD *)v11 = 0;
          *((_DWORD *)v11 + 1) = 0;
          *(_DWORD *)v12 = v14;
          *(_QWORD *)(v12 + 4) = v15;
          v16 = *((_DWORD *)v11 + 3);
          v17 = *((_QWORD *)v11 + 2);
          *((_DWORD *)v11 + 2) = 0;
          *((_DWORD *)v12 + 3) = v16;
          *((_QWORD *)v12 + 2) = v17;
          v18 = *((_DWORD *)v11 + 6);
          *((_DWORD *)v11 + 3) = 0;
          *((_DWORD *)v11 + 5) = 0;
          *((_DWORD *)v12 + 6) = v18;
          v19 = *((void **)v11 + 3);
          if ( v19 )
          {
            *((_DWORD *)v11 + 4) = 0;
            sub_80CF780(v19);
          }
          v20 = *(void **)v11;
          if ( *(_DWORD *)v11 )
          {
            *((_DWORD *)v11 + 1) = 0;
            sub_80CF780(v20);
          }
          v11 += 28;
          v12 += 28;
        }
        while ( v13-- != 0 );
        v2 = v32;
        v9 = v30;
        v11 = (char *)v32[1];
      }
      v31 = v9;
      sub_80CF780(v11);
      v5 = v31;
      v2[3] = v29;
      v7 = v2[2];
      v2[1] = v31;
    }
    v6 = (int)v5 + 28 * v7;
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) = 0;
    ++v2[2];
    if ( !(unsigned __int8)sub_806CA80((void **)v6, &v33, a2, v28) )
    {
      v22 = v2[2];
      if ( v22 )
      {
        v24 = v22 - 1;
        v25 = v2[1] + 28 * v24;
        v2[2] = v24;
        v26 = *(void **)(v25 + 12);
        if ( v26 )
        {
          *(_DWORD *)(v25 + 16) = 0;
          sub_80CF780(v26);
        }
        v27 = *(void **)v25;
        if ( *(_DWORD *)v25 )
        {
          *(_DWORD *)(v25 + 4) = 0;
          sub_80CF780(v27);
        }
      }
      break;
    }
    v4 = v33;
  }
  result = v34 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
