/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C915
// Address: 0x0047C915

//----- (0047C915) --------------------------------------------------------
char __cdecl sub_47C915(int a1, _BYTE *a2)
{
  if ( *a2 )
    return 0;
  *a2 = 1;
  *(_DWORD *)(a1 + 4) &= ~0x800u;
  return 1;
}
