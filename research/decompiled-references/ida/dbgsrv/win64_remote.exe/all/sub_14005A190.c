/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A190
// Address: 0x000000014005A190

//----- (000000014005A190) ----------------------------------------------------
__int64 __fastcall sub_14005A190(__int64 a1, int a2)
{
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_1400AB398;
  *(_DWORD *)(a1 + 24) = a2;
  return a1;
}
// 1400AB398: using guessed type void *(__fastcall *off_1400AB398)(std::exception *__hidden this, unsigned int);
