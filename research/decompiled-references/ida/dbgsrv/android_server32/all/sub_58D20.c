/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58D20
// Address: 0x00058D20

//----- (00058D20) --------------------------------------------------------
_UNKNOWN **__fastcall sub_58D20(int a1)
{
  if ( a1 == 18 )
    return &off_D9EA8;
  if ( a1 != 11 )
  {
    if ( !under_debugger )
      interr(30214);
    __debugbreak();
  }
  return &off_D9F08;
}
// D9EA8: using guessed type _UNKNOWN *off_D9EA8;
// D9F08: using guessed type _UNKNOWN *off_D9F08;
// E0550: using guessed type char under_debugger;
