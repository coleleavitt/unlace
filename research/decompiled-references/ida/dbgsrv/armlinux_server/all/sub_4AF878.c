/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF878
// Address: 0x00000000004AF878

//----- (00000000004AF878) ----------------------------------------------------
unsigned __int64 __fastcall sub_4AF878(_QWORD *a1, __int64 a2)
{
  *a1 = a1 + 2;
  return sub_4AF760(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
}
