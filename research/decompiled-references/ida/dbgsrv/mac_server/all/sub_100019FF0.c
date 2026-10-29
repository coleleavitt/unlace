/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019FF0
// Address: 0x0000000100019FF0

//----- (0000000100019FF0) ----------------------------------------------------
__int64 (__fastcall **__fastcall sub_100019FF0(__int64 a1, __int64 a2, int a3))()
{
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = 8;
  *(_WORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_QWORD *)a1 = &off_1000A7878;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  *(_OWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 72) = -1;
  *(_OWORD *)(a1 + 56) = -1;
  return &off_1000A7878;
}
// 1000A7878: using guessed type __int64 (__fastcall *off_1000A7878)();
