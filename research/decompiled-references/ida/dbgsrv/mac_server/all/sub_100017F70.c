/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100017F70
// Address: 0x0000000100017F70

//----- (0000000100017F70) ----------------------------------------------------
void __fastcall sub_100017F70(__int64 a1)
{
  *(_DWORD *)(a1 + 20) = 8;
  *(_WORD *)(a1 + 24) = 0;
  sub_100009B00(a1 + 32, *(_QWORD **)(a1 + 40));
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_OWORD *)(a1 + 40) = 0;
}
