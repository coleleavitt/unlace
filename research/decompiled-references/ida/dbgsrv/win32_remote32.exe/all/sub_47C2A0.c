/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C2A0
// Address: 0x0047C2A0

//----- (0047C2A0) --------------------------------------------------------
int __stdcall sub_47C2A0(_BYTE *a1)
{
  if ( !*a1 )
    return 1;
  if ( a1[1] )
    return (a1[2] != 0) + 3;
  return 2;
}
