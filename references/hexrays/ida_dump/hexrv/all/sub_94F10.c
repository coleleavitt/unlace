__int64 __fastcall sub_94F10(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 24);
  BYTE1(v2) &= ~2u;
  LOBYTE(v2) = v2 | 0x80;
  *(_DWORD *)(a1 + 24) = v2;
  sub_119110(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
  return sub_94E10(a1, a2);
}
