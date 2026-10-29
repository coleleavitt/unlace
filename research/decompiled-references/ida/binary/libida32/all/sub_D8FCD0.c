__int64 __fastcall sub_D8FCD0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rax
  _BYTE v6[48]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v7[88]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v1, 48);
  sub_DFF520(v7);
  sub_DFDA50(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v6);
  sub_DFDA50(v2, 48);
  v3 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v3, v7);
  v4 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v4, v6);
  sub_DFF560(v6);
  sub_DFF560(v7);
  return 1;
}

