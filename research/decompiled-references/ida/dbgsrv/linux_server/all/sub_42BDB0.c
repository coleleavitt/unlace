/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42BDB0
// Address: 0x000000000042BDB0

//----- (000000000042BDB0) ----------------------------------------------------
__int64 __fastcall sub_42BDB0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = (*(_QWORD *)(a1 + 16) == 0) + *(_QWORD *)(a1 + 16) - 1LL;
  return 0;
}
