__int64 __fastcall sub_6130A0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 *v13; // rbx
  __int64 *i; // r14

  v9 = sub_186B270(0xF8u);
  sub_63D370(v9, *(_QWORD *)(a1 + 24));
  v13 = *(__int64 **)(a2 + 24);
  if ( v13 )
  {
    for ( i = &v13[*((unsigned int *)v13 - 1)]; i != v13; ++v13 )
      sub_612E20(a1, *v13, 0, a2, v9, a3);
  }
  sub_63DFA0(v9, a2, v10, a3, a4, a5, a6, v11, v12, a9);
  return v9;
}

