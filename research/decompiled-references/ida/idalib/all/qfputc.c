int __fastcall qfputc(int a1, FILE *a2)
{
  if ( a2 )
    return fputc(a1, a2);
  set_qerrno(1);
  *__errno_location() = 9;
  set_qerrno(1);
  return -1;
}
