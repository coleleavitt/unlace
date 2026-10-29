__int64 __fastcall Z3_get_error_code(__int64 a1)
{
  char v1; // al
  __int64 result; // rax

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v1 )
    return *(unsigned int *)(a1 + 1520);
  sub_29C2A0();
  result = *(unsigned int *)(a1 + 1520);
  byte_1C7EBA0 = 1;
  return result;
}

