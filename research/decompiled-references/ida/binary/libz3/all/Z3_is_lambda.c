bool __fastcall Z3_is_lambda(__int64 a1, __int64 a2)
{
  char v2; // al
  bool result; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29AD80();
    *(_DWORD *)(a1 + 1520) = 0;
    result = 0;
    if ( *(_WORD *)(a2 + 4) == 2 )
      result = *(_DWORD *)(a2 + 16) == 2;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return *(_WORD *)(a2 + 4) == 2 && *(_DWORD *)(a2 + 16) == 2;
  }
  return result;
}

