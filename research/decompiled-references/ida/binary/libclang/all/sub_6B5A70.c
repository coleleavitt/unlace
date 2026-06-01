_QWORD *__fastcall sub_6B5A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD *result; // rax

  v4 = *(unsigned int *)(a1 + 22816);
  if ( *(unsigned int *)(a1 + 22820) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(a1 + 22808, a1 + 22824, v4 + 1, 16);
    v4 = *(unsigned int *)(a1 + 22816);
  }
  result = (_QWORD *)(*(_QWORD *)(a1 + 22808) + 16 * v4);
  *result = a2;
  result[1] = a3;
  ++*(_DWORD *)(a1 + 22816);
  return result;
}

