bool __fastcall sub_C6FDC0(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a1 + 16) == 2 )
    return ((*(_BYTE *)(a1 + 3) >> 1) & 0x3Fu) - 42 > 1;
  return result;
}

