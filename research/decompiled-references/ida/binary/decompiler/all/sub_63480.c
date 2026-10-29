char *sub_63480()
{
  char *result; // rax

  if ( !byte_4ED720 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_4DB300);
    result = sub_63410();
    byte_4ED720 = 1;
  }
  return result;
}
