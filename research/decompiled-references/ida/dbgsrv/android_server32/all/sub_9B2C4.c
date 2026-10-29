/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B2C4
// Address: 0x0009B2C4

//----- (0009B2C4) --------------------------------------------------------
int __fastcall sub_9B2C4(int a1)
{
  _DWORD *v1; // r6
  char v2; // r4
  unsigned int v3; // r7

  v1 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v2 = 8 * (a1 & 3);
  do
    v3 = ((unsigned int)(255 << v2) & *v1) >> v2;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)v3;
}
