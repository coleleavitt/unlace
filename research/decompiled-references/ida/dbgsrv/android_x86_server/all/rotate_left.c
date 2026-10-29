/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rotate_left
// Address: 0x0009DA20

//----- (0009DA20) --------------------------------------------------------
unsigned int __cdecl rotate_left(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // esi
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v9; // [esp+8h] [ebp-10h]

  v4 = a1;
  v5 = a4;
  if ( a4 >= 0x20 )
    v5 = 32;
  v6 = 32 - v5;
  if ( v5 + a3 <= 0x20 )
    v6 = a3;
  if ( v6 >= 2 && (a2 + (v6 & (a2 >> 31))) % v6 )
  {
    v7 = ~(-1 << v6);
    if ( v6 == 32 )
      v7 = -1;
    v9 = (a2 + (v6 & (a2 >> 31))) % v6;
    return a1 & ~(v7 << v5)
         | ((((((a1 & (unsigned int)(v7 << v5)) >> v5) & ~(-1 << (v6 - v9))) << v9)
           | ((((a1 & (unsigned int)(v7 << v5)) >> v5) & (~(-1 << (v6 - v9)) ^ v7)) >> (v6 - v9))) << v5);
  }
  return v4;
}
