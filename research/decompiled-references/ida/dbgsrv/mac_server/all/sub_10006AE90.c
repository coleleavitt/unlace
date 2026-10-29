/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006AE90
// Address: 0x000000010006AE90

//----- (000000010006AE90) ----------------------------------------------------
void (__fastcall __noreturn **__fastcall sub_10006AE90(__int64 a1, char a2, int a3, __int64 a4, __int64 a5))()
{
  *(_QWORD *)a1 = off_1000AA6B8;
  *(_BYTE *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = a5;
  *(_DWORD *)(a1 + 64) = a3;
  *(_BYTE *)(a1 + 68) = a2;
  *(_BYTE *)(a1 + 69) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  return off_1000AA6B8;
}
// 1000AA6B8: using guessed type void (__fastcall __noreturn *off_1000AA6B8[2])();
