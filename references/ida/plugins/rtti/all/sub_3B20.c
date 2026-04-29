char *sub_3B20()
{
  char *result; // rax

  if ( !byte_15248 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_14CA0);
    result = sub_3AB0();
    byte_15248 = 1;
  }
  return result;
}
