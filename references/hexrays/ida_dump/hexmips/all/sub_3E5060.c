__int64 __fastcall sub_3E5060(_DWORD *a1, __m128i *a2)
{
  __int64 result; // rax
  __m128i si128; // xmm0
  __int32 v4; // eax

  result = 0;
  if ( a1[187] == 2 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_407550);
    a2->m128i_i32[0] = a1[90];
    a2->m128i_i32[1] = a1[91];
    v4 = a1[112];
    a2[1] = si128;
    a2->m128i_i32[2] = v4;
    return 1;
  }
  return result;
}
