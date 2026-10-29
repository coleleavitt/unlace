/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_get_file_line
// Address: 0x0000000000087A00

//----- (0000000000087A00) ----------------------------------------------------
__int64 __fastcall lex_get_file_line(__int64 a1, _DWORD *a2, const char **a3, int a4)
{
  int v4; // r8d
  const char *v5; // r9
  int v6; // eax
  __int64 v7; // rdi
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 288);
  if ( !*(_QWORD *)(a1 + 304) )
  {
    v5 = s1;
    if ( a4 > 0 )
      goto LABEL_3;
LABEL_6:
    v7 = a1 + 280;
    goto LABEL_7;
  }
  v5 = *(const char **)(a1 + 296);
  if ( a4 <= 0 )
    goto LABEL_6;
LABEL_3:
  v6 = *(_DWORD *)(a1 + 256) - a4;
  if ( v6 < 0 )
    return 0;
  v7 = *(_QWORD *)(a1 + 248) + 40LL * v6;
  v4 = *(_DWORD *)(v7 + 32);
  v5 = "#include ...";
LABEL_7:
  result = *(_QWORD *)v7;
  if ( a2 )
    *a2 = v4;
  if ( a3 )
    *a3 = v5;
  return result;
}
