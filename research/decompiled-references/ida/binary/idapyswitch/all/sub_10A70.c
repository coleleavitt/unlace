__int64 __fastcall sub_10A70(int fd, char a2, int a3)
{
  unsigned int v4; // r13d
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rdx

  if ( a3 == 2 )
    return sub_109F0(fd, a3);
  if ( (a2 & 3) != 0 )
  {
    v4 = 2;
  }
  else
  {
    v4 = 1;
    if ( a3 == 1 )
      return sub_109F0(fd, a3);
  }
  v5 = 11;
  while ( (unsigned int)sub_109F0(fd, v4) )
  {
    if ( !--v5 )
      return 0xFFFFFFFFLL;
    v6 = *__errno_location();
    if ( v6 != 11 && v6 != 4 )
      return 0xFFFFFFFFLL;
    sub_11960(10, v4, v7);
  }
  return sub_109F0(fd, a3);
}

