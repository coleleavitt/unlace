/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_qerrno
// Address: 0x000A34D0

//----- (000A34D0) --------------------------------------------------------
int __cdecl set_qerrno(int a1)
{
  int v1; // esi

  v1 = a1;
  if ( a1 == -1 )
    return _emutls_get_address((unsigned int *)dword_13BC24)[31];
  _emutls_get_address((unsigned int *)dword_13BC24)[31] = a1;
  return v1;
}
// 13BC24: using guessed type int dword_13BC24[4];
