/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C8B4
// Address: 0x0047C8B4

//----- (0047C8B4) --------------------------------------------------------
char __cdecl sub_47C8B4(_DWORD *a1)
{
  if ( (*a1 & 0x1000) != 0 )
    return 0;
  *a1 |= 0x1000u;
  return 1;
}
