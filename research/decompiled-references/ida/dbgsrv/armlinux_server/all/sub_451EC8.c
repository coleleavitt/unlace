/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451EC8
// Address: 0x0000000000451EC8

//----- (0000000000451EC8) ----------------------------------------------------
__int64 __fastcall sub_451EC8(__int64 result, __int64 a2)
{
  _BOOL8 v2; // x2

  v2 = 1;
  if ( !*(_QWORD *)(result + 8) )
    v2 = *(_QWORD *)(a2 + 8) != 0;
  *(_BYTE *)result = 0;
  *(_QWORD *)(result + 8) = v2;
  return result;
}
