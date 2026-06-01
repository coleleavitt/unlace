__int64 __fastcall sub_D2A480(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 v3; // r12
  __int64 v4; // r12
  unsigned int v5; // r13d
  __int64 v7; // rax
  unsigned __int16 v8; // [rsp+Eh] [rbp-9Ah] BYREF
  _BYTE v9[24]; // [rsp+10h] [rbp-98h] BYREF
  int v10; // [rsp+28h] [rbp-80h]
  _BYTE v11[48]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v12; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v8 = v3;
  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v9);
  sub_E21790(v4, 48);
  if ( !v10 )
  {
    sub_CFE160((__int64)v11, (__int64)v9);
    sub_E23400(v9, v11);
    sub_E232A0(v11);
  }
  sub_D2A130((__int64)v11, a1, a2, &v8, (__int64)v9, 1);
  v5 = v12;
  if ( v12 )
  {
    v7 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E231E0(v7, v11);
    if ( v12 )
      sub_E232A0(v11);
  }
  sub_E232A0(v9);
  return v5;
}
