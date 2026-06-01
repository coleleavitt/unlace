/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93430
// Address: 0x0000000000093430

//----- (0000000000093430) ----------------------------------------------------
void __fastcall sub_93430(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 440) = a2;
  *(_QWORD *)(a2 + 400) = a1 + 192;
}
