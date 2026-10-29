/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A584
// Address: 0x000000000009A584

//----- (000000000009A584) ----------------------------------------------------
__int64 __fastcall sub_9A584(_QWORD *a1, char *s1)
{
  unsigned __int64 v2; // x21
  __int64 v3; // x22
  __int64 v6; // x23

  v2 = a1[13];
  if ( !v2 )
    return -1;
  v3 = a1[12];
  v6 = 0;
  while ( strcmp(s1, *(const char **)(v3 + 8 * v6)) )
  {
    if ( ++v6 >= v2 )
      return -1;
  }
  return *(_QWORD *)(a1[9] + 8 * v6);
}
