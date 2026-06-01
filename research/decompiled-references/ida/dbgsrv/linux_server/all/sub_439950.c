/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439950
// Address: 0x0000000000439950

//----- (0000000000439950) ----------------------------------------------------
__int64 __fastcall sub_439950(char *s2)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // rbp

  if ( !s2 )
    return 0;
  v1 = qword_4C56E0[0];
  if ( !qword_4C56E0[0] )
    return 0;
  v2 = qword_4C56E0[1];
  v3 = 0;
  while ( strcmp(*(const char **)v2, s2) )
  {
    ++v3;
    v2 += 40;
    if ( v1 == v3 )
      return 0;
  }
  if ( !v2 || *(_QWORD *)(v2 + 8) )
    return v2;
  else
    return 0;
}
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
