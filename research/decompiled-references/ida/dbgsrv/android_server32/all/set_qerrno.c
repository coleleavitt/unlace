/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_qerrno
// Address: 0x0007577C

//----- (0007577C) --------------------------------------------------------
int __fastcall set_qerrno(int a1)
{
  if ( a1 == -1 )
    return _emutls_get_address((size_t *)dword_DE26C)[31];
  _emutls_get_address((size_t *)dword_DE26C)[31] = a1;
  return a1;
}
// DE26C: using guessed type int dword_DE26C[4];
