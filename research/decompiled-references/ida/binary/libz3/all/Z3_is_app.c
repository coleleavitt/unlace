char __fastcall Z3_is_app(__int64 a1, __int64 a2)
{
  char result; // al

  result = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( result )
  {
    sub_29A6C0();
    *(_DWORD *)(a1 + 1520) = 0;
    result = 0;
    if ( a2 )
      result = *(_WORD *)(a2 + 4) == 0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
      return *(_WORD *)(a2 + 4) == 0;
  }
  return result;
}

