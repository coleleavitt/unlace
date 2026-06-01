/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: strrpl
// Address: 0x000802BA

//----- (000802BA) --------------------------------------------------------
char *__fastcall strrpl(char *a1, int c, int a3)
{
  char *v3; // r5
  char v4; // r4

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
