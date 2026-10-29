/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5478
// Address: 0x00000000000A5478

//----- (00000000000A5478) ----------------------------------------------------
__int64 __fastcall sub_A5478(__int64 result, char a2, int a3, __int64 a4, __int64 a5)
{
  *(_BYTE *)(result + 8) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 48) = a4;
  *(_QWORD *)(result + 56) = a5;
  *(_DWORD *)(result + 64) = a3;
  *(_BYTE *)(result + 69) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)result = off_15F290;
  *(_BYTE *)(result + 68) = a2 & 1;
  *(_QWORD *)(result + 72) = 0;
  return result;
}
// 15F290: using guessed type __int64 (__fastcall *off_15F290[2])();
