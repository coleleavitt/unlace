/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_843A4
// Address: 0x000843A4

//----- (000843A4) --------------------------------------------------------
bool __fastcall sub_843A4(unsigned int a1)
{
  bool v1; // cc

  if ( a1 - 28 <= 4 )
    return 1;
  v1 = a1 > 0x4C;
  if ( a1 != 76 )
    v1 = a1 - 78 > 1;
  return !v1;
}
