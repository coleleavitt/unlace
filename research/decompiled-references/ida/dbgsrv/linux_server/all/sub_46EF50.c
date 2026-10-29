/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46EF50
// Address: 0x000000000046EF50

//----- (000000000046EF50) ----------------------------------------------------
unsigned __int64 __fastcall sub_46EF50(unsigned __int64 a1, unsigned int a2)
{
  return ((HIDWORD(a1) + ((unsigned int)a1 + 1000 * (unsigned __int64)a2) / 0xF4240) << 32)
       | ((unsigned __int64)((unsigned int)a1 + 1000LL * a2 + 1000000 * HIDWORD(a1)) % 0xF4240);
}
