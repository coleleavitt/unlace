__int64 __fastcall sub_77280(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __m128i si128; // xmm0
  __int64 v6; // rax

  if ( !*(_QWORD *)(a1 + 16) || (result = 1, !*(_QWORD *)(a1 + 96)) )
  {
    if ( a2 )
    {
      v4 = *a2;
      if ( (unsigned __int64)a2[2] <= 0x35 )
      {
        v6 = sub_96080(a2, v4, 54, 1);
        *a2 = v6;
        v4 = v6;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_130340);
      a2[1] = 54;
      *(__m128i *)v4 = si128;
      *(__m128i *)(v4 + 16) = _mm_load_si128((const __m128i *)&xmmword_130350);
      *(__m128i *)(v4 + 32) = _mm_load_si128((const __m128i *)&xmmword_130360);
      *(_QWORD *)(v4 + 45) = 0x646564616F6C2065LL;
      *(_BYTE *)(*a2 + 53) = 0;
    }
    return 0;
  }
  return result;
}

