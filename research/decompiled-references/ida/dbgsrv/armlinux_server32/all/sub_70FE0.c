/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70FE0
// Address: 0x00070FE0

//----- (00070FE0) --------------------------------------------------------
int __fastcall sub_70FE0(char a1)
{
  int addr; // r3
  int result; // r0

  addr = _tls_get_addr(&dword_D33C4);
  result = *(unsigned __int8 *)(addr + 128);
  *(_BYTE *)(addr + 128) = a1;
  return result;
}
// 14538: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D33C4: using guessed type int dword_D33C4;
