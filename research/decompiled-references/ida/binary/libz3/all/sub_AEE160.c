_QWORD *__fastcall sub_AEE160(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  _OWORD *v5; // rax
  _QWORD *result; // rax
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  sub_180C5A0(v7, "specrels");
  v4 = sub_15DA4C0(a3 + 560, v7);
  sub_966710(a1, a2, v4);
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)a1 = off_1C71840;
  *(_DWORD *)(a1 + 64) = -1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 96) = v5;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = 8;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  result = (_QWORD *)sub_186B270(0xC0u);
  *result = 0;
  result[3] = 0;
  result[6] = 0;
  result[9] = 0;
  result[12] = 0;
  result[15] = 0;
  result[18] = 0;
  result[21] = 0;
  *(_QWORD *)(a1 + 120) = result;
  *(_QWORD *)(a1 + 128) = 8;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  return result;
}

