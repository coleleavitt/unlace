__int64 __fastcall sub_533D90(__int64 a1)
{
  __int64 v1; // rdx

  v1 = operator new(0x1D8u);
  *(_QWORD *)v1 = a1;
  *(_DWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = v1 + 16;
  *(_QWORD *)(v1 + 40) = v1 + 16;
  *(_QWORD *)(v1 + 104) = v1 + 88;
  *(_QWORD *)(v1 + 112) = v1 + 88;
  *(_WORD *)(v1 + 132) = 0;
  *(_QWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 96) = 0;
  *(_QWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 128) = 2;
  *(_BYTE *)(v1 + 134) = 0;
  *(_QWORD *)(v1 + 136) = 1000;
  *(_QWORD *)(v1 + 144) = 0;
  *(_QWORD *)(v1 + 168) = 0;
  *(_QWORD *)(v1 + 192) = 0;
  *(_QWORD *)(v1 + 216) = 0;
  *(_QWORD *)(v1 + 224) = 0;
  *(_QWORD *)(v1 + 464) = 0;
  *(_OWORD *)(v1 + 64) = 0;
  *(_OWORD *)(v1 + 152) = 0;
  *(_OWORD *)(v1 + 176) = 0;
  *(_OWORD *)(v1 + 200) = 0;
  memset(
    (void *)((v1 + 232) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v1 - (((_DWORD)v1 + 232) & 0xFFFFFFF8) + 472) >> 3));
  return v1;
}
