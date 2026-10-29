/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FE40
// Address: 0x000000000047FE40

//----- (000000000047FE40) ----------------------------------------------------
unsigned __int64 __fastcall sub_47FE40(
        unsigned __int64 result,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // x1
  __int64 v5; // x5

  if ( a4 > 0x40 )
    a4 = 64;
  if ( a3 + a4 > 0x40 )
    a3 = 64 - a4;
  if ( a3 > 1 )
  {
    a2 = (a2 & 0x80000000) == 0LL ? (unsigned int)a2 : (unsigned int)(a2 + a3);
    v4 = a2 % a3;
    if ( (_DWORD)v4 )
    {
      v5 = (1LL << a3) - 1;
      if ( a3 == 64 )
        v5 = -1;
      return ((((((result & (v5 << a4)) >> a4) & ((1LL << ((unsigned __int8)a3 - (unsigned __int8)v4)) - 1)) << v4)
             | (((v5 ^ ((1LL << ((unsigned __int8)a3 - (unsigned __int8)v4)) - 1)) & ((result & (v5 << a4)) >> a4)) >> ((unsigned __int8)a3 - (unsigned __int8)v4))) << a4)
           | result & ~(v5 << a4);
    }
  }
  return result;
}
