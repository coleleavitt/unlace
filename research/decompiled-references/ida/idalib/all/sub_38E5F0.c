__int64 __fastcall sub_38E5F0(const char *src)
{
  char *v2; // rax
  size_t v3; // rax
  size_t v4; // rbx
  void *v5; // rbp
  __int64 v6; // r13
  void *v7; // r12
  char *v8; // r15
  char *v9; // rax
  int v10; // r14d
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // rdi
  size_t v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  const char *v19; // r12
  __int64 v20; // rax
  size_t v21; // rax
  __int64 v22; // r13
  size_t v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // r8
  void *v27; // rbx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // rax
  size_t v31; // rax
  __int64 v32; // rbp
  size_t v33; // rbx
  unsigned __int64 v34; // rbx
  size_t v35; // r13
  __m128i v37; // xmm0
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 *v40; // rbp
  __int64 v41; // r12
  __int64 v42; // rsi
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-88h] BYREF
  char *s2; // [rsp+10h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-70h]
  void *srca; // [rsp+30h] [rbp-58h] BYREF
  __m128i v48; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v2 = strchr(src, 58);
  v44.m128i_i64[1] = (__int64)v2;
  if ( !v2 )
    return 0;
  s2 = nullptr;
  v3 = v2 - src;
  *(_OWORD *)n = 0;
  v4 = v3;
  if ( v3 )
  {
    v15 = nullptr;
    v16 = v3 + 1;
    if ( v3 != -1 )
    {
      s2 = (char *)qvector_reserve(&s2, 0, v3 + 1, 1);
      v15 = s2;
    }
    n[0] = v16;
    v7 = nullptr;
    memmove(v15, src, v4);
    s2[v4] = 0;
    v5 = (void *)xmmword_2CCB538;
    v4 = n[0];
    if ( (_QWORD)xmmword_2CCB538 )
      goto LABEL_4;
LABEL_16:
    if ( v4 )
    {
      v5 = (void *)qalloc_or_throw(v4);
      memcpy(v5, s2, v4);
      v7 = (void *)xmmword_2CCB538;
      v6 = qword_2CCB530;
    }
    else
    {
      v6 = qword_2CCB530;
      v5 = nullptr;
    }
LABEL_18:
    v17 = v6;
    if ( *((_QWORD *)&xmmword_2CCB538 + 1) < (unsigned __int64)v7 + 1 )
    {
      v17 = qvector_reserve(&qword_2CCB530, v6, (char *)v7 + 1, 24);
      qword_2CCB530 = v17;
      v7 = (void *)xmmword_2CCB538;
    }
    v18 = 3LL * (_QWORD)v7;
    v19 = (const char *)v44.m128i_i64[1];
    v20 = v17 + 8 * v18;
    *(_QWORD *)v20 = v5;
    ++v19;
    *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
    *(_QWORD *)&xmmword_2CCB538 = xmmword_2CCB538 + 1;
    srca = nullptr;
    v48 = 0;
    v21 = strlen(v19);
    v22 = v21 + 1;
    v23 = v21;
    srca = (void *)qvector_reserve(&srca, 0, v21 + 1, 1);
    v48.m128i_i64[0] = v22;
    memmove(srca, v19, v23);
    *((_BYTE *)srca + v23) = 0;
    v24 = xmmword_2CCB518;
    v25 = qword_2CCB510;
    v26 = xmmword_2CCB518 + 1;
    if ( (unsigned __int64)&srca < qword_2CCB510
      || (unsigned __int64)&srca >= qword_2CCB510 + 24LL * *((_QWORD *)&xmmword_2CCB518 + 1) )
    {
      if ( *((_QWORD *)&xmmword_2CCB518 + 1) < v26 )
      {
        qword_2CCB510 = qvector_reserve(&qword_2CCB510, qword_2CCB510, xmmword_2CCB518 + 1, 24);
        v25 = qword_2CCB510;
        v24 = xmmword_2CCB518;
      }
      v37 = _mm_loadu_si128(&v48);
      v38 = v25 + 24 * v24;
      *(_QWORD *)v38 = srca;
      *(__m128i *)(v38 + 8) = v37;
      *(_QWORD *)&xmmword_2CCB518 = xmmword_2CCB518 + 1;
    }
    else
    {
      v27 = srca;
      v28 = _mm_loadl_epi64(&v48);
      srca = nullptr;
      v29 = _mm_loadl_epi64((const __m128i *)&v48.m128i_u64[1]);
      v48 = 0;
      if ( *((_QWORD *)&xmmword_2CCB518 + 1) < v26 )
      {
        v44.m128i_i64[1] = v29.m128i_i64[0];
        v44.m128i_i64[0] = v28.m128i_i64[0];
        qword_2CCB510 = qvector_reserve(&qword_2CCB510, qword_2CCB510, xmmword_2CCB518 + 1, 24);
        v25 = qword_2CCB510;
        v29 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
        v24 = xmmword_2CCB518;
        v28 = _mm_loadl_epi64(&v44);
      }
      v30 = v25 + 24 * v24;
      *(_QWORD *)v30 = v27;
      *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64(v28, v29);
      *(_QWORD *)&xmmword_2CCB518 = xmmword_2CCB518 + 1;
      if ( srca )
      {
        v48.m128i_i64[0] = 0;
        qfree(srca);
      }
    }
    goto LABEL_31;
  }
  v5 = (void *)xmmword_2CCB538;
  v6 = qword_2CCB530;
  v7 = nullptr;
  if ( !(_QWORD)xmmword_2CCB538 )
    goto LABEL_18;
