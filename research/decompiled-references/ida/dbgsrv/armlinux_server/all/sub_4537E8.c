/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4537E8
// Address: 0x00000000004537E8

//----- (00000000004537E8) ----------------------------------------------------
__int64 __fastcall sub_4537E8(_QWORD *a1, __int64 **a2)
{
  unsigned __int64 v4; // x0
  __int64 *v5; // x0
  __int64 result; // x0

  v4 = sub_49E0C0(*a2, *(*a2 - 3), 3339675911LL);
  v5 = sub_453720(a1, v4 % a1[1], (const void **)a2, v4);
  if ( !v5 )
    return 0;
  result = *v5;
  if ( !result )
    return 0;
  return result;
}
