/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47FA20
// Address: 0x000000000047FA20

//----- (000000000047FA20) ----------------------------------------------------
FILE *__fastcall sub_47FA20(const char *a1)
{
  FILE *result; // rax

  result = sub_47F8A0(a1, "rte", 8);
  if ( !result )
  {
    sub_479EB0(1u);
    return nullptr;
  }
  return result;
}
