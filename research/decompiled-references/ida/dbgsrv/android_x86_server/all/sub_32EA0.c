/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32EA0
// Address: 0x00032EA0

//----- (00032EA0) --------------------------------------------------------
bool __cdecl sub_32EA0(int a1, int a2)
{
  if ( a2 >= 20 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20035);
    BUG();
  }
  return a2 == 19;
}
// 13E34C: using guessed type int under_debugger;
