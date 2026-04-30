__m128i *__fastcall sub_480540(
        __m128i *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __int64 a9,
        _QWORD *a10)
{
  __m128i si128; // xmm0
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v13 = 0;
  if ( a10 )
  {
    sub_4802A0((__int64)ptr, a10, 0, 0.0, a3, a4, a5, a6, a7, a8);
    si128 = _mm_load_si128((const __m128i *)ptr);
    a1[1].m128i_i64[0] = v13;
    *a1 = si128;
    if ( si128.m128i_i64[0] )
    {
      _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
      if ( ptr[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
    }
  }
  else
  {
    a1[1].m128i_i64[0] = 0;
    *a1 = 0;
  }
  return a1;
}
