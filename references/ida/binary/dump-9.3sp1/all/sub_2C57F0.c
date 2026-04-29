void __fastcall sub_2C57F0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  size_t v11; // r15
  void *v12; // rax
  void *v13; // rax
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve((__int64)a1, *a1, a2, 96);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    do
    {
      v7 = *a1 + 96 * v4;
      *(_DWORD *)v7 = 0;
      copy_argloc();
      v10 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 32) = 0;
      *(_QWORD *)(v7 + 16) = v10;
      v11 = *(_QWORD *)(a3 + 32);
      if ( v11 )
      {
        v12 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 32), a3, v8, v9);
        *(_QWORD *)(v7 + 24) = v12;
        *(_QWORD *)(v7 + 40) = v11;
        memcpy(v12, *(const void **)(a3 + 24), v11);
        *(_QWORD *)(v7 + 32) = v11;
      }
      *(_QWORD *)(v7 + 48) = 0;
      copy_tinfo_t();
      *(_QWORD *)(v7 + 56) = 0;
      *(_OWORD *)(v7 + 64) = 0;
      v6 = *(_QWORD *)(a3 + 64);
      if ( v6 )
      {
        n = *(_QWORD *)(a3 + 64);
        v13 = (void *)qalloc_or_throw(n, a3 + 48, v5, v6);
        *(_QWORD *)(v7 + 56) = v13;
        *(_QWORD *)(v7 + 72) = n;
        memcpy(v13, *(const void **)(a3 + 56), n);
        *(_QWORD *)(v7 + 64) = n;
      }
      ++v4;
      *(_QWORD *)(v7 + 80) = *(_QWORD *)(a3 + 80);
      *(_DWORD *)(v7 + 88) = *(_DWORD *)(a3 + 88);
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}
