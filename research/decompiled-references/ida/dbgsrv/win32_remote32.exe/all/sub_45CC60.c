/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45CC60
// Address: 0x0045CC60

//----- (0045CC60) --------------------------------------------------------
unsigned int __stdcall sub_45CC60(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // esi
  int v9; // [esp+1Ch] [ebp+10h]

  v4 = a3;
  v5 = 32;
  if ( a4 <= 0x20 )
    v5 = a4;
  if ( v5 + a3 > 0x20 )
  {
    v4 = 32 - v5;
    LOBYTE(a3) = 32 - v5;
  }
  if ( v4 <= 1 )
    return a1;
  v6 = a2 + v4;
  if ( a2 >= 0 )
    v6 = a2;
  if ( !(v6 % v4) )
    return a1;
  v7 = 0;
  if ( v4 != 32 )
    v7 = 1 << v4;
  v9 = v6 % v4;
  return a1 & ~((v7 - 1) << v5)
       | ((((((a1 & (unsigned int)((v7 - 1) << v5)) >> v5) & ((1 << (a3 - v9)) - 1)) << v9)
         | ((((a1 & (unsigned int)((v7 - 1) << v5)) >> v5) & ((v7 - 1) ^ ((1 << (a3 - v9)) - 1))) >> (a3 - v9))) << v5);
}
