__int64 __fastcall sub_CCFF40(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rbp
  _OWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // rax
  char v20; // al
  _QWORD *v21; // rdi
  void (*v22)(); // rax

  v2 = a1 + 24;
  v3 = sub_186B270(0x20u);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL);
  if ( v5 == sub_CCDBE0 )
  {
    v6 = sub_186B270(0x48u);
    *(_QWORD *)v6 = &off_1C59598;
    *(_QWORD *)(v6 + 16) = a2;
    v7 = (_OWORD *)sub_186B270(0x80u);
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 24) = v7;
    *(_QWORD *)(v6 + 32) = 8;
    *(_QWORD *)(v6 + 48) = a2;
    *(_QWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 64) = 0;
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
  }
  else
  {
    v6 = v5(v4, a2);
  }
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = off_1C595F0;
  v8 = (__int64 *)sub_186B270(0x288u);
  *v8 = a2;
  v9 = v8;
  v8[1] = v6;
  sub_17E9B40(v8 + 2, "context-simplifier");
  v10 = *v9;
  v9[70] = (__int64)&off_1C59548;
  *((_WORD *)v9 + 284) = 257;
  *(_OWORD *)(v9 + 67) = 0;
  v11 = sub_186B270(0x80u);
  *(_QWORD *)v11 = 0;
  v12 = *v9;
  *(_DWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 56) = 0;
  *(_QWORD *)(v11 + 64) = 0;
  *(_DWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 80) = 0;
  *(_DWORD *)(v11 + 88) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_DWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 112) = 0;
  *(_DWORD *)(v11 + 120) = 0;
  v9[72] = v11;
  v9[75] = v10;
  v9[73] = 8;
  *((_DWORD *)v9 + 148) = 0;
  v9[70] = (__int64)&off_1C59570;
  v9[76] = 0;
  sub_1447E40((_DWORD)v9 + 616, v12, v2, v13, v14, v15);
  v16 = sub_1859960(v2, "max_memory", 0xFFFFFFFFLL);
  v17 = (unsigned __int64)v16 << 20;
  v18 = v16 == -1;
  v19 = -1;
  if ( !v18 )
    v19 = v17;
  v9[78] = v19;
  *((_DWORD *)v9 + 159) = sub_1859960(v2, "max_steps", 0xFFFFFFFFLL);
  *((_DWORD *)v9 + 158) = sub_1859960(v2, "max_depth", 1024);
  v20 = sub_1859610(v2, "bail_on_blowup", 0);
  v21 = (_QWORD *)v9[1];
  *((_BYTE *)v9 + 640) = v20;
  v22 = *(void (**)())(*v21 + 64LL);
  if ( v22 != nullsub_366 )
  {
    ((void (__fastcall *)(_QWORD *, __int64))v22)(v21, v2);
    v21 = (_QWORD *)v9[1];
  }
  v21[1] = v9 + 70;
  *(_QWORD *)(v3 + 16) = v9;
  sub_1858590(v3 + 24, v2);
  return v3;
}

