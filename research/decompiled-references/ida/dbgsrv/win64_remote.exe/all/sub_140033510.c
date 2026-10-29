/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140033510
// Address: 0x0000000140033510

//----- (0000000140033510) ----------------------------------------------------
__int64 __fastcall sub_140033510(__int64 *a1, const char *a2)
{
  unsigned __int64 v2; // rsi
  int v3; // edi
  __int64 i; // rbx
  const char *v6; // rcx

  v2 = a1[1];
  v3 = 0;
  if ( !v2 )
    return -1;
  for ( i = *a1; ; i += 24 )
  {
    v6 = Str1;
    if ( *(_QWORD *)(i + 8) )
      v6 = *(const char **)i;
    if ( !strcmp(v6, a2) )
      break;
    if ( ++v3 >= v2 )
      return -1;
  }
  return v3;
}
