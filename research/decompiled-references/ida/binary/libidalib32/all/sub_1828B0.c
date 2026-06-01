_DWORD *__fastcall sub_1828B0(__int64 **a1, int a2, unsigned __int8 *a3, signed __int64 a4, size_t a5)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_1820F0(a1, a3, a4, 0, a5);
  result[2] = 5;
  *result = a2;
  return result;
}

