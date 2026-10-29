/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71108
// Address: 0x00071108

//----- (00071108) --------------------------------------------------------
__int64 __fastcall sub_71108(int a1)
{
  __int64 v2; // r6

  if ( !a1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(552);
  }
  sub_7783C(a1);
  sub_77884(a1);
  v2 = sub_7783C(a1);
  sub_77884(a1);
  return v2;
}
// D6C20: using guessed type char under_debugger;
