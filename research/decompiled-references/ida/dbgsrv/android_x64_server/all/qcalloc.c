/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcalloc
// Address: 0x00000000000C3160

//----- (00000000000C3160) ----------------------------------------------------
void *__fastcall qcalloc(unsigned __int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // rdi
  void *result; // rax

  v3 = a1 * a2;
  if ( !v3 )
    return nullptr;
  if ( a1 && a2 && 0xFFFFFFFFFFFFFFFFLL / a2 < a1 || v3 == 3735928559LL || v3 <= 0 )
  {
    *(_DWORD *)__errno(v3) = 12;
    set_qerrno(1u);
    goto LABEL_10;
  }
  result = calloc(v3, 1u);
  if ( !result )
  {
LABEL_10:
    set_qerrno(1u);
    return nullptr;
  }
  return result;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
