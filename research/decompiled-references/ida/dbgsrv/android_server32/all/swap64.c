/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap64
// Address: 0x0007C3E8

//----- (0007C3E8) --------------------------------------------------------
int __fastcall swap64(int a1, unsigned int a2)
{
  return (a2 << 24) + ((a2 << 8) & 0xFF0000) + ((a2 >> 8) & 0xFF00) + HIBYTE(a2);
}
