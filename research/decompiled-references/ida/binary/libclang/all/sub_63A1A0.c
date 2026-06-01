_QWORD *__fastcall sub_63A1A0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  *a1 = 49;
  a1[2] = a3;
  a1[1] = a2 & 0xFFFFFFFFFFFFFFF9LL | 2;
  a1[3] = a4;
  return a1;
}

