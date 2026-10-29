bool __fastcall sub_16A95D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  bool result; // al

  v2 = (*(_BYTE *)(a2 + 18) >> 3) & 0xF;
  result = 1;
  if ( v2 != 1 )
  {
    result = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 201LL) & 3) == 2 )
      return (unsigned int)v2 - 2 <= 1;
  }
  return result;
}
