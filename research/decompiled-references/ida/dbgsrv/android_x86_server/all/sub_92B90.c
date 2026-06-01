/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92B90
// Address: 0x00092B90

//----- (00092B90) --------------------------------------------------------
char __cdecl sub_92B90(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // eax

  v3 = *(_DWORD *)(a1 + 432);
  if ( a3[1] > v3 )
    *(_DWORD *)(*a3 + 16 * v3 + 4) &= ~0x100u;
  return 1;
}
