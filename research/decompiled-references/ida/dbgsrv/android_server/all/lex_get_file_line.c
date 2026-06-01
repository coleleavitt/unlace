/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_get_file_line
// Address: 0x00000000000826A8

//----- (00000000000826A8) ----------------------------------------------------
__int64 __fastcall lex_get_file_line(__int64 a1, _DWORD *a2, char **a3, int a4)
{
  int v4; // w8
  char *v5; // x9
  int v6; // w8
  __int64 v7; // x10
  __int64 result; // x0

  v4 = *(_DWORD *)(a1 + 288);
  if ( *(_QWORD *)(a1 + 304) )
  {
    v5 = *(char **)(a1 + 296);
    if ( a4 >= 1 )
      goto LABEL_3;
  }
  else
  {
    v5 = &byte_F154B;
    if ( a4 >= 1 )
    {
LABEL_3:
      v6 = *(_DWORD *)(a1 + 256) - a4;
      if ( v6 < 0 )
        return 0;
      v7 = *(_QWORD *)(a1 + 248) + 40LL * v6;
      v4 = *(_DWORD *)(v7 + 32);
      v5 = "#include ...";
      result = *(_QWORD *)v7;
      if ( a2 )
        goto LABEL_5;
      goto LABEL_6;
    }
  }
  result = *(_QWORD *)(a1 + 280);
  if ( a2 )
LABEL_5:
    *a2 = v4;
LABEL_6:
  if ( a3 )
    *a3 = v5;
  return result;
}
// F154B: using guessed type char byte_F154B;
