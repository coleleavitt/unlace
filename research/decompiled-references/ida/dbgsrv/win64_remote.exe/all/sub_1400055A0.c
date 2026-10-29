/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400055A0
// Address: 0x00000001400055A0

//----- (00000001400055A0) ----------------------------------------------------
__int64 __fastcall sub_1400055A0(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 52) = a2;
  *(_DWORD *)(a1 + 48) = 2;
  *(_DWORD *)(a1 + 84) = 0;
  sub_14005D750((void *)qword_1400CAE08, 0xFFFFFFFF);
  qword_1400CAE18 = a1;
  sub_14005D730((void *)qword_1400CAE10);
  sub_14005D750(*(void **)(a1 + 288), 0xFFFFFFFF);
  return *(unsigned __int8 *)(a1 + 112);
}
// 1400CAE08: using guessed type __int64 qword_1400CAE08;
// 1400CAE10: using guessed type __int64 qword_1400CAE10;
// 1400CAE18: using guessed type __int64 qword_1400CAE18;
