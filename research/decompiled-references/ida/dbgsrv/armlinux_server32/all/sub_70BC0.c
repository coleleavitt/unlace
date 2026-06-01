/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70BC0
// Address: 0x00070BC0

//----- (00070BC0) --------------------------------------------------------
int __fastcall sub_70BC0(unsigned int a1, int a2)
{
  int result; // r0

  if ( a1 > 3 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(480);
  }
  result = _tls_get_addr(&dword_D33C4);
  *(_DWORD *)(result + 4 * a1) = a2;
  return result;
}
// 14538: using guessed type int __fastcall _tls_get_addr(_DWORD);
// D33C4: using guessed type int dword_D33C4;
// D6C20: using guessed type char under_debugger;
