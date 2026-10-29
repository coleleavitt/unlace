/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrealloc_or_throw
// Address: 0x0007E9B0

//----- (0007E9B0) --------------------------------------------------------
void *__fastcall qrealloc_or_throw(void *a1, size_t a2)
{
  void *result; // r0

  if ( a2 >= 0x7FFFFFFF )
LABEL_7:
    sub_7E9A0();
  if ( !a2 )
  {
    free(a1);
    sub_7E9A0();
  }
  result = realloc(a1, a2);
  if ( !result )
  {
    set_qerrno(1);
    goto LABEL_7;
  }
  return result;
}
