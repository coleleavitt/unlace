__int64 __fastcall sub_FBF210(__int64 a1)
{
  int v1; // r12d
  int v2; // ebp
  __int64 *v3; // rbx
  __int64 *v4; // rdx
  unsigned int v5; // r15d
  int v6; // r13d
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  _QWORD *v16; // rcx
  _QWORD *v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __m128i v20; // xmm1
  char *v21; // rsi
  __m128i v22; // xmm0
  __m128i v23; // xmm2
  __int64 *v25[8]; // [rsp+18h] [rbp-40h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 12);
  sub_F9A1A0(v25, *(__int64 **)a1, v1 == 0);
  v3 = v25[0];
  sub_F9A1A0(v25, (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8)), 1);
  if ( v25[0] == v3 )
  {
    v5 = 0;
    v6 = 0;
  }
  else
  {
    v4 = (__int64 *)*v3;
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = *v4;
        v4 = (__int64 *)v3[1];
        v6 += v7;
        if ( v5 < (unsigned int)v7 )
          v5 = v7;
        v8 = v3 + 1;
        if ( !v4 || v4 == (__int64 *)-8LL )
          break;
        ++v3;
        if ( v25[0] == v8 )
          goto LABEL_11;
      }
      v9 = v3 + 2;
      do
      {
        do
        {
          v4 = (__int64 *)*v9;
          v3 = v9++;
        }
        while ( v4 == (__int64 *)-8LL );
      }
      while ( !v4 );
    }
    while ( v25[0] != v3 );
  }
LABEL_11:
  fwrite("\n*** Identifier Table Stats:\n", 1u, 0x1Du, stderr);
  fprintf(stderr, "# Identifiers:   %d\n", v2);
  fprintf(stderr, "# Empty Buckets: %d\n", v1 - v2);
  fprintf(stderr, "Hash density (#identifiers per bucket): %f\n", (double)v2 / (double)v1);
  fprintf(stderr, "Ave identifier length: %f\n", (double)v6 / (double)v2);
  fprintf(stderr, "Max identifier length: %d\n", v5);
  v11 = *(_QWORD *)(a1 + 40);
  v12 = v11 + 8LL * *(unsigned int *)(a1 + 48);
  if ( v11 == v12 )
  {
    v14 = 0;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 40);
    v14 = 0;
    v10 = 0x40000000000LL;
    do
    {
      while ( 1 )
      {
        v15 = (unsigned int)((v13 - v11) >> 3) >> 7;
        if ( v15 <= 0x1D )
          break;
        v13 += 8;
        v14 += 0x40000000000LL;
        if ( v12 == v13 )
          goto LABEL_15;
      }
      v13 += 8;
      v14 += 4096LL << v15;
    }
    while ( v12 != v13 );
  }
LABEL_15:
  v16 = *(_QWORD **)(a1 + 88);
  v17 = &v16[2 * *(unsigned int *)(a1 + 96)];
  if ( v16 != v17 )
  {
    v18 = *(_QWORD *)(a1 + 88);
    v19 = 16LL * *(unsigned int *)(a1 + 96) - 16;
    v10 = v19 >> 4;
    if ( v19 > 0x40 )
    {
      v20 = 0;
      v21 = (char *)v16 + (v19 & 0xFFFFFFFFFFFFFFE0LL);
      do
      {
        v22 = _mm_loadu_si128((const __m128i *)(v18 + 8));
        v23 = _mm_loadu_si128((const __m128i *)(v18 + 24));
        v18 += 32;
        v20 = _mm_add_epi64(v20, _mm_unpacklo_epi64(v22, v23));
      }
      while ( (char *)v18 != v21 );
      v10 = 16 * (v10 & 0xFFFFFFFFFFFFFFFELL);
      v16 = (_QWORD *)((char *)v16 + v10);
      v14 += _mm_add_epi64(v20, _mm_srli_si128(v20, 8)).m128i_u64[0];
    }
    v14 += v16[1];
    if ( v17 != v16 + 2 )
    {
      v14 += v16[3];
      if ( v17 != v16 + 4 )
      {
        v14 += v16[5];
        if ( v17 != v16 + 6 )
        {
          v14 += v16[7];
          if ( v17 != v16 + 8 )
            v14 += v16[9];
        }
      }
    }
  }
  return sub_21EBB90(*(unsigned int *)(a1 + 48), *(_QWORD *)(a1 + 104), v14, v16, v17, v10);
}

