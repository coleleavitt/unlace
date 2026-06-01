/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019000
// Address: 0x0000000100019000

//----- (0000000100019000) ----------------------------------------------------
__int64 __fastcall sub_100019000(__int64 a1, __int64 a2)
{
  *(_OWORD *)*(_QWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 16) = 1;
  return 0;
}
