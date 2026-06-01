void *sub_355FF0()
{
  void *result; // rax

  if ( !byte_2CA12E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_2AFC540);
    result = sub_355F80();
    byte_2CA12E0 = 1;
  }
  return result;
}

