/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_data
// Address: 0x000A3550

//----- (000A3550) --------------------------------------------------------
_DWORD *__cdecl set_error_data(unsigned int a1, int a2)
{
  _DWORD *result; // eax

  if ( a1 >= 4 )
  {
    if ( !(_BYTE)under_debugger )
      interr(480);
    BUG();
  }
  result = _emutls_get_address((unsigned int *)dword_13BC24);
  result[a1] = a2;
  return result;
}
// 13BC24: using guessed type int dword_13BC24[4];
// 13E34C: using guessed type int under_debugger;
