_BYTE *__fastcall sub_748E50(__int64 a1, __int64 a2, int a3)
{
  __m128i *v4; // rdx
  __m128i si128; // xmm0
  _BYTE *result; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) == 0 )
    sub_C4A760(a1);
  v4 = *(__m128i **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v4 <= 0x17u )
  {
    sub_26240F0(a2, "#pragma omp declare simd", 24);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E7B0);
    v4[1].m128i_i64[0] = 0x646D697320657261LL;
    *v4 = si128;
    *(_QWORD *)(a2 + 32) += 24LL;
  }
  sub_722D10(a1, a2, a3);
  result = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == result )
    return (_BYTE *)sub_26240F0(a2, "\n", 1);
  *result = 10;
  ++*(_QWORD *)(a2 + 32);
  return result;
}

