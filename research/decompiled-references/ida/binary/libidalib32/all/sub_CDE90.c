__int64 __fastcall sub_CDE90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v11 = operator new(0x108u);
  *(_QWORD *)v11 = a1;
  *(_QWORD *)(v11 + 8) = a2;
  *(_QWORD *)(v11 + 16) = a3;
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a6;
  *(_DWORD *)(v11 + 40) = a5;
  *(_DWORD *)(v11 + 44) = a7;
  *(_QWORD *)(v11 + 56) = 0;
  *(_DWORD *)(v11 + 80) = 1;
  *(_QWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 88) = off_22F008;
  *(_QWORD *)(v11 + 136) = 0;
  *(_QWORD *)(v11 + 120) = 0xFFFFFFFFLL;
  *(_QWORD *)(v11 + 128) = 0xFFFFFFFFLL;
  *(_OWORD *)(v11 + 140) = 0;
  *(_OWORD *)(v11 + 156) = 0;
  *(_QWORD *)(v11 + 184) = 0;
  *(_QWORD *)(v11 + 172) = 0;
  *(_QWORD *)(v11 + 192) = 0;
  *(_DWORD *)(v11 + 216) = 30;
  *(_QWORD *)(v11 + 224) = 0;
  *(_DWORD *)(v11 + 256) = 0;
  *(_WORD *)(v11 + 260) = 0;
  *(_BYTE *)(v11 + 262) = 1;
  *(_OWORD *)(v11 + 200) = 0;
  *(_OWORD *)(v11 + 232) = 0;
  return sub_CDD10((_QWORD *)v11, 0, a7, v12, v13, v14, a7);
}

