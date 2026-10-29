/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B850
// Address: 0x0009B850

//----- (0009B850) --------------------------------------------------------
int __fastcall sub_9B850(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}
