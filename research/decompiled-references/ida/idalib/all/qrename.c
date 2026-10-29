__int64 __fastcall qrename(const char *a1, const char *a2)
{
  unsigned int v2; // ebx

  v2 = rename(a1, a2);
  if ( !v2 )
    return 0;
  set_qerrno(1);
  return v2;
}
