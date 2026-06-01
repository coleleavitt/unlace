/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emovi
// Address: 0x000A4230

//----- (000A4230) --------------------------------------------------------
int __cdecl emovi(unsigned __int16 *a1, int a2)
{
  *(_WORD *)a2 = (__int16)a1[7] >> 15;
  *(_DWORD *)(a2 + 2) = a1[7] & 0x7FFF;
  *(_WORD *)(a2 + 6) = a1[6];
  *(_WORD *)(a2 + 8) = a1[5];
  *(_WORD *)(a2 + 10) = a1[4];
  *(_WORD *)(a2 + 12) = a1[3];
  *(_WORD *)(a2 + 14) = a1[2];
  *(_WORD *)(a2 + 16) = a1[1];
  *(_DWORD *)(a2 + 18) = *a1;
  return a2;
}
