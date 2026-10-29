char *sub_23B0()
{
  char *result; // rax

  if ( !byte_71B0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_6D58);
    result = sub_2340();
    byte_71B0 = 1;
  }
  return result;
}

