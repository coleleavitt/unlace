/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BF80
// Address: 0x000000000042BF80

//----- (000000000042BF80) ----------------------------------------------------
__int64 __fastcall sub_42BF80(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = sub_476C00(
                          *(_QWORD *)(a1 + 8),
                          *(_DWORD *)(a1 + 40),
                          *(_QWORD *)(a1 + 72),
                          *(_QWORD *)(a1 + 104));
  return 0;
}
