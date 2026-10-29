int __cdecl access(const char *a1, int a2)
{
  bool v2; // cf
  unsigned __int64 v3; // x16
  const char *v5; // [xsp+30h] [xbp-10h]

  do
  {
    v5 = a1;
    v3 = mac_syscall(SYS_access, a1, a2);
    a1 = v5;
    if ( !v2 )
      break;
    v2 = v3 >= 4;
  }
  while ( v3 == 4 );
  return access_end(v5);
}
