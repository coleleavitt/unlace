/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qftell
// Address: 0x00000000000C2410

//----- (00000000000C2410) ----------------------------------------------------
__int64 __fastcall qftell(FILE *a1)
{
  __int64 result; // rax

  if ( !a1 )
  {
    set_qerrno(1u);
    *(_DWORD *)__errno(1) = 9;
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
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
