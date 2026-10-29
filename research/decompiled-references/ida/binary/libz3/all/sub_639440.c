_OWORD *__fastcall sub_639440(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rax
  _OWORD *result; // rax

  v2 = (_OWORD *)sub_186B270(0x80u);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = 8;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0;
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v3 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 40) = v3;
  *(_QWORD *)(a1 + 48) = 8;
  *(_DWORD *)(a1 + 56) = 0;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  result = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 64) = result;
  *(_QWORD *)(a1 + 72) = 8;
  *(_DWORD *)(a1 + 80) = 0;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}

