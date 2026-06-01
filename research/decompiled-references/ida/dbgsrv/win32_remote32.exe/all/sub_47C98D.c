/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C98D
// Address: 0x0047C98D

//----- (0047C98D) --------------------------------------------------------
char __cdecl sub_47C98D(_DWORD *a1)
{
  if ( (*a1 & 0x200) == 0 )
    return 0;
  *a1 |= 0x400u;
  return 1;
}
