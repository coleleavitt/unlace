_QWORD *__fastcall sub_22AE50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_186B270(0x20u);
  result[2] = a4;
  result[1] = a2;
  result[3] = a4 + 104;
  *result = off_1C4C508;
  return result;
}

