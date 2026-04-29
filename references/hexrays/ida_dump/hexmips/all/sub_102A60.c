_QWORD *__fastcall sub_102A60(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx

  v5 = 24 * a5;
  sub_67670(*a2, (__int64)"%zu", a5);
  sub_1028E0((_QWORD *)(v5 + *(_QWORD *)(a1 + 184)), *a2 + 3);
  return sub_1028E0((_QWORD *)(*(_QWORD *)(a1 + 216) + v5), *a2 + 6);
}
