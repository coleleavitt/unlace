/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_get_file_line
// Address: 0x000704E0

//----- (000704E0) --------------------------------------------------------
int __cdecl lex_get_file_line(_DWORD *a1, _DWORD *a2, char **a3, int a4)
{
  int v4; // ecx
  char *v5; // edx
  int v6; // ecx
  int *v7; // eax
  int result; // eax

  v4 = a1[37];
  if ( !a1[39] )
  {
    v5 = byte_EF875;
    if ( a4 > 0 )
      goto LABEL_3;
LABEL_6:
    v7 = a1 + 36;
    goto LABEL_7;
  }
  v5 = (char *)a1[38];
  if ( a4 <= 0 )
    goto LABEL_6;
LABEL_3:
  v6 = a1[33] - a4;
  if ( v6 < 0 )
    return 0;
  v7 = (int *)(a1[32] + 24 * v6);
  v4 = v7[4];
  v5 = "#include ...";
LABEL_7:
  result = *v7;
  if ( a2 )
    *a2 = v4;
  if ( a3 )
    *a3 = v5;
  return result;
}
