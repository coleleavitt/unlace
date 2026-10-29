/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439630
// Address: 0x0000000000439630

//----- (0000000000439630) ----------------------------------------------------
__int64 __fastcall sub_439630(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !a2 )
    return -1;
  v2 = a1[1];
  if ( !v2 )
    return -1;
  result = 0;
  while ( *(_QWORD *)(*a1 + 8 * result) != a2 )
  {
    if ( ++result == v2 )
      return -1;
  }
  return result;
}
