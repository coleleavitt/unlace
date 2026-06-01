char *sub_3A60()
{
  char *result; // rax

  if ( !byte_132C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_12940);
    result = sub_39F0();
    byte_132C0 = 1;
  }
  return result;
}

