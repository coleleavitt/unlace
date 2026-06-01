char __fastcall sub_1E4C3F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  if ( !*(_DWORD *)(a2 + 24) )
    return 0;
  v3 = **(_QWORD **)(a2 + 16);
  if ( !v3 )
    return 0;
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 53 > 1 && (((*(_BYTE *)(v3 + 28) & 0x7F) + 52) & 0x7Fu) > 1 )
    return sub_B8BED0(v3);
  v3 = sub_B72ED0(v3);
  if ( v3 )
    return sub_B8BED0(v3);
  return 0;
}
