/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9580
// Address: 0x00000000000A9580

//----- (00000000000A9580) ----------------------------------------------------
__int64 __fastcall sub_A9580(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // kr00_8

  v2 = 1000000 * HIDWORD(a1) + (unsigned int)a1 + 1000LL * a2;
  return ((((0x431BDE82D7B634DBLL * (unsigned __int128)v2) >> 64) & 0xFFFFFFFFFFFC0000LL) << 14) | (v2 % 0xF4240);
}
