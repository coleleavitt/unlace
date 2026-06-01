char *sub_12C0()
{
  char *result; // rax

  if ( !byte_5150 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D00);
    result = sub_1250();
    byte_5150 = 1;
  }
  return result;
}

