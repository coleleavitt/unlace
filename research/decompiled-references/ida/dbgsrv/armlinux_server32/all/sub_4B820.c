/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B820
// Address: 0x0004B820

//----- (0004B820) --------------------------------------------------------
bool __fastcall sub_4B820(int a1)
{
  bool v2; // zf

  if ( (a1 & 0x80) == 0 && isalnum(a1) )
    return 1;
  v2 = a1 == 36;
  if ( a1 != 36 )
    return a1 == 95;
  return v2;
}
