/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452480
// Address: 0x0000000000452480

//----- (0000000000452480) ----------------------------------------------------
__int64 __fastcall sub_452480(__int64 a1, __int64 a2)
{
  __int64 v2; // x2

  v2 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = a2;
  return v2;
}
