void __fastcall sub_86B10(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int128 v5; // xmm0
  size_t v6; // r14
  __int64 v7; // rbx
  size_t v8; // r14
  void *v9; // rax
  void *v10; // rax

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 48);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v7 = *a1 + 48 * v4;
        *(_QWORD *)v7 = 0;
        *(_OWORD *)(v7 + 8) = v5;
        v8 = *(_QWORD *)(a3 + 8);
        if ( v8 )
        {
          v9 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
          *(_QWORD *)(v7 + 16) = v8;
          *(_QWORD *)v7 = v9;
          memcpy(v9, *(const void **)a3, v8);
          *(_QWORD *)(v7 + 8) = v8;
          v5 = 0;
        }
        *(_QWORD *)(v7 + 24) = 0;
        *(_OWORD *)(v7 + 32) = v5;
        v6 = *(_QWORD *)(a3 + 32);
        if ( v6 )
          break;
        if ( a2 == ++v4 )
          goto LABEL_10;
      }
      v10 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 32));
      *(_QWORD *)(v7 + 24) = v10;
      ++v4;
      *(_QWORD *)(v7 + 40) = v6;
      memcpy(v10, *(const void **)(a3 + 24), v6);
      *(_QWORD *)(v7 + 32) = v6;
      v5 = 0;
    }
    while ( a2 != v4 );
  }
LABEL_10:
  a1[1] = a2;
}
