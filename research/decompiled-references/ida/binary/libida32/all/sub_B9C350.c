_BYTE *__fastcall sub_B9C350(__int64 a1, __int64 a2, __int64 a3, __m128 si128)
{
  __m128 *v5; // rdx
  _BYTE *result; // rax

  v5 = *(__m128 **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v5 > 0xFu )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384E50);
    *v5 = si128;
    *(_QWORD *)(a2 + 32) += 16LL;
  }
  else
  {
    sub_22581D0(a2, "<template param ", 16);
  }
  sub_B9C2C0(a1, (char *)a2, a3, *(double *)si128.m128_u64);
  result = *(_BYTE **)(a2 + 32);
  if ( result == *(_BYTE **)(a2 + 24) )
    return (_BYTE *)sub_22581D0(a2, ">", 1);
  *result = 62;
  ++*(_QWORD *)(a2 + 32);
  return result;
}

