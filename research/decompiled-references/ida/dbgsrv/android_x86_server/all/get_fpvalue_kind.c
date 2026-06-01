/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_fpvalue_kind
// Address: 0x000A9610

//----- (000A9610) --------------------------------------------------------
int __cdecl get_fpvalue_kind(_WORD *a1)
{
  int result; // eax

  result = 1;
  if ( (a1[7] & 0x7FFF) == 0x7FFF )
  {
    result = 2;
    if ( (a1[6] & 0x7FFF) == 0 && !a1[5] && !a1[4] && !a1[3] && !a1[2] && !a1[1] && !*a1 )
      return ((__int16)a1[7] < 0) + 3;
  }
  return result;
}
