/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062A64
// Address: 0x0000000100062A64

//----- (0000000100062A64) ----------------------------------------------------
double __fastcall sub_100062A64(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
  *(_QWORD *)a1 = off_10009FBA0;
  *(_BYTE *)(a1 + 8) = 0;
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
// 10009FBA0: using guessed type void (__fastcall __noreturn *off_10009FBA0[2])();
