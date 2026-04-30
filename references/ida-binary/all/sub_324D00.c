__int64 __fastcall segm_editor_t__::vfunc_10(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 *v12; // rdi
  __int64 v14[5]; // [rsp+0h] [rbp-28h] BYREF

  v14[1] = __readfsqword(0x28u);
  sub_17D780(v14, (__int64)a10);
  v12 = (__int64 *)v14[0];
  if ( !v14[0] )
    v12 = &qword_8C96A0;
  sub_324830((__int64)v12, a10, a1, a2, a3, a4, v10, v11, a7, a8);
  sub_17D800(v14);
  return 1;
}
