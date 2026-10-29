unsigned int *__fastcall sub_3F1D80(unsigned int **a1, __int64 *a2)
{
  unsigned int *result; // rax
  __int64 v3; // rbp
  int v4; // edx

  sub_14B9B80(a1 + 14, a2);
  result = *a1;
  v3 = *a2;
  if ( *a2 != *((_QWORD *)*a1 + 107) )
  {
    if ( v3 )
      ++*(_DWORD *)(v3 + 8);
    result = a1[9];
    if ( !result || (v4 = *(result - 1), v4 == *(result - 2)) )
    {
      sub_23A6F0(a1 + 9);
      result = a1[9];
      v4 = *(result - 1);
    }
    *(_QWORD *)&result[2 * v4] = v3;
    *(result - 1) = v4 + 1;
  }
  return result;
}

