__int64 __fastcall sub_D94340(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r12
  int v3; // r13d
  __int64 v4; // rax
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v1, 48);
  sub_DFF520(savedregs);
  sub_DFDA50(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v4, savedregs);
  *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v3;
  sub_DFF560(savedregs);
  return 1;
}

