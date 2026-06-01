__int64 __fastcall sub_CCFC80(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  _OWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // rax
  char v18; // al
  _QWORD *v19; // rdi
  void (*v20)(); // rax

  v3 = sub_186B270(0x20u);
  v4 = sub_186B270(0x48u);
  *(_QWORD *)(v4 + 16) = a1;
  *(_QWORD *)v4 = &off_1C59598;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v4 + 48) = a1;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  *(_QWORD *)(v4 + 24) = v5;
  *(_QWORD *)(v4 + 32) = 8;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = off_1C595F0;
  v6 = (_QWORD *)sub_186B270(0x288u);
  *v6 = a1;
  v7 = v6;
  v6[1] = v4;
  sub_17E9B40(v6 + 2, "context-simplifier");
  v8 = *v7;
  v7[70] = &off_1C59548;
  *((_WORD *)v7 + 284) = 257;
  *(_OWORD *)(v7 + 67) = 0;
  v9 = sub_186B270(0x80u);
  *(_QWORD *)v9 = 0;
  v10 = *v7;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 0;
  *(_DWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_DWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 112) = 0;
  *(_DWORD *)(v9 + 120) = 0;
  v7[72] = v9;
  v7[75] = v8;
  v7[73] = 8;
  *((_DWORD *)v7 + 148) = 0;
  v7[70] = &off_1C59570;
  v7[76] = 0;
  sub_1447E40((_DWORD)v7 + 616, v10, a2, v11, v12, v13);
  v14 = sub_1859960(a2, "max_memory", 0xFFFFFFFFLL);
  v15 = (unsigned __int64)v14 << 20;
  v16 = v14 == -1;
  v17 = -1;
  if ( !v16 )
    v17 = v15;
  v7[78] = v17;
  *((_DWORD *)v7 + 159) = sub_1859960(a2, "max_steps", 0xFFFFFFFFLL);
  *((_DWORD *)v7 + 158) = sub_1859960(a2, "max_depth", 1024);
  v18 = sub_1859610(a2, "bail_on_blowup", 0);
  v19 = (_QWORD *)v7[1];
  *((_BYTE *)v7 + 640) = v18;
  v20 = *(void (**)())(*v19 + 64LL);
  if ( v20 != nullsub_366 )
  {
    ((void (__fastcall *)(_QWORD *, __int64))v20)(v19, a2);
    v19 = (_QWORD *)v7[1];
  }
  v19[1] = v7 + 70;
  *(_QWORD *)(v3 + 16) = v7;
  sub_1858590(v3 + 24, a2);
  return sub_EE8D70(v3);
}

