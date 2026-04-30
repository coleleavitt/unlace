__int64 __fastcall sub_31AD60(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  const char *v9; // rbx
  double v10; // xmm0_8
  double v11; // xmm4_8
  double v12; // xmm5_8
  const char *v13; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]
  unsigned __int64 v15; // [rsp+18h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  sub_319840((__int64)&v13, 0, 0, (__int64)"Run script", a1, a2, a3, a4, a5, a6, a7, a8);
  if ( v14 > 1 )
  {
    v9 = v13;
    reg_update_strlist("RecentScripts", v13, 512, 0, 0);
    v10 = sub_4A4790("Recent scripts", 0);
    sub_319590(v9, v10, a2, a3, a4, v11, v12, a7, a8);
  }
  if ( v13 )
  {
    v14 = 0;
    qfree(v13, nullptr);
  }
  return 1;
}
