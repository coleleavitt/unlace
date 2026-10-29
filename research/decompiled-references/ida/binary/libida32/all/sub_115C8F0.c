__int64 __fastcall sub_115C8F0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __m128i *v3; // rbx
  __m128i *v4; // r12
  char *v5; // rbp
  __int64 v6; // rax
  char *v7; // r15
  const __m128i *v8; // rbp
  __m128i *v9; // rbx
  const __m128i *v10; // r12
  const __m128i *i; // rbp
  __int64 v12; // rsi
  __m128i *v13; // rdi
  __m128i *v15; // r12
  __m128i *v16; // rdi
  void **v17; // r14
  __int64 v18; // rdx
  void **v19; // r13
  __m128i *v20; // rax
  __m128i *v21; // r14
  void **v22; // r12
  void **v23; // rbp
  void *v24; // rdi
  void **v25; // r13
  void **v26; // r15
  const __m128i *v27; // rbp
  __m128i *v28; // r15
  __int64 v29; // r12
  const __m128i *v30; // rsi
  __m128i *v31; // rdi
  __int64 v33; // [rsp+8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+8h] [rbp-50h]
  unsigned int v35; // [rsp+1Ch] [rbp-3Ch]

  if ( a1 == a2 )
    return a1;
  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(__m128i **)a1;
  v35 = *(_DWORD *)(a2 + 8);
  v33 = v35;
  if ( v35 <= v2 )
  {
    v20 = *(__m128i **)a1;
    if ( v35 )
    {
      v27 = *(const __m128i **)a2;
      v28 = *(__m128i **)a1;
      v29 = *(_QWORD *)a2 + 160LL * v35;
      do
      {
        v30 = v27;
        v31 = v28;
        v27 += 10;
        v28 += 10;
        sub_10EEB80(v31, v30);
      }
      while ( v27 != (const __m128i *)v29 );
      v3 += 10 * v35;
      v20 = *(__m128i **)a1;
      v2 = *(unsigned int *)(a1 + 8);
    }
    v21 = &v20[10 * v2];
    while ( 1 )
    {
      if ( v3 == v21 )
        goto LABEL_18;
      v21 -= 10;
      v22 = (void **)v21[2].m128i_i64[0];
      v23 = &v22[12 * v21[2].m128i_u32[2]];
      if ( v22 == v23 )
        goto LABEL_42;
      do
      {
        while ( 1 )
        {
          v23 -= 12;
          if ( *((_BYTE *)v23 + 80) )
          {
            v25 = (void **)v23[4];
            v26 = &v25[4 * *((unsigned int *)v23 + 10)];
            if ( v25 != v26 )
            {
              do
              {
                while ( 1 )
                {
                  v26 -= 4;
                  if ( *v26 == v26 + 2 )
                    break;
                  operator delete(*v26);
                  if ( v25 == v26 )
                    goto LABEL_49;
                }
              }
              while ( v25 != v26 );
LABEL_49:
              v25 = (void **)v23[4];
            }
            if ( v25 != v23 + 6 )
              break;
          }
          v24 = *v23;
          if ( *v23 == v23 + 2 )
            goto LABEL_52;
LABEL_40:
          operator delete(v24);
          if ( v22 == v23 )
            goto LABEL_41;
        }
        free(v25);
        v24 = *v23;
        if ( *v23 != v23 + 2 )
          goto LABEL_40;
LABEL_52:
        ;
      }
      while ( v22 != v23 );
LABEL_41:
      v22 = (void **)v21[2].m128i_i64[0];
LABEL_42:
      if ( v22 != (void **)&v21[3] )
        free(v22);
      if ( (__m128i *)v21->m128i_i64[0] != &v21[1] )
        operator delete((void *)v21->m128i_i64[0]);
    }
  }
  if ( v35 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v4 = &v3[10 * v2];
LABEL_5:
    if ( v4 == v3 )
      goto LABEL_15;
LABEL_6:
    v4 -= 10;
    v5 = (char *)v4[2].m128i_i64[0];
    v6 = 96LL * v4[2].m128i_u32[2];
    v7 = &v5[v6];
    if ( v5 == &v5[v6] )
      goto LABEL_11;
    while ( 1 )
    {
      v7 -= 96;
      if ( v7[80] )
        goto LABEL_26;
      while ( *(char **)v7 == v7 + 16 )
      {
        if ( v5 == v7 )
        {
LABEL_10:
          v5 = (char *)v4[2].m128i_i64[0];
LABEL_11:
          if ( v5 != (char *)&v4[3] )
            free(v5);
          if ( (__m128i *)v4->m128i_i64[0] != &v4[1] )
          {
            operator delete((void *)v4->m128i_i64[0]);
            if ( v4 == v3 )
            {
LABEL_15:
              *(_DWORD *)(a1 + 8) = 0;
              sub_10EF360(a1, v35);
              v3 = *(__m128i **)a1;
              v2 = 0;
              v8 = *(const __m128i **)a2;
              v33 = *(unsigned int *)(a2 + 8);
              goto LABEL_16;
            }
            goto LABEL_6;
          }
          goto LABEL_5;
        }
        v7 -= 96;
        if ( v7[80] )
        {
LABEL_26:
          v17 = *((void ***)v7 + 4);
          v18 = 4LL * *((unsigned int *)v7 + 10);
          v19 = &v17[v18];
          if ( v17 != &v17[v18] )
          {
            do
            {
              while ( 1 )
              {
                v19 -= 4;
                if ( *v19 == v19 + 2 )
                  break;
                operator delete(*v19);
                if ( v17 == v19 )
                  goto LABEL_29;
              }
            }
            while ( v17 != v19 );
LABEL_29:
            v17 = *((void ***)v7 + 4);
          }
          if ( v17 != (void **)(v7 + 48) )
            free(v17);
        }
      }
      operator delete(*(void **)v7);
      if ( v5 == v7 )
        goto LABEL_10;
    }
  }
  v8 = *(const __m128i **)a2;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v2 *= 160LL;
    v15 = (__m128i *)((char *)v3 + v2);
    do
    {
      v16 = v3;
      v34 = v2;
      v3 += 10;
      sub_10EEB80(v16, v8);
      v8 += 10;
      v2 = v34;
    }
    while ( v3 != v15 );
    v8 = *(const __m128i **)a2;
    v33 = *(unsigned int *)(a2 + 8);
    v3 = *(__m128i **)a1;
  }
LABEL_16:
  v9 = (__m128i *)((char *)v3 + v2);
  v10 = &v8[10 * v33];
  for ( i = (const __m128i *)((char *)v8 + v2); i != v10; i += 10 )
  {
    v12 = (__int64)i;
    v13 = v9;
    v9 += 10;
    sub_10EEAD0(v13, v12);
  }
LABEL_18:
  *(_DWORD *)(a1 + 8) = v35;
  return a1;
}

