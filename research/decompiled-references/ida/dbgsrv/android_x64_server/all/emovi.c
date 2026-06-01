/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emovi
// Address: 0x00000000000B7BA0

//----- (00000000000B7BA0) ----------------------------------------------------
__int64 __fastcall emovi(unsigned __int16 *a1, __int64 a2)
{
  __int64 result; // rax

  *(_WORD *)a2 = (__int16)a1[7] >> 15;
  *(_DWORD *)(a2 + 2) = a1[7] & 0x7FFF;
  *(_WORD *)(a2 + 6) = a1[6];
  *(_WORD *)(a2 + 8) = a1[5];
  *(_WORD *)(a2 + 10) = a1[4];
  *(_WORD *)(a2 + 12) = a1[3];
  *(_WORD *)(a2 + 14) = a1[2];
  *(_WORD *)(a2 + 16) = a1[1];
  result = *a1;
  *(_DWORD *)(a2 + 18) = (unsigned __int16)result;
  return result;
}
