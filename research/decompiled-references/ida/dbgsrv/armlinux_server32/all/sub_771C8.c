/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_771C8
// Address: 0x000771C8

//----- (000771C8) --------------------------------------------------------
int __fastcall sub_771C8(int a1, int a2)
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
  sub_70B98(1);
  return -1;
}
