__int64 __fastcall sub_31F9E0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi

  v3 = a1[3];
  v5 = 0;
  if ( v3 )
    v5 = *(_QWORD *)(a1[2] + 8 * v3 - 8);
  sub_31E200(a1[8], v5, a2, a3);
  return 0;
}
