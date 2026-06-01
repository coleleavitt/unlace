char __fastcall Z3_get_version(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  char result; // al

  result = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( result )
  {
    sub_29C320();
    *a1 = 4;
    *a2 = 15;
    *a3 = 3;
    *a4 = 0;
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *a1 = 4;
    *a2 = 15;
    *a3 = 3;
    *a4 = 0;
  }
  return result;
}

