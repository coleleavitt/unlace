void __fastcall sub_7EE390(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  size_t nd; // [rsp+8h] [rbp-40h]
  size_t nc; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 416);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 416 * v4;
    do
    {
      v7 = v5 + *a1;
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      if ( *(_QWORD *)(a3 + 8) )
      {
        nd = *(_QWORD *)(a3 + 8);
        v8 = (void *)qalloc_or_throw(nd);
        *(_QWORD *)v7 = v8;
        *(_QWORD *)(v7 + 16) = nd;
        memcpy(v8, *(const void **)a3, nd);
        *(_QWORD *)(v7 + 8) = nd;
      }
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 32) = 0;
      if ( *(_QWORD *)(a3 + 32) )
      {
        n = *(_QWORD *)(a3 + 32);
        v12 = (void *)qalloc_or_throw(n);
        *(_QWORD *)(v7 + 24) = v12;
        *(_QWORD *)(v7 + 40) = n;
        memcpy(v12, *(const void **)(a3 + 24), n);
        *(_QWORD *)(v7 + 32) = n;
      }
      *(_QWORD *)(v7 + 48) = 0;
      *(_OWORD *)(v7 + 56) = 0;
      if ( *(_QWORD *)(a3 + 56) )
      {
        na = *(_QWORD *)(a3 + 56);
        v11 = (void *)qalloc_or_throw(na);
        *(_QWORD *)(v7 + 48) = v11;
        *(_QWORD *)(v7 + 64) = na;
        memcpy(v11, *(const void **)(a3 + 48), na);
        *(_QWORD *)(v7 + 56) = na;
      }
      *(_QWORD *)(v7 + 72) = 0;
      *(_OWORD *)(v7 + 80) = 0;
      if ( *(_QWORD *)(a3 + 80) )
      {
        nb = *(_QWORD *)(a3 + 80);
        v10 = (void *)qalloc_or_throw(nb);
        *(_QWORD *)(v7 + 72) = v10;
        *(_QWORD *)(v7 + 88) = nb;
        memcpy(v10, *(const void **)(a3 + 72), nb);
        *(_QWORD *)(v7 + 80) = nb;
      }
      *(_QWORD *)(v7 + 96) = 0;
      *(_OWORD *)(v7 + 104) = 0;
      if ( *(_QWORD *)(a3 + 104) )
      {
        nc = *(_QWORD *)(a3 + 104);
        v9 = (void *)qalloc_or_throw(nc);
        *(_QWORD *)(v7 + 96) = v9;
        *(_QWORD *)(v7 + 112) = nc;
        memcpy(v9, *(const void **)(a3 + 96), nc);
        *(_QWORD *)(v7 + 104) = nc;
      }
      ++v4;
      v5 += 416;
      *(_QWORD *)(v7 + 120) = *(_QWORD *)(a3 + 120);
      v6 = *(_QWORD *)(a3 + 408);
      qmemcpy((void *)(v7 + 128), (const void *)(a3 + 128), 0x118u);
      *(_QWORD *)(v7 + 408) = v6;
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}
