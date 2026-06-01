__int64 __fastcall sub_D1F330(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  unsigned int v4; // ebp
  __int64 v5; // rax
  _BYTE v7[48]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v8[24]; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-38h]
  int v11; // [rsp+58h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v7);
  sub_E21790(v2, 48);
  v3 = *(_QWORD *)(a1 + 176);
  sub_E21760(v3, 48);
  sub_E23260(v8);
  sub_E21790(v3, 48);
  v4 = sub_DCBF60(a1, a2, v8);
  if ( (_BYTE)v4 )
  {
    if ( !v9 && v10 && v11 )
    {
      sub_E24D00(v8);
      sub_E23CF0(v8);
    }
    v5 = sub_D0EA30((__int64)v8);
    sub_E23300(v5, v7);
  }
  sub_E232A0(v8);
  sub_E232A0(v7);
  return v4;
}
