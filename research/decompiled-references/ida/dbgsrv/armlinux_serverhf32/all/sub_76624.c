/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76624
// Address: 0x00076624

//----- (00076624) --------------------------------------------------------
int __fastcall sub_76624(unsigned __int8 *a1, int a2, int a3)
{
  sub_7641C(a2 + 4116, a1, a3);
  *(_DWORD *)(a2 + 8232) = scandir64(a2 + 8236, a2 + 8224, 0, &alphasort64);
  return sub_765A0(a2);
}
// 13EC0: using guessed type int __fastcall scandir64(_DWORD, _DWORD, _DWORD, _DWORD);
