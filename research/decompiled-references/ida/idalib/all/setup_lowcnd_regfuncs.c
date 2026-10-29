_QWORD *__fastcall setup_lowcnd_regfuncs(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(qword_2CCB598 + 1608);
  *result = a1;
  result[1] = a2;
  return result;
}
