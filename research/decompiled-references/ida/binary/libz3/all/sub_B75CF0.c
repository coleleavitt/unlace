__int64 __fastcall sub_B75CF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = a1 + 8;
  *(_QWORD *)(v3 - 8) = a2;
  sub_16669D0(v3, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 32) = &off_1C62200;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  result = sub_186B270(0x140u);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 224) = 1;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 1;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 64) = 1;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 104) = 1;
  *(_QWORD *)(result + 112) = 0;
  *(_QWORD *)(result + 120) = 0;
  *(_QWORD *)(result + 128) = 0;
  *(_QWORD *)(result + 136) = 0;
  *(_QWORD *)(result + 144) = 1;
  *(_QWORD *)(result + 152) = 0;
  *(_QWORD *)(result + 160) = 0;
  *(_QWORD *)(result + 168) = 0;
  *(_QWORD *)(result + 176) = 0;
  *(_QWORD *)(result + 184) = 1;
  *(_QWORD *)(result + 192) = 0;
  *(_QWORD *)(result + 200) = 0;
  *(_QWORD *)(result + 208) = 0;
  *(_QWORD *)(result + 216) = 0;
  *(_BYTE *)(result + 228) = 0;
  *(_QWORD *)(result + 248) = 0;
  *(_OWORD *)(result + 232) = 0;
  *(_QWORD *)(result + 256) = 0;
  *(_QWORD *)(result + 264) = 1;
  *(_QWORD *)(result + 272) = 0;
  *(_QWORD *)(result + 280) = 0;
  *(_QWORD *)(result + 288) = 0;
  *(_QWORD *)(result + 296) = 0;
  *(_QWORD *)(result + 304) = 1;
  *(_QWORD *)(result + 312) = 0;
  *(_QWORD *)(a1 + 88) = result;
  *(_QWORD *)(a1 + 96) = 8;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 1;
  *(_OWORD *)(a1 + 136) = 0;
  return result;
}

