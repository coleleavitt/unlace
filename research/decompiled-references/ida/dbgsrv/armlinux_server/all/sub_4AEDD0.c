/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AEDD0
// Address: 0x00000000004AEDD0

//----- (00000000004AEDD0) ----------------------------------------------------
__int64 sub_4AEDD0()
{
  __int64 *v0; // x0
  __int64 v1; // x1
  __int64 result; // x0

  v0 = *(__int64 **)sub_49F2B0();
  if ( !v0 )
    return 0;
  v1 = v0[10];
  result = *v0;
  if ( (v1 & 1) != 0 )
    return *(_QWORD *)(result - 112);
  return result;
}
