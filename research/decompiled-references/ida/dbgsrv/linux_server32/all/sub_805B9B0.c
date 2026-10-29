/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805B9B0
// Address: 0x0805B9B0

//----- (0805B9B0) --------------------------------------------------------
unsigned int __cdecl sub_805B9B0(int a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  char *v4; // edx
  void **v5; // edi
  size_t v6; // eax
  const char *v7; // edx
  size_t v8; // ecx
  void *v9; // edi
  unsigned int v10; // ebx
  void *v11; // eax
  char *v12; // edx
  unsigned int v13; // ebx
  int v14; // ecx
  unsigned int result; // eax
  void **v16; // eax
  int v17; // edx
  int v18; // [esp-34h] [ebp-44h]
  size_t v19; // [esp-34h] [ebp-44h]
  int v20; // [esp-30h] [ebp-40h]
  unsigned int v21; // [esp-2Ch] [ebp-3Ch]
  const char *v22; // [esp-2Ch] [ebp-3Ch]
  const char *v23; // [esp-24h] [ebp-34h]
  size_t v24; // [esp-24h] [ebp-34h]
  size_t v25; // [esp-24h] [ebp-34h]
  char **v26; // [esp-20h] [ebp-30h]
  unsigned int v27; // [esp-20h] [ebp-30h]
  int v28; // [esp-18h] [ebp-28h] BYREF
  void *v29; // [esp-14h] [ebp-24h] BYREF
  unsigned int v30; // [esp-10h] [ebp-20h]

  v30 = __readgsdword(0x14u);
  *(_DWORD *)(a1 + 20) = a1 + 44;
  *(_DWORD *)a1 = &off_811B834;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 1065353216;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  memset((void *)((a1 + 128) & 0xFFFFFFFC), 0, 4 * ((a1 + 124 - ((a1 + 128) & 0xFFFFFFFC) + 108) >> 2));
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 740) = 0;
  memset((void *)((a1 + 236) & 0xFFFFFFFC), 0, 4 * ((a1 + 232 - ((a1 + 236) & 0xFFFFFFFC) + 512) >> 2));
  *(_DWORD *)(a1 + 744) = 0;
  *(_DWORD *)(a1 + 3436) = 0;
  memset((void *)((a1 + 748) & 0xFFFFFFFC), 0, 4 * ((a1 + 744 - ((a1 + 748) & 0xFFFFFFFC) + 2696) >> 2));
  *(_DWORD *)(a1 + 3440) = a1 + 744;
  *(_DWORD *)(a1 + 3448) = 0;
  *(_DWORD *)(a1 + 3444) = 2696;
  if ( off_811E3C8[0] )
  {
    v26 = off_811E3C8;
    v20 = (int)(a2 + 6);
    do
    {
      v3 = a2[4];
      v4 = (char *)a2[3];
      if ( a2[5] < (unsigned int)(v3 + 1) )
      {
        v4 = (char *)sub_80CF920((int)(a2 + 3), v4, v3 + 1, 0xCu);
        a2[3] = v4;
        v3 = a2[4];
      }
      ++v26;
      v5 = (void **)&v4[12 * v3];
      *v5 = nullptr;
      v5[1] = nullptr;
      v5[2] = nullptr;
      ++a2[4];
      if ( *(v26 - 1) && (v23 = *(v26 - 1), v6 = strlen(v23), v7 = v23, (v8 = v6) != 0) )
      {
        v11 = *v5;
        v24 = v8 + 1;
        if ( (unsigned int)v5[2] < v8 + 1 )
        {
          v19 = v8;
          v22 = v7;
          v11 = sub_80CF920((int)v5, v11, v8 + 1, 1u);
          v8 = v19;
          v7 = v22;
          *v5 = v11;
        }
        v5[1] = (void *)v24;
        v25 = v8;
        memmove(v11, v7, v8);
        *((_BYTE *)*v5 + v25) = 0;
      }
      else
      {
        v5[1] = nullptr;
      }
      v17 = a2[7];
      v9 = *v5;
      v10 = a2[8];
      v18 = (int)(a2 + 6);
      v16 = (void **)a2[6];
      v21 = v17 + 1;
      v29 = v9;
      if ( &v29 < v16 || &v29 >= &v16[v10] )
      {
        if ( v10 < v21 )
        {
          v16 = (void **)sub_80CF920(v20, v16, v21, 4u);
          v17 = a2[7];
          v9 = v29;
          a2[6] = v16;
        }
      }
      else if ( v10 < v21 )
      {
        v16 = (void **)sub_80CF920(v20, v16, v21, 4u);
        v17 = a2[7];
        a2[6] = v16;
      }
      v16[v17] = v9;
      v2 = a2[7] + 1;
      a2[7] = v2;
    }
    while ( *v26 );
  }
  else
  {
    v2 = a2[7];
    v18 = (int)(a2 + 6);
  }
  v12 = (char *)a2[6];
  v28 = 0;
  v27 = v2 + 1;
  v13 = a2[8];
  if ( &v28 >= (int *)v12 && &v28 < (int *)&v12[4 * v13] )
  {
    if ( v13 < v27 )
    {
      v12 = (char *)sub_80CF920(v18, v12, v27, 4u);
      a2[6] = v12;
      v2 = a2[7];
    }
    *(_DWORD *)&v12[4 * v2] = 0;
  }
  else
  {
    v14 = 0;
    if ( v13 < v27 )
    {
      v12 = (char *)sub_80CF920(v18, v12, v27, 4u);
      v14 = v28;
      a2[6] = v12;
      v2 = a2[7];
    }
    *(_DWORD *)&v12[4 * v2] = v14;
  }
  ++a2[7];
  a2[12] = 1;
  result = v30 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811B834: using guessed type int (__cdecl *off_811B834)(int);
// 811E3C8: using guessed type char *off_811E3C8[6];
