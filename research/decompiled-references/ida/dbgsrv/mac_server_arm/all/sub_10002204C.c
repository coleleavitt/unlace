/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002204C
// Address: 0x000000010002204C

//----- (000000010002204C) ----------------------------------------------------
bool __fastcall sub_10002204C(__int64 a1)
{
  int v1; // w8
  _BOOL8 result; // x0

  v1 = *(unsigned __int8 *)(a1 + 212);
  result = 1;
  if ( (unsigned int)(v1 - 160) > 0x33 || ((1LL << ((unsigned __int8)v1 + 96)) & 0x87F007FF00083LL) == 0 )
    return (unsigned int)(v1 - 224) < 0x10;
  return result;
}
