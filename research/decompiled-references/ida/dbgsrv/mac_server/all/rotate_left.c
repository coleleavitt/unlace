/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rotate_left
// Address: 0x0000000100071B40

//----- (0000000100071B40) ----------------------------------------------------
unsigned __int64 __fastcall rotate_left(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v6; // rsi

  if ( a4 >= 0x40 )
    a4 = 64;
  v4 = 64 - a4;
  if ( a4 + a3 < 0x41 )
    v4 = a3;
  if ( v4 >= 2 )
  {
    v5 = a2 + ((unsigned int)v4 & (a2 >> 31));
    if ( v5 >= v4 )
      v5 = (unsigned int)v5 % (unsigned int)v4;
    if ( v5 )
    {
      v6 = ~(-1LL << v4);
      if ( v4 == 64 )
        v6 = -1;
      return a1 & ~(v6 << a4)
           | ((((((a1 & (unsigned __int64)(v6 << a4)) >> a4) & ~(-1LL << ((unsigned __int8)v4 - (unsigned __int8)v5))) << v5)
             | ((((a1 & (unsigned __int64)(v6 << a4)) >> a4)
               & (~(-1LL << ((unsigned __int8)v4 - (unsigned __int8)v5))
                ^ v6)) >> ((unsigned __int8)v4 - (unsigned __int8)v5))) << a4);
    }
  }
  return a1;
}
