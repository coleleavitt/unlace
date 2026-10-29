__int64 *__fastcall sub_E5EFA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  a1[1] = 0;
  *a1 = v2;
  sub_E5ED50(a2, (__int64)a1);
  return a1;
}

