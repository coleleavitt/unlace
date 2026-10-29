/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60C58
// Address: 0x00060C58

//----- (00060C58) --------------------------------------------------------
int __fastcall sub_60C58(int a1, char a2, int a3)
{
  sub_66F10(a1, a2, a3, 0, 0);
  *(_BYTE *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 53) = 0;
  *(_DWORD *)a1 = &dword_D299C[2];
  return a1;
}
// D299C: using guessed type int dword_D299C[4];
