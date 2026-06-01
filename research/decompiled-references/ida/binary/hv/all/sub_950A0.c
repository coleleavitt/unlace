__int64 __fastcall sub_950A0(int fd, int a2)
{
  if ( a2 == 1 )
  {
    if ( flock(fd, 5) != -1 )
      goto LABEL_4;
  }
  else if ( a2 == 8 )
  {
    if ( flock(fd, 12) != -1 )
      return 0;
  }
  else if ( flock(fd, 6) != -1 )
  {
LABEL_4:
    fcntl64();
    return 0;
  }
  sub_8F860(1u);
  return 0xFFFFFFFFLL;
}

