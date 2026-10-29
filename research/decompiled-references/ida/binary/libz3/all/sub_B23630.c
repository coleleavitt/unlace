__int64 __fastcall sub_B23630(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  _BYTE v15[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v15, "recfun");
  v4 = sub_15DA4C0(v3 + 560, v15);
  sub_966710(a1, a2, v4);
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = off_1C71F78;
  v7 = sub_15D2690(v6, v5);
  *(_QWORD *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 64) = sub_162A780(v7, v5, v8, v9, v10);
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = v11;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = v11;
  *(_QWORD *)(a1 + 112) = 0;
  v12 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 120) = v12;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  v13 = sub_186B270(0x80u);
  *(_QWORD *)v13 = 0;
  *(_DWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = 0;
  *(_DWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 0;
  *(_DWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 80) = 0;
  *(_DWORD *)(v13 + 88) = 0;
  *(_QWORD *)(v13 + 96) = 0;
  *(_DWORD *)(v13 + 104) = 0;
  *(_QWORD *)(v13 + 112) = 0;
  *(_DWORD *)(v13 + 120) = 0;
  *(_QWORD *)(a1 + 144) = v13;
  result = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 152) = 8;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = result;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  return result;
}

