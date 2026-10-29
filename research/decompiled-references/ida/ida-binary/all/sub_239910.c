__int64 __fastcall sub_239910(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  char v15; // [rsp-8h] [rbp-8h]

  if ( byte_8BA544 )
    return 0;
  if ( byte_8CC068 == 1 && !a1 )
    return 1;
  byte_8CC068 = 1;
  sub_169630(
    (int)"The source level debugger has been disabled.\nTo enable it, use Debugger, Use source-level debugging",
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    v15);
  return 1;
}
