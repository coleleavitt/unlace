__int64 __fastcall sub_B977A0(__int64 a1, unsigned int a2, double a3)
{
  __int64 v3; // rbp
  double *v4; // rax
  double v5; // xmm0_8

  v3 = *(_QWORD *)(a1 - 40);
  v4 = (double *)(*(_QWORD *)(v3 + 8880) + 8LL * a2);
  v5 = a3 * *(double *)(v3 + 8960) + *v4;
  *v4 = v5;
  if ( v5 > 1.0e100 )
    sub_8E86F0(v3);
  return (***(__int64 (__fastcall ****)(_QWORD))(v3 + 8952))(*(_QWORD *)(v3 + 8952));
}

