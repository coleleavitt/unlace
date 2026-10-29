// local variable allocation has failed, the output may be wrong!
int __cdecl getfsstat(statfs *a1, int a2, int a3)
{
  char v3; // cf
  void *v4; // x3
  void *v5; // x4
  void *v6; // x5
  void *v7; // x6
  void *v8; // x7
  signed __int64 v9; // x0

  v9 = mac_syscall(SYS_getfsstat64, a1, *(void **)&a2, *(void **)&a3, v4, v5, v6, v7, v8);
  if ( v3 )
    LODWORD(v9) = cerror_nocancel(v9);
  return v9;
}
