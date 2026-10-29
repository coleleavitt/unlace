bool __fastcall dyld4::SyscallDelegate::realpathdir(dyld4::SyscallDelegate *this, dyld3 *a2, char *a3)
{
  int v4; // w0
  int v5; // w19
  _BOOL8 v6; // x20

  v4 = dyld3::open(a2, (const char *)0x100000, 0);
  if ( v4 == -1 )
    return 0;
  v5 = v4;
  v6 = fcntl(v4, 50, a3) == 0;
  close(v5);
  return v6;
}
