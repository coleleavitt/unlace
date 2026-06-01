_QWORD *__fastcall sub_1AE7A80(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rcx
  _QWORD *result; // rax

  v3 = (a2 - (__int64)a1) >> 5;
  v4 = (a2 - (__int64)a1) >> 3;
  if ( v3 <= 0 )
  {
    result = a1;
LABEL_14:
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        if ( v4 != 1 )
          return (_QWORD *)a2;
LABEL_27:
        if ( a3 != *(_DWORD *)(*result + 8LL) )
          return (_QWORD *)a2;
        return result;
      }
      if ( a3 == *(_DWORD *)(*result + 8LL) )
        return result;
      ++result;
    }
    if ( a3 == *(_DWORD *)(*result + 8LL) )
      return result;
    ++result;
    goto LABEL_27;
  }
  if ( a3 == *(_DWORD *)(*a1 + 8LL) )
    return a1;
  if ( a3 == *(_DWORD *)(a1[1] + 8LL) )
    return a1 + 1;
  if ( a3 == *(_DWORD *)(a1[2] + 8LL) )
    return a1 + 2;
  v5 = &a1[4 * v3];
  if ( a3 == *(_DWORD *)(a1[3] + 8LL) )
    return a1 + 3;
  while ( 1 )
  {
    result = a1 + 4;
    if ( a1 + 4 == v5 )
    {
      v4 = (a2 - (__int64)v5) >> 3;
      goto LABEL_14;
    }
    if ( a3 == *(_DWORD *)(a1[4] + 8LL) )
      return result;
    if ( a3 == *(_DWORD *)(a1[5] + 8LL) )
      return a1 + 5;
    if ( a3 == *(_DWORD *)(a1[6] + 8LL) )
      return a1 + 6;
    if ( a3 == *(_DWORD *)(a1[7] + 8LL) )
      return a1 + 7;
    a1 += 4;
  }
}
