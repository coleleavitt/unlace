__int64 __fastcall sub_CCD0E0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  sub_DFDA20(v4, 48);
  sub_DFF520(v7);
  sub_DFDA50(v4, 48);
  *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v3;
  v5 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF4A0(v5, v7);
  sub_DFF560(v7);
  return 1;
}

