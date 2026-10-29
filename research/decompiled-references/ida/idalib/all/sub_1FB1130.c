_QWORD *__fastcall sub_1FB1130(_QWORD *a1)
{
  _QWORD *v1; // rax
  _QWORD *result; // rax

  *a1 = 0;
  v1 = (_QWORD *)operator new(0x220u);
  v1[1] = 0x100000001LL;
  v1[3] = 0x2000000000LL;
  *v1 = off_2C02AF8;
  v1[2] = v1 + 4;
  a1[1] = v1;
  result = v1 + 2;
  *a1 = result;
  return result;
}
