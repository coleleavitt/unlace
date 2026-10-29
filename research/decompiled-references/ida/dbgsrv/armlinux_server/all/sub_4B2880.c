/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2880
// Address: 0x00000000004B2880

//----- (00000000004B2880) ----------------------------------------------------
__int64 __fastcall sub_4B2880(_QWORD *a1, __int64 a2)
{
  *a1 = a1 + 2;
  return sub_4B27A0(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
}
