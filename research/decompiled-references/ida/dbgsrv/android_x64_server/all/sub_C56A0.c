/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C56A0
// Address: 0x00000000000C56A0

//----- (00000000000C56A0) ----------------------------------------------------
char *__fastcall sub_C56A0(char *a1)
{
  char v1; // bp
  char *v2; // r15
  char *v3; // rbx

  v1 = *a1;
  v2 = a1;
  if ( *a1 )
  {
    v3 = a1 + 1;
    v2 = a1;
    do
    {
      if ( v1 < 0 || !isspace((unsigned __int8)v1) )
        *v2++ = v1;
      v1 = *v3++;
    }
    while ( v1 );
  }
  *v2 = 0;
  return a1;
}
