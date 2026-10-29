/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfgetc
// Address: 0x00000000000BDF48

//----- (00000000000BDF48) ----------------------------------------------------
__int64 __fastcall qfgetc(FILE *a1)
{
  __int64 v2; // x0

  if ( a1 )
    return fgetc(a1);
  v2 = set_qerrno(1u);
  *(_DWORD *)__errno(v2) = 9;
  set_qerrno(1u);
  return 0xFFFFFFFFLL;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
