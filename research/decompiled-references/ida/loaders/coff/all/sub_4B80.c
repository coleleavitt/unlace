char *sub_4B80()
{
  char *result; // rax

  if ( !byte_23418 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_22300);
    result = sub_4B10();
    byte_23418 = 1;
  }
  return result;
}

