void __fastcall sub_8CA8D0(const char **a1, const char *a2, __int64 a3)
{
  const char *v3; // r15
  const char *v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
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
        v7 = (__int64)&(*a1)[v6];
        *(_DWORD *)v7 = *(_DWORD *)a3;
        *(_BYTE *)(v7 + 4) = *(_BYTE *)(a3 + 4);
        v8 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(v7 + 16) = 0;
        *(_QWORD *)(v7 + 8) = v8;
        *(_OWORD *)(v7 + 24) = 0;
        if ( *(_QWORD *)(a3 + 24) )
        {
          na = *(_QWORD *)(a3 + 24);
          v9 = (void *)qalloc_or_throw(na, a2);
          *(_QWORD *)(v7 + 16) = v9;
          *(_QWORD *)(v7 + 32) = na;
          a2 = *(const char **)(a3 + 16);
          memcpy(v9, a2, na);
          *(_QWORD *)(v7 + 24) = na;
        }
        *(_QWORD *)(v7 + 40) = 0;
        *(_OWORD *)(v7 + 48) = 0;
        if ( *(_QWORD *)(a3 + 48) )
        {
          n = *(_QWORD *)(a3 + 48);
          v11 = (void *)qalloc_or_throw(n, a2);
          *(_QWORD *)(v7 + 40) = v11;
          *(_QWORD *)(v7 + 56) = n;
          a2 = *(const char **)(a3 + 40);
          memcpy(v11, a2, n);
          *(_QWORD *)(v7 + 48) = n;
        }
        *(_QWORD *)(v7 + 64) = 0;
        *(_OWORD *)(v7 + 72) = 0;
        if ( *(_QWORD *)(a3 + 72) )
          break;
        ++v5;
        v6 += 88;
        if ( v3 == v5 )
          goto LABEL_12;
      }
      nb = *(_QWORD *)(a3 + 72);
      v10 = (void *)qalloc_or_throw(nb, a2);
      *(_QWORD *)(v7 + 64) = v10;
      ++v5;
      v6 += 88;
      *(_QWORD *)(v7 + 80) = nb;
      a2 = *(const char **)(a3 + 64);
      memcpy(v10, a2, nb);
      *(_QWORD *)(v7 + 72) = nb;
    }
    while ( v3 != v5 );
  }
LABEL_12:
  a1[1] = v3;
}

