/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rotate_left
// Address: 0x00000000000B1A10

//----- (00000000000B1A10) ----------------------------------------------------
unsigned __int64 __fastcall rotate_left(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  v4 = a4;
  if ( a4 >= 0x40 )
    v4 = 64;
  v5 = 64 - v4;
  if ( v4 + a3 <= 0x40 )
    v5 = a3;
  if ( v5 >= 2 )
  {
    v6 = (a2 + ((unsigned int)v5 & (a2 >> 31))) % v5;
    if ( v6 )
    {
      v7 = ~(-1LL << v5);
      if ( v5 == 64 )
        v7 = -1;
      return a1 & ~(v7 << v4)
           | ((((((a1 & (unsigned __int64)(v7 << v4)) >> v4) & ~(-1LL << ((unsigned __int8)v5 - (unsigned __int8)v6))) << v6)
             | ((((a1 & (unsigned __int64)(v7 << v4)) >> v4)
               & (~(-1LL << ((unsigned __int8)v5 - (unsigned __int8)v6))
                ^ v7)) >> ((unsigned __int8)v5 - (unsigned __int8)v6))) << v4);
    }
  }
  return a1;
}
