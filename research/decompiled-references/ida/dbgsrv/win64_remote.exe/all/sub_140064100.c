/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064100
// Address: 0x0000000140064100

//----- (0000000140064100) ----------------------------------------------------
unsigned __int64 __fastcall sub_140064100(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rsi
  __int64 v7; // rax

  v4 = 64;
  v5 = a3;
  if ( a4 <= 0x40 )
    v4 = a4;
  if ( v4 + a3 > 0x40 )
    v5 = 64 - v4;
  if ( v5 <= 1 )
    return a1;
  if ( a2 < 0 )
    a2 += v5;
  v6 = (unsigned int)a2 % v5;
  if ( !(_DWORD)v6 )
    return a1;
  v7 = 0;
  if ( v5 != 64 )
    v7 = 1LL << v5;
  return a1 & ~((v7 - 1) << v4)
       | ((((((a1 & (unsigned __int64)((v7 - 1) << v4)) >> v4)
           & ((1LL << ((unsigned __int8)v5 - (unsigned __int8)v6)) - 1)) << v6)
         | ((((a1 & (unsigned __int64)((v7 - 1) << v4)) >> v4)
           & (((1LL << ((unsigned __int8)v5 - (unsigned __int8)v6)) - 1)
            ^ (v7 - 1))) >> ((unsigned __int8)v5 - (unsigned __int8)v6))) << v4);
}
