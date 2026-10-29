__int64 __fastcall sub_81B2F0(int fd, int a2)
{
  __int64 v2; // rsi

  if ( a2 == 1 )
  {
    v2 = 5;
    if ( flock(fd, 5) != -1 )
      goto LABEL_4;
  }
  else if ( a2 == 8 )
  {
    v2 = 12;
    if ( flock(fd, 12) != -1 )
      return 0;
  }
  else
  {
    v2 = 6;
    if ( flock(fd, 6) != -1 )
    {
LABEL_4:
      fcntl64();
      return 0;
    }
  }
  set_qerrno(1, v2);
  return 0xFFFFFFFFLL;
}

