/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B3A8
// Address: 0x000000000004B3A8

//----- (000000000004B3A8) ----------------------------------------------------
__int64 __fastcall sub_4B3A8(__int64 result, bool (__fastcall *a2)(__int64 a1, int a2))
{
  bool (__fastcall *v2)(__int64, int); // x8

  v2 = sub_4EF28;
  if ( a2 )
    v2 = a2;
  *(_QWORD *)(result + 496) = v2;
  return result;
}
