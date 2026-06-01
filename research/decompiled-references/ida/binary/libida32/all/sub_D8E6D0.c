__int64 __fastcall sub_D8E6D0(__int64 a1)
{
  __int64 v1; // r12
  __int16 v2; // bx

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_WORD *)sub_DFDA20(v1, 8);
  sub_DFDA50(v1, 8);
  *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = -v2;
  return 1;
}

