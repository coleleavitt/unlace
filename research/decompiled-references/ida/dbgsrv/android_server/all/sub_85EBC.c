/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85EBC
// Address: 0x0000000000085EBC

//----- (0000000000085EBC) ----------------------------------------------------
__int64 __fastcall sub_85EBC(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = a2;
  return v2;
}
