_OWORD *__fastcall sub_BDD210(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // eax
  _OWORD *v4; // rax
  _QWORD *v5; // rax
  _OWORD *result; // rax
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v7, "array");
  v3 = sub_15DA4C0(v2 + 560, v7);
  sub_966710(a1, a2, v3);
  *(_BYTE *)(a1 + 53) = 0;
  *(_QWORD *)a1 = off_1C740B8;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 120) = v4;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 128) = 8;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v5 = (_QWORD *)sub_186B270(0x80u);
  v5[1] = 0;
  v5[3] = 0;
  v5[5] = 0;
  v5[7] = 0;
  v5[9] = 0;
  v5[11] = 0;
  v5[13] = 0;
  v5[15] = 0;
  *(_QWORD *)(a1 + 144) = v5;
  *(_QWORD *)(a1 + 152) = 8;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  result = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 208) = result;
  *(_QWORD *)(a1 + 216) = 8;
  *(_DWORD *)(a1 + 224) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = 0;
  *(_OWORD *)(a1 + 232) = 0;
  return result;
}

