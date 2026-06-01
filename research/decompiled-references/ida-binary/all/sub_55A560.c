unsigned __int64 __fastcall sub_55A560(
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
  __int64 *v9; // rbx
  double v10; // xmm4_8
  double v11; // xmm5_8
  double v12; // xmm4_8
  double v13; // xmm5_8
  double v14; // xmm4_8
  double v15; // xmm5_8
  const char *v17; // rsi
  const char *v18; // [rsp+0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 24LL))(QT::QCoreApplication::self + 2);
  sub_5383D0(v9, (const __m128i *)&off_86E660, a2, a3, a4, a5, v10, v11, a8, a9);
  sub_5383D0(v9, (const __m128i *)&off_86E6F0, a2, a3, a4, a5, v12, v13, a8, a9);
  sub_5383D0(v9, (const __m128i *)&off_86E780, a2, a3, a4, a5, v14, v15, a8, a9);
  if ( !*(_BYTE *)(a1 + 32) && *(_QWORD *)(a1 + 48) > 1u )
  {
    v18 = nullptr;
    v19 = 0;
    if ( (unsigned int)sub_555410(a1, (__int64 *)&v18) )
    {
      v17 = &s1;
      if ( (_QWORD)v19 )
        v17 = v18;
      sub_16B930((__int64)"Cannot use license: %s", v17);
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18, (const char *)&v18);
    }
  }
  return v20 - __readfsqword(0x28u);
}
