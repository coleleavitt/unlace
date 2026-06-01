int __fastcall qfgetc(FILE *a1, __int64 a2)
{
  if ( a1 )
    return fgetc(a1);
  set_qerrno(1, a2);
  *__errno_location() = 9;
  set_qerrno(1, a2);
  return -1;
}

