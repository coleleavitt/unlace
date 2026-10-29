bool __fastcall dyld4::SyscallDelegate::getCWD(dyld4::SyscallDelegate *this, char *a2)
{
  int v3; // w0
  int v4; // w20
  int v5; // w19

  v3 = open(".", 0x100000, 0);
  if ( v3 == -1 )
    return 0;
  v4 = v3;
  v5 = fcntl(v3, 50, a2);
  close(v4);
  return v5 != -1;
}
