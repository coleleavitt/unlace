/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsplitfile
// Address: 0x00000000000BC3BC

//----- (00000000000BC3BC) ----------------------------------------------------
const char *__fastcall qsplitfile(const char *a1, const char **a2, char **a3)
{
  char *v6; // x0

  v6 = strrchr(a1, 46);
  if ( v6 )
    *v6++ = 0;
  if ( a2 )
    *a2 = a1;
  if ( a3 )
    *a3 = v6;
  return a1;
}
