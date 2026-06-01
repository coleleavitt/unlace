__int64 __fastcall Z3_ast_map_size(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29EC60();
    *(_DWORD *)(a1 + 1520) = 0;
    result = *(unsigned int *)(a2 + 44);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return *(unsigned int *)(a2 + 44);
  }
  return result;
}

