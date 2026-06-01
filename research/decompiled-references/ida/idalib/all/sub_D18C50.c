__int64 __fastcall sub_D18C50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  unsigned int v6; // r15d
  __int64 v8; // [rsp+8h] [rbp-70h]
  _BYTE v9[104]; // [rsp+10h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  v8 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( *(_DWORD *)(v5 + 24) || (v6 = 0, *(_DWORD *)(sub_CFDF60(v5) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CFDF60(v5) + 60) )
    {
      sub_CFE430((__int64)v9, v5, a3);
      v6 = sub_DCA140(a1, a2, v9);
      if ( (_BYTE)v6 )
      {
        sub_E24D00(v9);
        *(_QWORD *)sub_D0DBD0((__int64)v9) = v8;
      }
      sub_E232A0(v9);
    }
    else
    {
      v6 = 1;
      sub_E24D00(v5);
      *(_QWORD *)sub_D0DBD0(v5) = v8;
    }
  }
  return v6;
}
