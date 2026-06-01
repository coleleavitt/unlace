/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47744C
// Address: 0x0047744C

//----- (0047744C) --------------------------------------------------------
int __cdecl sub_47744C(char a1)
{
  if ( (a1 & 0x20) != 0 )
    return 5;
  if ( (a1 & 8) != 0 )
    return 1;
  if ( (a1 & 4) != 0 )
    return 2;
  if ( (a1 & 1) != 0 )
    return 3;
  return 2 * (a1 & 2);
}
