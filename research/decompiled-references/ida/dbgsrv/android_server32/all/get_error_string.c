/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_error_string
// Address: 0x000759B8

//----- (000759B8) --------------------------------------------------------
int __fastcall get_error_string(unsigned int a1)
{
  if ( a1 >= 4 )
  {
    if ( !under_debugger )
      interr(483);
    __debugbreak();
  }
  return _emutls_get_address((size_t *)dword_DE26C)[3 * a1 + 4];
}
// DE26C: using guessed type int dword_DE26C[4];
// E0550: using guessed type char under_debugger;
