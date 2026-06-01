__int64 __fastcall sub_D8EC50(_QWORD *a1)
{
  __int64 v1; // r12
  __int16 v2; // r13
  __int64 v3; // r12
  __int16 v4; // bx

  v1 = *a1;
  v2 = *(_WORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v1, 8);
  v3 = *a1;
  v4 = *(_WORD *)sub_DFDA20(*a1, 8);
  sub_DFDA50(v3, 8);
  *(_WORD *)sub_DFD980(*a1, 8) = v2 + v4;
  return 1;
}

