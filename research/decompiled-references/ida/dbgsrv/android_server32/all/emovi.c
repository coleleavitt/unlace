/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emovi
// Address: 0x00076164

//----- (00076164) --------------------------------------------------------
int __fastcall emovi(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int16 v2; // r3
  int result; // r0

  *a2 = (unsigned int)(__int16)a1[7] >> 15;
  v2 = a1[7];
  a2[2] = 0;
  a2[1] = v2 & 0x7FFF;
  a2[3] = a1[6];
  a2[4] = a1[5];
  a2[5] = a1[4];
  a2[6] = a1[3];
  a2[7] = a1[2];
  a2[8] = a1[1];
  result = *a1;
  a2[10] = 0;
  a2[9] = result;
  return result;
}
