/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70D74
// Address: 0x00070D74

//----- (00070D74) --------------------------------------------------------
int __fastcall sub_70D74(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(483);
  }
  return *(_DWORD *)(_tls_get_addr(&dword_D33C4) + 12 * a1 + 16);
}
// 14538: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D33C4: using guessed type int dword_D33C4;
// D6C20: using guessed type char under_debugger;
