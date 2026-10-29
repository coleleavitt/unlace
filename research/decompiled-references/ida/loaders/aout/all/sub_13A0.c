char *sub_13A0()
{
  char *result; // rax

  if ( !byte_6180 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_5D00);
    result = sub_1330();
    byte_6180 = 1;
  }
  return result;
}

