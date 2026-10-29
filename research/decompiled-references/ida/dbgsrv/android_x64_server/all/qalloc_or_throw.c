/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc_or_throw
// Address: 0x00000000000C3240

//----- (00000000000C3240) ----------------------------------------------------
void *__fastcall qalloc_or_throw(signed __int64 a1)
{
  void *result; // rax

  if ( !a1 )
LABEL_8:
    sub_C3280();
  if ( a1 == 3735928559LL || a1 <= 0 )
  {
    *(_DWORD *)__errno(a1) = 12;
    goto LABEL_7;
  }
  result = malloc(a1);
  if ( !result )
  {
LABEL_7:
    set_qerrno(1u);
    goto LABEL_8;
  }
  return result;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
