__int64 *__fastcall sub_5B5EF0(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  _QWORD *v9; // rax
  double v10; // xmm4_8
  double v11; // xmm5_8
  void *v12; // rbx
  __int64 *v13; // rbp

  v9 = sub_5B1320((__int64)a1, a2, a3, a4, a5, a6, a7, a8, a9);
  v12 = v9;
  if ( !v9 )
    return sub_5B3A90(a1, a2, a3, a4, a5, a6, v10, v11, a9);
  v13 = sub_5B3A90(a1, (__int64)v9, a3, a4, a5, a6, v10, v11, a9);
  if ( !v13 )
    return (__int64 *)v12;
  sub_63D960(v12);
  sub_186B220(v12);
  return v13;
}

