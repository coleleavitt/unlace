void *__fastcall sub_8898F0(__int64 a1, const char *a2, _QWORD *a3, size_t *a4)
{
  const char *v4; // rbx
  size_t v5; // rbp
  size_t v6; // rbp
  void *result; // rax
  size_t v8; // rbx
  void *v9; // rax
  void *v10; // rax
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r12
  char *v15; // rbp
  const char *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r13
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  char *v28; // [rsp+0h] [rbp-68h]
  size_t nb; // [rsp+10h] [rbp-58h]
  size_t na; // [rsp+10h] [rbp-58h]
  size_t n; // [rsp+10h] [rbp-58h]
  const char *v33; // [rsp+20h] [rbp-48h]

  v4 = a2;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *((_QWORD *)a2 + 1);
  if ( v5 )
  {
    v9 = (void *)qalloc_or_throw(v5, a2);
    a2 = *(const char **)a2;
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 16) = v5;
    memcpy(v9, a2, v5);
    *(_QWORD *)(a1 + 8) = v5;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v6 = *((_QWORD *)v4 + 4);
  if ( v6 )
  {
    v27 = (void *)qalloc_or_throw(*((_QWORD *)v4 + 4), a2);
    a2 = *((const char **)v4 + 3);
    *(_QWORD *)(a1 + 24) = v27;
    *(_QWORD *)(a1 + 40) = v6;
    memcpy(v27, a2, v6);
    *(_QWORD *)(a1 + 32) = v6;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v33 = (const char *)a3[1];
  if ( v33 )
  {
    v11 = qalloc_or_throw(176LL * (_QWORD)v33, a2);
    v12 = 0;
    *(_QWORD *)(a1 + 48) = v11;
    *(_QWORD *)(a1 + 64) = v33;
    while ( 1 )
    {
      v14 = 176 * v12 + v11;
      v15 = (char *)(*a3 + 176 * v12);
      v16 = v15;
      v28 = v15;
      sub_7ED200(v14, v15);
      *(_QWORD *)(v14 + 152) = 0;
      *(_OWORD *)(v14 + 160) = 0;
      v17 = *((_QWORD *)v15 + 20);
      if ( v17 )
      {
        v18 = qalloc_or_throw(88 * v17, v15);
        *(_QWORD *)(v14 + 152) = v18;
        v19 = v18;
        v20 = 0;
        *(_QWORD *)(v14 + 168) = v17;
        while ( 1 )
        {
          v21 = 88 * v20 + v19;
          v22 = *((_QWORD *)v28 + 19) + 88 * v20;
          *(_QWORD *)v21 = 0;
          v23 = v22;
          *(_OWORD *)(v21 + 8) = 0;
          if ( *(_QWORD *)(v22 + 8) )
          {
            nb = *(_QWORD *)(v22 + 8);
            v24 = (void *)qalloc_or_throw(nb, v16);
            *(_QWORD *)v21 = v24;
            *(_QWORD *)(v21 + 16) = nb;
            v16 = *(const char **)v23;
            memcpy(v24, *(const void **)v23, nb);
            *(_QWORD *)(v21 + 8) = nb;
          }
          *(_QWORD *)(v21 + 24) = 0;
          *(_OWORD *)(v21 + 32) = 0;
          if ( *(_QWORD *)(v23 + 32) )
          {
            n = *(_QWORD *)(v23 + 32);
            v26 = (void *)qalloc_or_throw(n, v16);
            *(_QWORD *)(v21 + 24) = v26;
            *(_QWORD *)(v21 + 40) = n;
            v16 = *(const char **)(v23 + 24);
            memcpy(v26, v16, n);
            *(_QWORD *)(v21 + 32) = n;
          }
          *(_QWORD *)(v21 + 48) = 0;
          *(_OWORD *)(v21 + 56) = 0;
          if ( *(_QWORD *)(v23 + 56) )
          {
            na = *(_QWORD *)(v23 + 56);
            v25 = (void *)qalloc_or_throw(na, v16);
            *(_QWORD *)(v21 + 48) = v25;
            *(_QWORD *)(v21 + 64) = na;
            v16 = *(const char **)(v23 + 48);
            memcpy(v25, v16, na);
            *(_QWORD *)(v21 + 56) = na;
          }
          ++v20;
          *(_QWORD *)(v21 + 72) = *(_QWORD *)(v23 + 72);
          *(_QWORD *)(v21 + 80) = *(_QWORD *)(v23 + 80);
          if ( v17 == v20 )
            break;
          v19 = *(_QWORD *)(v14 + 152);
        }
        *(_QWORD *)(v14 + 160) = v17;
        v13 = a1;
        if ( v33 == (const char *)++v12 )
        {
LABEL_22:
          a2 = v33;
          *(_QWORD *)(v13 + 56) = v33;
          break;
        }
      }
      else
      {
        v13 = a1;
        if ( v33 == (const char *)++v12 )
          goto LABEL_22;
      }
      v11 = *(_QWORD *)(v13 + 48);
    }
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  result = a4;
  v8 = a4[1];
  if ( v8 )
  {
    v10 = (void *)qalloc_or_throw(a4[1], a2);
    *(_QWORD *)(a1 + 72) = v10;
    *(_QWORD *)(a1 + 88) = v8;
    result = memcpy(v10, (const void *)*a4, v8);
    *(_QWORD *)(a1 + 80) = v8;
  }
  return result;
}

