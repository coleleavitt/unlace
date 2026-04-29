unsigned __int64 __fastcall sub_34480(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 12LL) & 8) == 0 )
    return v2;
  v2 = a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( (a2 & 1) == 0 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 528LL) != a2 )
    return v2;
  sub_101F0(0x57u, v2, a2 & 1);
  auto_mark_range(v2, v2 + 1, 20);
  return a2 & 0xFFFFFFFFFFFFFFFELL;
}
