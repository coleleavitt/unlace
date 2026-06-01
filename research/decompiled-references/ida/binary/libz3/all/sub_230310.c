_QWORD *__fastcall sub_230310(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_186B270(0x20u);
  result[2] = a3;
  result[1] = a1;
  result[3] = a3 + 104;
  *result = off_1C5F440;
  return result;
}

