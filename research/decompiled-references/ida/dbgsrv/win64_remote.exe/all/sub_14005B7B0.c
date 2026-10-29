/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005B7B0
// Address: 0x000000014005B7B0

//----- (000000014005B7B0) ----------------------------------------------------
__int64 __fastcall sub_14005B7B0(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rsi

  v4 = (unsigned int)sub_14005B690(a1, a2);
  return v4 | ((__int64)(int)sub_14005B690(a1, a2) << 32);
}
