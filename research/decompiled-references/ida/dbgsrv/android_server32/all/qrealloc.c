/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrealloc
// Address: 0x0007E8B2

//----- (0007E8B2) --------------------------------------------------------
void *__fastcall qrealloc(void *a1, signed int a2)
{
  void *result; // r0

  if ( !a2 )
  {
    free(a1);
    return nullptr;
  }
  if ( a2 <= 0 )
  {
    *(_DWORD *)_errno(a1) = 12;
    goto LABEL_7;
  }
  result = realloc(a1, a2);
  if ( !result )
  {
LABEL_7:
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
