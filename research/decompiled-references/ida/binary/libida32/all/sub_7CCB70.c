void __fastcall sub_7CCB70(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r15
  const char *v5; // r12
  __int64 v6; // r13
  int v7; // eax
  int v8; // eax
  int v9; // eax
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
    *a1 = (const char *)qvector_reserve(a1, *a1, v3, 168);
  }
  v5 = a1[1];
  if ( v5 < v3 )
  {
    v6 = 168LL * (_QWORD)v5;
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
      v7 = *(_DWORD *)(a3 + 24);
      *(_QWORD *)(v10 + 32) = 0;
      *(_OWORD *)(v10 + 40) = 0;
      *(_DWORD *)(v10 + 24) = v7;
      if ( *(_QWORD *)(a3 + 40) )
      {
        n = *(_QWORD *)(a3 + 40);
        v15 = (void *)qalloc_or_throw(n, a2);
        *(_QWORD *)(v10 + 32) = v15;
        *(_QWORD *)(v10 + 48) = n;
        a2 = *(const char **)(a3 + 32);
        memcpy(v15, a2, n);
        *(_QWORD *)(v10 + 40) = n;
      }
      v8 = *(_DWORD *)(a3 + 56);
      *(_QWORD *)(v10 + 64) = 0;
      *(_OWORD *)(v10 + 72) = 0;
      *(_DWORD *)(v10 + 56) = v8;
      if ( *(_QWORD *)(a3 + 72) )
      {
        na = *(_QWORD *)(a3 + 72);
        v14 = (void *)qalloc_or_throw(na, a2);
        *(_QWORD *)(v10 + 64) = v14;
        *(_QWORD *)(v10 + 80) = na;
        a2 = *(const char **)(a3 + 64);
        memcpy(v14, a2, na);
        *(_QWORD *)(v10 + 72) = na;
      }
      v9 = *(_DWORD *)(a3 + 88);
      *(_QWORD *)(v10 + 96) = 0;
      *(_OWORD *)(v10 + 104) = 0;
      *(_DWORD *)(v10 + 88) = v9;
      if ( *(_QWORD *)(a3 + 104) )
      {
        nb = *(_QWORD *)(a3 + 104);
        v13 = (void *)qalloc_or_throw(nb, a2);
        *(_QWORD *)(v10 + 96) = v13;
        *(_QWORD *)(v10 + 112) = nb;
        a2 = *(const char **)(a3 + 96);
        memcpy(v13, a2, nb);
        *(_QWORD *)(v10 + 104) = nb;
      }
      *(_QWORD *)(v10 + 120) = 0;
      *(_OWORD *)(v10 + 128) = 0;
      if ( *(_QWORD *)(a3 + 128) )
      {
        nc = *(_QWORD *)(a3 + 128);
        v12 = (void *)qalloc_or_throw(nc, a2);
        *(_QWORD *)(v10 + 120) = v12;
        *(_QWORD *)(v10 + 136) = nc;
        a2 = *(const char **)(a3 + 120);
        memcpy(v12, a2, nc);
        *(_QWORD *)(v10 + 128) = nc;
      }
      ++v5;
      v6 += 168;
      *(__m128i *)(v10 + 144) = _mm_loadu_si128((const __m128i *)(a3 + 144));
      *(_QWORD *)(v10 + 160) = *(_QWORD *)(a3 + 160);
    }
    while ( v3 != v5 );
  }
  a1[1] = v3;
}

