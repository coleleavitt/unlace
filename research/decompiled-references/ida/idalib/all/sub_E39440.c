unsigned __int64 __fastcall sub_E39440(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i *v4; // rdx
  unsigned __int64 result; // rax
  __m128i si128; // xmm0

  v4 = *(__m128i **)(a3 + 32);
  result = *(_QWORD *)(a3 + 24) - (_QWORD)v4;
  if ( result <= 0x14 )
    return sub_227BF10(a3, "__cxx_global_var_init", 21);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EC0);
  v4[1].m128i_i32[0] = 1768843615;
  v4[1].m128i_i8[4] = 116;
  *v4 = si128;
  *(_QWORD *)(a3 + 32) += 21LL;
  return result;
}
