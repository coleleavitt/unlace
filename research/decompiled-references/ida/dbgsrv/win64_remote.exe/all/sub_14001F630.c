/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001F630
// Address: 0x000000014001F630

//----- (000000014001F630) ----------------------------------------------------
__int64 __fastcall sub_14001F630(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = sub_140064100(
                          *(_QWORD *)(a1 + 8),
                          *(_DWORD *)(a1 + 40),
                          *(_QWORD *)(a1 + 72),
                          *(_QWORD *)(a1 + 104));
  return 0;
}
