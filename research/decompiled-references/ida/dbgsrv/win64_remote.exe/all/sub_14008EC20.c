/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008EC20
// Address: 0x000000014008EC20

//----- (000000014008EC20) ----------------------------------------------------
__int64 sub_14008EC20()
{
  __int64 result; // rax

  result = dword_1400CB018 & 0xFFFFFFFE;
  dword_1400CB018 &= ~1u;
  return result;
}
// 1400CB018: using guessed type int dword_1400CB018;
