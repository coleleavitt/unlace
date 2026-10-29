/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DCD8
// Address: 0x000000000009DCD8

//----- (000000000009DCD8) ----------------------------------------------------
__int64 __fastcall sub_9DCD8(__int64 a1, char a2)
{
  __int64 result; // x0

  result = ((__int64 (__fastcall *)(__int64, _QWORD))loc_A3840)(a1, a2 & 1);
  *(_DWORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)a1 = off_15E5A8;
  *(_WORD *)(a1 + 104) = 23946;
  *(_BYTE *)(a1 + 106) = 0;
  return result;
}
// 15E5A8: using guessed type __int64 (__fastcall *off_15E5A8[5])();
