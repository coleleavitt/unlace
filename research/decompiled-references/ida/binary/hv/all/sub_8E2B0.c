__int64 __fastcall sub_8E2B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  _QWORD v14[5]; // [rsp+0h] [rbp-28h] BYREF

  v14[3] = __readfsqword(0x28u);
  v14[1] = a5;
  v14[0] = off_163D00;
  if ( !a5 )
  {
    if ( !byte_1671A1 )
      sub_96F80(3335);
    BUG();
  }
  return ((unsigned __int8)sub_8E200(a1, 1, a2, a3, a4, (__int64)v14, a6, a7, a8, a9, a10, a11, a12, a13) ^ 1) & 1;
}

