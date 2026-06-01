unsigned int *__fastcall sub_6DE970(unsigned int **a1, _QWORD *a2)
{
  unsigned int *result; // rax
  int v3; // edx

  result = *a1;
  if ( !*a1 || (v3 = *(result - 1), v3 == *(result - 2)) )
  {
    sub_3A6B20(a1);
    result = *a1;
    v3 = *(*a1 - 1);
  }
  *(_QWORD *)&result[2 * v3] = *a2;
  *(result - 1) = v3 + 1;
  return result;
}

