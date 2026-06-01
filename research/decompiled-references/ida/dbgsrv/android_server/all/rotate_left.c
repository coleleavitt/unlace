/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rotate_left
// Address: 0x00000000000AD490

//----- (00000000000AD490) ----------------------------------------------------
unsigned __int64 __fastcall rotate_left(unsigned __int64 result, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x10
  bool v7; // zf
  char v8; // w12
  __int64 v9; // x9
  __int64 v10; // x9

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
      v7 = v5 == 64;
      v8 = v5 - v6;
      v9 = -1LL << v5;
      if ( v7 )
        v10 = -1;
      else
        v10 = ~v9;
      return ((((((-1LL << v8) ^ ~v10) & (((v10 << v4) & result) >> v4)) >> v8)
             | (((((v10 << v4) & result) >> v4) & ~(-1LL << v8)) << v6)) << v4)
           | result & ~(v10 << v4);
    }
  }
  return result;
}
