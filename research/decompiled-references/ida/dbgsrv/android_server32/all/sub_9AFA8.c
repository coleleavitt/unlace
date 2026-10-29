/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9AFA8
// Address: 0x0009AFA8

//----- (0009AFA8) --------------------------------------------------------
int __fastcall sub_9AFA8(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}
