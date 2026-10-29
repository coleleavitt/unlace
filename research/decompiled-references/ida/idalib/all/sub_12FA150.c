_DWORD *__fastcall sub_12FA150(_DWORD *a1, __int64 a2, int *a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // ecx
  _DWORD *v6; // r8
  int v7; // edx
  _DWORD *result; // rax

  v3 = (a2 - (__int64)a1) >> 4;
  v4 = (a2 - (__int64)a1) >> 2;
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
        ++result;
        break;
      case 1LL:
        v7 = *a3;
LABEL_24:
        if ( *result != v7 )
          return (_DWORD *)a2;
        return result;
      default:
        return (_DWORD *)a2;
    }
    if ( *result == v7 )
      return result;
    ++result;
    goto LABEL_24;
  }
  v5 = *a3;
  if ( *a1 == *a3 )
    return a1;
  if ( v5 == a1[1] )
    return a1 + 1;
  if ( a1[2] == v5 )
    return a1 + 2;
  v6 = &a1[4 * v3];
  if ( a1[3] == v5 )
    return a1 + 3;
  while ( 1 )
  {
    result = a1 + 4;
    if ( a1 + 4 == v6 )
    {
      v4 = (a2 - (__int64)v6) >> 2;
      goto LABEL_14;
    }
    if ( a1[4] == v5 )
      return result;
    if ( a1[5] == v5 )
      return a1 + 5;
    if ( a1[6] == v5 )
      return a1 + 6;
    if ( a1[7] == v5 )
      return a1 + 7;
    a1 += 4;
  }
}
