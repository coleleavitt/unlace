/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A41F0
// Address: 0x00000000000A41F0

//----- (00000000000A41F0) ----------------------------------------------------
__int64 (__fastcall **__fastcall sub_A41F0(__int64 a1, char a2))()
{
  sub_A82F0(a1, a2);
  *(_QWORD *)a1 = &off_14ED58;
  *(_DWORD *)(a1 + 140) = 0;
  *(_OWORD *)(a1 + 121) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_WORD *)(a1 + 104) = 23946;
  *(_BYTE *)(a1 + 106) = 0;
  return &off_14ED58;
}
// 14ED58: using guessed type __int64 (__fastcall *off_14ED58)();
