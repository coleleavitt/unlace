void __fastcall sub_7EF580(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  size_t na; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 88);
  v4 = a1[1];
  if ( v4 < a2 )
  {
    v5 = 88 * v4;
    do
    {
      while ( 1 )
      {
        v8 = v5 + *a1;
        *(_QWORD *)v8 = 0;
        *(_OWORD *)(v8 + 8) = 0;
        if ( *(_QWORD *)(a3 + 8) )
        {
          na = *(_QWORD *)(a3 + 8);
          v9 = (void *)qalloc_or_throw(na);
          *(_QWORD *)v8 = v9;
          *(_QWORD *)(v8 + 16) = na;
          memcpy(v9, *(const void **)a3, na);
          *(_QWORD *)(v8 + 8) = na;
        }
        v6 = *(_DWORD *)(a3 + 24);
        *(_QWORD *)(v8 + 32) = 0;
        *(_OWORD *)(v8 + 40) = 0;
        *(_DWORD *)(v8 + 24) = v6;
        if ( *(_QWORD *)(a3 + 40) )
        {
          n = *(_QWORD *)(a3 + 40);
          v11 = (void *)qalloc_or_throw(n);
          *(_QWORD *)(v8 + 32) = v11;
          *(_QWORD *)(v8 + 48) = n;
          memcpy(v11, *(const void **)(a3 + 32), n);
          *(_QWORD *)(v8 + 40) = n;
        }
        v7 = *(_DWORD *)(a3 + 56);
        *(_QWORD *)(v8 + 64) = 0;
        *(_OWORD *)(v8 + 72) = 0;
        *(_DWORD *)(v8 + 56) = v7;
        if ( *(_QWORD *)(a3 + 72) )
          break;
        ++v4;
        v5 += 88;
        if ( a2 == v4 )
          goto LABEL_12;
      }
      nb = *(_QWORD *)(a3 + 72);
      v10 = (void *)qalloc_or_throw(nb);
      *(_QWORD *)(v8 + 64) = v10;
      ++v4;
      v5 += 88;
      *(_QWORD *)(v8 + 80) = nb;
      memcpy(v10, *(const void **)(a3 + 64), nb);
      *(_QWORD *)(v8 + 72) = nb;
    }
    while ( a2 != v4 );
  }
LABEL_12:
  a1[1] = a2;
}
