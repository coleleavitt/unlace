__int64 __fastcall sub_D1AEB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // rax
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars30[88]; // [rsp+30h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(_0);
  sub_E21790(v4, 48);
  v5 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v6 = sub_DC8DB0(a1, a2, v5, 2);
  if ( (_BYTE)v6 )
  {
    sub_E23220(vars30, *(_QWORD *)(v5 + 32), (unsigned int)(a3 + *(_DWORD *)v5), (unsigned int)(a3 + *(_DWORD *)v5));
    v7 = sub_D0EA30((__int64)vars30);
    sub_E23300(v7, _0);
    sub_E23CF0(vars30);
    sub_E24D00(vars30);
    sub_E232A0(vars30);
  }
  sub_E232A0(_0);
  return v6;
}
