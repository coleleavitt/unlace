/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qalloc
// Address: 0x000000010007CD10

//----- (000000010007CD10) ----------------------------------------------------
void *__fastcall qalloc(signed __int64 a1)
{
  void *result; // rax

  if ( !a1 )
    return nullptr;
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
    return nullptr;
  }
  return result;
}
