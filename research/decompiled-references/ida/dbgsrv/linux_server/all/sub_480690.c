/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480690
// Address: 0x0000000000480690

//----- (0000000000480690) ----------------------------------------------------
char *__fastcall sub_480690(char *a1, size_t a2)
{
  char *result; // rax
  const char *v3; // rax

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = (const char *)sub_47A200(-1);
    sub_410DF0("getcwd: %s", v3);
  }
  return result;
}
