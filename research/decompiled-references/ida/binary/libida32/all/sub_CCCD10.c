__int64 __fastcall sub_CCCD10(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE v7[48]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v8[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_DFDA20(v2, 48);
  sub_DFF520(v8);
  sub_DFDA50(v2, 48);
  v3 = *(_QWORD *)(a1 + 560);
  sub_DFDA20(v3, 48);
  sub_DFF520(v7);
  sub_DFDA50(v3, 48);
  v4 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF4A0(v4, v8);
  v5 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF4A0(v5, v7);
  sub_DFF560(v7);
  sub_DFF560(v8);
  return 1;
}

