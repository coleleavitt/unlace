const void *__fastcall sub_11604C0(__m128i *a1, const void **a2, __int64 a3, __int64 a4, __int64 a5)
{
  const void *result; // rax
  const void **i; // rbp
  size_t v7; // r15
  const void *v8; // r9
  size_t v9; // rdx
  __m128i *v10; // r12
  size_t v11; // r14
  int v12; // eax
  size_t v13; // r13
  size_t v14; // rdx
  const void *v15; // r10
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // r15
  const void *v20; // r12
  size_t v21; // r14
  size_t v22; // rdx
  int v23; // eax
  __m128i *j; // r13
  size_t v25; // r12
  size_t v26; // rdx
  int v27; // eax
  size_t v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rax
  __m128i v32; // xmm5
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rbp
  const void **v37; // rbp
  const void *v38; // rcx
  __int64 v39; // r12
  size_t v40; // r8
  size_t v41; // r13
  const void *v42; // r10
  size_t v43; // rdx
  int v44; // eax
  __m128i v45; // xmm2
  __int64 v46; // rax
  size_t v47; // rdx
  int v48; // eax
  void *s1; // [rsp+8h] [rbp-70h]
  char *s1a; // [rsp+8h] [rbp-70h]
  __int64 v51; // [rsp+10h] [rbp-68h]
  const void *v52; // [rsp+18h] [rbp-60h]
  const void *v53; // [rsp+18h] [rbp-60h]
  const void *v54; // [rsp+18h] [rbp-60h]
  const void *v55; // [rsp+18h] [rbp-60h]
  void *v56; // [rsp+20h] [rbp-58h]
  void *v57; // [rsp+20h] [rbp-58h]
  const void **v58; // [rsp+28h] [rbp-50h]
  const void **v59; // [rsp+30h] [rbp-48h]

  result = (const void *)((char *)a2 - (char *)a1);
  v51 = a3;
  if ( (char *)a2 - (char *)a1 <= 256 )
    return result;
  if ( !a3 )
  {
    v34 = (char *)a2 - (char *)a1;
    v59 = a2;
    goto LABEL_51;
  }
  i = a2;
  while ( 2 )
  {
    v7 = a1[1].m128i_u64[1];
    --v51;
    v8 = (const void *)a1[1].m128i_i64[0];
    v9 = v7;
    v10 = &a1[(__int64)((((char *)i - (char *)a1) >> 4) + ((unsigned __int64)((char *)i - (char *)a1) >> 63)) >> 1];
    v11 = v10->m128i_u64[1];
    s1 = (void *)v10->m128i_i64[0];
    if ( v11 <= v7 )
      v9 = v10->m128i_u64[1];
    if ( !v9
      || (v52 = (const void *)a1[1].m128i_i64[0], v12 = memcmp(v8, (const void *)v10->m128i_i64[0], v9), v8 = v52, !v12) )
    {
      if ( v11 != v7 && v11 > v7 )
        goto LABEL_10;
LABEL_57:
      v41 = (size_t)*(i - 1);
      v42 = *(i - 2);
      v43 = v41;
      if ( v7 <= v41 )
        v43 = v7;
      if ( v43 && (v55 = *(i - 2), v44 = memcmp(v8, v55, v43), v42 = v55, v44) )
      {
        if ( v44 < 0 )
        {
LABEL_63:
          v45 = _mm_loadu_si128(a1 + 1);
          v46 = a1->m128i_i64[1];
          a1[1].m128i_i64[0] = a1->m128i_i64[0];
          *a1 = v45;
          a1[1].m128i_i64[1] = v46;
          goto LABEL_17;
        }
      }
      else if ( v7 != v41 && v7 < v41 )
      {
        goto LABEL_63;
      }
      v47 = v41;
      if ( v11 <= v41 )
        v47 = v11;
      if ( !v47 || (v48 = memcmp(s1, v42, v47)) == 0 )
      {
        if ( v11 == v41 || v11 >= v41 )
          goto LABEL_16;
        goto LABEL_42;
      }
      if ( v48 < 0 )
        goto LABEL_42;
      goto LABEL_16;
    }
    if ( v12 >= 0 )
      goto LABEL_57;
LABEL_10:
    v13 = (size_t)*(i - 1);
    v14 = v11;
    v15 = *(i - 2);
    if ( v13 <= v11 )
      v14 = (size_t)*(i - 1);
    if ( !v14 || (v56 = (void *)v8, v53 = *(i - 2), v16 = memcmp(s1, v53, v14), v15 = v53, v8 = v56, !v16) )
    {
      if ( v13 != v11 && v13 > v11 )
        goto LABEL_16;
      goto LABEL_36;
    }
    if ( v16 >= 0 )
    {
LABEL_36:
      v28 = v7;
      if ( v13 <= v7 )
        v28 = v13;
      if ( !v28 || (v29 = memcmp(v8, v15, v28)) == 0 )
      {
        if ( v13 != v7 && v13 > v7 )
          goto LABEL_42;
LABEL_44:
        v32 = _mm_loadu_si128(a1 + 1);
        v33 = a1->m128i_i64[1];
        a1[1].m128i_i64[0] = a1->m128i_i64[0];
        *a1 = v32;
        a1[1].m128i_i64[1] = v33;
        goto LABEL_17;
      }
      if ( v29 >= 0 )
        goto LABEL_44;
LABEL_42:
      v30 = a1->m128i_i64[0];
      v31 = a1->m128i_i64[1];
      *a1 = _mm_loadu_si128((const __m128i *)i - 1);
      *(i - 2) = (const void *)v30;
      *(i - 1) = (const void *)v31;
      goto LABEL_17;
    }
LABEL_16:
    v17 = a1->m128i_i64[0];
    v18 = a1->m128i_i64[1];
    *a1 = _mm_loadu_si128(v10);
    v10->m128i_i64[0] = v17;
    v10->m128i_i64[1] = v18;
LABEL_17:
    v19 = a1->m128i_u64[1];
    s1a = (char *)i;
    v58 = i;
    v20 = (const void *)a1->m128i_i64[0];
    for ( i = (const void **)&a1[1]; ; i += 2 )
    {
      v21 = (size_t)i[1];
      v59 = i;
      v22 = v21;
      v54 = *i;
      if ( v19 <= v21 )
        v22 = v19;
      if ( !v22 )
        break;
      v23 = memcmp(*i, v20, v22);
      if ( !v23 )
        break;
      if ( v23 >= 0 )
        goto LABEL_27;
LABEL_20:
      ;
    }
    if ( v19 != v21 && v19 > v21 )
      goto LABEL_20;
LABEL_27:
    v57 = (void *)v20;
    for ( j = (__m128i *)(s1a - 16); ; --j )
    {
      v25 = j->m128i_u64[1];
      s1a = (char *)j;
      v26 = v25;
      if ( v19 <= v25 )
        v26 = v19;
      if ( v26 )
      {
        v27 = memcmp(v57, (const void *)j->m128i_i64[0], v26);
        if ( v27 )
          break;
      }
      if ( v19 == v25 || v19 >= v25 )
      {
        if ( i >= (const void **)j )
          goto LABEL_49;
LABEL_19:
        *(__m128i *)i = _mm_loadu_si128(j);
        j->m128i_i64[0] = (__int64)v54;
        j->m128i_i64[1] = v21;
        v19 = a1->m128i_u64[1];
        v20 = (const void *)a1->m128i_i64[0];
        goto LABEL_20;
      }
LABEL_34:
      ;
    }
    if ( v27 < 0 )
      goto LABEL_34;
    if ( i < (const void **)j )
      goto LABEL_19;
LABEL_49:
    result = (const void *)sub_11604C0(i, v58, v51, a4, a5, v8);
    v34 = (char *)i - (char *)a1;
    if ( (char *)i - (char *)a1 > 256 )
    {
      if ( !v51 )
      {
LABEL_51:
        v35 = v34 >> 4;
        v36 = ((v34 >> 4) - 2) >> 1;
        sub_11602B0((__int64)a1, v36, v34 >> 4, (const void *)a1[v36].m128i_i64[0], a1[v36].m128i_u64[1]);
        do
        {
          --v36;
          sub_11602B0((__int64)a1, v36, v35, (const void *)a1[v36].m128i_i64[0], a1[v36].m128i_u64[1]);
        }
        while ( v36 );
        v37 = v59 - 2;
        do
        {
          v38 = *v37;
          v39 = (char *)v37 - (char *)a1;
          v40 = (size_t)v37[1];
          v37 -= 2;
          *((__m128i *)v37 + 1) = _mm_loadu_si128(a1);
          result = sub_11602B0((__int64)a1, 0, v39 >> 4, v38, v40);
        }
        while ( v39 > 16 );
        return result;
      }
      continue;
    }
    return result;
  }
}
