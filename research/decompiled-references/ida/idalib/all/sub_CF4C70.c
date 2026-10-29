__int64 __fastcall sub_CF4C70(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rdi
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars30; // [rsp+30h] [rbp+30h]
  int vars38; // [rsp+38h] [rbp+38h]

  v1 = *a1;
  v2 = sub_E21760(*a1, 64);
  sub_E23260(_0);
  vars30 = *(_QWORD *)(v2 + 48);
  vars38 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  v3 = *a1;
  v4 = *(_QWORD *)sub_E21760(*a1, 8);
  sub_E21790(v3, 8);
  v5 = sub_E216C0(*a1, 64);
  sub_E231E0(v5, _0);
  v6 = *a1;
  *(_QWORD *)(v5 + 48) = vars30;
  *(_DWORD *)(v5 + 56) = vars38;
  *(_QWORD *)sub_E216C0(v6, 8) = v4;
  sub_E232A0(_0);
  return 1;
}
