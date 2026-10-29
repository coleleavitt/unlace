__int64 *sub_162A0()
{
  __int64 *result; // rax

  if ( !byte_165960 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&lpdso_handle);
    result = sub_16230();
    byte_165960 = 1;
  }
  return result;
}

