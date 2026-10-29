__int64 __fastcall sub_CDFC0(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v8 = operator new(0x108u);
  *(_DWORD *)v8 = a1;
  *(_DWORD *)(v8 + 4) = a2;
  *(_DWORD *)(v8 + 8) = a3;
  *(_QWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 80) = 1;
  *(_QWORD *)(v8 + 96) = 0;
  *(_QWORD *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 88) = off_22F008;
  *(_QWORD *)(v8 + 136) = 0;
  *(_QWORD *)(v8 + 120) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 128) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 184) = 0;
  *(_QWORD *)(v8 + 172) = 0;
  *(_QWORD *)(v8 + 192) = 0;
  *(_DWORD *)(v8 + 216) = 30;
  *(_QWORD *)(v8 + 224) = 0;
  *(_DWORD *)(v8 + 256) = 0;
  *(_WORD *)(v8 + 260) = 0;
  *(_BYTE *)(v8 + 262) = 1;
  *(_OWORD *)(v8 + 140) = 0;
  *(_OWORD *)(v8 + 156) = 0;
  *(_OWORD *)(v8 + 200) = 0;
  *(_OWORD *)(v8 + 232) = 0;
  return sub_CDD10((_QWORD *)v8, 1u, v9, v10, v11, v12, a7);
}

