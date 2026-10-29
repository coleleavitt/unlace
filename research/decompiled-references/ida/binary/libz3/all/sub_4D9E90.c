__int64 __fastcall sub_4D9E90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  result = sub_186B270(0x180u);
  *(_BYTE *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = result + 32;
  *(_QWORD *)(result + 64) = result + 80;
  *(_QWORD *)(result + 112) = result + 128;
  *(_QWORD *)(result + 160) = result + 176;
  *(_QWORD *)(result + 208) = result + 224;
  *(_QWORD *)(result + 256) = result + 272;
  *(_QWORD *)(result + 304) = result + 320;
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_BYTE *)(result + 80) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_BYTE *)(result + 128) = 0;
  *(_QWORD *)(result + 144) = 0;
  *(_QWORD *)(result + 168) = 0;
  *(_BYTE *)(result + 176) = 0;
  *(_QWORD *)(result + 192) = 0;
  *(_QWORD *)(result + 216) = 0;
  *(_BYTE *)(result + 224) = 0;
  *(_QWORD *)(result + 240) = 0;
  *(_QWORD *)(result + 264) = 0;
  *(_BYTE *)(result + 272) = 0;
  *(_QWORD *)(result + 288) = 0;
  *(_QWORD *)(result + 312) = 0;
  *(_BYTE *)(result + 320) = 0;
  *(_QWORD *)(result + 336) = 0;
  *(_QWORD *)(result + 352) = result + 368;
  *(_QWORD *)(result + 360) = 0;
  *(_BYTE *)(result + 368) = 0;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 24) = 8;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 100) = 0;
  *(_OWORD *)(a1 + 52) = 0;
  *(_OWORD *)(a1 + 68) = 0;
  *(_OWORD *)(a1 + 84) = 0;
  return result;
}

