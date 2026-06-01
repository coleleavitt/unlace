void __fastcall sub_529940(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  size_t v6; // r15
  const void *v7; // rsi
  __int64 v8; // rbx
  size_t v9; // r15
  void *v10; // rax
  void *v11; // rax

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 80);
  v5 = a1[1];
  if ( v5 < a2 )
  {
    do
    {
      v7 = (const void *)a3;
      v8 = *a1 + 80 * v5;
      *(_DWORD *)v8 = 0;
      copy_argloc(v8, a3);
      *(_QWORD *)(v8 + 16) = 0;
      *(_OWORD *)(v8 + 24) = 0;
      v9 = *(_QWORD *)(a3 + 24);
      if ( v9 )
      {
        v10 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 24), (const char *)a3);
        *(_QWORD *)(v8 + 16) = v10;
        *(_QWORD *)(v8 + 32) = v9;
        v7 = *(const void **)(a3 + 16);
        memcpy(v10, v7, v9);
        *(_QWORD *)(v8 + 24) = v9;
      }
      *(_QWORD *)(v8 + 40) = 0;
      *(_OWORD *)(v8 + 48) = 0;
      v6 = *(_QWORD *)(a3 + 48);
      if ( v6 )
      {
        v11 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 48), (const char *)v7);
        *(_QWORD *)(v8 + 40) = v11;
        *(_QWORD *)(v8 + 56) = v6;
        memcpy(v11, *(const void **)(a3 + 40), v6);
        *(_QWORD *)(v8 + 48) = v6;
      }
      *(_QWORD *)(v8 + 64) = 0;
      copy_tinfo_t(v8 + 64);
      ++v5;
      *(_DWORD *)(v8 + 72) = *(_DWORD *)(a3 + 72);
    }
    while ( a2 != v5 );
  }
  a1[1] = a2;
}

