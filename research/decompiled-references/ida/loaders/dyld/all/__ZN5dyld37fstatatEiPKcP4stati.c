__int64 __fastcall dyld3::fstatat(dyld3 *this, const char *a2, stat *a3, stat *a4)
{
  int v4; // w19
  const char *v5; // x20
  const char *v6; // x21
  int v7; // w22
  __int64 result; // x0

  v4 = (int)a4;
  v5 = (const char *)a3;
  v6 = a2;
  v7 = (int)this;
  while ( 1 )
  {
    result = fstatat((int)this, a2, a3, (int)a4);
    if ( (_DWORD)result != -1 )
      break;
    if ( *__error() != 35 && *__error() != 4 )
      return 0xFFFFFFFFLL;
    LODWORD(this) = v7;
    a2 = v6;
    a3 = (stat *)v5;
    LODWORD(a4) = v4;
  }
  return result;
}
