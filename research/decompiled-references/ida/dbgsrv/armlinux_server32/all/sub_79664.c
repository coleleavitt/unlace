/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79664
// Address: 0x00079664

//----- (00079664) --------------------------------------------------------
const char *__fastcall sub_79664(const char *a1, int a2, int a3)
{
  bool v3; // zf
  char v5; // r4
  char *i; // r0

  v3 = a2 == a3;
  if ( a2 != a3 )
    v3 = a1 == nullptr;
  if ( !v3 )
  {
    v5 = a3;
    for ( i = strchr(a1, a2); i; i = strchr(i, a2) )
      *i = v5;
  }
  return a1;
}
