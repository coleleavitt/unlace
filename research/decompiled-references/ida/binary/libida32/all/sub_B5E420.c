__int64 __fastcall sub_B5E420(__int64 a1)
{
  unsigned __int64 v1; // rax
  char v3; // al
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi

  v1 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v1 = *(_QWORD *)v1;
  if ( ((*(_BYTE *)(v1 + 8) + 70) & 0x7Fu) <= 3 )
    return 0;
  v3 = sub_B5DE30(a1);
  if ( v3 != 3 && v3 != 6 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 1LL) & 8) == 0 )
    return 1;
  v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v4 = *(_QWORD *)v4;
  if ( ((*(_BYTE *)(v4 + 8) + 70) & 0x7Fu) <= 3 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) & 4) != 0 )
    return sub_B6A780(*(_QWORD *)(v5 + 8));
  else
    return sub_B6A780(v5);
}

