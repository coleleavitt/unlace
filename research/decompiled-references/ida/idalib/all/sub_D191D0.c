__int64 __fastcall sub_D191D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned int v6; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v11[104]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v10);
  sub_E21790(v4, 48);
  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( *(_DWORD *)(v5 + 24) || (v6 = 0, *(_DWORD *)(sub_CFDF60(v5) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CFDF60(v5) + 60) )
    {
      sub_CFE430((__int64)v11, v5, a3);
      v6 = sub_DCA140(a1, a2, v11);
      if ( (_BYTE)v6 )
      {
        sub_E24D00(v11);
        v8 = sub_D0EA30((__int64)v11);
        sub_E231E0(v8, v10);
      }
      sub_E232A0(v11);
    }
    else
    {
      v6 = 1;
      sub_E24D00(v5);
      v9 = sub_D0EA30(v5);
      sub_E231E0(v9, v10);
    }
  }
  sub_E232A0(v10);
  return v6;
}
