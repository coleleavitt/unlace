__int64 __fastcall sub_D93C60(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // r13
  __int64 v3; // r12
  __int64 v4; // rax
  _BYTE v6[88]; // [rsp+0h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_BYTE *)sub_DFDA20(v1, 8);
  sub_DFDA50(v1, 8);
  v3 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v3, 48);
  sub_DFF520(v6);
  sub_DFDA50(v3, 48);
  *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v2;
  v4 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v4, v6);
  sub_DFF560(v6);
  return 1;
}

