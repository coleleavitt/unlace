__int64 __fastcall sub_98660(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 24);
  BYTE1(v2) &= ~2u;
  LOBYTE(v2) = v2 | 0x80;
  *(_DWORD *)(a1 + 24) = v2;
  sub_11B190(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
  return sub_98560(a1, a2);
}
