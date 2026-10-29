/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E2CC
// Address: 0x000000000005E2CC

//----- (000000000005E2CC) ----------------------------------------------------
__int64 __fastcall sub_5E2CC(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = rotate_left(
                          *(_QWORD *)(a1 + 8),
                          *(_DWORD *)(a1 + 40),
                          *(_QWORD *)(a1 + 72),
                          *(_QWORD *)(a1 + 104));
  return 0;
}
