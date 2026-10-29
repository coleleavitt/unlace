/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36770
// Address: 0x0000000000036770

//----- (0000000000036770) ----------------------------------------------------
__int64 __fastcall sub_36770(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = *(int *)(a1 + 4);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)a2 = 2;
  return 0;
}
