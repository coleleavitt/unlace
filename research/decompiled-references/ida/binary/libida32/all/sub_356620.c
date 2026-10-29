__int64 __fastcall sub_356620(__m128i *a1, const __m128i *a2)
{
  unsigned __int32 v2; // eax
  __int64 result; // rax

  a1[2] = _mm_loadu_si128(a2);
  a1[3].m128i_i8[0] = a2[1].m128i_i8[0];
  v2 = a1[2].m128i_u32[2];
  if ( v2 < a1[1].m128i_i32[2] || a1[1].m128i_i32[3] < v2 || (result = a1[2].m128i_u32[3], (int)result < 0) )
  {
    if ( !under_debugger )
      interr(1435);
    BUG();
  }
  return result;
}

