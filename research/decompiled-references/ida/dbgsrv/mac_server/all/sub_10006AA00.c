/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006AA00
// Address: 0x000000010006AA00

//----- (000000010006AA00) ----------------------------------------------------
unsigned __int64 __fastcall sub_10006AA00(unsigned __int64 a1, unsigned int a2)
{
  return a1
       - 4293967296u * HIDWORD(a1)
       + 1000LL * a2
       + 4293967296u * ((a1 - 4293967296u * HIDWORD(a1) + 1000LL * a2) / 0xF4240);
}
