__int64 __fastcall dyld3::openat(dyld3 *this, const char *a2, const char *a3)
{
  int v4; // w20
  __int64 result; // x0

  v4 = (int)this;
  for ( result = openat((int)this, a2, 0, 0); (_DWORD)result == -1; result = openat(v4, a2, 0, 0) )
  {
    if ( *__error() != 35 && *__error() != 4 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
