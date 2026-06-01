/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7530
// Address: 0x00000000000A7530

//----- (00000000000A7530) ----------------------------------------------------
void __fastcall sub_A7530(__int64 a1)
{
  sub_9F350(a1);
  *(_QWORD *)a1 = off_14EE68;
  *(_OWORD *)(a1 + 804) = -1;
  *(_OWORD *)(a1 + 792) = -1;
  sub_56350(a1 + 408, &byte_103BC8, 1u);
  *(_OWORD *)(a1 + 752) = -1;
  *(_OWORD *)(a1 + 736) = -1;
  *(_OWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 784) = 0x10000000000LL;
  sub_A30B0((_QWORD *)a1, "linux");
}
// 103BC8: using guessed type char byte_103BC8;
// 14EE68: using guessed type __int64 (__fastcall *off_14EE68[5])();
