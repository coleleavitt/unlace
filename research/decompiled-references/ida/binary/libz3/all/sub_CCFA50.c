__int64 __fastcall sub_CCFA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  char v19; // al
  _QWORD *v20; // rdi
  void (*v21)(); // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = off_1C595F0;
  v7 = (_QWORD *)sub_186B270(0x288u);
  *v7 = a2;
  v8 = v7;
  v7[1] = a3;
  sub_17E9B40(v7 + 2, "context-simplifier");
  v9 = *v8;
  v8[70] = &off_1C59548;
  *((_WORD *)v8 + 284) = 257;
  *(_OWORD *)(v8 + 67) = 0;
  v10 = sub_186B270(0x80u);
  *(_QWORD *)v10 = 0;
  v11 = *v8;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_DWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_DWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_DWORD *)(v10 + 104) = 0;
  *(_QWORD *)(v10 + 112) = 0;
  *(_DWORD *)(v10 + 120) = 0;
  v8[72] = v10;
  v8[75] = v9;
  v8[73] = 8;
  *((_DWORD *)v8 + 148) = 0;
  v8[70] = &off_1C59570;
  v8[76] = 0;
  sub_1447E40((_DWORD)v8 + 616, v11, a4, v12, v13, v14);
  v15 = sub_1859960(a4, "max_memory", 0xFFFFFFFFLL);
  v16 = (unsigned __int64)v15 << 20;
  v17 = v15 == -1;
  v18 = -1;
  if ( !v17 )
    v18 = v16;
  v8[78] = v18;
  *((_DWORD *)v8 + 159) = sub_1859960(a4, "max_steps", 0xFFFFFFFFLL);
  *((_DWORD *)v8 + 158) = sub_1859960(a4, "max_depth", 1024);
  v19 = sub_1859610(a4, "bail_on_blowup", 0);
  v20 = (_QWORD *)v8[1];
  *((_BYTE *)v8 + 640) = v19;
  v21 = *(void (**)())(*v20 + 64LL);
  if ( v21 != nullsub_366 )
  {
    ((void (__fastcall *)(_QWORD *, __int64))v21)(v20, a4);
    v20 = (_QWORD *)v8[1];
  }
  v20[1] = v8 + 70;
  *(_QWORD *)(a1 + 16) = v8;
  return sub_1858590(a1 + 24, a4);
}

