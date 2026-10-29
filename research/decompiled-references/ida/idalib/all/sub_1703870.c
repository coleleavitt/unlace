_QWORD *__fastcall sub_1703870(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx

  if ( !*(_BYTE *)(a1 + 20) )
    return (_QWORD *)sub_2236760(a1, a2);
  result = *(_QWORD **)a1;
  v3 = *(unsigned int *)(a1 + 12);
  v4 = (_QWORD *)(*(_QWORD *)a1 + 8 * v3);
  if ( *(_QWORD **)a1 == v4 )
  {
LABEL_7:
    if ( (unsigned int)v3 < *(_DWORD *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 12) = v3 + 1;
      *v4 = a2;
      return (_QWORD *)(8 * v3 + *(_QWORD *)a1);
    }
    return (_QWORD *)sub_2236760(a1, a2);
  }
  if ( a2 != *result )
  {
    while ( ++result != v4 )
    {
      if ( *result == a2 )
        return result;
    }
    goto LABEL_7;
  }
  return result;
}
