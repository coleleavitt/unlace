/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_error_data
// Address: 0x000757BC

//----- (000757BC) --------------------------------------------------------
_DWORD *__fastcall set_error_data(unsigned int a1, int a2)
{
  int v3; // r5
  _DWORD *result; // r0

  if ( a1 >= 4 )
  {
    if ( !under_debugger )
      interr(480);
    __debugbreak();
  }
  v3 = a1;
  result = _emutls_get_address((size_t *)dword_DE26C);
  result[v3] = a2;
  return result;
}
// DE26C: using guessed type int dword_DE26C[4];
// E0550: using guessed type char under_debugger;
