void __fastcall Z3_params_dec_ref(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_294D00(a1, a2);
    if ( a2 )
      sub_24FBC0(a2);
    byte_1C7EBA0 = 1;
  }
  else if ( a2 )
  {
    sub_24FBC0(a2);
  }
}

