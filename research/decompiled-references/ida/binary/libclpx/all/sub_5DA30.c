__int64 *sub_5DA30()
{
  __int64 *result; // rax

  if ( !byte_4D6D60 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(&off_4CFE00);
    result = sub_5D9A0();
    byte_4D6D60 = 1;
  }
  return result;
}

