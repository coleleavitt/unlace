char *sub_5F2E0()
{
  char *result; // rax

  if ( !byte_4C1B40 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4AF4E0);
    result = sub_5F270();
    byte_4C1B40 = 1;
  }
  return result;
}
