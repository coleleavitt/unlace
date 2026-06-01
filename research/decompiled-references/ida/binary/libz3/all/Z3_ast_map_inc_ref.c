void __fastcall Z3_ast_map_inc_ref(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29EA90();
    *(_DWORD *)(a1 + 1520) = 0;
    sub_24E8F0(a2);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    sub_24E8F0(a2);
  }
}

