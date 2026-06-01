/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgetc
// Address: 0x00000000000C2DE0

//----- (00000000000C2DE0) ----------------------------------------------------
int __fastcall qfgetc(FILE *a1)
{
  if ( a1 )
    return fgetc(a1);
  set_qerrno(1u);
  *(_DWORD *)__errno(1) = 9;
  set_qerrno(1u);
  return -1;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
