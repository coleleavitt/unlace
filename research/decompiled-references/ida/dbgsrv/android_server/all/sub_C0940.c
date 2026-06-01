/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C0940
// Address: 0x00000000000C0940

//----- (00000000000C0940) ----------------------------------------------------
unsigned __int8 *__fastcall sub_C0940(unsigned __int8 *a1)
{
  unsigned __int8 v1; // w22
  unsigned __int8 *v3; // x20
  unsigned __int8 *v4; // x21
  int v5; // t1
  int v6; // t1

  v1 = *a1;
  v3 = a1;
  if ( *a1 )
  {
    v4 = a1 + 1;
    v3 = a1;
    do
    {
      while ( ((char)v1 & 0x80000000) == 0 && isspace(v1) )
      {
        v5 = *v4++;
        v1 = v5;
        if ( !v5 )
          goto LABEL_8;
      }
      *v3++ = v1;
      v6 = *v4++;
      v1 = v6;
    }
    while ( v6 );
  }
LABEL_8:
  *v3 = 0;
  return a1;
}
