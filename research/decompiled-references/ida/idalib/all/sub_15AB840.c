char *__fastcall sub_15AB840(int *a1, _QWORD *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *result; // rax

  result = sub_E90F90((__int64)(a1 + 2), a2, a3, a4, a5, a6);
  *a1 = a3;
  a1[1] = a3;
  return result;
}
