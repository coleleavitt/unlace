__int64 __fastcall dyld3::open(dyld3 *this, const char *a2, __int64 a3)
{
  int v4; // w20
  __int64 v6; // x0
  __int64 v7; // x22

  v4 = (int)a2;
  do
  {
    if ( (v4 & 0x200) != 0 )
      v6 = open((const char *)this, v4, a3);
    else
      v6 = open_with_subsystem((const char *)this, v4);
    v7 = v6;
  }
  while ( (_DWORD)v6 == -1 && (*__error() == 35 || *__error() == 4) );
  return v7;
}
