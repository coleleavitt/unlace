_QWORD *__fastcall sub_291080(_QWORD *a1, __int64 a2, __int64 **a3)
{
  __int64 v4; // r13

  v4 = **a3;
  *(_QWORD *)(*a3)[1] = v4;
  *(_QWORD *)(**a3 + 8) = (*a3)[1];
  sub_24DCD0((__int64)(*a3 + 2));
  qfree(*a3);
  --*(_QWORD *)(a2 + 16);
  *a1 = v4;
  return a1;
}
