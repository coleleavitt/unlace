_QWORD *__fastcall sub_7EDE70(_QWORD *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rax
  void *v15; // rax
  void *v16; // rax
  unsigned __int64 v18; // [rsp+8h] [rbp-60h]
  __int64 v19; // [rsp+10h] [rbp-58h]
  size_t nb; // [rsp+18h] [rbp-50h]
  size_t na; // [rsp+18h] [rbp-50h]
  size_t n; // [rsp+18h] [rbp-50h]

  if ( a1[2] < a2 )
    *a1 = qvector_reserve(a1, *a1, a2, 176);
  v4 = a1[1];
  v18 = v4;
  if ( v4 < a2 )
  {
    v19 = 176 * v4;
    do
    {
      v5 = a3;
      v6 = *a1 + v19;
      sub_7ED200(v6, a3);
      *(_QWORD *)(v6 + 152) = 0;
      *(_OWORD *)(v6 + 160) = 0;
      v7 = *((_QWORD *)a3 + 20);
      if ( v7 )
      {
        v8 = qalloc_or_throw(88 * v7, a3);
        *(_QWORD *)(v6 + 152) = v8;
        v9 = v8;
        v10 = 0;
        *(_QWORD *)(v6 + 168) = v7;
        while ( 1 )
        {
          v11 = 88 * v10 + v9;
          v12 = *((_QWORD *)a3 + 19) + 88 * v10;
          *(_QWORD *)v11 = 0;
          v13 = v12;
          *(_OWORD *)(v11 + 8) = 0;
          if ( *(_QWORD *)(v12 + 8) )
          {
            nb = *(_QWORD *)(v12 + 8);
            v14 = (void *)qalloc_or_throw(nb, v5);
            *(_QWORD *)v11 = v14;
            *(_QWORD *)(v11 + 16) = nb;
            v5 = *(const char **)v13;
            memcpy(v14, *(const void **)v13, nb);
            *(_QWORD *)(v11 + 8) = nb;
          }
          *(_QWORD *)(v11 + 24) = 0;
          *(_OWORD *)(v11 + 32) = 0;
          if ( *(_QWORD *)(v13 + 32) )
          {
            n = *(_QWORD *)(v13 + 32);
            v16 = (void *)qalloc_or_throw(n, v5);
            *(_QWORD *)(v11 + 24) = v16;
            *(_QWORD *)(v11 + 40) = n;
            v5 = *(const char **)(v13 + 24);
            memcpy(v16, v5, n);
            *(_QWORD *)(v11 + 32) = n;
          }
          *(_QWORD *)(v11 + 48) = 0;
          *(_OWORD *)(v11 + 56) = 0;
          if ( *(_QWORD *)(v13 + 56) )
          {
            na = *(_QWORD *)(v13 + 56);
            v15 = (void *)qalloc_or_throw(na, v5);
            *(_QWORD *)(v11 + 48) = v15;
            *(_QWORD *)(v11 + 64) = na;
            v5 = *(const char **)(v13 + 48);
            memcpy(v15, v5, na);
            *(_QWORD *)(v11 + 56) = na;
          }
          ++v10;
          *(_QWORD *)(v11 + 72) = *(_QWORD *)(v13 + 72);
          *(_QWORD *)(v11 + 80) = *(_QWORD *)(v13 + 80);
          if ( v7 == v10 )
            break;
          v9 = *(_QWORD *)(v6 + 152);
        }
        *(_QWORD *)(v6 + 160) = v7;
      }
      ++v18;
      v19 += 176;
    }
    while ( a2 != v18 );
  }
  a1[1] = a2;
  return a1;
}

