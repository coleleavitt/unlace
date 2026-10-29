__int64 __fastcall sub_389910(const char *src)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  char *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  const char *v23; // r12
  __int64 v24; // rax
  size_t v25; // rax
  __int64 v26; // r13
  size_t v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // r8
  void *v31; // rbx
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __int64 v34; // rax
  size_t v35; // rax
  __int64 v36; // rbp
  size_t v37; // rbx
  unsigned __int64 v38; // rbx
  size_t v39; // r13
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 *v44; // rbp
  __int64 v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rax
  __m128i v48; // [rsp+0h] [rbp-88h] BYREF
  char *s2; // [rsp+10h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-70h]
  void *srca; // [rsp+30h] [rbp-58h] BYREF
  __m128i v52; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v2 = strchr(src, 58);
  v48.m128i_i64[1] = (__int64)v2;
  if ( !v2 )
    return 0;
  s2 = nullptr;
  v3 = v2 - src;
  *(_OWORD *)n = 0;
  v4 = v3;
  if ( v3 )
  {
    v19 = nullptr;
    v20 = v3 + 1;
    if ( v3 != -1 )
    {
      s2 = (char *)qvector_reserve(&s2, 0, v3 + 1, 1);
      v19 = s2;
    }
    v11 = src;
    n[0] = v20;
    v7 = nullptr;
    memmove(v19, src, v4);
    s2[v4] = 0;
    v5 = (void *)xmmword_2CA1638;
    v4 = n[0];
    if ( (_QWORD)xmmword_2CA1638 )
      goto LABEL_4;
LABEL_16:
    if ( v4 )
    {
      v5 = (void *)qalloc_or_throw(v4, v11, v13, v14, v15, v16);
      memcpy(v5, s2, v4);
      v7 = (void *)xmmword_2CA1638;
      v6 = qword_2CA1630;
    }
    else
    {
      v6 = qword_2CA1630;
      v5 = nullptr;
    }
LABEL_18:
    v21 = v6;
    if ( *((_QWORD *)&xmmword_2CA1638 + 1) < (unsigned __int64)v7 + 1 )
    {
      v21 = qvector_reserve(&qword_2CA1630, v6, (char *)v7 + 1, 24);
      qword_2CA1630 = v21;
      v7 = (void *)xmmword_2CA1638;
    }
    v22 = 3LL * (_QWORD)v7;
    v23 = (const char *)v48.m128i_i64[1];
    v24 = v21 + 8 * v22;
    *(_QWORD *)v24 = v5;
    ++v23;
    *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
    *(_QWORD *)&xmmword_2CA1638 = xmmword_2CA1638 + 1;
    srca = nullptr;
    v52 = 0;
    v25 = strlen(v23);
    v26 = v25 + 1;
    v27 = v25;
    srca = (void *)qvector_reserve(&srca, 0, v25 + 1, 1);
    v52.m128i_i64[0] = v26;
    memmove(srca, v23, v27);
    *((_BYTE *)srca + v27) = 0;
    v28 = xmmword_2CA1618;
    v29 = qword_2CA1610;
    v30 = xmmword_2CA1618 + 1;
    if ( (unsigned __int64)&srca < qword_2CA1610
      || (unsigned __int64)&srca >= qword_2CA1610 + 24LL * *((_QWORD *)&xmmword_2CA1618 + 1) )
    {
      if ( *((_QWORD *)&xmmword_2CA1618 + 1) < v30 )
      {
        qword_2CA1610 = qvector_reserve(&qword_2CA1610, qword_2CA1610, xmmword_2CA1618 + 1, 24);
        v29 = qword_2CA1610;
        v28 = xmmword_2CA1618;
      }
      v41 = _mm_loadu_si128(&v52);
      v42 = v29 + 24 * v28;
      *(_QWORD *)v42 = srca;
      *(__m128i *)(v42 + 8) = v41;
      *(_QWORD *)&xmmword_2CA1618 = xmmword_2CA1618 + 1;
    }
    else
    {
      v31 = srca;
      v32 = _mm_loadl_epi64(&v52);
      srca = nullptr;
      v33 = _mm_loadl_epi64((const __m128i *)&v52.m128i_u64[1]);
      v52 = 0;
      if ( *((_QWORD *)&xmmword_2CA1618 + 1) < v30 )
      {
        v48.m128i_i64[1] = v33.m128i_i64[0];
        v48.m128i_i64[0] = v32.m128i_i64[0];
        qword_2CA1610 = qvector_reserve(&qword_2CA1610, qword_2CA1610, xmmword_2CA1618 + 1, 24);
        v29 = qword_2CA1610;
        v33 = _mm_loadl_epi64((const __m128i *)&v48.m128i_u64[1]);
        v28 = xmmword_2CA1618;
        v32 = _mm_loadl_epi64(&v48);
      }
      v34 = v29 + 24 * v28;
      *(_QWORD *)v34 = v31;
      *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v32, v33);
      *(_QWORD *)&xmmword_2CA1618 = xmmword_2CA1618 + 1;
      if ( srca )
      {
        v52.m128i_i64[0] = 0;
        qfree(srca);
      }
    }
    goto LABEL_31;
  }
  v5 = (void *)xmmword_2CA1638;
  v6 = qword_2CA1630;
  v7 = nullptr;
  if ( !(_QWORD)xmmword_2CA1638 )
    goto LABEL_18;
LABEL_4:
  v8 = s2;
  v9 = (char *)haystack;
  v6 = qword_2CA1630;
  if ( v4 )
    v9 = s2;
  v10 = 0;
  v7 = nullptr;
  v48.m128i_i64[0] = (__int64)v9;
  while ( 1 )
  {
    v17 = v6 + 24LL * (_QWORD)v7;
    v18 = *(_QWORD *)(v17 + 8);
    if ( v4 )
    {
      v11 = v8;
      v12 = haystack;
      if ( !v18 )
        goto LABEL_8;
      goto LABEL_12;
    }
    if ( !v18 )
      break;
LABEL_12:
    v12 = *(const char **)v17;
    v11 = (const char *)v48.m128i_i64[0];
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
  v52 = 0;
  v35 = strlen((const char *)v48.m128i_i64[1]);
  v36 = v35 + 1;
  v37 = v35;
  srca = (void *)qvector_reserve(&srca, 0, v35 + 1, 1);
  v52.m128i_i64[0] = v36;
  memmove(srca, (const void *)v48.m128i_i64[1], v37);
  *((_BYTE *)srca + v37) = 0;
  v38 = v52.m128i_i64[0];
  if ( v52.m128i_i64[0] )
  {
    v39 = v52.m128i_i64[0] - 1;
    if ( v52.m128i_i64[0] != 1 )
    {
      v43 = v52.m128i_i64[0] - 1;
      v44 = (__int64 *)(qword_2CA1610 + 24LL * (_QWORD)v7);
      v45 = v44[1];
      if ( v45 )
      {
        --v45;
        v43 = v39 + v45;
        v38 = v52.m128i_i64[0] + v45;
      }
      v46 = *v44;
      if ( v44[2] < v38 )
      {
        v47 = qvector_reserve(v44, v46, v38, 1);
        *v44 = v47;
        v46 = v47;
      }
      v44[1] = v38;
      *(_BYTE *)(v46 + v43) = 0;
      memcpy((void *)(v45 + *v44), srca, v39);
    }
  }
  if ( srca )
  {
    v52.m128i_i64[0] = 0;
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

