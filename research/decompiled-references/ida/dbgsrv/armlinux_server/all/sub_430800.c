/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430800
// Address: 0x0000000000430800

//----- (0000000000430800) ----------------------------------------------------
__int64 __fastcall sub_430800(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = sub_47FE40(
                          *(_QWORD *)(a1 + 8),
                          *(unsigned int *)(a1 + 40),
                          *(_QWORD *)(a1 + 72),
                          *(_QWORD *)(a1 + 104));
  return 0;
}
