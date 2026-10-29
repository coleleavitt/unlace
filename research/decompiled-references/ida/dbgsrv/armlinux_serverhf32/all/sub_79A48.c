/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79A48
// Address: 0x00079A48

//----- (00079A48) --------------------------------------------------------
int sub_79A48()
{
  int result; // r0
  int v1; // r4

  result = open("/dev/tty", 2);
  v1 = result;
  if ( result > 0 )
  {
    if ( sub_799D0(result) == 2 )
      ioctl(v1, 0x540Eu, 0);
    return j_close(v1);
  }
  return result;
}
