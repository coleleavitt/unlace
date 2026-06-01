/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77C4C
// Address: 0x00077C4C

//----- (00077C4C) --------------------------------------------------------
int __fastcall sub_77C4C(FILE *a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0

  if ( a1 )
  {
    if ( fflush(a1) || (v2 = fileno(a1), v3 = dup(v2), v3 == -1) || (result = close(v3)) != 0 )
    {
      sub_70B98(1);
      return -1;
    }
  }
  else
  {
    sub_70B98(1);
    *_errno_location() = 9;
    sub_70B98(1);
    return 1;
  }
  return result;
}
