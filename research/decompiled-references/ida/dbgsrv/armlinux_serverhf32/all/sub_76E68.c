/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76E68
// Address: 0x00076E68

//----- (00076E68) --------------------------------------------------------
char *__fastcall sub_76E68(char *a1, size_t a2)
{
  char *result; // r0
  const char *v3; // r0

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = (const char *)sub_70EB4(-1);
    sub_16FE4("getcwd: %s", v3);
  }
  return result;
}
