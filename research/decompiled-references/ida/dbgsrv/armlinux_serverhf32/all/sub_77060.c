/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77060
// Address: 0x00077060

//----- (00077060) --------------------------------------------------------
int __fastcall sub_77060(int a1, int a2)
{
  if ( a2 == 1 )
  {
    if ( flock(a1, 5) != -1 )
      goto LABEL_4;
  }
  else if ( a2 == 8 )
  {
    if ( flock(a1, 12) != -1 )
      return 0;
  }
  else if ( flock(a1, 6) != -1 )
  {
LABEL_4:
    fcntl(a1, 2, 1);
    return 0;
  }
  sub_70A2C(1);
  return -1;
}
