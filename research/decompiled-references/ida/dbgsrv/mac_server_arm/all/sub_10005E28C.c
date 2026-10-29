/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E28C
// Address: 0x000000010005E28C

//----- (000000010005E28C) ----------------------------------------------------
unsigned __int64 __fastcall sub_10005E28C(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // x8

  v2 = a1 - 4293967296u * HIDWORD(a1) + 1000LL * a2;
  return v2 + 4293967296u * (v2 / 0xF4240);
}
