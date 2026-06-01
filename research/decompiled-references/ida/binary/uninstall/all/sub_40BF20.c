__int64 __fastcall sub_40BF20(double a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned int v7; // edx
  int v9; // eax
  __int64 v10; // rsi
  double v11; // xmm0_8
  __int64 v12; // rax
  double x; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v14[32]; // [rsp+10h] [rbp-38h] BYREF

  if ( a4 == 2 )
  {
    v9 = sub_47BA50(a3, a5[1], &x);
    v7 = 1;
    if ( !v9 )
    {
      if ( (unsigned int)sub_47C9E0(0, a5[1], v14) )
      {
        v11 = ceil(x);
        v12 = sub_47B930(v11);
        sub_48AFD0(a3, v12);
      }
      else
      {
        sub_495D90(v14);
        v10 = sub_47B930(a1);
        sub_48AFD0(a3, v10);
        sub_4B0400(v14);
      }
      return 0;
    }
  }
  else
  {
    sub_409E40(a3, 2, a4, a5);
    return 1;
  }
  return v7;
}

