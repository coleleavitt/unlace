/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C96D
// Address: 0x0047C96D

//----- (0047C96D) --------------------------------------------------------
char __cdecl sub_47C96D(_DWORD *a1)
{
  if ( (*a1 & 0xC000) != 0 )
    return 0;
  *a1 |= 0x4000u;
  return 1;
}
