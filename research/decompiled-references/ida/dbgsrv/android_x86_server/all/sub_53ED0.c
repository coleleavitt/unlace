/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53ED0
// Address: 0x00053ED0

//----- (00053ED0) --------------------------------------------------------
int __cdecl sub_53ED0(int a1, _DWORD *a2, int a3)
{
  int v3; // ecx
  int v4; // edi
  _DWORD *v5; // esi
  const char *v6; // eax
  int v7; // eax
  const char *v8; // eax
  int v9; // eax
  size_t v10; // edi
  int v11; // esi
  size_t v12; // ecx
  size_t v13; // esi
  size_t v14; // edi
  _BYTE *v15; // eax
  int v16; // edi
  size_t v17; // edx
  _BYTE *v18; // eax
  size_t v19; // esi
  unsigned int v20; // edi
  char *v21; // eax
  int v22; // esi
  size_t v23; // edi
  int v25; // ecx
  int v26; // edi
  const char *v27; // [esp+4h] [ebp-48h]
  _BYTE *v28; // [esp+4h] [ebp-48h]
  size_t v29; // [esp+4h] [ebp-48h]
  __int128 v30; // [esp+10h] [ebp-3Ch] BYREF
  int v31; // [esp+20h] [ebp-2Ch] BYREF
  size_t v32; // [esp+24h] [ebp-28h]
  size_t v33; // [esp+28h] [ebp-24h]
  _DWORD v34[7]; // [esp+30h] [ebp-1Ch] BYREF

  v3 = a1;
  v34[2] = __readgsdword(0x14u);
  v4 = *(_DWORD *)(a1 + 4);
  if ( !v4 )
    goto LABEL_15;
  v27 = byte_EF875;
  if ( *(_DWORD *)(a3 + 4) )
    v27 = *(const char **)a3;
  v5 = (_DWORD *)(a1 + 4);
  do
  {
    v6 = byte_EF875;
    if ( *(_DWORD *)(v4 + 20) )
      v6 = *(const char **)(v4 + 16);
    v7 = strcmp(v6, v27);
    if ( v7 >= 0 )
      v5 = (_DWORD *)v4;
    v4 = *(_DWORD *)(v4 + 4 * ((unsigned int)v7 >> 31));
  }
  while ( v4 );
  v3 = a1;
  if ( v5 != (_DWORD *)(a1 + 4)
    && (!v5[5] ? (v8 = byte_EF875) : (v8 = (const char *)v5[4]), v9 = strcmp(v27, v8), v3 = a1, v9 >= 0) )
  {
    v25 = v5[7];
    v26 = *(_DWORD *)(*a2 + 4 * v25);
    v22 = -1;
    if ( !*(_DWORD *)(v26 + 68) )
    {
      v22 = v25;
      sub_53050(*(_DWORD **)(*a2 + 4 * v25));
      *(_DWORD *)(v26 + 68) = -1;
    }
  }
  else
  {
LABEL_15:
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v10 = *(_DWORD *)(v3 + 24);
    if ( v10 )
    {
      v11 = v3;
      v31 = (int)qalloc_or_throw(*(_DWORD *)(v3 + 24));
      v33 = v10;
      v28 = (_BYTE *)v31;
      memcpy((void *)v31, *(const void **)(v11 + 20), v10);
      v32 = v10;
      v12 = v10 - 1;
    }
    else
    {
      v28 = nullptr;
      v12 = 0;
    }
    v13 = v12 + 2;
    if ( v10 >= v12 + 2 )
    {
      v15 = v28;
    }
    else
    {
      v14 = v12;
      v15 = qvector_reserve((int)&v31, v28, v12 + 2, 1u);
      v31 = (int)v15;
      v12 = v14;
    }
    v32 = v13;
    v15[v12] = 46;
    *(_BYTE *)(v31 + v12 + 1) = 0;
    v16 = *(_DWORD *)(a3 + 4);
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v16 != 1 )
      {
        v18 = (_BYTE *)v31;
        v19 = v32 - 1;
        if ( !v32 )
          v19 = 0;
        v20 = v19 + v16;
        if ( v33 < v20 )
        {
          v29 = v17;
          v18 = qvector_reserve((int)&v31, (void *)v31, v20, 1u);
          v31 = (int)v18;
          v17 = v29;
        }
        v32 = v20;
        v18[v19 + v17] = 0;
        memcpy((void *)(v31 + v19), *(const void **)a3, v17);
      }
    }
    if ( v32 )
      v21 = (char *)v31;
    else
      v21 = byte_EF875;
    v22 = sub_52EA0(a2, v21);
    *(_QWORD *)&v30 = 0;
    DWORD2(v30) = 0;
    v23 = *(_DWORD *)(a3 + 4);
    if ( v23 )
    {
      *(_QWORD *)&v30 = __PAIR64__(v23, (unsigned int)qalloc_or_throw(*(_DWORD *)(a3 + 4)));
      DWORD2(v30) = v23;
      memcpy((void *)v30, *(const void **)a3, v23);
    }
    HIDWORD(v30) = v22;
    sub_56B90((int)v34, (int **)a1, (int)&v30, &v30);
    if ( (_DWORD)v30 )
    {
      DWORD1(v30) = 0;
      qfree((void *)v30);
      LODWORD(v30) = 0;
      DWORD2(v30) = 0;
    }
    if ( v31 )
    {
      v32 = 0;
      qfree((void *)v31);
      v31 = 0;
      v33 = 0;
    }
  }
  return v22;
}
