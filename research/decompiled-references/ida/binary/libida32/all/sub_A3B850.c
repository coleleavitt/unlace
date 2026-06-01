_QWORD *__fastcall sub_A3B850(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *result; // rax

  v4 = *(unsigned int *)(a1 + 22984);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 22988) )
  {
    sub_22134E0(a1 + 22976, a1 + 22992, v4 + 1, 16);
    v4 = *(unsigned int *)(a1 + 22984);
  }
  result = (_QWORD *)(*(_QWORD *)(a1 + 22976) + 16 * v4);
  *result = a2;
  result[1] = a3;
  ++*(_DWORD *)(a1 + 22984);
  return result;
}

