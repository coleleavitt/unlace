__int64 __fastcall qfclose(FILE *a1)
{
  unsigned int v1; // ebx

  if ( !a1 )
  {
    v1 = -1;
    set_qerrno(1);
    *__errno_location() = 9;
    set_qerrno(1);
    return v1;
  }
  v1 = fclose(a1);
  if ( !v1 )
    return v1;
  set_qerrno(1);
  return v1;
}
