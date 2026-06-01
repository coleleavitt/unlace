char *sub_2650()
{
  char *result; // rax

  if ( !byte_81B8 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_78C0);
    result = sub_25E0();
    byte_81B8 = 1;
  }
  return result;
}

