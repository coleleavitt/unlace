char __fastcall Z3_ast_map_reset(__int64 a1, __int64 a2)
{
  char v2; // al
  char result; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29EC20();
    *(_DWORD *)(a1 + 1520) = 0;
    sub_26AE20(*(_QWORD *)(a2 + 24), a2 + 32);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return sub_26AE20(*(_QWORD *)(a2 + 24), a2 + 32);
  }
  return result;
}

