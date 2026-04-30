unsigned __int64 __fastcall sub_365C80(
        double a1,
        double a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  _QWORD v9[2]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v9[0] = 1;
  v9[1] = 0;
  v10 = 0;
  sub_365A90((unsigned int *)v9, 0.0, a2, a3, a4, a5, a6, a7, a8);
  return v11 - __readfsqword(0x28u);
}
