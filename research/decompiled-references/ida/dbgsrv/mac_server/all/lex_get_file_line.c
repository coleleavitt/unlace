/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_get_file_line
// Address: 0x0000000100049DD0

//----- (0000000100049DD0) ----------------------------------------------------
__int64 __fastcall lex_get_file_line(__int64 a1, _DWORD *a2, const char **a3, int a4)
{
  const char *v4; // r8
  int v5; // eax
  __int64 v6; // rdi
  int v7; // ecx
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 304) )
  {
    v4 = _s1;
    if ( a4 > 0 )
      goto LABEL_3;
LABEL_6:
    v7 = *(_DWORD *)(a1 + 288);
    v6 = a1 + 280;
    goto LABEL_7;
  }
  v4 = *(const char **)(a1 + 296);
  if ( a4 <= 0 )
    goto LABEL_6;
LABEL_3:
  v5 = *(_DWORD *)(a1 + 256) - a4;
  if ( v5 < 0 )
    return 0;
  v6 = *(_QWORD *)(a1 + 248) + 40LL * (unsigned int)v5;
  v7 = *(_DWORD *)(v6 + 32);
  v4 = "#include ...";
LABEL_7:
  result = *(_QWORD *)v6;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v4;
  return result;
}
