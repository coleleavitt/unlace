__int64 __fastcall sub_40CA40(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  int *v10; // rax
  int *v11; // rbp
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v15[32]; // [rsp+10h] [rbp-38h] BYREF

  if ( (unsigned int)sub_40C820(0, a2, a3, a4) )
    return 1;
  v6 = sub_48B5D0(a2);
  if ( (unsigned int)sub_47C250(0, v6, &v14) )
  {
    sub_47C9E0(0, v6, v15);
    sub_4B1D30(v15, 64, v15);
    v10 = (int *)sub_47CCC0(v15, 64, v9);
    ++*v10;
    v11 = v10;
    v6 = (__int64)v10;
    sub_47C250(0, v10, &v14);
    v12 = *v11 - 1;
    v13 = *v11 == 1;
    *v11 = v12;
    if ( v12 < 0 || v13 )
      sub_47B120(v11);
  }
  v8 = sub_47CDC0(v14, v6, v7);
  sub_48AFD0(a2, v8);
  return 0;
}

