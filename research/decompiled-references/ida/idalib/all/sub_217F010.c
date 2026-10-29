bool __fastcall sub_217F010(__int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(a2 + 8) & 2) != 0 )
    return *(_DWORD *)(a2 + 4) == 8;
  return result;
}
