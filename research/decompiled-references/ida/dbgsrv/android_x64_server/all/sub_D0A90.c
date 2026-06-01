/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0A90
// Address: 0x00000000000D0A90

//----- (00000000000D0A90) ----------------------------------------------------
void *__fastcall sub_D0A90(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
    return (void *)sub_D0AB0(a1);
  return result;
}
