/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_325F0
// Address: 0x000325F0

//----- (000325F0) --------------------------------------------------------
int __fastcall sub_325F0(int a1, int a2, int a3, unsigned int a4)
{
  __int64 *v4; // r2

  if ( a3 == 1 )
  {
    v4 = (__int64 *)(a1 + 232);
  }
  else
  {
    if ( a3 != 2 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78AFC(20086);
    }
    v4 = (__int64 *)(a1 + 264);
  }
  return sub_32440(a1, a2, v4, a4);
}
// D5C00: using guessed type char under_debugger;
