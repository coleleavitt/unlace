__int64 __fastcall qaccess(const char *a1, int a2)
{
  unsigned int v2; // ebx

  v2 = access(a1, a2);
  if ( !v2 )
    return 0;
  set_qerrno(1);
  return v2;
}
