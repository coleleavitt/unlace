/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4265B0
// Address: 0x00000000004265B0

//----- (00000000004265B0) ----------------------------------------------------
bool __fastcall sub_4265B0(__int64 a1, _QWORD *a2)
{
  *a2 = 0;
  a2[1] = 0;
  return (sub_420C98(*(_QWORD *)(a1 + 8), a2, *(int *)(*(_QWORD *)(a1 + 8) + 436LL), 1u) & 0x80000000) == 0
      && (int)sub_420C98(*(_QWORD *)(a1 + 8), a2 + 1, *(int *)(*(_QWORD *)(a1 + 8) + 424LL), 1u) >= 0;
}
