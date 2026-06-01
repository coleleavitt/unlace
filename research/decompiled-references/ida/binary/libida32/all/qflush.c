int __fastcall qflush(FILE *stream, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  if ( stream )
  {
    if ( fflush(stream) || (v2 = fileno(stream), v3 = dup(v2), v3 == -1) || (result = close(v3)) != 0 )
    {
      set_qerrno(1, a2);
      return -1;
    }
  }
  else
  {
    set_qerrno(1, a2);
    *__errno_location() = 9;
    set_qerrno(1, a2);
    return 1;
  }
  return result;
}

