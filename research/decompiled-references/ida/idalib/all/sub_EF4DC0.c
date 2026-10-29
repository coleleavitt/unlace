_QWORD *__fastcall sub_EF4DC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = (_QWORD *)*a1;
  *(_QWORD *)*a1 = a4;
  return result;
}
