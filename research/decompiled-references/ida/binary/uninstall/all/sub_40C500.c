__int64 __fastcall sub_40C500(double (__fastcall *a1)(double, double), __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v5; // edx
  int v7; // eax
  int v8; // eax
  int *v9; // rax
  double v10; // xmm1_8
  double v11; // xmm0_8
  double v12; // [rsp+0h] [rbp-28h] BYREF
  double v13; // [rsp+8h] [rbp-20h] BYREF

  if ( a3 == 3 )
  {
    v7 = sub_47BA50(a2, a4[1], &v13);
    v5 = 1;
    if ( !v7 )
    {
      v8 = sub_47BA50(a2, a4[2], &v12);
      v5 = 1;
      if ( !v8 )
      {
        v9 = __errno_location();
        v10 = v12;
        *v9 = 0;
        v11 = a1(v13, v10);
        return (unsigned int)sub_40C3D0(a2, v11);
      }
    }
  }
  else
  {
    sub_409E40(a2, 3, a3, a4);
    return 1;
  }
  return v5;
}

