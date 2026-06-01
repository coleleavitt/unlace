__int64 __fastcall sub_CE6900(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = sub_DFDA20(a2, 64);
  sub_DFF520(a1);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(v2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(v2 + 56);
  sub_DFDA50(a2, 64);
  return a1;
}

