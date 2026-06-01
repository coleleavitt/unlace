void *sub_1210()
{
  void *result; // rax

  if ( !byte_5100 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D50);
    result = sub_11A0();
    byte_5100 = 1;
  }
  return result;
}

