__int64 __fastcall sub_357240(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax

  v1 = operator new(0x210u);
  *(_QWORD *)v1 = a1;
  v2 = v1;
  *(_QWORD *)(v1 + 16) = 0;
  *(_BYTE *)(v1 + 40) = 0;
  *(_OWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 44) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 104) = 0;
  *(_QWORD *)(v1 + 128) = 0;
  *(_DWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 160) = 0;
  *(_QWORD *)(v1 + 8) = off_4B8170;
  *(_QWORD *)(v1 + 184) = 0;
  *(_QWORD *)(v1 + 208) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)(v1 + 256) = 0;
  *(_QWORD *)(v1 + 264) = 8;
  *(_OWORD *)(v1 + 64) = 0;
  *(_OWORD *)(v1 + 88) = 0;
  *(_OWORD *)(v1 + 112) = 0;
  *(_OWORD *)(v1 + 136) = 0;
  *(_OWORD *)(v1 + 168) = 0;
  *(_OWORD *)(v1 + 192) = 0;
  *(_OWORD *)(v1 + 216) = 0;
  *(_OWORD *)(v1 + 240) = 0;
  *(_OWORD *)(v1 + 272) = 0;
  *(_OWORD *)(v1 + 288) = 0;
  *(_OWORD *)(v1 + 304) = 0;
  *(_OWORD *)(v1 + 320) = 0;
  v3 = operator new(0x40u);
  v4 = *(_QWORD *)(v2 + 264);
  *(_QWORD *)(v2 + 256) = v3;
  v5 = (__int64 *)(v3 + ((4 * v4 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  *v5 = operator new(0x200u);
  *(_QWORD *)(v2 + 296) = v5;
  v6 = *v5;
  *(_QWORD *)(v2 + 328) = v5;
  *(_QWORD *)(v2 + 280) = v6;
  *(_QWORD *)(v2 + 288) = v6 + 512;
  v7 = *v5;
  *(_QWORD *)(v2 + 272) = v6;
  *(_QWORD *)(v2 + 312) = v7;
  *(_QWORD *)(v2 + 304) = v7;
  *(_QWORD *)(v2 + 320) = v7 + 512;
  *(_QWORD *)(v2 + 508) = 0;
  *(_BYTE *)(v2 + 516) = 0;
  *(_DWORD *)(v2 + 520) = 0;
  *(_QWORD *)(v2 + 336) = 0;
  *(_QWORD *)(v2 + 468) = 0;
  *(_OWORD *)(v2 + 476) = 0;
  *(_OWORD *)(v2 + 492) = 0;
  memset(
    (void *)((v2 + 344) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v2 - (((_DWORD)v2 + 344) & 0xFFFFFFF8) + 476) >> 3));
  return v2;
}
