void *sub_63770()
{
  void *result; // rax

  if ( !byte_4EA980 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4D61C0);
    result = sub_63700();
    byte_4EA980 = 1;
  }
  return result;
}
