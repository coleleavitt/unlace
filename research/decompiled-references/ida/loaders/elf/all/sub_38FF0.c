char sub_38FF0(__int64 a1, int a2, ...)
{
  size_t v3; // rax
  __int64 v4; // r13
  size_t v5; // rbp
  _BYTE *v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbp
  const char *v10; // rsi
  const char *v11; // rdi
  size_t v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r13
  size_t v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // r8
  _BYTE *v20; // rbp
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // [rsp+0h] [rbp-538h] BYREF
  _BYTE *v27; // [rsp+10h] [rbp-528h] BYREF
  __m128i v28; // [rsp+18h] [rbp-520h] BYREF
  gcc_va_list va; // [rsp+28h] [rbp-510h] BYREF
  char s[1032]; // [rsp+40h] [rbp-4F8h] BYREF
  unsigned __int64 v31; // [rsp+448h] [rbp-F0h]

  va_start(va, a2);
  v31 = __readfsqword(0x28u);
  if ( sub_38AE0(a1, (__int64)s, 1024, a2, (int *)va) == -1 )
  {
    if ( !under_debugger )
      interr(20033);
    BUG();
  }
  if ( a2 == 17 )
    return 1;
  if ( (unsigned int)(a2 - 18) > 1 )
  {
    if ( (int)sub_343A0(1u, (__int64)"HIDECANCEL\n%s. Continue?", s) > 0 )
      return a2 <= 18;
    goto LABEL_36;
  }
  if ( !(_BYTE)byte_8C228 && __cxa_guard_acquire(&byte_8C228) )
  {
    qword_8C230 = 0;
    xmmword_8C238 = 0;
    __cxa_atexit((void (*)(void *))sub_30B40, &qword_8C230, &off_86F20);
    __cxa_guard_release(&byte_8C228);
  }
  v27 = nullptr;
  v28 = 0;
  v3 = strlen(s);
  v4 = v3 + 1;
  v26.m128i_i64[1] = (__int64)&v27;
  v5 = v3;
  v6 = (_BYTE *)qvector_reserve(&v27, 0, v3 + 1, 1);
  v28.m128i_i64[0] = v4;
  v27 = v6;
  memmove(v6, s, v5);
  v27[v5] = 0;
  v7 = qword_8C230;
  v8 = v28.m128i_i64[0];
  v9 = qword_8C230 + 24 * xmmword_8C238;
  v26.m128i_i64[0] = (__int64)v27;
  if ( qword_8C230 == v9 )
  {
    if ( v26.m128i_i64[0] )
    {
      v28.m128i_i64[0] = 0;
      qfree(v26.m128i_i64[0]);
    }
LABEL_20:
    if ( (int)sub_343A0(1u, (__int64)"HIDECANCEL\n%s. Continue?", s) > 0 )
    {
      v27 = nullptr;
      v28 = 0;
      v13 = strlen(s);
      v14 = v26.m128i_u64[1];
      v15 = v13 + 1;
      v16 = v13;
      v27 = (_BYTE *)qvector_reserve(v26.m128i_i64[1], 0, v13 + 1, 1);
      v28.m128i_i64[0] = v15;
      memmove(v27, s, v16);
      v27[v16] = 0;
      v17 = xmmword_8C238;
      v18 = qword_8C230;
      v19 = xmmword_8C238 + 1;
      if ( v14 < qword_8C230
        || v26.m128i_i64[1] >= (unsigned __int64)(qword_8C230 + 24LL * *((_QWORD *)&xmmword_8C238 + 1)) )
      {
        if ( *((_QWORD *)&xmmword_8C238 + 1) < v19 )
        {
          qword_8C230 = qvector_reserve(&qword_8C230, qword_8C230, xmmword_8C238 + 1, 24);
          v18 = qword_8C230;
          v17 = xmmword_8C238;
        }
        v24 = _mm_loadu_si128(&v28);
        v25 = v18 + 24 * v17;
        *(_QWORD *)v25 = v27;
        *(__m128i *)(v25 + 8) = v24;
        *(_QWORD *)&xmmword_8C238 = xmmword_8C238 + 1;
      }
      else
      {
        v20 = v27;
        v21 = _mm_loadl_epi64(&v28);
        v27 = nullptr;
        v22 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
        v28 = 0;
        if ( *((_QWORD *)&xmmword_8C238 + 1) < v19 )
        {
          v26.m128i_i64[1] = v22.m128i_i64[0];
          v26.m128i_i64[0] = v21.m128i_i64[0];
          qword_8C230 = qvector_reserve(&qword_8C230, qword_8C230, xmmword_8C238 + 1, 24);
          v18 = qword_8C230;
          v22 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
          v17 = xmmword_8C238;
          v21 = _mm_loadl_epi64(&v26);
        }
        v23 = v18 + 24 * v17;
        *(_QWORD *)v23 = v20;
        *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v21, v22);
        *(_QWORD *)&xmmword_8C238 = xmmword_8C238 + 1;
        if ( v27 )
        {
          v28.m128i_i64[0] = 0;
          qfree(v27);
        }
      }
      return a2 <= 18;
    }
LABEL_36:
    sub_EB70(0);
  }
  while ( *(_QWORD *)(v7 + 8) )
  {
    v10 = *(const char **)v7;
    v11 = &s1;
    if ( v8 )
      goto LABEL_13;
LABEL_8:
    if ( !strcmp(v11, v10) )
      goto LABEL_17;
    v7 += 24;
    if ( v9 == v7 )
    {
      if ( !v26.m128i_i64[0] )
        goto LABEL_20;
      goto LABEL_18;
    }
  }
  if ( v8 )
  {
    v10 = &s1;
LABEL_13:
    v11 = (const char *)v26.m128i_i64[0];
    goto LABEL_8;
  }
LABEL_17:
  if ( !v26.m128i_i64[0] )
    goto LABEL_19;
LABEL_18:
  v28.m128i_i64[0] = 0;
  qfree(v26.m128i_i64[0]);
LABEL_19:
  if ( v9 == v7 )
    goto LABEL_20;
  return a2 <= 18;
}

