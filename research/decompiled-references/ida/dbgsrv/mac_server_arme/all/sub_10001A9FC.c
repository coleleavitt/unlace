/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A9FC
// Address: 0x000000010001A9FC

//----- (000000010001A9FC) ----------------------------------------------------
__int64 __fastcall sub_10001A9FC(__int64 a1, __int64 a2)
{
  *(_OWORD *)*(_QWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 16) = 1;
  return 0;
}
