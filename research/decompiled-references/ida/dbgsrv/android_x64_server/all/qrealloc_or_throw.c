/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrealloc_or_throw
// Address: 0x00000000000C3290

//----- (00000000000C3290) ----------------------------------------------------
void *__fastcall qrealloc_or_throw(char *a1, size_t a2)
{
  void *result; // rax

  if ( a2 >= 0x7FFFFFFFFFFFFFFFLL )
LABEL_8:
    sub_C3280();
  if ( a2 == 3735928559 )
  {
    *(_DWORD *)__errno(a1) = 12;
LABEL_7:
    set_qerrno((unsigned int)&dword_0 + 1);
    goto LABEL_8;
  }
  if ( !a2 )
  {
    free(a1);
    sub_C3280();
  }
  result = realloc(a1, a2);
  if ( !result )
    goto LABEL_7;
  return result;
}
// 0: using guessed type int dword_0;
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
