/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AD20
// Address: 0x0045AD20

//----- (0045AD20) --------------------------------------------------------
char *__stdcall sub_45AD20(char *a1, int a2, int a3)
{
  __int8 *i; // eax

  if ( a2 == a3 )
    return a1;
  if ( a1 )
  {
    for ( i = sub_464F10(a1, a2); i; i = sub_464F10(i, a2) )
      *i = a3;
  }
  return a1;
}
