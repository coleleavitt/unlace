/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: llong_scan
// Address: 0x00000000000BF930

//----- (00000000000BF930) ----------------------------------------------------
__int64 __fastcall llong_scan(char *a1, int a2, char **a3)
{
  char *v4; // r15
  char v5; // bl
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax

  v4 = a1;
  v5 = *a1;
  if ( *a1 < 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 0;
    do
    {
      if ( !isalnum((unsigned __int8)v5) )
        break;
      v7 = v5;
      if ( v5 >= 58 )
      {
        if ( v5 > 96 )
          v7 = v5 - 32;
        v7 -= 7;
      }
      v8 = v7 - 48;
      if ( v8 >= a2 )
        break;
      v6 = v8 + a2 * v6;
      v5 = *++v4;
    }
    while ( v5 >= 0 );
  }
  if ( a3 )
    *a3 = v4;
  return v6;
}
