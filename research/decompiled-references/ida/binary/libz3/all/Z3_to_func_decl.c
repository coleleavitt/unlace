__int64 __fastcall Z3_to_func_decl(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A840();
    *(_DWORD *)(a1 + 1520) = 0;
    sub_2BB620(a2);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
  }
  return a2;
}

