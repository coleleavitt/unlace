_QWORD *__fastcall sub_63A170(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = 49;
  a1[3] = a3;
  a1[1] = a2 & 0xFFFFFFFFFFFFFFF9LL;
  a1[2] = *(unsigned int *)(a2 + 24);
  return a1;
}

