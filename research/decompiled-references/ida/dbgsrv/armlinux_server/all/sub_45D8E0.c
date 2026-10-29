/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D8E0
// Address: 0x000000000045D8E0

//----- (000000000045D8E0) ----------------------------------------------------
__int64 __fastcall sub_45D8E0(_QWORD *a1, char *s1)
{
  __int64 v2; // x21
  __int64 v4; // x19
  __int64 v6; // x22
  const char *v7; // x1
  __int64 v8; // x23

  v2 = a1[13];
  if ( !v2 )
    return -1;
  v4 = 0;
  v6 = a1[12];
  do
  {
    v7 = *(const char **)(v6 + 8 * v4);
    v8 = 8 * v4++;
    if ( !strcmp(s1, v7) )
      return *(_QWORD *)(a1[9] + v8);
  }
  while ( v4 != v2 );
  return -1;
}
