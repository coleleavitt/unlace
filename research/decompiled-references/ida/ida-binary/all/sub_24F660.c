void __fastcall sub_24F660(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        char *a12)
{
  if ( xmmword_8CC590 <= 1 )
  {
    byte_8CC5EC = 0;
  }
  else
  {
    if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 2 )
      sub_24F380(SHIDWORD(qword_8CC340), 1u, a1, a2, a3, a4, a5, a6, a7, a8, a11, a12);
    if ( (unsigned __int8)sub_19DF30(
                            (__int64)&qword_8CC580,
                            qword_8CC348,
                            (__int64)"event",
                            nullptr,
                            a1,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8) )
      byte_8CC5EC = 0;
  }
}
