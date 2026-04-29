void *sub_5D800()
{
  void *result; // rax

  if ( !byte_4BA960 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4A8340);
    result = sub_5D790();
    byte_4BA960 = 1;
  }
  return result;
}
