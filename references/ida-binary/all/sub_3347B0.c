unsigned __int64 __fastcall sub_3347B0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v9; // xmm4_8
  double v10; // xmm5_8
  _QWORD _0[9]; // [rsp+0h] [rbp+0h] BYREF

  _0[5] = __readfsqword(0x28u);
  if ( dbg )
  {
    sub_5392E0(a1, 0, 1);
    sub_531CA0(_0, a1, 0, 1);
    sub_534680(&qword_8CEBE0, &off_8663E0, 7, 0);
    sub_539A10(a1, &qword_8CEBE0);
    sub_531D60(_0);
    if ( (~WORD4(xmmword_8CC820) & 0x600) != 0 )
      sub_5399B0(a1, unk_8CA368, 0, 1);
  }
  sub_531CA0(_0, a1, 0, 1);
  sub_534680(&qword_8CEBC0, &off_866360, 5, 0);
  sub_539A10(a1, &qword_8CEBC0);
  sub_531D60(_0);
  return sub_19B180(a1, 0x1Bu, a2, a3, a4, a5, v9, v10, a8, a9);
}
