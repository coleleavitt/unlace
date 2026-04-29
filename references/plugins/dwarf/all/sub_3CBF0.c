void __fastcall sub_3CBF0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  size_t v5; // r15
  __int64 v6; // rbx
  size_t v7; // r15
  void *v8; // rax
  void *v9; // rax

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 80);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    do
    {
      v6 = *a1 + 80 * v4;
      *(_DWORD *)v6 = 0;
      copy_argloc(v6, a3);
      *(_QWORD *)(v6 + 16) = 0;
      *(_OWORD *)(v6 + 24) = 0;
      v7 = *(_QWORD *)(a3 + 24);
      if ( v7 )
      {
        v8 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 24));
        *(_QWORD *)(v6 + 16) = v8;
        *(_QWORD *)(v6 + 32) = v7;
        memcpy(v8, *(const void **)(a3 + 16), v7);
        *(_QWORD *)(v6 + 24) = v7;
      }
      *(_QWORD *)(v6 + 40) = 0;
      *(_OWORD *)(v6 + 48) = 0;
      v5 = *(_QWORD *)(a3 + 48);
      if ( v5 )
      {
        v9 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 48));
        *(_QWORD *)(v6 + 40) = v9;
        *(_QWORD *)(v6 + 56) = v5;
        memcpy(v9, *(const void **)(a3 + 40), v5);
        *(_QWORD *)(v6 + 48) = v5;
      }
      *(_QWORD *)(v6 + 64) = 0;
      copy_tinfo_t(v6 + 64, a3 + 64);
      ++v4;
      *(_DWORD *)(v6 + 72) = *(_DWORD *)(a3 + 72);
    }
    while ( a2 != v4 );
  }
  a1[1] = a2;
}
