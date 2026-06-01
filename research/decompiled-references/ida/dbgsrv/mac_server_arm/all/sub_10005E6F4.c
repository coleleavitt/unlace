/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E6F4
// Address: 0x000000010005E6F4

//----- (000000010005E6F4) ----------------------------------------------------
double __fastcall sub_10005E6F4(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_10009BB60;
  *(_OWORD *)(a1 + 16) = 0u;
  *(_OWORD *)(a1 + 32) = 0u;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = a5;
  *(_DWORD *)(a1 + 64) = a3;
  *(_BYTE *)(a1 + 68) = a2;
  *(_BYTE *)(a1 + 69) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  return 0.0;
}
// 10009BB60: using guessed type void (__fastcall __noreturn *off_10009BB60[2])();
