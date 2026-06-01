__int64 __fastcall sub_343C00(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _OWORD *v6; // rax
  __int64 v7; // rax

  v4 = sub_186B270(0xF0u);
  sub_300750(v4, a1, a2, a3);
  *(_QWORD *)v4 = &off_1C649D8;
  v5 = sub_186B270(0x140u);
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 224) = 1;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 24) = 1;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 1;
  *(_QWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_QWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_QWORD *)(v5 + 104) = 1;
  *(_QWORD *)(v5 + 112) = 0;
  *(_QWORD *)(v5 + 120) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  *(_QWORD *)(v5 + 136) = 0;
  *(_QWORD *)(v5 + 144) = 1;
  *(_QWORD *)(v5 + 152) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  *(_QWORD *)(v5 + 168) = 0;
  *(_QWORD *)(v5 + 176) = 0;
  *(_QWORD *)(v5 + 184) = 1;
  *(_QWORD *)(v5 + 192) = 0;
  *(_QWORD *)(v5 + 200) = 0;
  *(_QWORD *)(v5 + 208) = 0;
  *(_QWORD *)(v5 + 216) = 0;
  *(_BYTE *)(v5 + 228) = 0;
  *(_QWORD *)(v5 + 248) = 0;
  *(_OWORD *)(v5 + 232) = 0;
  *(_QWORD *)(v5 + 256) = 0;
  *(_QWORD *)(v5 + 264) = 1;
  *(_QWORD *)(v5 + 272) = 0;
  *(_QWORD *)(v5 + 280) = 0;
  *(_QWORD *)(v5 + 288) = 0;
  *(_QWORD *)(v5 + 296) = 0;
  *(_QWORD *)(v5 + 304) = 1;
  *(_QWORD *)(v5 + 312) = 0;
  *(_QWORD *)(v4 + 160) = v5;
  *(_QWORD *)(v4 + 168) = 8;
  *(_DWORD *)(v4 + 176) = 0;
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v4 + 184) = v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v7 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 192) = 8;
  *(_QWORD *)(v4 + 208) = v7;
  *(_QWORD *)(v4 + 224) = v7;
  *(_DWORD *)(v4 + 200) = 0;
  *(_QWORD *)(v4 + 216) = 0;
  *(_QWORD *)(v4 + 232) = 0;
  return v4;
}

