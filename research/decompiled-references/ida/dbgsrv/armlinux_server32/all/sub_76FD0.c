/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76FD0
// Address: 0x00076FD0

//----- (00076FD0) --------------------------------------------------------
char *__fastcall sub_76FD0(char *a1, size_t a2)
{
  char *result; // r0
  const char *v3; // r0

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = (const char *)sub_71020(-1);
    sub_17188("getcwd: %s", v3);
  }
  return result;
}
