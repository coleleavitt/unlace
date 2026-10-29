/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_get_file_line
// Address: 0x000000010004216C

//----- (000000010004216C) ----------------------------------------------------
__int64 __fastcall lex_get_file_line(__int64 a1, _DWORD *a2, char **a3, int a4)
{
  char *v4; // x8
  int v5; // w8
  __int64 v6; // x10
  int v7; // w9
  __int64 result; // x0

  if ( *(_QWORD *)(a1 + 304) )
  {
    v4 = *(char **)(a1 + 296);
    if ( a4 >= 1 )
      goto LABEL_3;
  }
  else
  {
    v4 = &byte_100075A30;
    if ( a4 >= 1 )
    {
LABEL_3:
      v5 = *(_DWORD *)(a1 + 256) - a4;
      if ( v5 < 0 )
        return 0;
      v6 = *(_QWORD *)(a1 + 248) + 40LL * (unsigned int)v5;
      v7 = *(_DWORD *)(v6 + 32);
      v4 = "#include ...";
      result = *(_QWORD *)v6;
      if ( a2 )
        goto LABEL_5;
      goto LABEL_6;
    }
  }
  v7 = *(_DWORD *)(a1 + 288);
  result = *(_QWORD *)(a1 + 280);
  if ( a2 )
LABEL_5:
    *a2 = v7;
LABEL_6:
  if ( a3 )
    *a3 = v4;
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
