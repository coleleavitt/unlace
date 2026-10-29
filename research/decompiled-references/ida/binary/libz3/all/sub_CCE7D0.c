_OWORD *__fastcall sub_CCE7D0(__int64 a1, __int64 a2)
{
  _OWORD *result; // rax

  *(_QWORD *)a1 = &off_1C59598;
  *(_QWORD *)(a1 + 16) = a2;
  result = (_OWORD *)sub_186B270(0x80u);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = 8;
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
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

