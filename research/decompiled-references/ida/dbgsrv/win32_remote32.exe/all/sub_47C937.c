/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C937
// Address: 0x0047C937

//----- (0047C937) --------------------------------------------------------
char __cdecl sub_47C937(unsigned int *a1, _BYTE *a2)
{
  if ( *a2 )
    return 0;
  *a2 = 1;
  if ( (*a1 & 2) != 0 )
    return 0;
  *a1 = *a1 & 0xFFFFFFFC | 2;
  a1[1] = a1[1] & 0xFFFFFFF8 | 4;
  return 1;
}
