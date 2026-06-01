_BOOL8 __fastcall Z3_get_symbol_kind(__int64 a1, char a2)
{
  char v2; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_299610();
    *(_DWORD *)(a1 + 1520) = 0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
  }
  return (a2 & 7) != 1;
}

