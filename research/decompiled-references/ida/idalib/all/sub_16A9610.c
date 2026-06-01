_QWORD *__fastcall sub_16A9610(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *result; // rax

  v3 = *(unsigned int *)(a1 + 8);
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v3 + 1, 16);
    v3 = *(unsigned int *)(a1 + 8);
  }
  result = (_QWORD *)(*(_QWORD *)a1 + 16 * v3);
  *result = a2;
  result[1] = a3;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
