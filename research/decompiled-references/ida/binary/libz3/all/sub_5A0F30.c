_QWORD *__fastcall sub_5A0F30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *result; // rax

  v4 = sub_5A0B20(a2);
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 16) = v4;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 32) = 2;
  *(_QWORD *)a1 = &off_1C51FF0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = a1;
  *(_QWORD *)(a1 + 56) = 0;
  v5 = (_QWORD *)sub_186B270(0xC0u);
  *v5 = 0;
  v5[1] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[9] = 0;
  v5[10] = 0;
  v5[12] = 0;
  v5[13] = 0;
  v5[15] = 0;
  v5[16] = 0;
  v5[18] = 0;
  v5[19] = 0;
  v5[21] = 0;
  v5[22] = 0;
  *(_QWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 72) = 8;
  *(_DWORD *)(a1 + 80) = 0;
  result = (_QWORD *)sub_186B270(0xC0u);
  *result = 0;
  result[1] = 0;
  result[3] = 0;
  result[4] = 0;
  result[6] = 0;
  result[7] = 0;
  result[9] = 0;
  result[10] = 0;
  result[12] = 0;
  result[13] = 0;
  result[15] = 0;
  result[16] = 0;
  result[18] = 0;
  result[19] = 0;
  result[21] = 0;
  result[22] = 0;
  *(_QWORD *)(a1 + 88) = result;
  *(_QWORD *)(a1 + 96) = 8;
  *(_DWORD *)(a1 + 104) = 0;
  return result;
}

