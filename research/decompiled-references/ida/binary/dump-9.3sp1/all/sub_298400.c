_QWORD *__fastcall sub_298400(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r13

  v4 = *(_QWORD *)*a3;
  **(_QWORD **)(*a3 + 8) = v4;
  *(_QWORD *)(*(_QWORD *)*a3 + 8LL) = *(_QWORD *)(*a3 + 8);
  sub_255050(*a3 + 16);
  qfree(*a3);
  --*(_QWORD *)(a2 + 16);
  *a1 = v4;
  return a1;
}
