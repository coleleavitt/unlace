/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD230
// Address: 0x00000000000AD230

//----- (00000000000AD230) ----------------------------------------------------
__int64 __fastcall sub_AD230(__int64 a1, const char *a2, const char *a3, __int128 *a4)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 result; // rax

  *(_QWORD *)a1 = 0;
  sub_37F60(a1 + 24, a2);
  sub_37F60(a1 + 48, a3);
  v6 = *a4;
  v7 = a4[1];
  *(_OWORD *)(a1 + 104) = a4[2];
  *(_OWORD *)(a1 + 88) = v7;
  *(_OWORD *)(a1 + 72) = v6;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 8) = qmutex_create();
  result = qsem_create(nullptr, 0);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
