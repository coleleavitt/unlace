char *sub_5FF0()
{
  char *result; // rax

  if ( !byte_1A370 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_185A0);
    result = sub_5F80();
    byte_1A370 = 1;
  }
  return result;
}
