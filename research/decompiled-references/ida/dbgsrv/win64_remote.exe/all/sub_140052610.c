/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052610
// Address: 0x0000000140052610

//----- (0000000140052610) ----------------------------------------------------
__int64 __fastcall sub_140052610(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_140097200;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = a5;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a4;
  *(_DWORD *)(a1 + 64) = a3;
  *(_BYTE *)(a1 + 68) = a2;
  *(_BYTE *)(a1 + 69) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  return a1;
}
// 140097200: using guessed type __int64 (__fastcall *off_140097200)(void *Block);
