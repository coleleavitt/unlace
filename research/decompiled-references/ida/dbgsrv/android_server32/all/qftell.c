/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qftell
// Address: 0x0007E1EA

//----- (0007E1EA) --------------------------------------------------------
__int64 __fastcall qftell(FILE *a1)
{
  __int64 result; // r0
  int v2; // r0

  if ( !a1 )
  {
    v2 = set_qerrno(1);
    *(_DWORD *)_errno(v2) = 9;
    goto LABEL_5;
  }
  result = ftell(a1);
  if ( (_DWORD)result == -1 )
  {
LABEL_5:
    set_qerrno(1);
    return -1;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
