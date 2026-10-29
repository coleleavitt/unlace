/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C899
// Address: 0x0047C899

//----- (0047C899) --------------------------------------------------------
char __cdecl sub_47C899(_DWORD *a1)
{
  if ( (*a1 & 0x40) != 0 )
    return 0;
  *a1 |= 0x40u;
  return 1;
}
