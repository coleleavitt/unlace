/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464938
// Address: 0x0000000000464938

//----- (0000000000464938) ----------------------------------------------------
__int64 __fastcall sub_464938(__int64 a1, char a2)
{
  const char *v2; // x21
  unsigned __int64 v3; // x23
  __int64 v4; // x1
  int v5; // w19
  __int64 v6; // x24
  const char *v7; // x0
  __int64 v8; // x20
  int v9; // w0

  v2 = ".debug_info";
  if ( !a2 )
    v2 = ".debug_types";
  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3 )
    return 0;
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 232);
  while ( 1 )
  {
    ++v5;
    v7 = (const char *)&qword_4B2D48;
    v8 = v6 + 72 * v4;
    if ( *(_QWORD *)(v8 + 32) )
      v7 = *(const char **)(v8 + 24);
    v9 = strcmp(v7, v2);
    v4 = v5;
    if ( !v9 )
      break;
    if ( v5 >= v3 )
      return 0;
  }
  return v8;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
