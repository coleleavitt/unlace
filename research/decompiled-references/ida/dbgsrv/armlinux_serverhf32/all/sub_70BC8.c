/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70BC8
// Address: 0x00070BC8

//----- (00070BC8) --------------------------------------------------------
int __fastcall sub_70BC8(unsigned int a1)
{
  if ( a1 > 3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(482);
  }
  return *(_DWORD *)(_tls_get_addr(&dword_D23A4) + 4 * a1);
}
// 143B4: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D23A4: using guessed type int dword_D23A4;
// D5C00: using guessed type char under_debugger;
