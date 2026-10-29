__int64 __fastcall sub_617270(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  _OWORD *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int64 result; // rax

  v4 = a1 + 40;
  *(_QWORD *)(v4 - 40) = &off_1C528F0;
  v5 = *a2;
  *(_DWORD *)(v4 - 32) = a3;
  *(_QWORD *)(v4 - 16) = v5;
  *(_QWORD *)(v4 - 8) = a2;
  *(_BYTE *)(v4 - 28) = 0;
  *(_QWORD *)(v4 - 24) = 0;
  sub_1684300(v4, v5);
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 80) = v6;
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 88) = 8;
  *(_QWORD *)(a1 + 120) = 0;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v8 = sub_186B270(0x80u);
  *(_QWORD *)v8 = 0;
  *(_DWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_DWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_QWORD *)(v8 + 96) = 0;
  *(_DWORD *)(v8 + 104) = 0;
  *(_QWORD *)(v8 + 112) = 0;
  *(_DWORD *)(v8 + 120) = 0;
  *(_QWORD *)(a1 + 128) = v8;
  *(_QWORD *)(a1 + 136) = 8;
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = v7;
  *(_QWORD *)(a1 + 160) = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 176) = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  result = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 184) = 8;
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = result;
  *(_QWORD *)(a1 + 208) = 0;
  return result;
}

