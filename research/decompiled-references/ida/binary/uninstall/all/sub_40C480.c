__int64 __fastcall sub_40C480(double (__fastcall *a1)(double), __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v4; // edx
  int v6; // eax
  int *v7; // rax
  double v8; // xmm0_8
  double v9; // xmm0_8
  double v10; // [rsp+0h] [rbp-18h] BYREF

  if ( a3 == 2 )
  {
    v6 = sub_47BA50(a2, a4[1], &v10);
    v4 = 1;
    if ( !v6 )
    {
      v7 = __errno_location();
      v8 = v10;
      *v7 = 0;
      v9 = a1(v8);
      return (unsigned int)sub_40C3D0(a2, v9);
    }
  }
  else
  {
    sub_409E40(a2, 2, a3, a4);
    return 1;
  }
  return v4;
}

