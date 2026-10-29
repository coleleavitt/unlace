/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputs
// Address: 0x00000000000C2EC0

//----- (00000000000C2EC0) ----------------------------------------------------
int __fastcall qfputs(const char *a1, FILE *a2)
{
  if ( a2 )
    return fputs(a1, a2);
  set_qerrno(1u);
  *(_DWORD *)__errno(1) = 9;
  set_qerrno(1u);
  return -1;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
