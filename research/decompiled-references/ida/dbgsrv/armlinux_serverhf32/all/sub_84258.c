/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84258
// Address: 0x00084258

//----- (00084258) --------------------------------------------------------
bool __fastcall sub_84258(unsigned int a1)
{
  bool v1; // cc

  if ( a1 - 28 <= 4 )
    return 1;
  v1 = a1 > 0x4C;
  if ( a1 != 76 )
    v1 = a1 - 78 > 1;
  return !v1;
}
