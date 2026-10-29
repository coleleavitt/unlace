_QWORD *__fastcall sub_D850C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  v5 = *(_QWORD *)(a2 + 536);
  *a1 = 0;
  a1[1] = v5;
  sub_D8DBA0(a2, a4, a1, a2 + 496);
  sub_14B9BF0(a3, *a1, a1);
  return a1;
}

