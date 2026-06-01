__int64 *sub_3980()
{
  __int64 *result; // rax

  if ( !byte_7020 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_6900);
    result = sub_3910();
    byte_7020 = 1;
  }
  return result;
}

