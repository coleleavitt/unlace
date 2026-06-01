/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsplitfile
// Address: 0x0007D384

//----- (0007D384) --------------------------------------------------------
const char *__fastcall qsplitfile(const char *a1, const char **a2, char **a3)
{
  char *v6; // r0
  char *v7; // r1

  v6 = strrchr(a1, 46);
  v7 = nullptr;
  if ( v6 )
  {
    *v6 = 0;
    v7 = v6 + 1;
  }
  if ( a2 )
    *a2 = a1;
  if ( a3 )
    *a3 = v7;
  return a1;
}
