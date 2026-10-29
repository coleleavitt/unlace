/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70B98
// Address: 0x00070B98

//----- (00070B98) --------------------------------------------------------
int __fastcall sub_70B98(int a1)
{
  int addr; // r3

  if ( a1 == -1 )
    return sub_70B7C();
  addr = _tls_get_addr(&dword_D33C4);
  *(_DWORD *)(addr + 124) = a1;
  return a1;
}
// 14538: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D33C4: using guessed type int dword_D33C4;
