__int64 __fastcall dyld3::stat(dyld3 *this, const char *a2, stat *a3)
{
  const char *v3; // x19
  dyld3 *v4; // x20
  __int64 result; // x0

  v3 = a2;
  v4 = this;
  while ( 1 )
  {
    result = stat_with_subsystem(this, a2, a3);
    if ( (_DWORD)result != -1 )
      break;
    if ( *__error() != 35 && *__error() != 4 )
      return 0xFFFFFFFFLL;
    this = v4;
    a2 = v3;
  }
  return result;
}
