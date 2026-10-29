/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7678C
// Address: 0x0007678C

//----- (0007678C) --------------------------------------------------------
int __fastcall sub_7678C(unsigned __int8 *a1, int a2, int a3)
{
  sub_76584(a2 + 4116, a1, a3);
  *(_DWORD *)(a2 + 8232) = scandir64(a2 + 8236, a2 + 8224, 0, &alphasort64);
  return sub_76708(a2);
}
// 14014: using guessed type int __fastcall scandir64(_DWORD, _DWORD, _DWORD, _DWORD);
