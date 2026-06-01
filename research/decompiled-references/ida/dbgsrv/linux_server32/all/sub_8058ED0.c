/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8058ED0
// Address: 0x08058ED0

//----- (08058ED0) --------------------------------------------------------
unsigned int __cdecl sub_8058ED0(int a1)
{
  void *v1; // eax
  void *v2; // eax
  char *v3; // ecx
  int v4; // ebp
  int i; // edi
  char *v6; // edx
  void *v7; // eax
  void *v8; // eax
  char *v9; // ecx
  int v10; // ebp
  int j; // edi
  char *v12; // edx
  void *v13; // eax
  void *v14; // eax
  int v15; // edi
  void *v16; // eax
  void *v17; // eax
  char *v18; // ecx
  int v19; // ebp
  int k; // edi
  char *v21; // edx
  void *v22; // eax
  int v23; // edi
  void *v24; // eax
  void *v25; // eax
  char *v26; // eax
  int v27; // edi
  int m; // ebp
  char *v29; // eax
  void *v30; // edx
  void *v31; // edx
  void *v32; // eax
  char *v33; // ebp
  int n; // edi
  char *v35; // ebp
  void *v36; // edx
  void *v37; // edx
  void *v38; // eax
  __m128i v39; // xmm0
  void *v40; // eax
  unsigned int v41; // ebp
  unsigned int v42; // edi
  void *v43; // eax
  void *v44; // eax
  char *v45; // ebp
  int ii; // edi
  char *v47; // ebp
  void *v48; // edx
  void *v49; // edx
  unsigned int result; // eax
  char *v51; // [esp+0h] [ebp-50h]
  int v52; // [esp+0h] [ebp-50h]
  int v53; // [esp+0h] [ebp-50h]
  __m128i v54; // [esp+4h] [ebp-4Ch] BYREF
  __m128i v55; // [esp+14h] [ebp-3Ch] BYREF
  unsigned int v56; // [esp+30h] [ebp-20h]

  v56 = __readgsdword(0x14u);
  *(_DWORD *)a1 = &off_811CAC4;
  sub_80A08F0((int *)a1);
  v1 = *(void **)(a1 + 436);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 440) = 0;
    sub_80CF780(v1);
  }
  v2 = *(void **)(a1 + 424);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 428) = 0;
    sub_80CF780(v2);
  }
  v3 = *(char **)(a1 + 380);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 384);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[12 * i];
        v7 = *(void **)v6;
        if ( *(_DWORD *)v6 )
        {
          *((_DWORD *)v6 + 1) = 0;
          sub_80CF780(v7);
          v3 = *(char **)(a1 + 380);
        }
      }
    }
    *(_DWORD *)(a1 + 384) = 0;
    sub_80CF780(v3);
  }
  v8 = *(void **)(a1 + 368);
  if ( v8 )
  {
    *(_DWORD *)(a1 + 372) = 0;
    sub_80CF780(v8);
  }
  v9 = *(char **)(a1 + 356);
  if ( v9 )
  {
    v10 = *(_DWORD *)(a1 + 360);
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = &v9[12 * j];
        v13 = *(void **)v12;
        if ( *(_DWORD *)v12 )
        {
          *((_DWORD *)v12 + 1) = 0;
          sub_80CF780(v13);
          v9 = *(char **)(a1 + 356);
        }
      }
    }
    *(_DWORD *)(a1 + 360) = 0;
    sub_80CF780(v9);
  }
  v14 = *(void **)(a1 + 344);
  if ( v14 )
  {
    *(_DWORD *)(a1 + 348) = 0;
    sub_80CF780(v14);
  }
  v15 = *(_DWORD *)(a1 + 320);
  while ( v15 )
  {
    sub_8056500(*(_DWORD **)(v15 + 12));
    v16 = (void *)v15;
    v15 = *(_DWORD *)(v15 + 8);
    operator delete(v16, 0x34u);
  }
  v17 = *(void **)(a1 + 300);
  if ( v17 )
  {
    *(_DWORD *)(a1 + 304) = 0;
    sub_80CF780(v17);
  }
  v18 = *(char **)(a1 + 288);
  if ( v18 )
  {
    v19 = *(_DWORD *)(a1 + 292);
    if ( v19 )
    {
      for ( k = 0; k != v19; ++k )
      {
        v21 = &v18[36 * k];
        v22 = *((void **)v21 + 1);
        if ( v22 )
        {
          *((_DWORD *)v21 + 2) = 0;
          sub_80CF780(v22);
          v18 = *(char **)(a1 + 288);
        }
      }
    }
    *(_DWORD *)(a1 + 292) = 0;
    sub_80CF780(v18);
  }
  v23 = *(_DWORD *)(a1 + 272);
  while ( v23 )
  {
    sub_80566C0(*(_DWORD **)(v23 + 12));
    v24 = (void *)v23;
    v23 = *(_DWORD *)(v23 + 8);
    operator delete(v24, 0x28u);
  }
  v25 = *(void **)(a1 + 252);
  if ( v25 )
  {
    *(_DWORD *)(a1 + 256) = 0;
    sub_80CF780(v25);
  }
  v26 = *(char **)(a1 + 236);
  if ( v26 )
  {
    v27 = *(_DWORD *)(a1 + 240);
    if ( v27 )
    {
      for ( m = 0; m != v27; ++m )
      {
        v29 = &v26[40 * m];
        v30 = *((void **)v29 + 5);
        if ( v30 )
        {
          v51 = v29;
          *((_DWORD *)v29 + 6) = 0;
          sub_80CF780(v30);
          v29 = v51;
        }
        v31 = *((void **)v29 + 2);
        if ( v31 )
        {
          *((_DWORD *)v29 + 3) = 0;
          sub_80CF780(v31);
        }
        v26 = *(char **)(a1 + 236);
      }
    }
    *(_DWORD *)(a1 + 240) = 0;
    sub_80CF780(v26);
  }
  v32 = *(void **)(a1 + 224);
  if ( v32 )
  {
    *(_DWORD *)(a1 + 228) = 0;
    sub_80CF780(v32);
  }
  sub_80554B0(*(_DWORD **)(a1 + 208));
  sub_8055730(*(_DWORD **)(a1 + 184));
  v33 = *(char **)(a1 + 164);
  if ( v33 )
  {
    v52 = *(_DWORD *)(a1 + 168);
    if ( v52 )
    {
      for ( n = 0; n != v52; ++n )
      {
        v35 = &v33[32 * n];
        v36 = *((void **)v35 + 5);
        if ( v36 )
        {
          *((_DWORD *)v35 + 6) = 0;
          sub_80CF780(v36);
        }
        v37 = *((void **)v35 + 1);
        if ( v37 )
        {
          *((_DWORD *)v35 + 2) = 0;
          sub_80CF780(v37);
        }
        v33 = *(char **)(a1 + 164);
      }
    }
    *(_DWORD *)(a1 + 168) = 0;
    sub_80CF780(v33);
  }
  v38 = *(void **)(a1 + 148);
  if ( v38 )
  {
    *(_DWORD *)(a1 + 152) = 0;
    sub_80CF780(v38);
  }
  sub_80C6090((_DWORD *)(a1 + 96));
  v39 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v54 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v55 = v39;
  sub_80552C0(&v55, &v54);
  v40 = *(void **)(a1 + 56);
  if ( v40 )
  {
    v41 = *(_DWORD *)(a1 + 76);
    v42 = *(_DWORD *)(a1 + 92) + 4;
    if ( v41 < v42 )
    {
      do
      {
        v41 += 4;
        operator delete(*(void **)(v41 - 4), 0x1E4u);
      }
      while ( v41 < v42 );
      v40 = *(void **)(a1 + 56);
    }
    operator delete(v40, 4 * *(_DWORD *)(a1 + 60));
  }
  v43 = *(void **)(a1 + 44);
  if ( v43 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    sub_80CF780(v43);
  }
  v44 = *(void **)(a1 + 32);
  if ( v44 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_80CF780(v44);
  }
  v45 = *(char **)(a1 + 20);
  if ( v45 )
  {
    v53 = *(_DWORD *)(a1 + 24);
    if ( v53 )
    {
      for ( ii = 0; ii != v53; ++ii )
      {
        v47 = &v45[32 * ii];
        v48 = *((void **)v47 + 5);
        if ( v48 )
        {
          *((_DWORD *)v47 + 6) = 0;
          sub_80CF780(v48);
        }
        v49 = *((void **)v47 + 2);
        if ( v49 )
        {
          *((_DWORD *)v47 + 3) = 0;
          sub_80CF780(v49);
        }
        v45 = *(char **)(a1 + 20);
      }
    }
    *(_DWORD *)(a1 + 24) = 0;
    sub_80CF780(v45);
  }
  result = v56 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811CAC4: using guessed type int (__cdecl *off_811CAC4)(int, int);
