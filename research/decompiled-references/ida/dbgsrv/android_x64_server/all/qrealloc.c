/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrealloc
// Address: 0x00000000000C3100

//----- (00000000000C3100) ----------------------------------------------------
void *__fastcall qrealloc(void *a1, signed __int64 a2)
{
  void *result; // rax

  if ( !a2 )
  {
    free(a1);
    return nullptr;
  }
  if ( a2 == 3735928559LL || a2 <= 0 )
  {
    *(_DWORD *)__errno(a1) = 12;
    goto LABEL_8;
  }
  result = realloc(a1, a2);
  if ( !result )
  {
LABEL_8:
    set_qerrno(1u);
    return nullptr;
  }
  return result;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
