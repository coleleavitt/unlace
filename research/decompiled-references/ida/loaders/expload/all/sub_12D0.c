char *sub_12D0()
{
  char *result; // rax

  if ( !byte_5138 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D50);
    result = sub_1260();
    byte_5138 = 1;
  }
  return result;
}

