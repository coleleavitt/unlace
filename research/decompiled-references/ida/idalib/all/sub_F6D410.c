_QWORD *__fastcall sub_F6D410(_DWORD **a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *result; // rax

  *a1[1] = a3;
  a1[1][1] = a3;
  a1[1][2] = a3;
  result = sub_A81910(a2, *((_QWORD *)*a1 + 3), a3);
  *((_QWORD *)a1[1] + 2) = result;
  return result;
}
