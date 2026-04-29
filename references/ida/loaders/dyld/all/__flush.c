ssize_t __fastcall _flush(ssize_t result)
{
  char *v1; // x20
  signed __int64 v2; // x21
  ssize_t v3; // x19

  v1 = *(char **)result;
  v2 = *(_QWORD *)(result + 8) - *(_QWORD *)result;
  if ( v2 >= 1 )
  {
    v3 = result;
    while ( 1 )
    {
      while ( 1 )
      {
        result = write(*(_DWORD *)(v3 + 24), v1, v2);
        if ( result < 0 )
          break;
        v2 -= result;
        v1 += v2;
        if ( v2 <= 0 )
          return result;
      }
      if ( *__error() != 4 )
      {
        result = (ssize_t)__error();
        if ( *(_DWORD *)result != 35 )
          break;
      }
    }
  }
  return result;
}
