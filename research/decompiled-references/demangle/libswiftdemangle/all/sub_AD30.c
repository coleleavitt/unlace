char *sub_AD30()
{
  char *result; // rax

  if ( !byte_483C0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_47C70);
    result = sub_ACC0();
    byte_483C0 = 1;
  }
  return result;
}
