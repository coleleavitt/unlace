char *sub_1140()
{
  char *result; // rax

  if ( !byte_4090 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D58);
    result = sub_10D0();
    byte_4090 = 1;
  }
  return result;
}
