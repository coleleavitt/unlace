_QWORD *__fastcall sub_9C7D40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 16);
  *a1 = a1 + 2;
  a1[2] = v2;
  a1[1] = 0x100000001LL;
  return a1;
}

