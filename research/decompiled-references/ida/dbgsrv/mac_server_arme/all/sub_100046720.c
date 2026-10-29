/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046720
// Address: 0x0000000100046720

//----- (0000000100046720) ----------------------------------------------------
__int64 __fastcall sub_100046720(__int64 a1, __int64 a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 152) = a2;
  return v2;
}
