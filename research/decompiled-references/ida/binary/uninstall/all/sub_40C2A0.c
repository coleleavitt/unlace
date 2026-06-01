__int64 __fastcall sub_40C2A0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  double v7; // xmm1_8
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  double v11; // xmm0_8
  __int64 v12; // rax
  double x; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v14[32]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v15[32]; // [rsp+30h] [rbp-38h] BYREF

  if ( a3 != 2 )
  {
    sub_409E40(a2, 2, a3, a4);
    return 1;
  }
  if ( (unsigned int)sub_47BA50(a2, a4[1], &x) )
    return 1;
  v7 = x;
  if ( x >= 0.0 && (x > 1.797693134862316e308 || x < -1.797693134862316e308) )
  {
    v9 = a4[1];
    if ( !(unsigned int)sub_47C9E0(0, v9, v15) )
    {
      sub_4B1320(v14, v9, v10);
      sub_4B26D0(v15, v14);
      sub_4B0400(v15);
      v11 = sub_493FA0(v14);
      v12 = sub_47B930(v11);
      sub_48AFD0(a2, v12);
      sub_4B0400(v14);
      return 0;
    }
    v7 = x;
  }
  v8 = sub_47B930(sqrt(v7));
  sub_48AFD0(a2, v8);
  return 0;
}

