void __fastcall sub_7EFD00(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  size_t nd; // [rsp+8h] [rbp-40h]
  size_t nc; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 168);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 168 * v4;
    do
    {
      v9 = v5 + *a1;
      *(_QWORD *)v9 = 0;
      *(_OWORD *)(v9 + 8) = 0;
      if ( *(_QWORD *)(a3 + 8) )
      {
        nd = *(_QWORD *)(a3 + 8);
        v10 = (void *)qalloc_or_throw(nd);
        *(_QWORD *)v9 = v10;
        *(_QWORD *)(v9 + 16) = nd;
        memcpy(v10, *(const void **)a3, nd);
        *(_QWORD *)(v9 + 8) = nd;
      }
      v6 = *(_DWORD *)(a3 + 24);
      *(_QWORD *)(v9 + 32) = 0;
      *(_OWORD *)(v9 + 40) = 0;
      *(_DWORD *)(v9 + 24) = v6;
      if ( *(_QWORD *)(a3 + 40) )
      {
        n = *(_QWORD *)(a3 + 40);
        v14 = (void *)qalloc_or_throw(n);
        *(_QWORD *)(v9 + 32) = v14;
        *(_QWORD *)(v9 + 48) = n;
        memcpy(v14, *(const void **)(a3 + 32), n);
        *(_QWORD *)(v9 + 40) = n;
      }
      v7 = *(_DWORD *)(a3 + 56);
      *(_QWORD *)(v9 + 64) = 0;
      *(_OWORD *)(v9 + 72) = 0;
      *(_DWORD *)(v9 + 56) = v7;
      if ( *(_QWORD *)(a3 + 72) )
      {
        na = *(_QWORD *)(a3 + 72);
        v13 = (void *)qalloc_or_throw(na);
        *(_QWORD *)(v9 + 64) = v13;
        *(_QWORD *)(v9 + 80) = na;
        memcpy(v13, *(const void **)(a3 + 64), na);
        *(_QWORD *)(v9 + 72) = na;
      }
      v8 = *(_DWORD *)(a3 + 88);
      *(_QWORD *)(v9 + 96) = 0;
      *(_OWORD *)(v9 + 104) = 0;
      *(_DWORD *)(v9 + 88) = v8;
      if ( *(_QWORD *)(a3 + 104) )
      {
        nb = *(_QWORD *)(a3 + 104);
        v12 = (void *)qalloc_or_throw(nb);
        *(_QWORD *)(v9 + 96) = v12;
        *(_QWORD *)(v9 + 112) = nb;
        memcpy(v12, *(const void **)(a3 + 96), nb);
        *(_QWORD *)(v9 + 104) = nb;
      }
      *(_QWORD *)(v9 + 120) = 0;
      *(_OWORD *)(v9 + 128) = 0;
      if ( *(_QWORD *)(a3 + 128) )
      {
        nc = *(_QWORD *)(a3 + 128);
        v11 = (void *)qalloc_or_throw(nc);
        *(_QWORD *)(v9 + 120) = v11;
        *(_QWORD *)(v9 + 136) = nc;
        memcpy(v11, *(const void **)(a3 + 120), nc);
        *(_QWORD *)(v9 + 128) = nc;
      }
      ++v4;
      v5 += 168;
      *(__m128i *)(v9 + 144) = _mm_loadu_si128((const __m128i *)(a3 + 144));
      *(_QWORD *)(v9 + 160) = *(_QWORD *)(a3 + 160);
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}
