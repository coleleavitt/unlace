__int64 __fastcall sub_95120(int fd, char a2, int a3)
{
  int v4; // r13d
  int v5; // ebx
  int v6; // eax

  if ( a3 == 2 )
    return sub_950A0(fd, a3);
  if ( (a2 & 3) != 0 )
  {
    v4 = 2;
  }
  else
  {
    v4 = 1;
    if ( a3 == 1 )
      return sub_950A0(fd, a3);
  }
  v5 = 11;
  while ( (unsigned int)sub_950A0(fd, v4) )
  {
    if ( !--v5 )
      return 0xFFFFFFFFLL;
    v6 = *__errno_location();
    if ( v6 != 11 && v6 != 4 )
      return 0xFFFFFFFFLL;
    sub_97160(10);
  }
  return sub_950A0(fd, a3);
}

