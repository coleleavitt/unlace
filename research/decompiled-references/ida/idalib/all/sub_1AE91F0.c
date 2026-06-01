_QWORD *__fastcall sub_1AE91F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *result; // rax

  v2 = (a2 - (__int64)a1) >> 5;
  v3 = (a2 - (__int64)a1) >> 3;
  if ( v2 <= 0 )
  {
    result = a1;
LABEL_14:
    if ( v3 != 2 )
    {
      if ( v3 != 3 )
      {
        if ( v3 != 1 )
          return (_QWORD *)a2;
LABEL_27:
        if ( *(_DWORD *)(*result + 8LL) != 103 )
          return (_QWORD *)a2;
        return result;
      }
      if ( *(_DWORD *)(*result + 8LL) == 103 )
        return result;
      ++result;
    }
    if ( *(_DWORD *)(*result + 8LL) == 103 )
      return result;
    ++result;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(*a1 + 8LL) == 103 )
    return a1;
  if ( *(_DWORD *)(a1[1] + 8LL) == 103 )
    return a1 + 1;
  if ( *(_DWORD *)(a1[2] + 8LL) == 103 )
    return a1 + 2;
  v4 = &a1[4 * v2];
  if ( *(_DWORD *)(a1[3] + 8LL) == 103 )
    return a1 + 3;
  while ( 1 )
  {
    result = a1 + 4;
    if ( a1 + 4 == v4 )
    {
      v3 = (a2 - (__int64)v4) >> 3;
      goto LABEL_14;
    }
    if ( *(_DWORD *)(a1[4] + 8LL) == 103 )
      return result;
    if ( *(_DWORD *)(a1[5] + 8LL) == 103 )
      return a1 + 5;
    if ( *(_DWORD *)(a1[6] + 8LL) == 103 )
      return a1 + 6;
    if ( *(_DWORD *)(a1[7] + 8LL) == 103 )
      return a1 + 7;
    a1 += 4;
  }
}
