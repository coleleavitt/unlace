/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qftell
// Address: 0x00000000000BD790

//----- (00000000000BD790) ----------------------------------------------------
__int64 __fastcall qftell(FILE *a1)
{
  __int64 result; // x0
  __int64 v2; // x0

  if ( !a1 )
  {
    v2 = set_qerrno(1u);
    *(_DWORD *)__errno(v2) = 9;
    goto LABEL_5;
  }
  result = ftell(a1);
  if ( result == -1 )
  {
LABEL_5:
    set_qerrno(1u);
    return -1;
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
