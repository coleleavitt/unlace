/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qchsize
// Address: 0x000AF4F0

//----- (000AF4F0) --------------------------------------------------------
int __cdecl qchsize(int a1, int a2, int a3)
{
  if ( !ftruncate64(a1, a2, a3) )
    return 0;
  set_qerrno(1);
  return -1;
}
// 18020: using guessed type int __cdecl ftruncate64(_DWORD, _DWORD, _DWORD);
