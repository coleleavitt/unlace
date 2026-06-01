/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79BB0
// Address: 0x00079BB0

//----- (00079BB0) --------------------------------------------------------
int sub_79BB0()
{
  int result; // r0
  int v1; // r4

  result = open("/dev/tty", 2);
  v1 = result;
  if ( result > 0 )
  {
    if ( sub_79B38(result) == 2 )
      ioctl(v1, 0x540Eu, 0);
    return j_close(v1);
  }
  return result;
}
