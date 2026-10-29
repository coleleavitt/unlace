/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgetcwd
// Address: 0x00000000000BC708

//----- (00000000000BC708) ----------------------------------------------------
char *__fastcall qgetcwd(char *a1, size_t a2)
{
  char *result; // x0
  const char *v3; // x0
  const char *v4; // x0

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3B1DC("getcwd: %s", v3);
    return (char *)qchdir(v4);
  }
  return result;
}
// BC731: variable 'v4' is possibly undefined
