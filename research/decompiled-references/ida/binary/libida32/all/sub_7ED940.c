void __fastcall sub_7ED940(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r15
  const char *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  v3 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v3, 88);
  }
  v5 = a1[1];
  if ( v5 < v3 )
  {
    v6 = 88LL * (_QWORD)v5;
    do
    {
      v7 = (__int64)&(*a1)[v6];
      *(_QWORD *)v7 = 0;
      *(_OWORD *)(v7 + 8) = 0;
      if ( *(_QWORD *)(a3 + 8) )
      {
        nb = *(_QWORD *)(a3 + 8);
        v8 = (void *)qalloc_or_throw(nb, a2);
        *(_QWORD *)v7 = v8;
        *(_QWORD *)(v7 + 16) = nb;
        a2 = *(const char **)a3;
        memcpy(v8, *(const void **)a3, nb);
        *(_QWORD *)(v7 + 8) = nb;
      }
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 32) = 0;
      if ( *(_QWORD *)(a3 + 32) )
      {
        n = *(_QWORD *)(a3 + 32);
        v10 = (void *)qalloc_or_throw(n, a2);
        *(_QWORD *)(v7 + 24) = v10;
        *(_QWORD *)(v7 + 40) = n;
        a2 = *(const char **)(a3 + 24);
        memcpy(v10, a2, n);
        *(_QWORD *)(v7 + 32) = n;
      }
      *(_QWORD *)(v7 + 48) = 0;
      *(_OWORD *)(v7 + 56) = 0;
      if ( *(_QWORD *)(a3 + 56) )
      {
        na = *(_QWORD *)(a3 + 56);
        v9 = (void *)qalloc_or_throw(na, a2);
        *(_QWORD *)(v7 + 48) = v9;
        *(_QWORD *)(v7 + 64) = na;
        a2 = *(const char **)(a3 + 48);
        memcpy(v9, a2, na);
        *(_QWORD *)(v7 + 56) = na;
      }
      ++v5;
      v6 += 88;
      *(_QWORD *)(v7 + 72) = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(v7 + 80) = *(_QWORD *)(a3 + 80);
    }
    while ( v3 != v5 );
  }
  a1[1] = v3;
}

