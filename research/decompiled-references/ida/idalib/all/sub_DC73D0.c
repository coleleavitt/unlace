__int64 __fastcall sub_DC73D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned int v4; // r12d
  __int64 v6; // rax
  _BYTE v7[48]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned __int8 v8; // [rsp+30h] [rbp-78h]
  _BYTE v9[48]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_E21760(v2, 64);
  sub_E23260(v9);
  v10 = *(_QWORD *)(v3 + 48);
  v11 = *(_DWORD *)(v3 + 56);
  sub_E21790(v2, 64);
  sub_E33DF0(v7, v9, *(_QWORD *)(a1 + 184));
  v4 = v8;
  if ( v8 )
  {
    v6 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E231E0(v6, v7);
    if ( v8 )
      sub_E232A0(v7);
  }
  else
  {
    v4 = sub_CFEE20(a1, a2);
  }
  sub_E232A0(v9);
  return v4;
}
