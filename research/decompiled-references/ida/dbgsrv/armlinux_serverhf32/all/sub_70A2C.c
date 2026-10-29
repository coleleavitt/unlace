/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70A2C
// Address: 0x00070A2C

//----- (00070A2C) --------------------------------------------------------
int __fastcall sub_70A2C(int a1)
{
  int addr; // r3

  if ( a1 == -1 )
    return sub_70A10();
  addr = _tls_get_addr(&dword_D23A4);
  *(_DWORD *)(addr + 124) = a1;
  return a1;
}
// 143B4: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D23A4: using guessed type int dword_D23A4;
