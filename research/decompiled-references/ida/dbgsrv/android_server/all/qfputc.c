/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfputc
// Address: 0x00000000000BDF14

//----- (00000000000BDF14) ----------------------------------------------------
__int64 __fastcall qfputc(int a1, FILE *a2)
{
  __int64 v3; // x0

  if ( a2 )
    return fputc(a1, a2);
  v3 = set_qerrno(1u);
  *(_DWORD *)__errno(v3) = 9;
  set_qerrno(1u);
  return 0xFFFFFFFFLL;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
