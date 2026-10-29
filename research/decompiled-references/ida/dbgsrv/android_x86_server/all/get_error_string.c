/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_string
// Address: 0x000A38A0

//----- (000A38A0) --------------------------------------------------------
int __cdecl get_error_string(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(483);
    BUG();
  }
  return _emutls_get_address((unsigned int *)dword_13BC24)[3 * a1 + 4];
}
// 13BC24: using guessed type int dword_13BC24[4];
// 13E34C: using guessed type int under_debugger;
