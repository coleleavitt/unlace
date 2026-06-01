__int64 __fastcall Z3_get_func_decl_id(__int64 a1, unsigned int *a2)
{
  char v2; // al
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A000();
    *(_DWORD *)(a1 + 1520) = 0;
    result = *a2;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return *a2;
  }
  return result;
}

