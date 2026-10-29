/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005AAA0
// Address: 0x000000014005AAA0

//----- (000000014005AAA0) ----------------------------------------------------
void *__fastcall sub_14005AAA0(signed __int64 a1)
{
  void *result; // rax

  if ( !a1 )
LABEL_6:
    sub_14005AA30();
  if ( a1 <= 0 )
  {
    *errno() = 12;
LABEL_5:
    sub_1400640B0(1u);
    goto LABEL_6;
  }
  result = j__malloc_base(a1);
  if ( !result )
    goto LABEL_5;
  return result;
}
