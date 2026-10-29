__int64 *sub_22A8C0()
{
  __int64 *result; // rax

  if ( !byte_1C7EB80 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_1C4BFE0);
    result = sub_22A850();
    byte_1C7EB80 = 1;
  }
  return result;
}

