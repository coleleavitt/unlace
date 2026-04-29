char *sub_12A0()
{
  char *result; // rax

  if ( !byte_5130 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D58);
    result = sub_1230();
    byte_5130 = 1;
  }
  return result;
}
