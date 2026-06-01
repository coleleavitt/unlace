void *sub_8E100()
{
  void *result; // rax

  if ( !byte_2503A0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_22E220);
    result = sub_8E090();
    byte_2503A0 = 1;
  }
  return result;
}

