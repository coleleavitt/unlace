/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F9F0
// Address: 0x000000000047F9F0

//----- (000000000047F9F0) ----------------------------------------------------
FILE *__fastcall sub_47F9F0(const char *a1)
{
  FILE *result; // rax

  result = sub_47F8A0(a1, "rbe", 8);
  if ( !result )
  {
    sub_479EB0(1u);
    return nullptr;
  }
  return result;
}
