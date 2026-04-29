void __fastcall sub_88870(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rcx
  const void *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  void *v13; // rax
  void *v14; // rax
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve((__int64)a1, *a1, a2, 104);
  v5 = a1[1];
  if ( v5 < a2 )
  {
    v6 = 104 * v5;
    do
    {
      v8 = (const void *)a3;
      v9 = v6 + *a1;
      *(_DWORD *)v9 = 0;
      copy_argloc();
      *(_QWORD *)(v9 + 16) = *(_QWORD *)(a3 + 16);
      v11 = *(_DWORD *)(a3 + 24);
      *(_QWORD *)(v9 + 32) = 0;
      *(_DWORD *)(v9 + 24) = v11;
      *(_OWORD *)(v9 + 40) = 0;
      v12 = *(_QWORD *)(a3 + 40);
      if ( v12 )
      {
        na = *(_QWORD *)(a3 + 40);
        v13 = (void *)qalloc_or_throw(na, a3, v10, v12);
        *(_QWORD *)(v9 + 32) = v13;
        *(_QWORD *)(v9 + 48) = na;
        v8 = *(const void **)(a3 + 32);
        memcpy(v13, v8, na);
        *(_QWORD *)(v9 + 40) = na;
      }
      *(_QWORD *)(v9 + 56) = 0;
      *(_OWORD *)(v9 + 64) = 0;
      v7 = *(_QWORD *)(a3 + 64);
      if ( v7 )
      {
        n = *(_QWORD *)(a3 + 64);
        v14 = (void *)qalloc_or_throw(n, (__int64)v8, v10, v7);
        *(_QWORD *)(v9 + 56) = v14;
        *(_QWORD *)(v9 + 72) = n;
        memcpy(v14, *(const void **)(a3 + 56), n);
        *(_QWORD *)(v9 + 64) = n;
      }
      *(_QWORD *)(v9 + 80) = 0;
      copy_tinfo_t();
      ++v5;
      v6 += 104;
      *(_QWORD *)(v9 + 88) = *(_QWORD *)(a3 + 88);
      *(_QWORD *)(v9 + 96) = *(_QWORD *)(a3 + 96);
    }
    while ( a2 != v5 );
  }
  a1[1] = a2;
}
