_OWORD *__fastcall sub_5EA1A0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  _OWORD *result; // rax

  *(_QWORD *)a1 = &off_1C526C8;
  v3 = *a2;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 24) = v3;
  *(_BYTE *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = a2 + 82;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = 0;
  result = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 56) = result;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  *(_QWORD *)(a1 + 64) = 8;
  *(_DWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  return result;
}

