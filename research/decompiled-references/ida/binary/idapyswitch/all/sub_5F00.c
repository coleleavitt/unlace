__int64 sub_5F00()
{
  __int64 result; // rax
  int v1; // ebx

  result = 0;
  if ( (_BYTE)dword_1C340 )
  {
    sub_50B0();
    if ( dword_1C318 > 0 )
    {
      v1 = 0;
      do
      {
        ++v1;
        __printf_chk();
      }
      while ( v1 < dword_1C318 );
    }
    return __vfprintf_chk();
  }
  return result;
}

