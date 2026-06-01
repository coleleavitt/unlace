/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F740
// Address: 0x000000000045F740

//----- (000000000045F740) ----------------------------------------------------
void __fastcall sub_45F740(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 440) = a2;
  *(_QWORD *)(a2 + 480) = a1 + 192;
}
