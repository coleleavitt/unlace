/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE3F0
// Address: 0x080CE3F0

//----- (080CE3F0) --------------------------------------------------------
int __cdecl sub_80CE3F0(char *a1, int a2, int a3)
{
  sub_80CE110(a2 + 4112, a1, a3);
  *(_DWORD *)(a2 + 8228) = scandir64(a2 + 8232, a2 + 8220, 0, &alphasort64);
  return sub_80CE330(a2);
}
// 804BD80: using guessed type int __cdecl scandir64(_DWORD, _DWORD, _DWORD, _DWORD);
