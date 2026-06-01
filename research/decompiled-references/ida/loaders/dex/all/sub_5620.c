char *sub_5620()
{
  char *result; // rax

  if ( !byte_28400 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_27960);
    result = sub_55B0();
    byte_28400 = 1;
  }
  return result;
}

