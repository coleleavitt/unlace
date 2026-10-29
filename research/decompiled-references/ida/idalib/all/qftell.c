__int64 __fastcall qftell(FILE *a1)
{
  __off64_t v1; // rbx

  if ( !a1 )
  {
    v1 = -1;
    set_qerrno(1);
    *__errno_location() = 9;
    set_qerrno(1);
    return v1;
  }
  v1 = ftello64(a1);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1);
  return -1;
}
