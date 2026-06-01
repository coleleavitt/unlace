/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C44F0
// Address: 0x080C44F0

//----- (080C44F0) --------------------------------------------------------
unsigned int __cdecl sub_80C44F0(unsigned int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // eax
  int v7; // edx
  int v8; // eax

  v4 = a4;
  v5 = a3;
  if ( a4 > 0x20 )
    v4 = 32;
  if ( v4 + a3 > 0x20 )
    v5 = 32 - v4;
  if ( v5 > 1 )
  {
    v6 = a2 + v5;
    if ( a2 >= 0 )
      v6 = a2;
    v7 = v6 % v5;
    if ( v6 % v5 )
    {
      v8 = -1;
      if ( v5 != 32 )
        v8 = (1 << v5) - 1;
      return ~(v8 << v4) & a1
           | (((((((v8 << v4) & a1) >> v4) & (((1 << (v5 - v7)) - 1) ^ v8)) >> (v5 - v7))
             | ((((1 << (v5 - v7)) - 1) & (((v8 << v4) & a1) >> v4)) << v7)) << v4);
    }
  }
  return a1;
}
