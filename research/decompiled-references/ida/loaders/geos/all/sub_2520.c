char *sub_2520()
{
  char *result; // rax

  if ( !byte_8258 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_7D50);
    result = sub_24B0();
    byte_8258 = 1;
  }
  return result;
}

