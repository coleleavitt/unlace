__int64 __fastcall qrmdir(const char *a1)
{
  unsigned int v1; // ebx

  v1 = rmdir(a1);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1);
  return 0xFFFFFFFFLL;
}
