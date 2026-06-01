__int64 *sub_5F64A0()
{
  __int64 *result; // rax

  if ( !byte_4AD2080 )
  {
    if ( &_cxa_finalize )
      __cxa_finalize(&off_47CFE00);
    result = sub_5F6430();
    byte_4AD2080 = 1;
  }
  return result;
}

