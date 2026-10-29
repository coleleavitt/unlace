/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C8D3
// Address: 0x0047C8D3

//----- (0047C8D3) --------------------------------------------------------
char __cdecl sub_47C8D3(_DWORD *a1)
{
  if ( (*a1 & 0xC000) != 0 )
    return 0;
  *a1 |= 0x8000u;
  return 1;
}
