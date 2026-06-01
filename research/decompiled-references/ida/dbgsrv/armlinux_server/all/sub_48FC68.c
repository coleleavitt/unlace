/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FC68
// Address: 0x000000000048FC68

//----- (000000000048FC68) ----------------------------------------------------
__int64 __fastcall sub_48FC68(__int64 result, __int64 a2)
{
  *(_QWORD *)result = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(result + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(result + 52) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(result + 56) = ((int)*(_QWORD *)(a2 + 80) / 1000) | (*(_QWORD *)(a2 + 72) << 32);
  *(_QWORD *)(result + 64) = ((int)*(_QWORD *)(a2 + 96) / 1000) | (*(_QWORD *)(a2 + 88) << 32);
  *(_QWORD *)(result + 72) = ((int)*(_QWORD *)(a2 + 112) / 1000) | (*(_QWORD *)(a2 + 104) << 32);
  return result;
}
