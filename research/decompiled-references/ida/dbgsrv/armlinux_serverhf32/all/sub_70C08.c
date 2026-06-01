/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70C08
// Address: 0x00070C08

//----- (00070C08) --------------------------------------------------------
int __fastcall sub_70C08(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(483);
  }
  return *(_DWORD *)(_tls_get_addr(&dword_D23A4) + 12 * a1 + 16);
}
// 143B4: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D23A4: using guessed type int dword_D23A4;
// D5C00: using guessed type char under_debugger;
