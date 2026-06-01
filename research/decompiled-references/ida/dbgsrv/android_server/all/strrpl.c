/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: strrpl
// Address: 0x00000000000C09A8

//----- (00000000000C09A8) ----------------------------------------------------
char *__fastcall strrpl(char *a1, int c, int a3)
{
  char *v3; // x20
  char v4; // w19

  v3 = a1;
  if ( a1 )
  {
    v4 = a3;
    if ( c != a3 )
    {
      while ( 1 )
      {
        a1 = strchr(a1, c);
        if ( !a1 )
          break;
        *a1 = v4;
      }
    }
  }
  return v3;
}
