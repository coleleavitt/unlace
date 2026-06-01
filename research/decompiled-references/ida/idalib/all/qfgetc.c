int __fastcall qfgetc(FILE *a1)
{
  if ( a1 )
    return fgetc(a1);
  set_qerrno(1);
  *__errno_location() = 9;
  set_qerrno(1);
  return -1;
}
