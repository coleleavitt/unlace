__int64 __fastcall sub_CCD020(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // rax
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_DFDA20(v2, 48);
  sub_DFF520(savedregs);
  sub_DFDA50(v2, 48);
  v3 = *(_QWORD *)(a1 + 560);
  v4 = *(_DWORD *)sub_DFDA20(v3, 8);
  sub_DFDA50(v3, 8);
  v5 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
  sub_DFF4A0(v5, savedregs);
  *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v4;
  sub_DFF560(savedregs);
  return 1;
}

