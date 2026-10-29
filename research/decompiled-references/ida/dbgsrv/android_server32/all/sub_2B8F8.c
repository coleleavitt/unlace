/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B8F8
// Address: 0x0002B8F8

//----- (0002B8F8) --------------------------------------------------------
bool __fastcall sub_2B8F8(int a1, int a2)
{
  if ( a2 >= 20 )
  {
    if ( !under_debugger )
      interr(20035);
    __debugbreak();
  }
  return a2 == 19;
}
// E0550: using guessed type char under_debugger;
