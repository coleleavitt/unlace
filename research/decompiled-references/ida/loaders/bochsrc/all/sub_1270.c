void *sub_1270()
{
  void *result; // rax

  if ( !byte_4120 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_3D50);
    result = sub_1200();
    byte_4120 = 1;
  }
  return result;
}

