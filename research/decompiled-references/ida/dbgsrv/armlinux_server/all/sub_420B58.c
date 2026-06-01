/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420B58
// Address: 0x0000000000420B58

//----- (0000000000420B58) ----------------------------------------------------
__int64 __fastcall sub_420B58(__int64 result, bool (__fastcall *a2)(__int64 a1, int a2))
{
  if ( !a2 )
    a2 = sub_419FC0;
  *(_QWORD *)(result + 496) = a2;
  return result;
}
