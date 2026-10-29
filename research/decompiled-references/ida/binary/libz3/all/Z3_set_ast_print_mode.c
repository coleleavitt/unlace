char __fastcall Z3_set_ast_print_mode(__int64 a1, int a2)
{
  char result; // al

  result = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( result )
  {
    sub_29BC10();
    *(_DWORD *)(a1 + 1520) = 0;
    *(_DWORD *)(a1 + 1568) = a2;
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    *(_DWORD *)(a1 + 1568) = a2;
  }
  return result;
}

