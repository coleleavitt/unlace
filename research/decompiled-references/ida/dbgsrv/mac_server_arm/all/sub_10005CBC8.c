/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CBC8
// Address: 0x000000010005CBC8

//----- (000000010005CBC8) ----------------------------------------------------
__int64 __fastcall sub_10005CBC8(__int64 a1, char *a2, _DWORD *a3)
{
  __int64 v3; // x23
  __int64 v6; // x19
  __int64 i; // x22

  v3 = *(_QWORD *)(a1 + 552);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v6 = 0;
  for ( i = *(_QWORD *)(a1 + 544); strcasecmp(a2, *(const char **)i); i += 32 )
  {
    if ( v3 == ++v6 )
      return 0xFFFFFFFFLL;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)(i + 12);
  return v6;
}
