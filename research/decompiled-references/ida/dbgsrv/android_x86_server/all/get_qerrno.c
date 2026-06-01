/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_qerrno
// Address: 0x000A3520

//----- (000A3520) --------------------------------------------------------
int get_qerrno()
{
  return _emutls_get_address((unsigned int *)dword_13BC24)[31];
}
// 13BC24: using guessed type int dword_13BC24[4];
