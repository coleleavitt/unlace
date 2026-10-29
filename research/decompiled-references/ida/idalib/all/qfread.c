size_t __fastcall qfread(FILE *stream, void *ptr, signed __int64 a3)
{
  size_t v4; // r12
  int v5; // eax

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    BUG();
  }
  if ( stream )
  {
    v4 = 0;
    if ( a3 )
    {
      v4 = fread(ptr, 1u, a3, stream);
      if ( a3 != v4 )
      {
        v5 = feof(stream);
        set_qerrno(v5 == 0 ? 1 : 3);
      }
    }
  }
  else
  {
    v4 = -1;
    set_qerrno(1);
    *__errno_location() = 9;
    set_qerrno(1);
  }
  return v4;
}
