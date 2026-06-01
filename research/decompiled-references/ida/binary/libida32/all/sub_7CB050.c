void __fastcall sub_7CB050(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r15
  const char *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // rbx
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  size_t nd; // [rsp+8h] [rbp-40h]
  size_t nc; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  v3 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v3, 280);
  }
  v5 = a1[1];
  if ( v5 < v3 )
  {
    v6 = 280LL * (_QWORD)v5;
    do
    {
      v10 = (__int64)&(*a1)[v6];
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      if ( *(_QWORD *)(a3 + 8) )
      {
        nd = *(_QWORD *)(a3 + 8);
        v11 = (void *)qalloc_or_throw(nd, a2);
        *(_QWORD *)v10 = v11;
        *(_QWORD *)(v10 + 16) = nd;
        a2 = *(const char **)a3;
        memcpy(v11, *(const void **)a3, nd);
        *(_QWORD *)(v10 + 8) = nd;
      }
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 32) = 0;
      if ( *(_QWORD *)(a3 + 32) )
      {
        n = *(_QWORD *)(a3 + 32);
        v15 = (void *)qalloc_or_throw(n, a2);
        *(_QWORD *)(v10 + 24) = v15;
        *(_QWORD *)(v10 + 40) = n;
        a2 = *(const char **)(a3 + 24);
        memcpy(v15, a2, n);
        *(_QWORD *)(v10 + 32) = n;
      }
      *(_QWORD *)(v10 + 48) = 0;
      *(_OWORD *)(v10 + 56) = 0;
      if ( *(_QWORD *)(a3 + 56) )
      {
        na = *(_QWORD *)(a3 + 56);
        v14 = (void *)qalloc_or_throw(na, a2);
        *(_QWORD *)(v10 + 48) = v14;
        *(_QWORD *)(v10 + 64) = na;
        a2 = *(const char **)(a3 + 48);
        memcpy(v14, a2, na);
        *(_QWORD *)(v10 + 56) = na;
      }
      *(_QWORD *)(v10 + 72) = 0;
      *(_OWORD *)(v10 + 80) = 0;
      if ( *(_QWORD *)(a3 + 80) )
      {
        nb = *(_QWORD *)(a3 + 80);
        v13 = (void *)qalloc_or_throw(nb, a2);
        *(_QWORD *)(v10 + 72) = v13;
        *(_QWORD *)(v10 + 88) = nb;
        a2 = *(const char **)(a3 + 72);
        memcpy(v13, a2, nb);
        *(_QWORD *)(v10 + 80) = nb;
      }
      *(_QWORD *)(v10 + 96) = 0;
      *(_OWORD *)(v10 + 104) = 0;
      if ( *(_QWORD *)(a3 + 104) )
      {
        nc = *(_QWORD *)(a3 + 104);
        v12 = (void *)qalloc_or_throw(nc, a2);
        *(_QWORD *)(v10 + 96) = v12;
        *(_QWORD *)(v10 + 112) = nc;
        a2 = *(const char **)(a3 + 96);
        memcpy(v12, a2, nc);
        *(_QWORD *)(v10 + 104) = nc;
      }
      v7 = *(_QWORD *)(a3 + 120);
      ++v5;
      v6 += 280;
      *(__m128i *)(v10 + 128) = _mm_loadu_si128((const __m128i *)(a3 + 128));
      v8 = _mm_loadu_si128((const __m128i *)(a3 + 144));
      *(_QWORD *)(v10 + 120) = v7;
      LODWORD(v7) = *(_DWORD *)(a3 + 272);
      *(__m128i *)(v10 + 144) = v8;
      v9 = _mm_loadu_si128((const __m128i *)(a3 + 160));
      *(_DWORD *)(v10 + 272) = v7;
      *(__m128i *)(v10 + 160) = v9;
      *(__m128i *)(v10 + 176) = _mm_loadu_si128((const __m128i *)(a3 + 176));
      *(__m128i *)(v10 + 192) = _mm_loadu_si128((const __m128i *)(a3 + 192));
      *(__m128i *)(v10 + 208) = _mm_loadu_si128((const __m128i *)(a3 + 208));
      *(__m128i *)(v10 + 224) = _mm_loadu_si128((const __m128i *)(a3 + 224));
      *(__m128i *)(v10 + 240) = _mm_loadu_si128((const __m128i *)(a3 + 240));
      *(__m128i *)(v10 + 256) = _mm_loadu_si128((const __m128i *)(a3 + 256));
    }
    while ( v3 != v5 );
  }
  a1[1] = v3;
}

