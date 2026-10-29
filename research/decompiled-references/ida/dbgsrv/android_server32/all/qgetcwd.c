/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetcwd
// Address: 0x0007D5D0

//----- (0007D5D0) --------------------------------------------------------
char *__fastcall qgetcwd(char *a1, size_t a2)
{
  char *result; // r0
  const char *v3; // r0

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = (const char *)qerrstr(-1);
    sub_1C9E4("getcwd: %s", v3);
  }
  return result;
}
