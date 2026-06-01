/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D000
// Address: 0x000000014002D000

//----- (000000014002D000) ----------------------------------------------------
__int64 __fastcall sub_14002D000(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  _QWORD *i; // rcx

  if ( !a2 )
    return -1;
  v2 = *(_QWORD *)(a1 + 8);
  result = 0;
  if ( !v2 )
    return -1;
  for ( i = *(_QWORD **)a1; *i != a2; ++i )
  {
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
