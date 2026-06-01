__int64 *sub_405380()
{
  __int64 *result; // rax
  void (*v1)(void); // rdx

  if ( !byte_65A440 )
  {
    while ( 1 )
    {
      result = off_6531D0;
      v1 = (void (*)(void))*off_6531D0;
      if ( !*off_6531D0 )
        break;
      ++off_6531D0;
      v1();
    }
    byte_65A440 = 1;
  }
  return result;
}

