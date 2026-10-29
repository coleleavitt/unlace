/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000019E0
// Address: 0x00000001000019E0

//----- (00000001000019E0) ----------------------------------------------------
size_t __fastcall sub_1000019E0(__int64 a1, int a2)
{
  size_t result; // rax

  sub_100067470(a1);
  *(_QWORD *)a1 = off_1000A7150;
  *(_OWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 840) = 0;
  sub_100019FF0(a1 + 864, a1, a2);
  *(_OWORD *)(a1 + 1120) = 0;
  *(_OWORD *)(a1 + 1104) = 0;
  *(_OWORD *)(a1 + 1088) = 0;
  *(_QWORD *)(a1 + 1072) = -1;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_OWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1136) = a1 + 1144;
  *(_OWORD *)(a1 + 1168) = 0;
  *(_QWORD *)(a1 + 1160) = a1 + 1168;
  *(_OWORD *)(a1 + 1184) = 0;
  *(_QWORD *)(a1 + 1200) = 0;
  *(_OWORD *)(a1 + 1216) = 0;
  *(_QWORD *)(a1 + 1208) = a1 + 1216;
  *(_DWORD *)(a1 + 1236) = 0;
  result = sub_100063FD0(a1, "macosx");
  *(_WORD *)(a1 + 1233) = 0;
  return result;
}
// 1000A7150: using guessed type __int64 (__fastcall *off_1000A7150[4])();
