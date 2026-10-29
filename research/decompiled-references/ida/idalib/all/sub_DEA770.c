__int64 __fastcall sub_DEA770(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // r12
  __int64 v4; // r12
  unsigned int v5; // r12d
  __int64 v7; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-99h] BYREF
  _BYTE v9[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v10[48]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v11; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v8 = v3;
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v9);
  sub_E21790(v4, 48);
  sub_D41360((__int64)v10, a1, a2, &v8, (__int64)v9, 1);
  v5 = v11;
  if ( v11 )
  {
    v7 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E231E0(v7, v10);
    if ( v11 )
      sub_E232A0(v10);
  }
  sub_E232A0(v9);
  return v5;
}
