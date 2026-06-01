/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493BD8
// Address: 0x0000000000493BD8

//----- (0000000000493BD8) ----------------------------------------------------
__int64 sub_493BD8()
{
  __int64 result; // x0
  int v1; // w19

  result = open("/dev/tty", 2);
  if ( (int)result > 0 )
  {
    v1 = result;
    if ( (unsigned int)sub_493B08(result) == 2 )
      ioctl(v1, 0x540Eu, 0);
    return close(v1);
  }
  return result;
}
