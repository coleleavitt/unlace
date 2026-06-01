/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D880
// Address: 0x000000014002D880

//----- (000000014002D880) ----------------------------------------------------
__int64 __fastcall sub_14002D880(_QWORD *a1, const char *a2)
{
  __int64 v3; // rbx
  const char ***i; // rdi
  const char *v5; // rcx

  if ( !a2 )
    return -1;
  v3 = a1[1] - 1LL;
  if ( v3 < 0 )
    return -1;
  for ( i = (const char ***)(*a1 + 8 * v3); ; --i )
  {
    v5 = Str1;
    if ( (*i)[1] )
      v5 = **i;
    if ( !strcmp(v5, a2) )
      break;
    if ( --v3 < 0 )
      return -1;
  }
  return v3;
}
