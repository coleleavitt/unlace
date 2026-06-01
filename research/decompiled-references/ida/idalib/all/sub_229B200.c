__m128i *__fastcall sub_229B200(__m128i *a1, char *a2, size_t a3)
{
  char *v3; // r14
  size_t v4; // rbp
  const __m128i *v5; // rbx
  const __m128i *v6; // r12
  const __m128i *v7; // r13
  __m128i v8; // xmm1
  __m128i v9; // xmm2

  v3 = a2;
  v4 = a3;
  if ( a3 == 4 && *(_DWORD *)a2 == 1634559090 )
  {
    v4 = 3;
    v3 = "rdm";
  }
  if ( !(_BYTE)byte_2D0B970 && __cxa_guard_acquire(&byte_2D0B970) )
  {
    *(_OWORD *)&xmmword_2D0B980 = 0;
    qword_2D0B990 = 0;
    __cxa_atexit((void (*)(void *))sub_2297EF0, &xmmword_2D0B980, &off_2B25620);
    __cxa_guard_release(&byte_2D0B970);
  }
  v6 = (const __m128i *)*(&xmmword_2D0B980 + 1);
  v5 = (const __m128i *)xmmword_2D0B980;
  if ( xmmword_2D0B980 == *(&xmmword_2D0B980 + 1)
    && (sub_229A550(),
        v6 = (const __m128i *)*(&xmmword_2D0B980 + 1),
        v5 = (const __m128i *)xmmword_2D0B980,
        xmmword_2D0B980 == *(&xmmword_2D0B980 + 1)) )
  {
LABEL_10:
    a1[2].m128i_i64[0] = 0;
  }
  else
  {
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = v5;
        if ( v4 == v5->m128i_i64[1] && !memcmp(v3, (const void *)v5->m128i_i64[0], v4) )
          break;
        v5 += 2;
        if ( v6 == v5 )
          goto LABEL_10;
      }
    }
    else
    {
      while ( 1 )
      {
        v7 = v5;
        if ( !v5->m128i_i64[1] )
          break;
        v5 += 2;
        if ( v6 == v5 )
          goto LABEL_10;
      }
    }
    v8 = _mm_loadu_si128(v7);
    v9 = _mm_loadu_si128(v7 + 1);
    a1[2].m128i_i8[0] = 1;
    *a1 = v8;
    a1[1] = v9;
  }
  return a1;
}
