/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_qerrno
// Address: 0x000757A8

//----- (000757A8) --------------------------------------------------------
int get_qerrno()
{
  return _emutls_get_address((size_t *)dword_DE26C)[31];
}
// DE26C: using guessed type int dword_DE26C[4];
