__int64 __fastcall sub_D192F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v9; // rbx
  __int64 v10; // rbx
  _BYTE v11[48]; // [rsp+10h] [rbp-A8h] BYREF
  _BYTE v12[48]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+70h] [rbp-48h]
  int v14; // [rsp+78h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_E21760(v4, 64);
  sub_E23260(v12);
  v13 = *(_QWORD *)(v5 + 48);
  v14 = *(_DWORD *)(v5 + 56);
  sub_E21790(v4, 64);
  v6 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( *(_DWORD *)(v6 + 24) || (v7 = 0, *(_DWORD *)(sub_CFDF60(v6) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CFDF60(v6) + 60) )
    {
      sub_CFE430((__int64)v11, v6, a3);
      v7 = sub_DCA140(a1, a2, v11);
      if ( (_BYTE)v7 )
      {
        sub_E24D00(v11);
        v9 = sub_D0EF40((__int64)v11);
        sub_E231E0(v9, v12);
        *(_QWORD *)(v9 + 48) = v13;
        *(_DWORD *)(v9 + 56) = v14;
      }
      sub_E232A0(v11);
    }
    else
    {
      v7 = 1;
      sub_E24D00(v6);
      v10 = sub_D0EF40(v6);
      sub_E231E0(v10, v12);
      *(_QWORD *)(v10 + 48) = v13;
      *(_DWORD *)(v10 + 56) = v14;
    }
  }
  sub_E232A0(v12);
  return v7;
}
