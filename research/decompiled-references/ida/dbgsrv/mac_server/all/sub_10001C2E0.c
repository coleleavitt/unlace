/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C2E0
// Address: 0x000000010001C2E0

//----- (000000010001C2E0) ----------------------------------------------------
__int64 __fastcall sub_10001C2E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v2 = *(_OWORD *)a2;
  return 1;
}
