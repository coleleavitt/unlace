void __fastcall sub_7CC3F0(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r15
  const char *v5; // r12
  __int64 v6; // r13
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  size_t na; // [rsp+8h] [rbp-40h]
  size_t nb; // [rsp+8h] [rbp-40h]
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
      while ( 1 )
      {
        v9 = (__int64)&(*a1)[v6];
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = 0;
        if ( *(_QWORD *)(a3 + 8) )
        {
          na = *(_QWORD *)(a3 + 8);
          v10 = (void *)qalloc_or_throw(na, a2);
          *(_QWORD *)v9 = v10;
          *(_QWORD *)(v9 + 16) = na;
          a2 = *(const char **)a3;
          memcpy(v10, *(const void **)a3, na);
          *(_QWORD *)(v9 + 8) = na;
        }
        v7 = *(_DWORD *)(a3 + 24);
        *(_QWORD *)(v9 + 32) = 0;
        *(_OWORD *)(v9 + 40) = 0;
        *(_DWORD *)(v9 + 24) = v7;
        if ( *(_QWORD *)(a3 + 40) )
        {
          n = *(_QWORD *)(a3 + 40);
          v12 = (void *)qalloc_or_throw(n, a2);
          *(_QWORD *)(v9 + 32) = v12;
          *(_QWORD *)(v9 + 48) = n;
          a2 = *(const char **)(a3 + 32);
          memcpy(v12, a2, n);
          *(_QWORD *)(v9 + 40) = n;
        }
        v8 = *(_DWORD *)(a3 + 56);
        *(_QWORD *)(v9 + 64) = 0;
        *(_OWORD *)(v9 + 72) = 0;
        *(_DWORD *)(v9 + 56) = v8;
        if ( *(_QWORD *)(a3 + 72) )
          break;
        ++v5;
        v6 += 88;
        if ( v3 == v5 )
          goto LABEL_12;
      }
      nb = *(_QWORD *)(a3 + 72);
      v11 = (void *)qalloc_or_throw(nb, a2);
      *(_QWORD *)(v9 + 64) = v11;
      ++v5;
      v6 += 88;
      *(_QWORD *)(v9 + 80) = nb;
      a2 = *(const char **)(a3 + 64);
      memcpy(v11, a2, nb);
      *(_QWORD *)(v9 + 72) = nb;
    }
    while ( v3 != v5 );
  }
LABEL_12:
  a1[1] = v3;
}

