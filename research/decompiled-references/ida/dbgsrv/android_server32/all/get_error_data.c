/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_data
// Address: 0x00075984

//----- (00075984) --------------------------------------------------------
int __fastcall get_error_data(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( !under_debugger )
      interr(482);
    __debugbreak();
  }
  return _emutls_get_address((size_t *)dword_DE26C)[a1];
}
// DE26C: using guessed type int dword_DE26C[4];
// E0550: using guessed type char under_debugger;
