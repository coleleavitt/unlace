/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005390
// Address: 0x0000000140005390

//----- (0000000140005390) ----------------------------------------------------
__int64 __fastcall sub_140005390(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a1 + 48) = 7;
  sub_14005D750((void *)qword_1400CAE08, 0xFFFFFFFF);
  qword_1400CAE18 = a1;
  sub_14005D730((void *)qword_1400CAE10);
  sub_14005D750(*(void **)(a1 + 288), 0xFFFFFFFF);
  return *(unsigned __int8 *)(a1 + 112);
}
// 1400CAE08: using guessed type __int64 qword_1400CAE08;
// 1400CAE10: using guessed type __int64 qword_1400CAE10;
// 1400CAE18: using guessed type __int64 qword_1400CAE18;
