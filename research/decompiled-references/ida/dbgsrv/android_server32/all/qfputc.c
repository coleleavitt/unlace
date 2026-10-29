/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputc
// Address: 0x0007E656

//----- (0007E656) --------------------------------------------------------
int __fastcall qfputc(int a1, FILE *a2)
{
  int v3; // r0

  if ( a2 )
    return fputc(a1, a2);
  v3 = set_qerrno(1);
  *(_DWORD *)_errno(v3) = 9;
  set_qerrno(1);
  return -1;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
