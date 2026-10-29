_QWORD *__fastcall sub_21F8AA0(_QWORD *a1, __int64 a2)
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
        if ( !*result )
          return (_QWORD *)a2;
        return result;
      }
      if ( *result )
        return result;
      ++result;
    }
    if ( *result )
      return result;
    ++result;
    goto LABEL_27;
  }
  if ( *a1 )
    return a1;
  if ( a1[1] )
    return a1 + 1;
  if ( a1[2] )
    return a1 + 2;
  v4 = &a1[4 * v2];
  if ( a1[3] )
    return a1 + 3;
  while ( 1 )
  {
    result = a1 + 4;
    if ( a1 + 4 == v4 )
    {
      v3 = (a2 - (__int64)v4) >> 3;
      goto LABEL_14;
    }
    if ( a1[4] )
      return result;
    if ( a1[5] )
      return a1 + 5;
    if ( a1[6] )
      return a1 + 6;
    if ( a1[7] )
      return a1 + 7;
    a1 += 4;
  }
}
