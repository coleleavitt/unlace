__int64 __fastcall sub_3776C0(
        __int64 *a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  char v10; // r12
  double v11; // xmm0_8
  double v12; // xmm4_8
  double v13; // xmm5_8

  v9 = sub_2B70C0((__int64)a1);
  v10 = byte_8CCA9E;
  byte_8CCA9E = 0;
  sub_373A10(v9, 0, a2);
  v11 = (*(double (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 152))(a1, 0, 0);
  sub_2C4180(a1, 0, v11, a3, a4, a5, v12, v13, a8, a9);
  byte_8CCA9E = v10;
  return 1;
}
