/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_get_file_line
// Address: 0x00052AA8

//----- (00052AA8) --------------------------------------------------------
int __fastcall lex_get_file_line(_DWORD *a1, _DWORD *a2, char **a3, int a4)
{
  int v4; // r4
  char *v5; // r5
  int *v6; // r6
  int v7; // r4
  int v8; // r3

  v4 = a1[37];
  if ( a1[39] )
    v5 = (char *)a1[38];
  else
    v5 = &byte_B3CBE;
  v6 = a1 + 36;
  if ( a4 >= 1 )
  {
    v7 = a1[33] - a4;
    v8 = 0;
    if ( v7 < 0 )
      return v8;
    v6 = (int *)(a1[32] + 24 * v7);
    v4 = v6[4];
    v5 = "#include ...";
  }
  v8 = *v6;
  if ( a2 )
    *a2 = v4;
  if ( a3 )
    *a3 = v5;
  return v8;
}
// B3CBE: using guessed type char byte_B3CBE;
