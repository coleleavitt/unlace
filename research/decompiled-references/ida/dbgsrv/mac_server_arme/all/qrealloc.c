/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrealloc
// Address: 0x0000000100074454

//----- (0000000100074454) ----------------------------------------------------
void *__fastcall qrealloc(void *a1, signed __int64 a2)
{
  void *result; // x0

  if ( !a2 )
  {
    free(a1);
    return nullptr;
  }
  if ( a2 <= 0 )
  {
    *__error() = 12;
    goto LABEL_7;
  }
  result = realloc(a1, a2);
  if ( !result )
  {
LABEL_7:
    set_qerrno();
    return nullptr;
  }
  return result;
}
