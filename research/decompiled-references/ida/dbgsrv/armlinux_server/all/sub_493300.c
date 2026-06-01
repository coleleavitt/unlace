/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493300
// Address: 0x0000000000493300

//----- (0000000000493300) ----------------------------------------------------
const char *__fastcall sub_493300(const char *a1, int a2, int a3)
{
  bool v3; // zf
  char v6; // w19
  char *i; // x0

  if ( a1 )
    v3 = a2 == a3;
  else
    v3 = 1;
  if ( !v3 )
  {
    v6 = a3;
    for ( i = strchr(a1, a2); i; i = strchr(i, a2) )
      *i = v6;
  }
  return a1;
}
