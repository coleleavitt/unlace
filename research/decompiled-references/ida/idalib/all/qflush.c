int __fastcall qflush(FILE *stream)
{
  int v1; // eax
  int v2; // eax
  int result; // eax

  if ( stream )
  {
    if ( fflush(stream) || (v1 = fileno(stream), v2 = dup(v1), v2 == -1) || (result = close(v2)) != 0 )
    {
      set_qerrno(1);
      return -1;
    }
  }
  else
  {
    set_qerrno(1);
    *__errno_location() = 9;
    set_qerrno(1);
    return 1;
  }
  return result;
}
