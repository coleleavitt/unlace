// local variable allocation has failed, the output may be wrong!
ssize_t __cdecl read_0(int a1, void *a2, size_t a3)
{
  bool v3; // cf
  unsigned __int64 v4; // x16
  __int64 v6; // [xsp+30h] [xbp-10h]

  do
  {
    v6 = *(_QWORD *)&a1;
    v4 = mac_syscall(SYS_read, a1, a2, a3);
    *(_QWORD *)&a1 = v6;
    if ( !v3 )
      break;
    v3 = v4 >= 4;
  }
  while ( v4 == 4 );
  return read_end(v6);
}
