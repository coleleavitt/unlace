char __fastcall Z3_tactic_dec_ref(__int64 a1, __int64 a2)
{
  char result; // al

  result = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( result )
  {
    sub_29C8D0();
    if ( a2 )
      sub_24FBC0(a2);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else if ( a2 )
  {
    return sub_24FBC0(a2);
  }
  return result;
}

