__int64 __fastcall sub_B5DEB0(__int64 a1)
{
  unsigned __int64 v1; // rax
  char v2; // al
  unsigned __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  if ( ((*(_BYTE *)(v1 + 8) + 70) & 0x7Fu) <= 3 )
    return 0;
  v2 = sub_B5DE30(a1);
  if ( v2 != 3 && v2 != 6 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 1LL) & 8) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v3 = *(_QWORD *)v3;
    if ( ((*(_BYTE *)(v3 + 8) + 70) & 0x7Fu) > 3 )
      return sub_B50F80(*(_QWORD *)(a1 + 112));
    return 0;
  }
  return 1;
}

