/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435100
// Address: 0x0000000000435100

//----- (0000000000435100) ----------------------------------------------------
__int64 __fastcall sub_435100(__int64 *a1, char *s2)
{
  unsigned __int64 v2; // x23
  int v3; // w19
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x2
  const char *v8; // x0

  v2 = a1[1];
  if ( !v2 )
    return -1;
  v3 = 0;
  v5 = 0;
  v6 = *a1;
  do
  {
    v7 = 3 * v5;
    v8 = (const char *)&qword_4B2D48;
    if ( *(_QWORD *)(v6 + 8 * v7 + 8) )
      v8 = *(const char **)(v6 + 8 * v7);
    if ( !strcmp(v8, s2) )
      return v3;
    v5 = ++v3;
  }
  while ( v3 < v2 );
  return -1;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
