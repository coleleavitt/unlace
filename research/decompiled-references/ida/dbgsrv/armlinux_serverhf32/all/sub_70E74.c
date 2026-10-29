/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70E74
// Address: 0x00070E74

//----- (00070E74) --------------------------------------------------------
int __fastcall sub_70E74(char a1)
{
  int addr; // r3
  int result; // r0

  addr = _tls_get_addr(&dword_D23A4);
  result = *(unsigned __int8 *)(addr + 128);
  *(_BYTE *)(addr + 128) = a1;
  return result;
}
// 143B4: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D23A4: using guessed type int dword_D23A4;
