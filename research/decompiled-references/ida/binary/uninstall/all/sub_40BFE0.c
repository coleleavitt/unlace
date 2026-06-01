__int64 __fastcall sub_40BFE0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v5; // edx
  int v7; // eax
  double v8; // xmm0_8
  __int64 v9; // rax
  double v10; // xmm0_8
  __int64 v11; // rax
  double x; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v13[32]; // [rsp+10h] [rbp-38h] BYREF

  if ( a3 == 2 )
  {
    v7 = sub_47BA50(a2, a4[1], &x);
    v5 = 1;
    if ( !v7 )
    {
      if ( (unsigned int)sub_47C9E0(0, a4[1], v13) )
      {
        v10 = floor(x);
        v11 = sub_47B930(v10);
        sub_48AFD0(a2, v11);
      }
      else
      {
        v8 = sub_495F30(v13);
        v9 = sub_47B930(v8);
        sub_48AFD0(a2, v9);
        sub_4B0400(v13);
      }
      return 0;
    }
  }
  else
  {
    sub_409E40(a2, 2, a3, a4);
    return 1;
  }
  return v5;
}

