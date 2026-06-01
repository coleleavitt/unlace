__int64 *sub_A1D0()
{
  __int64 *result; // rax

  if ( !byte_7A900 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_78C40);
    result = sub_A160();
    byte_7A900 = 1;
  }
  return result;
}

