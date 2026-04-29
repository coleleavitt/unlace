bool __fastcall sub_9D440(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 32) == 15 && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 48LL), 2) & 0xF) == 9 )
    return 0;
  if ( *(_BYTE *)(a1 + 48) == 15 && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL), 2) & 0xF) == 9 )
    return 0;
  if ( *(_BYTE *)(a1 + 64) == 15 )
    return (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 48LL), 2) & 0xF) != 9;
  return 1;
}
