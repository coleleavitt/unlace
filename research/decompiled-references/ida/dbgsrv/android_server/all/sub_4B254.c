/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B254
// Address: 0x000000000004B254

//----- (000000000004B254) ----------------------------------------------------
char **__fastcall sub_4B254(char *s2)
{
  const char *v2; // x0
  const char *v3; // x0

  if ( !strcmp("libunwind-x86_64.so.8", s2) )
    return off_1568A0;
  if ( (qisabspath((unsigned __int8 *)s2) & 1) != 0 )
  {
    v2 = qbasename(s2);
    if ( !strcmp("libunwind-x86_64.so.8", v2) )
      return off_1568A0;
  }
  if ( !strcmp("libunwind-x86_64.so", s2) )
    return off_1568B0;
  if ( (qisabspath((unsigned __int8 *)s2) & 1) != 0 )
  {
    v3 = qbasename(s2);
    if ( !strcmp("libunwind-x86_64.so", v3) )
      return off_1568B0;
  }
  return nullptr;
}
// 1568A0: using guessed type char *off_1568A0[4];
// 1568B0: using guessed type char *off_1568B0[2];
