/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc
// Address: 0x00000000000C30C0

//----- (00000000000C30C0) ----------------------------------------------------
void *__fastcall qalloc(signed __int64 a1)
{
  void *result; // rax

  if ( !a1 )
    return nullptr;
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
    return nullptr;
  }
  return result;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
