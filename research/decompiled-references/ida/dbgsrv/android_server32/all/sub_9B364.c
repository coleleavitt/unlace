/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B364
// Address: 0x0009B364

//----- (0009B364) --------------------------------------------------------
int __fastcall sub_9B364(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0](*a1, v4, a1) );
  return v4;
}
