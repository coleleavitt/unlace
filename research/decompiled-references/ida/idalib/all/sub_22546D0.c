_BYTE *__fastcall sub_22546D0(const char *src)
{
  __int64 v2; // rax
  __m128i *v3; // rdx
  __int64 v4; // rbx
  size_t v5; // rax
  _BYTE *v6; // rdi
  size_t v7; // r12
  _BYTE *result; // rax
  __m128i si128; // xmm0

  if ( !qword_2D0ABD0 )
    sub_2230020(&qword_2D0ABD0, sub_2254550, (__int64)sub_2254530);
  if ( !*(_BYTE *)(qword_2D0ABD0 + 120) )
    sub_2221C70("Invalid size request on a scalable vector.", 1u);
  v2 = sub_226D9F0();
  v3 = *(__m128i **)(v2 + 32);
  v4 = v2;
  if ( *(_QWORD *)(v2 + 24) - (_QWORD)v3 > 0x2Au )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23ABCA0);
    qmemcpy(&v3[2], "le vector; ", 11);
    *v3 = si128;
    v3[1] = _mm_load_si128((const __m128i *)&xmmword_23ABCB0);
    *(_QWORD *)(v2 + 32) += 43LL;
  }
  else
  {
    v4 = sub_227BF10(v2, "Invalid size request on a scalable vector; ", 43);
  }
  if ( !src )
    goto LABEL_9;
  v5 = strlen(src);
  v6 = *(_BYTE **)(v4 + 32);
  v7 = v5;
  result = *(_BYTE **)(v4 + 24);
  if ( v7 > result - v6 )
  {
    v4 = sub_227BF10(v4, src, v7);
LABEL_9:
    result = *(_BYTE **)(v4 + 24);
    v6 = *(_BYTE **)(v4 + 32);
    goto LABEL_10;
  }
  if ( v7 )
  {
    memcpy(v6, src, v7);
    result = *(_BYTE **)(v4 + 24);
    v6 = (_BYTE *)(v7 + *(_QWORD *)(v4 + 32));
    *(_QWORD *)(v4 + 32) = v6;
    if ( result == v6 )
      return (_BYTE *)sub_227BF10(v4, "\n", 1);
    goto LABEL_14;
  }
LABEL_10:
  if ( result == v6 )
    return (_BYTE *)sub_227BF10(v4, "\n", 1);
LABEL_14:
  *v6 = 10;
  ++*(_QWORD *)(v4 + 32);
  return result;
}
