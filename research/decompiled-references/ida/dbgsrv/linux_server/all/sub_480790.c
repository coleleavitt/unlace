/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480790
// Address: 0x0000000000480790

//----- (0000000000480790) ----------------------------------------------------
__int64 __fastcall sub_480790(unsigned int fd, int a2)
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
    fcntl64(fd, 2, 1);
    return 0;
  }
  sub_479EB0(1u);
  return 0xFFFFFFFFLL;
}
// 405B10: using guessed type __int64 __fastcall fcntl64(_QWORD, _QWORD, _QWORD);
