_QWORD *__fastcall sub_BB01E0(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_180C100(a1, 24);
  *a2 = (*a2 + 1) & 0x3FFFFFFF | *a2 & 0xC0000000;
  *a3 = (*a3 + 1) & 0x3FFFFFFF | *a3 & 0xC0000000;
  *result = 0;
  result[1] = a2;
  result[2] = a3;
  return result;
}

