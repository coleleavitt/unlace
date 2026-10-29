char *sub_1190()
{
  char *result; // rax

  if ( !byte_6058 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_6050);
    result = sub_1120();
    byte_6058 = 1;
  }
  return result;
}

