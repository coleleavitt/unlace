/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_data
// Address: 0x000A3840

//----- (000A3840) --------------------------------------------------------
int __cdecl get_error_data(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(482);
    BUG();
  }
  return _emutls_get_address((unsigned int *)dword_13BC24)[a1];
}
// 13BC24: using guessed type int dword_13BC24[4];
// 13E34C: using guessed type int under_debugger;
