__int64 __fastcall sub_782880(__m128i *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = sub_79BEA0(*(_QWORD *)a2, *(unsigned int *)(a2 + 8), 0);
  a1[5] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)v3);
  *(_QWORD *)(v3 + 8) &= 7uLL;
  a1[4].m128i_i8[12] |= 0x40u;
  return result;
}