LABEL_4:
  v8 = s2;
  v9 = (char *)haystack;
  v6 = qword_2CCB530;
  if ( v4 )
    v9 = s2;
  v10 = 0;
  v7 = nullptr;
  v44.m128i_i64[0] = (__int64)v9;
  while ( 1 )
  {
    v13 = v6 + 24LL * (_QWORD)v7;
    v14 = *(_QWORD *)(v13 + 8);
    if ( v4 )
    {
      v11 = v8;
      v12 = haystack;
      if ( !v14 )
        goto LABEL_8;
      goto LABEL_12;
    }
    if ( !v14 )
      break;
LABEL_12:
    v12 = *(const char **)v13;
    v11 = (const char *)v44.m128i_i64[0];
LABEL_8:
    if ( strcmp(v12, v11) )
    {
      v7 = (void *)++v10;
      if ( v10 < (unsigned __int64)v5 )
        continue;
    }
    if ( v7 == v5 )
      goto LABEL_16;
    goto LABEL_27;
  }
  if ( v5 == v7 )
  {
    v5 = nullptr;
    goto LABEL_18;
  }
LABEL_27:
  srca = nullptr;
  v48 = 0;
  v31 = strlen((const char *)v44.m128i_i64[1]);
  v32 = v31 + 1;
  v33 = v31;
  srca = (void *)qvector_reserve(&srca, 0, v31 + 1, 1);
  v48.m128i_i64[0] = v32;
  memmove(srca, (const void *)v44.m128i_i64[1], v33);
  *((_BYTE *)srca + v33) = 0;
  v34 = v48.m128i_i64[0];
  if ( v48.m128i_i64[0] )
  {
    v35 = v48.m128i_i64[0] - 1;
    if ( v48.m128i_i64[0] != 1 )
    {
      v39 = v48.m128i_i64[0] - 1;
      v40 = (__int64 *)(qword_2CCB510 + 24LL * (_QWORD)v7);
      v41 = v40[1];
      if ( v41 )
      {
        --v41;
        v39 = v35 + v41;
        v34 = v48.m128i_i64[0] + v41;
      }
      v42 = *v40;
      if ( v40[2] < v34 )
      {
        v43 = qvector_reserve(v40, v42, v34, 1);
        *v40 = v43;
        v42 = v43;
      }
      v40[1] = v34;
      *(_BYTE *)(v42 + v39) = 0;
      memcpy((void *)(v41 + *v40), srca, v35);
    }
  }
  if ( srca )
  {
    v48.m128i_i64[0] = 0;
    qfree(srca);
  }
LABEL_31:
  if ( s2 )
  {
    n[0] = 0;
    qfree(s2);
  }
  return 1;
}
