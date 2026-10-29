_OWORD *__fastcall sub_A6D880(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *result; // rax

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 1;
  v2 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 32) = v2;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = 8;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  result = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 80) = result;
  *(_QWORD *)(a1 + 88) = 8;
  *(_DWORD *)(a1 + 96) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}

