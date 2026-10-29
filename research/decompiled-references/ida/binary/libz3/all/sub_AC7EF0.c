_OWORD *__fastcall sub_AC7EF0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  _OWORD *v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // r15
  _OWORD *v16; // rax
  _OWORD *v18; // rax
  _OWORD *v19; // rax
  _OWORD *result; // rax

  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &off_1C56C10;
  *(_QWORD *)(a1 + 16) = 0;
  v2 = (_QWORD *)sub_186B270(0x1D0u);
  *v2 = a1;
  v3 = v2;
  v2[1] = a2;
  sub_1395C10((_DWORD)v2 + 16, a2, v4, v5, v6, v7);
  sub_1684300(v3 + 42, a2);
  sub_16669D0(v3 + 44, a2);
  sub_16744A0(v3 + 46, a2);
  v3[49] = 0;
  v8 = (_OWORD *)sub_186B270(0x40u);
  v3[50] = v8;
  *((_DWORD *)v3 + 104) = 0;
  v3[51] = 8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v9 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 24) = v3;
  v3[53] = v9;
  v3[54] = 8;
  *((_DWORD *)v3 + 110) = 0;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  *((_OWORD *)v3 + 28) = 0;
  v10 = sub_186B270(0x158u);
  *(_QWORD *)v10 = &off_1C56848;
  *(_QWORD *)(v10 + 8) = a2;
  sub_16669D0(v10 + 16, a2);
  sub_16744A0(v10 + 32, a2);
  sub_1684300(v10 + 56, a2);
  *(_QWORD *)(v10 + 72) = 0;
  *(_DWORD *)(v10 + 80) = 0;
  v11 = sub_186B270(0x100u);
  *(_QWORD *)v11 = 0;
  *(_QWORD *)(v11 + 8) = 0;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 40) = 0;
  *(_QWORD *)(v11 + 64) = 0;
  *(_QWORD *)(v11 + 72) = 0;
  *(_QWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 128) = 0;
  *(_QWORD *)(v11 + 136) = 0;
  *(_QWORD *)(v11 + 160) = 0;
  *(_QWORD *)(v11 + 168) = 0;
  *(_QWORD *)(v11 + 192) = 0;
  *(_QWORD *)(v11 + 200) = 0;
  *(_QWORD *)(v11 + 224) = 0;
  *(_QWORD *)(v11 + 232) = 0;
  *(_DWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 48) = 0;
  *(_DWORD *)(v11 + 80) = 0;
  *(_DWORD *)(v11 + 112) = 0;
  *(_DWORD *)(v11 + 144) = 0;
  *(_DWORD *)(v11 + 176) = 0;
  *(_DWORD *)(v11 + 208) = 0;
  *(_DWORD *)(v11 + 240) = 0;
  *(_QWORD *)(v10 + 96) = v11;
  *(_QWORD *)(v10 + 104) = 8;
  *(_DWORD *)(v10 + 112) = 0;
  v12 = sub_186B270(0x100u);
  *(_QWORD *)v12 = 0;
  *(_QWORD *)(v12 + 8) = 0;
  *(_QWORD *)(v12 + 32) = 0;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 64) = 0;
  *(_QWORD *)(v12 + 72) = 0;
  *(_QWORD *)(v12 + 96) = 0;
  *(_QWORD *)(v12 + 104) = 0;
  *(_QWORD *)(v12 + 128) = 0;
  *(_QWORD *)(v12 + 136) = 0;
  *(_QWORD *)(v12 + 160) = 0;
  *(_QWORD *)(v12 + 168) = 0;
  *(_QWORD *)(v12 + 192) = 0;
  *(_QWORD *)(v12 + 200) = 0;
  *(_QWORD *)(v12 + 224) = 0;
  *(_QWORD *)(v12 + 232) = 0;
  *(_DWORD *)(v12 + 16) = 0;
  *(_DWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 80) = 0;
  *(_DWORD *)(v12 + 112) = 0;
  *(_DWORD *)(v12 + 144) = 0;
  *(_DWORD *)(v12 + 176) = 0;
  *(_DWORD *)(v12 + 208) = 0;
  *(_DWORD *)(v12 + 240) = 0;
  *(_QWORD *)(v10 + 128) = v12;
  *(_QWORD *)(v10 + 136) = 8;
  *(_DWORD *)(v10 + 144) = 0;
  v13 = (_OWORD *)sub_186B270(0x80u);
  v14 = 1;
  *(_QWORD *)(v10 + 152) = v13;
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  v13[4] = 0;
  v13[5] = 0;
  v13[6] = 0;
  v13[7] = 0;
  *(_QWORD *)(v10 + 160) = 8;
  v15 = (_QWORD *)(v10 + 200);
  *(_DWORD *)(v10 + 168) = 0;
  *(_QWORD *)(v10 + 176) = a2;
  *(_QWORD *)(v10 + 184) = 0;
  *(_QWORD *)(v10 + 192) = 0;
  do
  {
    v16 = (_OWORD *)sub_186B270(0x80u);
    *v15 = v16;
    v15 += 3;
    *(v15 - 2) = 8;
    *((_DWORD *)v15 - 2) = 0;
    *v16 = 0;
    v16[1] = 0;
    v16[2] = 0;
    v16[3] = 0;
    v16[4] = 0;
    v16[5] = 0;
    v16[6] = 0;
    v16[7] = 0;
  }
  while ( v14-- != 0 );
  *(_QWORD *)(v10 + 248) = a2;
  *(_QWORD *)(v10 + 256) = 0;
  *(_QWORD *)(v10 + 264) = 0;
  *(_QWORD *)(v10 + 272) = 0;
  *(_DWORD *)(v10 + 280) = sub_1829090(a2);
  v18 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(v10 + 288) = v18;
  *(_QWORD *)(v10 + 296) = 8;
  *(_DWORD *)(v10 + 304) = 0;
  *(_QWORD *)(v10 + 312) = 0;
  *(_QWORD *)(v10 + 328) = 0;
  *(_QWORD *)(v10 + 336) = 0;
  *v18 = 0;
  v18[1] = 0;
  v18[2] = 0;
  v18[3] = 0;
  sub_18290A0(a2);
  *(_QWORD *)(a1 + 32) = v10;
  v19 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 40) = v19;
  *(_QWORD *)(a1 + 48) = 8;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = a2;
  *v19 = 0;
  v19[1] = 0;
  v19[2] = 0;
  v19[3] = 0;
  v19[4] = 0;
  v19[5] = 0;
  v19[6] = 0;
  v19[7] = 0;
  result = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 80) = result;
  *(_QWORD *)(a1 + 88) = 8;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  return result;
}

