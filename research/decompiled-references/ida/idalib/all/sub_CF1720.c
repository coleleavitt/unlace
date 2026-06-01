__int64 __fastcall sub_CF1720(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars30[48]; // [rsp+30h] [rbp+30h] BYREF
  __int64 vars60; // [rsp+60h] [rbp+60h]
  int vars68; // [rsp+68h] [rbp+68h]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_E21760(v2, 48);
  sub_E23260(_0);
  sub_E21790(v2, 48);
  v3 = *(_QWORD *)(a1 + 560);
  v4 = sub_E21760(v3, 64);
  sub_E23260(vars30);
  vars60 = *(_QWORD *)(v4 + 48);
  vars68 = *(_DWORD *)(v4 + 56);
  sub_E21790(v3, 64);
  v5 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
  sub_E231E0(v5, _0);
  v6 = sub_E216C0(*(_QWORD *)(a1 + 560), 64);
  sub_E231E0(v6, vars30);
  *(_QWORD *)(v6 + 48) = vars60;
  *(_DWORD *)(v6 + 56) = vars68;
  sub_E232A0(vars30);
  sub_E232A0(_0);
  return 1;
}
