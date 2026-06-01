__int64 __fastcall qfsync(int a1)
{
  unsigned int v1; // ebx

  v1 = fsync(a1);
  if ( v1 != -1 )
    return v1;
  set_qerrno(1);
  return 0xFFFFFFFFLL;
}
