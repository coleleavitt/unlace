/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emovi
// Address: 0x00000000000B2DA4

//----- (00000000000B2DA4) ----------------------------------------------------
unsigned __int16 *__fastcall emovi(unsigned __int16 *result, __int64 a2)
{
  unsigned __int16 v2; // w8

  *(_WORD *)a2 = (unsigned int)(__int16)result[7] >> 15;
  v2 = result[7];
  *(_WORD *)(a2 + 4) = 0;
  *(_WORD *)(a2 + 2) = v2 & 0x7FFF;
  *(_WORD *)(a2 + 6) = result[6];
  *(_WORD *)(a2 + 8) = result[5];
  *(_WORD *)(a2 + 10) = result[4];
  *(_WORD *)(a2 + 12) = result[3];
  *(_WORD *)(a2 + 14) = result[2];
  *(_WORD *)(a2 + 16) = result[1];
  *(_DWORD *)(a2 + 18) = *result;
  return result;
}
