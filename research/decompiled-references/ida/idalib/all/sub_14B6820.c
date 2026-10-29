char __fastcall sub_14B6820(__int64 a1)
{
  __int16 v1; // dx
  char result; // al

  v1 = *(_WORD *)(a1 + 32);
  if ( (unsigned __int16)(v1 - 24) <= 1u )
    return 1;
  if ( (unsigned __int16)(v1 - 85) <= 0x19u )
  {
    result = ((unsigned __int64)&loc_2000071 >> ((unsigned __int8)v1 - 85)) & 1 | (v1 == 150);
    if ( result )
      return result;
  }
  else
  {
    result = v1 == 150;
    if ( v1 == 150 )
      return result;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
    return (unsigned int)sub_155DB90(a1, 0, 1, 0) == 0;
  else
    return sub_147EA80(a1, 0, 1);
}
