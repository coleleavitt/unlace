/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA1C0
// Address: 0x00000000000AA1C0

//----- (00000000000AA1C0) ----------------------------------------------------
__int64 (__fastcall **__fastcall sub_AA1C0(__int64 a1, char a2, int a3, __int64 a4, __int64 a5))()
{
  *(_QWORD *)a1 = &off_14F690;
  *(_BYTE *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = a5;
  *(_DWORD *)(a1 + 64) = a3;
  *(_BYTE *)(a1 + 68) = a2;
  *(_BYTE *)(a1 + 69) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  return &off_14F690;
}
// 14F690: using guessed type __int64 (__fastcall *off_14F690)();
