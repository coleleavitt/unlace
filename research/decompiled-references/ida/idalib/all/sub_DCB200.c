__int64 __fastcall sub_DCB200(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r12
  __int16 v6; // r14
  unsigned int v7; // ebp
  __int64 v8; // r9
  _DWORD *v9; // rax
  _DWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  _BYTE v14[48]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v15[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( !(unsigned __int8)sub_DCAF70((__int64)a1, a2) )
    return 0;
  v5 = a1[22];
  v6 = *(_WORD *)sub_E21760(v5, 8);
  sub_E21790(v5, 8);
  v7 = sub_CFEEE0((__int64)a1, a2, v6);
  if ( !(_BYTE)v7 )
    return 0;
  v9 = sub_DB0430(a1 + 6, a3, v6, *(_DWORD *)(a1[23] + 32LL), 1, v8);
  v10 = v9;
  if ( v6 )
  {
    v12 = a1[22];
    sub_E23170(v14, v9);
    sub_CFE430((__int64)v15, (__int64)v14, 0);
    v13 = sub_E216C0(v12, 48);
    sub_E23260(v13);
    sub_E232A0(v15);
    sub_E232A0(v14);
  }
  else
  {
    v11 = sub_E216C0(a1[22], 48);
    sub_E23170(v11, v10);
  }
  return v7;
}
