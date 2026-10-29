/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70F9C
// Address: 0x00070F9C

//----- (00070F9C) --------------------------------------------------------
__int64 __fastcall sub_70F9C(int a1)
{
  __int64 v2; // r6

  if ( !a1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(552);
  }
  sub_776D4(a1);
  sub_7771C(a1);
  v2 = sub_776D4(a1);
  sub_7771C(a1);
  return v2;
}
// D5C00: using guessed type char under_debugger;
