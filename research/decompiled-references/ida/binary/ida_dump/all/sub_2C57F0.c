void __fastcall sub_2C57F0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  size_t v7; // r15
  void *v8; // rax
  void *v9; // rax
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve();
  v4 = a1[1];
  if ( v4 < a2 )
  {
    do
    {
      v5 = *a1 + 96 * v4;
      *(_DWORD *)v5 = 0;
      copy_argloc();
      v6 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(v5 + 24) = 0;
      *(_OWORD *)(v5 + 32) = 0;
      *(_QWORD *)(v5 + 16) = v6;
      v7 = *(_QWORD *)(a3 + 32);
      if ( v7 )
      {
        v8 = (void *)qalloc_or_throw();
        *(_QWORD *)(v5 + 24) = v8;
        *(_QWORD *)(v5 + 40) = v7;
        memcpy(v8, *(const void **)(a3 + 24), v7);
        *(_QWORD *)(v5 + 32) = v7;
      }
      *(_QWORD *)(v5 + 48) = 0;
      copy_tinfo_t();
      *(_QWORD *)(v5 + 56) = 0;
      *(_OWORD *)(v5 + 64) = 0;
      if ( *(_QWORD *)(a3 + 64) )
      {
        n = *(_QWORD *)(a3 + 64);
        v9 = (void *)qalloc_or_throw();
        *(_QWORD *)(v5 + 56) = v9;
        *(_QWORD *)(v5 + 72) = n;
        memcpy(v9, *(const void **)(a3 + 56), n);
        *(_QWORD *)(v5 + 64) = n;
      }
      ++v4;
      *(_QWORD *)(v5 + 80) = *(_QWORD *)(a3 + 80);
      *(_DWORD *)(v5 + 88) = *(_DWORD *)(a3 + 88);
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}
