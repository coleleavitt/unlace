char *sub_E450()
{
  char *result; // rax

  if ( !byte_B8CC0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_B7160);
    result = sub_E3E0();
    byte_B8CC0 = 1;
  }
  return result;
}

