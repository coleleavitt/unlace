void __fastcall sub_7EEFF0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int128 v5; // xmm0
  int v6; // eax
  size_t v7; // r13
  __int64 v8; // rbx
  size_t v9; // r13
  void *v10; // rax
  void *v11; // rax

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 64);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v8 = *a1 + (v4 << 6);
        *(_QWORD *)v8 = 0;
        *(_OWORD *)(v8 + 8) = v5;
        v9 = *(_QWORD *)(a3 + 8);
        if ( v9 )
        {
          v10 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
          *(_QWORD *)(v8 + 16) = v9;
          *(_QWORD *)v8 = v10;
          memcpy(v10, *(const void **)a3, v9);
          *(_QWORD *)(v8 + 8) = v9;
          v5 = 0;
        }
        v6 = *(_DWORD *)(a3 + 24);
        *(_QWORD *)(v8 + 32) = 0;
        *(_OWORD *)(v8 + 40) = v5;
        *(_DWORD *)(v8 + 24) = v6;
        v7 = *(_QWORD *)(a3 + 40);
        if ( v7 )
          break;
        ++v4;
        *(_DWORD *)(v8 + 56) = *(_DWORD *)(a3 + 56);
        if ( a2 == v4 )
          goto LABEL_10;
      }
      v11 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 40));
      *(_QWORD *)(v8 + 32) = v11;
      ++v4;
      *(_QWORD *)(v8 + 48) = v7;
      memcpy(v11, *(const void **)(a3 + 32), v7);
      *(_QWORD *)(v8 + 40) = v7;
      v5 = 0;
      *(_DWORD *)(v8 + 56) = *(_DWORD *)(a3 + 56);
    }
    while ( a2 != v4 );
  }
LABEL_10:
  a1[1] = a2;
}
