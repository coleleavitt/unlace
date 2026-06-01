/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76D98
// Address: 0x00076D98

//----- (00076D98) --------------------------------------------------------
const char *__fastcall sub_76D98(const char *a1, const char **a2, char **a3)
{
  char *v6; // r0
  char *v7; // r3

  v6 = strrchr(a1, 46);
  v7 = v6;
  if ( v6 )
  {
    v7 = v6 + 1;
    *v6 = 0;
  }
  if ( a2 )
    *a2 = a1;
  if ( a3 )
    *a3 = v7;
  return a1;
}
