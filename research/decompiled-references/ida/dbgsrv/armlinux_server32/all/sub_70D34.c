/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70D34
// Address: 0x00070D34

//----- (00070D34) --------------------------------------------------------
int __fastcall sub_70D34(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(482);
  }
  return *(_DWORD *)(_tls_get_addr(&dword_D33C4) + 4 * a1);
}
// 14538: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D33C4: using guessed type int dword_D33C4;
// D6C20: using guessed type char under_debugger;
