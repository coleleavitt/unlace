void *sub_3593B0()
{
  void *result; // rax

  if ( !byte_2CCB1E0 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_2B25620);
    result = sub_359340();
    byte_2CCB1E0 = 1;
  }
  return result;
}
