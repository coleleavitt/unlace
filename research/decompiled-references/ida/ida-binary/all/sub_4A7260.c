__int64 __fastcall sub_4A7260(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // ebp
  __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8

  v10 = sub_4A6DB0(a1, nullptr, 1, a2, a3, a4, a5, a6, a7, a8, a9);
  LOBYTE(v9) = v10 != 0;
  if ( v10 )
    sub_4A6B30(a1, (_BYTE *)&qword_68 + 1, 0, (_BYTE *)&qword_68 + 1, 0, 1, a2, a3, a4, a5, v11, v12, a8, a9, 7u);
  return v9;
}
