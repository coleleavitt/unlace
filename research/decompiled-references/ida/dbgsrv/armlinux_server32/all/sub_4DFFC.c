/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DFFC
// Address: 0x0004DFFC

//----- (0004DFFC) --------------------------------------------------------
int __fastcall sub_4DFFC(int a1, char **a2)
{
  char **v2; // r4
  char *v3; // r1
  char *v5; // t1

  v2 = a2;
  v3 = *a2;
  if ( !v3 )
    return 1;
  while ( !sub_4DE34(a1, v3, v2[1], 0, 0, nullptr) )
  {
    v5 = v2[2];
    v2 += 2;
    v3 = v5;
    if ( !v5 )
      return 1;
  }
  return 0;
}
