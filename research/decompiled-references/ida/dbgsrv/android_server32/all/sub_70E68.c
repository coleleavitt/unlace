/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70E68
// Address: 0x00070E68

//----- (00070E68) --------------------------------------------------------
bool __fastcall sub_70E68(unsigned int a1)
{
  if ( a1 >> 3 >= 0x29 )
  {
    if ( !under_debugger )
      interr(1460);
    __debugbreak();
  }
  return a1 == 24;
}
// E0550: using guessed type char under_debugger;
