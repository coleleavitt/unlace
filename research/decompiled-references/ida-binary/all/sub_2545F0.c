__int64 __fastcall sub_2545F0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  _QWORD v15[3]; // [rsp+0h] [rbp-18h] BYREF

  v15[1] = __readfsqword(0x28u);
  if ( byte_8BA544 )
  {
    v15[0] = menu_switch_to_source;
    return sub_24EC60(nullptr, xmmword_8CC810, 3u, (__int64)v15, 1);
  }
  else
  {
    byte_8CC068 = 1;
    sub_169630(
      (int)"The source level debugger has been disabled.\nTo enable it, use Debugger, Use source-level debugging",
      a10,
      a11,
      a12,
      a13,
      a14,
      a1,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      v15[0]);
    return 0;
  }
}
