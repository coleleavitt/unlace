void *sub_8E1E0()
{
  void *result; // rax

  if ( !byte_251400 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_22F2A0);
    result = sub_8E170();
    byte_251400 = 1;
  }
  return result;
}

