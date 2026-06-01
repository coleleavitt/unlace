_QWORD *__fastcall sub_966F50(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // rdx
  _QWORD *result; // rax

  v3 = (a2 - (__int64)a1) >> 6;
  v4 = (a2 - (__int64)a1) >> 4;
  if ( v3 <= 0 )
  {
    result = a1;
LABEL_14:
    switch ( v4 )
    {
      case 2LL:
        v7 = *a3;
        break;
      case 3LL:
        v7 = *a3;
        if ( *result == v7 )
          return result;
        result += 2;
        break;
      case 1LL:
        v7 = *a3;
LABEL_24:
        if ( *result != v7 )
          return (_QWORD *)a2;
        return result;
      default:
        return (_QWORD *)a2;
    }
    if ( *result == v7 )
      return result;
    result += 2;
    goto LABEL_24;
  }
  v5 = *a3;
  if ( *a1 == *a3 )
    return a1;
  if ( v5 == a1[2] )
    return a1 + 2;
  if ( a1[4] == v5 )
    return a1 + 4;
  v6 = &a1[8 * v3];
  if ( a1[6] == v5 )
    return a1 + 6;
  while ( 1 )
  {
    result = a1 + 8;
    if ( a1 + 8 == v6 )
    {
      v4 = (a2 - (__int64)v6) >> 4;
      goto LABEL_14;
    }
    if ( a1[8] == v5 )
      return result;
    if ( a1[10] == v5 )
      return a1 + 10;
    if ( a1[12] == v5 )
      return a1 + 12;
    if ( a1[14] == v5 )
      return a1 + 14;
    a1 += 8;
  }
}

