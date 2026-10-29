/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408388
// Address: 0x0000000000408388

//----- (0000000000408388) ----------------------------------------------------
__int64 __fastcall sub_408388(__int64 *a1, char *s2)
{
  unsigned __int64 v2; // x23
  int v3; // w19
  __int64 v5; // x2
  __int64 v6; // x24
  const char *v7; // x0
  __int64 v8; // x20
  int v9; // w0

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = 0;
  v5 = 0;
  v6 = *a1;
  while ( 1 )
  {
    ++v3;
    v7 = (const char *)&qword_4B2D48;
    v8 = v6 + 80 * v5;
    if ( *(_QWORD *)(v8 + 24) )
      v7 = *(const char **)(v8 + 16);
    v9 = strcmp(v7, s2);
    v5 = v3;
    if ( !v9 )
      break;
    if ( v3 >= v2 )
      return 0;
  }
  return v8;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
