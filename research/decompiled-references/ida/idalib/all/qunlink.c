__int64 __fastcall qunlink(const char *a1)
{
  unsigned int v1; // ebx

  v1 = unlink(a1);
  if ( !v1 )
    return 0;
  set_qerrno(1);
  return v1;
}
