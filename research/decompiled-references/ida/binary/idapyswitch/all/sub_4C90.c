char *sub_4C90()
{
  char *result; // rax

  if ( !byte_1C2E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1BB40);
    result = sub_4C20();
    byte_1C2E0 = 1;
  }
  return result;
}

