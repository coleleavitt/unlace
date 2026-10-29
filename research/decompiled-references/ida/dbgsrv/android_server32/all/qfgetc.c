/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgetc
// Address: 0x0007E67E

//----- (0007E67E) --------------------------------------------------------
int __fastcall qfgetc(FILE *a1)
{
  int v2; // r0

  if ( a1 )
    return fgetc(a1);
  v2 = set_qerrno(1);
  *(_DWORD *)_errno(v2) = 9;
  set_qerrno(1);
  return -1;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
