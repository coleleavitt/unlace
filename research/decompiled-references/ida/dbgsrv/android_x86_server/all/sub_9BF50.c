/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BF50
// Address: 0x0009BF50

//----- (0009BF50) --------------------------------------------------------
bool __cdecl sub_9BF50(unsigned int a1)
{
  if ( a1 >= 0x148 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1461);
    BUG();
  }
  return byte_106E88[5 * a1] != 0;
}
// 13E34C: using guessed type int under_debugger;
