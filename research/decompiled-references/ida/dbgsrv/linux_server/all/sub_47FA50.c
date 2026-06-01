/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FA50
// Address: 0x000000000047FA50

//----- (000000000047FA50) ----------------------------------------------------
FILE *__fastcall sub_47FA50(const char *a1)
{
  FILE *result; // rax

  result = sub_47F8A0(a1, "wbe", 2);
  if ( !result )
  {
    sub_479EB0(1u);
    return nullptr;
  }
  return result;
}
