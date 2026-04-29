bool __fastcall sub_15B50(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_WORD *)(a1 + 24) == 122 && *(_BYTE *)(a1 + 41) == 1 )
    return *(_WORD *)(a1 + 46) == 0;
  return result;
}
