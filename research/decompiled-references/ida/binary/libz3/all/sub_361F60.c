_QWORD *__fastcall sub_361F60(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  a1[1] = 0;
  *a1 = v2;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2[1] + 24LL))(a2[1], a1);
  return a1;
}

