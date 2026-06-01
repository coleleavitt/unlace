/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rotate_left
// Address: 0x0000000100069848

//----- (0000000100069848) ----------------------------------------------------
unsigned __int64 __fastcall rotate_left(unsigned __int64 result, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x10
  __int64 v7; // x12

  if ( a4 >= 0x40 )
    v4 = 64;
  else
    v4 = a4;
  v5 = 64 - v4;
  if ( v4 + a3 <= 0x40 )
    v5 = a3;
  if ( v5 >= 2 )
  {
    v6 = (((unsigned int)v5 & (a2 >> 31)) + a2) % v5;
    if ( v6 )
    {
      if ( v5 == 64 )
        v7 = -1;
      else
        v7 = ~(-1LL << v5);
      return ((((((-1LL << ((unsigned __int8)v5 - (unsigned __int8)v6)) ^ ~v7) & (((v7 << v4) & result) >> v4)) >> ((unsigned __int8)v5 - (unsigned __int8)v6))
             | (((((v7 << v4) & result) >> v4) & ~(-1LL << ((unsigned __int8)v5 - (unsigned __int8)v6))) << v6)) << v4)
           | result & ~(v7 << v4);
    }
  }
  return result;
}
