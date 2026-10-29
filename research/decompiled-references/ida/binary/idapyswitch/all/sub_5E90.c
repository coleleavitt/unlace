__int64 sub_5E90()
{
  int v0; // ebx

  if ( dword_1C318 > 0 )
  {
    v0 = 0;
    do
    {
      ++v0;
      __printf_chk();
    }
    while ( dword_1C318 > v0 );
  }
  return __vfprintf_chk();
}

