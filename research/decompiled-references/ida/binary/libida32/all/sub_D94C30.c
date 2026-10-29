__int64 __fastcall sub_D94C30(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE _0[48]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars30[48]; // [rsp+30h] [rbp+30h] BYREF
  __int64 vars60; // [rsp+60h] [rbp+60h]
  int vars68; // [rsp+68h] [rbp+68h]

  v1 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v1, 48);
  sub_DFF520(_0);
  sub_DFDA50(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  v3 = sub_DFDA20(v2, 64);
  sub_DFF520(vars30);
  vars60 = *(_QWORD *)(v3 + 48);
  vars68 = *(_DWORD *)(v3 + 56);
  sub_DFDA50(v2, 64);
  v4 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v4, _0);
  v5 = sub_DFD980(*(_QWORD *)(a1 + 176), 64);
  sub_DFF4A0(v5, vars30);
  *(_QWORD *)(v5 + 48) = vars60;
  *(_DWORD *)(v5 + 56) = vars68;
  sub_DFF560(vars30);
  sub_DFF560(_0);
  return 1;
}

