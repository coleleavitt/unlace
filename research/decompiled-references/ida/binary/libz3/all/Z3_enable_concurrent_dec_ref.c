char __fastcall Z3_enable_concurrent_dec_ref(__int64 a1)
{
  char result; // al

  result = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( result )
  {
    sub_294C80();
    *(_BYTE *)(a1 + 225) = 1;
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 225) = 1;
  }
  return result;
}

