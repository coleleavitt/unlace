/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DC14
// Address: 0x000000010005DC14

//----- (000000010005DC14) ----------------------------------------------------
__int64 __fastcall sub_10005DC14(__int64 a1, __int64 a2)
{
  __int64 v3; // x16

  v3 = *(_QWORD *)sub_10005D1A8();
  *(_QWORD *)(a2 + 8) = (*(__int64 (**)(void))(v3 + 296))();
  return 0;
}
