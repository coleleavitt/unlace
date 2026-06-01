/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F5D8
// Address: 0x000000000048F5D8

//----- (000000000048F5D8) ----------------------------------------------------
const char *__fastcall sub_48F5D8(const char *a1, const char **a2, char **a3)
{
  char *v6; // x0
  char *v7; // x1

  v6 = strrchr(a1, 46);
  v7 = nullptr;
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
