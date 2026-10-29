__int64 __fastcall form_actions_impl_t__::vfunc_1(
        __int64 a1,
        int a2,
        unsigned __int16 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  QT::QAbstractButton **v12; // rax
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  unsigned __int8 v17; // [rsp+Fh] [rbp-29h] BYREF
  __int64 v18[5]; // [rsp+10h] [rbp-28h] BYREF

  v18[1] = __readfsqword(0x28u);
  v12 = (QT::QAbstractButton **)sub_4F9180(a1, a2, &v17, v18);
  if ( v12 )
    return sub_5003D0(*(__int64 **)(a1 + 8), v12, v17, a3, v18[0], v13, a4, a5, a6, a7, v14, v15, a10, a11);
  else
    return 0;
}
