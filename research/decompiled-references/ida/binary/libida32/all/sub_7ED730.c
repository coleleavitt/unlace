void *__fastcall sub_7ED730(__int64 a1, char *a2)
{
  char *v2; // r13
  void *result; // rax
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  size_t nb; // [rsp+8h] [rbp-40h]
  size_t na; // [rsp+8h] [rbp-40h]
  size_t n; // [rsp+8h] [rbp-40h]

  v2 = a2;
  result = sub_7ED200(a1, a2);
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v4 = *((_QWORD *)a2 + 20);
  if ( v4 )
  {
    v5 = qalloc_or_throw(88 * v4, a2);
    *(_QWORD *)(a1 + 152) = v5;
    v6 = v5;
    v7 = 0;
    *(_QWORD *)(a1 + 168) = v4;
    while ( 1 )
    {
      v8 = 88 * v7 + v6;
      v9 = *((_QWORD *)v2 + 19) + 88 * v7;
      *(_QWORD *)v8 = 0;
      *(_OWORD *)(v8 + 8) = 0;
      if ( *(_QWORD *)(v9 + 8) )
      {
        nb = *(_QWORD *)(v9 + 8);
        v10 = (void *)qalloc_or_throw(nb, a2);
        *(_QWORD *)v8 = v10;
        *(_QWORD *)(v8 + 16) = nb;
        a2 = *(char **)v9;
        memcpy(v10, *(const void **)v9, nb);
        *(_QWORD *)(v8 + 8) = nb;
      }
      *(_QWORD *)(v8 + 24) = 0;
      *(_OWORD *)(v8 + 32) = 0;
      if ( *(_QWORD *)(v9 + 32) )
      {
        n = *(_QWORD *)(v9 + 32);
        v12 = (void *)qalloc_or_throw(n, a2);
        *(_QWORD *)(v8 + 24) = v12;
        *(_QWORD *)(v8 + 40) = n;
        a2 = *(char **)(v9 + 24);
        memcpy(v12, a2, n);
        *(_QWORD *)(v8 + 32) = n;
      }
      *(_QWORD *)(v8 + 48) = 0;
      *(_OWORD *)(v8 + 56) = 0;
      if ( *(_QWORD *)(v9 + 56) )
      {
        na = *(_QWORD *)(v9 + 56);
        v11 = (void *)qalloc_or_throw(na, a2);
        *(_QWORD *)(v8 + 48) = v11;
        *(_QWORD *)(v8 + 64) = na;
        a2 = *(char **)(v9 + 48);
        memcpy(v11, a2, na);
        *(_QWORD *)(v8 + 56) = na;
      }
      ++v7;
      *(_QWORD *)(v8 + 72) = *(_QWORD *)(v9 + 72);
      result = *(void **)(v9 + 80);
      *(_QWORD *)(v8 + 80) = result;
      if ( v4 == v7 )
        break;
      v6 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)(a1 + 160) = v4;
  }
  return result;
}

