/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: strarray
// Address: 0x00000000000CC1E0

//----- (00000000000CC1E0) ----------------------------------------------------
const char *__fastcall strarray(__int64 a1, __int64 a2, int a3)
{
  const char *result; // rax
  __int64 v4; // r8
  unsigned __int64 i; // rcx
  __int64 v6; // rsi

  result = &byte_EB522;
  if ( a1 && a2 > 0 )
  {
    v4 = a1 + 8;
    for ( i = 0; i < a2; ++i )
    {
      if ( *(_DWORD *)(v4 - 8) == a3 )
        return *(const char **)v4;
      v4 += 16;
    }
    v6 = 16 * (a2 - 1);
    if ( !*(_DWORD *)(a1 + v6) )
      return *(const char **)(a1 + v6 + 8);
  }
  return result;
}
