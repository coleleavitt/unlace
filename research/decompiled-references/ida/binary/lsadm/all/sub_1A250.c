__int64 *__fastcall sub_1A250(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = qword_79C70;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = a5;
  *(_DWORD *)(a1 + 64) = a3;
  *(_BYTE *)(a1 + 68) = a2;
  *(_BYTE *)(a1 + 69) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  return qword_79C70;
}

