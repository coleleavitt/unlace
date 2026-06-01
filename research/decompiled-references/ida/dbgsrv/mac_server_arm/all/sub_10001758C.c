/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001758C
// Address: 0x000000010001758C

//----- (000000010001758C) ----------------------------------------------------
__n128 __fastcall sub_10001758C(__int64 a1, __int64 a2, int a3)
{
  __n128 result; // q0

  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = 8;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_QWORD *)a1 = off_100098FC8;
  *(_QWORD *)(a1 + 8) = a2;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)(a1 + 120) = 0u;
  *(_OWORD *)(a1 + 136) = 0u;
  *(_OWORD *)(a1 + 152) = 0u;
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  result.n128_u64[0] = -1;
  result.n128_u64[1] = -1;
  *(__n128 *)(a1 + 72) = result;
  *(__n128 *)(a1 + 56) = result;
  return result;
}
// 100098FC8: using guessed type __int64 (__fastcall *off_100098FC8[6])();
