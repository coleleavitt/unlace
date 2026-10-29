/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83E70
// Address: 0x0000000000083E70

//----- (0000000000083E70) ----------------------------------------------------
__int64 __fastcall sub_83E70(__int64 a1, const char **a2)
{
  unsigned int v2; // r14d
  const char *v4; // rsi
  const char **i; // rbx

  v4 = *a2;
  LOBYTE(v2) = 1;
  if ( v4 )
  {
    for ( i = a2 + 2; !(unsigned int)sub_829B0(a1, v4, *(i - 1), 0, 0, nullptr); i += 2 )
    {
      v4 = *i;
      if ( !v4 )
        return v2;
    }
    return 0;
  }
  return v2;
}
// 83EB9: variable 'v2' is possibly undefined
