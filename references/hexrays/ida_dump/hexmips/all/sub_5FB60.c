void *sub_5FB60()
{
  void *result; // rax

  if ( !byte_4CE980 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4BC280);
    result = sub_5FAF0();
    byte_4CE980 = 1;
  }
  return result;
}
