/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B620
// Address: 0x0009B620

//----- (0009B620) --------------------------------------------------------
int __fastcall sub_9B620(int a1, int a2)
{
  _DWORD *v2; // r6
  char v3; // r4
  int v4; // r5
  unsigned int v5; // r7

  v2 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v3 = 8 * (a1 & 3);
  v4 = 255 << v3;
  do
    v5 = (((((unsigned int)v4 & *v2) >> v3) | a2) << v3) & v4 | *v2 & ~v4;
  while ( MEMORY[0xFFFF0FC0](*v2, v5, v2) );
  return (char)((v4 & v5) >> v3);
}
