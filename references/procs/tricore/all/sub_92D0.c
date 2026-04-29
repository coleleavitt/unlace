void *sub_92D0()
{
  void *result; // rax

  if ( !byte_24560 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_21D60);
    result = sub_9260();
    byte_24560 = 1;
  }
  return result;
}
