/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E6E8
// Address: 0x000000000048E6E8

//----- (000000000048E6E8) ----------------------------------------------------
__int64 __fastcall sub_48E6E8(unsigned __int8 **a1, unsigned __int64 a2)
{
  __int64 v4; // x19

  v4 = (unsigned int)sub_48E5A8(a1, a2);
  return v4 | (sub_48E5A8(a1, a2) << 32);
}
