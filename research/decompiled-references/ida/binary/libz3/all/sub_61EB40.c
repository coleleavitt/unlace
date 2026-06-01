_OWORD *__fastcall sub_61EB40(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  _OWORD *result; // rax

  v4 = a1 + 40;
  *(_QWORD *)(v4 - 40) = &off_1C52950;
  v5 = *a2;
  *(_QWORD *)(v4 - 8) = a2;
  *(_QWORD *)(v4 - 16) = v5;
  *(_DWORD *)(v4 - 32) = a3;
  *(_BYTE *)(v4 - 28) = 0;
  *(_QWORD *)(v4 - 24) = 0;
  sub_16669D0(v4, v5);
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 56) = v6;
  *(_QWORD *)(a1 + 72) = v6;
  result = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 88) = result;
  *(_QWORD *)(a1 + 96) = 8;
  *(_DWORD *)(a1 + 104) = 0;
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

