_QWORD *__fastcall sub_713400(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rax
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v2 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 40) = v2;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = 8;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v3 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 64) = v3;
  *(_QWORD *)(a1 + 72) = 8;
  *(_DWORD *)(a1 + 80) = 0;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 88) = v4;
  *(_QWORD *)(a1 + 96) = 8;
  *(_DWORD *)(a1 + 104) = 0;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 112) = v5;
  *(_QWORD *)(a1 + 120) = 8;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 144) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v6 = sub_186B270(0x50u);
  *(_BYTE *)(v6 + 24) = 1;
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = a2;
  *(_QWORD *)v6 = &off_1C60CE8;
  *(_QWORD *)(v6 + 40) = v6 + 56;
  strcpy((char *)(v6 + 56), "qsat");
  *(_QWORD *)(v6 + 48) = 4;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)(a1 + 152) = v6;
  *(_DWORD *)(v6 + 8) = 1;
  *(_QWORD *)(a1 + 160) = 0;
  v7 = (_QWORD *)sub_186B270(0x80u);
  *v7 = 0;
  v7[2] = 0;
  v7[1] = -1;
  v7[3] = -1;
  v7[4] = 0;
  v7[5] = -1;
  v7[6] = 0;
  v7[7] = -1;
  v7[8] = 0;
  v7[9] = -1;
  v7[10] = 0;
  v7[11] = -1;
  v7[12] = 0;
  v7[13] = -1;
  v7[14] = 0;
  v7[15] = -1;
  *(_QWORD *)(a1 + 168) = v7;
  *(_QWORD *)(a1 + 176) = 8;
  *(_DWORD *)(a1 + 184) = 0;
  result = (_QWORD *)sub_186B270(0x80u);
  *result = 0;
  result[1] = -1;
  result[2] = 0;
  result[3] = -1;
  result[4] = 0;
  result[5] = -1;
  result[6] = 0;
  result[7] = -1;
  result[8] = 0;
  result[9] = -1;
  result[10] = 0;
  result[11] = -1;
  result[12] = 0;
  result[13] = -1;
  result[14] = 0;
  result[15] = -1;
  *(_QWORD *)(a1 + 192) = result;
  *(_QWORD *)(a1 + 200) = 8;
  *(_DWORD *)(a1 + 208) = 0;
  return result;
}

