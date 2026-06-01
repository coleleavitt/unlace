__int64 __fastcall sub_CF580(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v8 = operator new(0x118u);
  *(_DWORD *)v8 = a1;
  *(_DWORD *)(v8 + 4) = a2;
  *(_DWORD *)(v8 + 8) = a3;
  *(_QWORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 88) = 1;
  *(_QWORD *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 112) = 0;
  *(_QWORD *)(v8 + 96) = off_230088;
  *(_QWORD *)(v8 + 200) = 0;
  *(_QWORD *)(v8 + 128) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 136) = -1;
  *(_QWORD *)(v8 + 144) = 0;
  *(_QWORD *)(v8 + 208) = 0;
  *(_DWORD *)(v8 + 232) = 30;
  *(_QWORD *)(v8 + 240) = 0;
  *(_DWORD *)(v8 + 272) = 0;
  *(_WORD *)(v8 + 276) = 0;
  *(_BYTE *)(v8 + 278) = 1;
  *(_OWORD *)(v8 + 152) = 0;
  *(_OWORD *)(v8 + 168) = 0;
  *(_OWORD *)(v8 + 184) = 0;
  *(_OWORD *)(v8 + 216) = 0;
  *(_OWORD *)(v8 + 248) = 0;
  return sub_CF2D0((_QWORD *)v8, 1u, v9, v10, v11, v12, a7);
}

