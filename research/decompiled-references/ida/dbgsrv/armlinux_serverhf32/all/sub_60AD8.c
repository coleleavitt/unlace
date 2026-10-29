/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60AD8
// Address: 0x00060AD8

//----- (00060AD8) --------------------------------------------------------
int __fastcall sub_60AD8(int a1, char a2, int a3)
{
  sub_66D94(a1, a2, a3, 0, 0);
  *(_BYTE *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 53) = 0;
  *(_DWORD *)a1 = &dword_D199C[2];
  return a1;
}
// D199C: using guessed type int dword_D199C[4];
