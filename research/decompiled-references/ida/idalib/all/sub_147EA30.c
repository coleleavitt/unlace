__int64 __fastcall sub_147EA30(__int64 a1)
{
  __int16 v1; // dx

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 13LL) & 6) == 0 )
    return 0;
  v1 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v1 - 7) > 0xCu && v1 != 1 )
  {
    if ( *(_QWORD *)(a1 + 376) == *(_QWORD *)(a1 + 24) )
      return sub_147E8E0(a1);
    return 0;
  }
  if ( *(_QWORD *)(a1 + 376) )
    return 0;
  return sub_147E8E0(a1);
}
