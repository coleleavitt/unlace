bool __fastcall sub_21F9CC0(__int64 a1)
{
  bool result; // al

  result = (*(_BYTE *)(a1 + 20) & 6) != 0 && (*(_BYTE *)(a1 + 20) & 7) != 3;
  if ( result )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(*(_QWORD *)a1 + 4LL) )
      return (unsigned int)sub_21F9C90((_QWORD *)a1) == 0;
  }
  return result;
}
