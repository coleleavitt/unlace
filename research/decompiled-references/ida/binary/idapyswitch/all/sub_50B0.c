__int64 __fastcall sub_50B0()
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
    while ( v0 < dword_1C318 );
  }
  return __vfprintf_chk();
}

