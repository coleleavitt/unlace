/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807F610
// Address: 0x0807F610

//----- (0807F610) --------------------------------------------------------
unsigned int __cdecl sub_807F610(_DWORD *a1, int a2)
{
  unsigned int result; // eax

  a1[1] = 0;
  a1[3] = a1 + 1;
  a1[4] = a1 + 1;
  a1[2] = 0;
  a1[5] = 0;
  a1[6] = 1;
  a1[7] = a2;
  result = *(_DWORD *)(sub_807F510() + 40);
  if ( a1[7] >= result )
    a1[7] = 0;
  return result;
}
