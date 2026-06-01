/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473938
// Address: 0x0000000000473938

//----- (0000000000473938) ----------------------------------------------------
__int64 __fastcall sub_473938(__int64 a1, char *s1, _DWORD *a3)
{
  __int64 v3; // x22
  __int64 v4; // x19
  __int64 i; // x20

  v3 = *(_QWORD *)(a1 + 680);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = 0;
  for ( i = *(_QWORD *)(a1 + 672); strcasecmp(s1, *(const char **)i); i += 32 )
  {
    if ( ++v4 == v3 )
      return 0xFFFFFFFFLL;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)(i + 12);
  return (unsigned int)v4;
}
