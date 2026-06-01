/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qchsize
// Address: 0x0007DD30

//----- (0007DD30) --------------------------------------------------------
int __fastcall qchsize(int a1, int a2, int a3, int a4)
{
  int v4; // r1
  int result; // r0

  v4 = ftruncate64(a1, a2, a3, a4);
  result = 0;
  if ( v4 )
  {
    set_qerrno(1);
    return -1;
  }
  return result;
}
// 1973C: using guessed type int __fastcall ftruncate64(_DWORD, _DWORD, _DWORD, _DWORD);
