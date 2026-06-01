__int64 __fastcall sub_40C820(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v6; // edx
  int v8; // eax
  __int64 v9; // rsi
  double v10; // xmm1_8
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  double *v14; // [rsp+10h] [rbp-48h] BYREF
  int v15; // [rsp+1Ch] [rbp-3Ch] BYREF
  _BYTE v16[40]; // [rsp+20h] [rbp-38h] BYREF

  if ( a3 == 2 )
  {
    v8 = sub_47CE30(a2, a4[1], &v14, &v15);
    v6 = 1;
    if ( v8 )
      return v6;
    if ( v15 == 4 )
    {
      v10 = *v14;
      if ( *v14 < 9.223372036854776e18 && v10 > -9.223372036854776e18 )
      {
        v12 = sub_47BE30((unsigned int)(int)v10);
      }
      else
      {
        v11 = sub_493E90(a2, v16, v10);
        v6 = 1;
        if ( v11 )
          return v6;
        v12 = sub_47CCC0(v16, v16, 1);
      }
      v9 = v12;
    }
    else
    {
      if ( v15 == 5 )
      {
        sub_47BA50(a2, a4[1], &v13);
        return 1;
      }
      v9 = a4[1];
    }
    sub_48AFD0(a2, v9);
    return 0;
  }
  sub_409E40(a2, 2, a3, a4);
  return 1;
}

