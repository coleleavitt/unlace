void *sub_3810()
{
  void *result; // rax

  if ( !byte_13240 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_12B80);
    result = sub_37A0();
    byte_13240 = 1;
  }
  return result;
}
