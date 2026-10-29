/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc_or_throw
// Address: 0x000000010006F598

//----- (000000010006F598) ----------------------------------------------------
void *__fastcall qalloc_or_throw(signed __int64 a1)
{
  void *result; // x0

  if ( !a1 )
LABEL_7:
    sub_10006F5D4();
  if ( a1 <= 0 )
  {
    *__error() = 12;
    goto LABEL_6;
  }
  result = malloc(a1);
  if ( !result )
  {
LABEL_6:
    set_qerrno();
    goto LABEL_7;
  }
  return result;
}
