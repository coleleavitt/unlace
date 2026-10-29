/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100024010
// Address: 0x0000000100024010

//----- (0000000100024010) ----------------------------------------------------
bool __fastcall sub_100024010(__int64 a1)
{
  int v1; // w8
  _BOOL8 result; // x0

  v1 = *(unsigned __int8 *)(a1 + 212);
  result = 1;
  if ( (unsigned int)(v1 - 160) > 0x33 || ((1LL << ((unsigned __int8)v1 + 96)) & 0x87F007FF00083LL) == 0 )
    return (unsigned int)(v1 - 224) < 0x10;
  return result;
}
