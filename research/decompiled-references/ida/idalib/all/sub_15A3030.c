_QWORD *__fastcall sub_15A3030(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax

  v2 = *(unsigned int *)(a1 + 56);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 60) )
  {
    sub_2237220(a1 + 48, a1 + 64, v2 + 1, 16);
    v2 = *(unsigned int *)(a1 + 56);
  }
  result = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v2);
  *result = 2;
  result[1] = a2;
  ++*(_DWORD *)(a1 + 56);
  return result;
}
