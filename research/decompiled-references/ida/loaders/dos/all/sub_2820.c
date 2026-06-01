void *sub_2820()
{
  void *result; // rax

  if ( !byte_B380 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_AD48);
    result = sub_27B0();
    byte_B380 = 1;
  }
  return result;
}

