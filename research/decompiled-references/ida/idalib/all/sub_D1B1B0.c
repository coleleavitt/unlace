__int64 __fastcall sub_D1B1B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // r13
  _BYTE v8[48]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v9[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_E21760(v2, 64);
  sub_E23260(v9);
  v10 = *(_QWORD *)(v3 + 48);
  v11 = *(_DWORD *)(v3 + 56);
  sub_E21790(v2, 64);
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v8);
  sub_E21790(v4, 48);
  v5 = sub_DCA140(a1, a2, v8);
  if ( (_BYTE)v5 )
  {
    sub_E23CF0(v8);
    sub_E24D00(v8);
    v6 = sub_D0EF40((__int64)v8);
    sub_E231E0(v6, v9);
    *(_QWORD *)(v6 + 48) = v10;
    *(_DWORD *)(v6 + 56) = v11;
  }
  sub_E232A0(v8);
  sub_E232A0(v9);
  return v5;
}
