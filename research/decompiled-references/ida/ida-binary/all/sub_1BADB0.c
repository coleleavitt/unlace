unsigned __int64 __fastcall sub_1BADB0(
        _QWORD *a1,
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
  const char *v11; // rsi
  const char *v12; // rsi
  unsigned __int8 isChecked; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  __int64 v21; // [rsp+0h] [rbp-38h] BYREF
  __int128 v22; // [rsp+8h] [rbp-30h]
  unsigned __int64 v23; // [rsp+18h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  v21 = 0;
  v22 = 0;
  sub_1BA9A0((__int64)a1, (__int64)&v21, 0.0, *(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9);
  sub_52B3C0(a1 + 20, &v21);
  v11 = &s1;
  if ( a1[21] )
    v11 = (const char *)a1[20];
  if ( (unsigned __int8)sub_1B4E30(
                          (__m128)0LL,
                          a3,
                          a4,
                          a5,
                          v9,
                          v10,
                          a8,
                          a9,
                          (__int64)a1,
                          (__int64)v11,
                          (__int64)(a1 + 26)) )
  {
    v12 = (const char *)(a1 + 20);
    sub_52B340(&qword_8CAE60, a1 + 20);
    isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1[32] + 1008LL));
    sub_1B2FD0(isChecked);
  }
  else
  {
    v12 = (const char *)qstrerror(0xFFFFFFFFLL);
    sub_169700(
      (int)"Error when saving theme: %s\n",
      (__int64)v12,
      v15,
      v16,
      v17,
      v18,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v19,
      v20,
      a8,
      a9,
      v21);
    sub_1B2EE0();
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, v12);
  }
  return v23 - __readfsqword(0x28u);
}
