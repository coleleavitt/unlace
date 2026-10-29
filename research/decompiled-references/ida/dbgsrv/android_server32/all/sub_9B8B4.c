/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B8B4
// Address: 0x0009B8B4

//----- (0009B8B4) --------------------------------------------------------
int __fastcall sub_9B8B4(int a1, int a2)
{
  char v2; // r5
  int v3; // r6
  _DWORD *v4; // r7
  int v5; // r4
  int v7; // [sp+4h] [bp-8h]

  v2 = 8 * (a1 & 3);
  v3 = 255 << v2;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v7 = (a2 << v2) & (255 << v2);
  do
    v5 = *v4;
  while ( MEMORY[0xFFFF0FC0](*v4, *v4 & ~v3 | v7, v4) );
  return (char)((v5 & (unsigned int)v3) >> v2);
}
