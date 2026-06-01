// local variable allocation has failed, the output may be wrong!
off_t __cdecl lseek(int a1, off_t a2, int a3)
{
  bool v3; // cf
  unsigned __int64 v4; // x16
  __int64 v6; // [xsp+30h] [xbp-10h]

  while ( 1 )
  {
    v6 = *(_QWORD *)&a1;
    v4 = mac_syscall(SYS_lseek, a1, a2, a3);
    *(_QWORD *)&a1 = v6;
    if ( !v3 )
      break;
    v3 = v4 >= 4;
    if ( v4 != 4 )
      return -1;
  }
  return v4;
}
