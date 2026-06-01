/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BF00
// Address: 0x0009BF00

//----- (0009BF00) --------------------------------------------------------
bool __cdecl sub_9BF00(unsigned int a1)
{
  if ( a1 >= 0x148 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1460);
    BUG();
  }
  return a1 == 24;
}
// 13E34C: using guessed type int under_debugger;
