__int64 __fastcall sub_CCE2F0(_QWORD *a1)
{
  __int64 v1; // rbp
  int v2; // r13d
  __int64 v3; // rbp
  __int64 v4; // r12
  _DWORD *v5; // rax
  __int64 v6; // rdi

  v1 = *a1;
  v2 = *(_DWORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v1, 8);
  v3 = *a1;
  v4 = *(_QWORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v3, 8);
  v5 = (_DWORD *)sub_DFD980(*a1, 8);
  v6 = *a1;
  *v5 = v2;
  *(_QWORD *)sub_DFD980(v6, 8) = v4;
  return 1;
}

