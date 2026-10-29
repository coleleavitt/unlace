_QWORD *__fastcall sub_918DC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_180C100(*(_QWORD *)(a1 + 8) + 8400LL, 32);
  *result = off_1C55E28;
  result[1] = a2;
  result[2] = a3;
  result[3] = a4;
  return result;
}

