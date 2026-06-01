_BYTE *__fastcall sub_221FF30(__int64 a1, __int64 a2)
{
  __m128i *v2; // rdx
  _BYTE *result; // rax
  _QWORD *v4; // rbp
  _QWORD *i; // r12
  __m128i si128; // xmm0

  v2 = *(__m128i **)(a2 + 32);
  result = (_BYTE *)(*(_QWORD *)(a2 + 24) - (_QWORD)v2);
  if ( (unsigned __int64)result > 0x10 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23ABA70);
    v2[1].m128i_i8[0] = 10;
    *v2 = si128;
    *(_QWORD *)(a2 + 32) += 17LL;
  }
  else
  {
    result = (_BYTE *)sub_227BF10(a2, "Multiple errors:\n", 17);
  }
  v4 = *(_QWORD **)(a1 + 8);
  for ( i = *(_QWORD **)(a1 + 16); i != v4; ++*(_QWORD *)(a2 + 32) )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 16LL))(*v4, a2);
      result = *(_BYTE **)(a2 + 32);
      if ( *(_BYTE **)(a2 + 24) != result )
        break;
      ++v4;
      result = (_BYTE *)sub_227BF10(a2, "\n", 1);
      if ( i == v4 )
        return result;
    }
    ++v4;
    *result = 10;
  }
  return result;
}
