/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70A54
// Address: 0x00070A54

//----- (00070A54) --------------------------------------------------------
int __fastcall sub_70A54(unsigned int a1, int a2)
{
  int result; // r0

  if ( a1 > 3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(480);
  }
  result = _tls_get_addr(&dword_D23A4);
  *(_DWORD *)(result + 4 * a1) = a2;
  return result;
}
// 143B4: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D23A4: using guessed type int dword_D23A4;
// D5C00: using guessed type char under_debugger;
