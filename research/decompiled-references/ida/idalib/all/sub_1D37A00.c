_QWORD *__fastcall sub_1D37A00(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *i; // rdi

  *a1 = 1;
  result = a1 + 9;
  for ( i = a1 + 1; result != i; i += 2 )
    *i = -4096;
  return result;
}
