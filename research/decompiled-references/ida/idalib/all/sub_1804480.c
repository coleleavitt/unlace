_DWORD *__fastcall sub_1804480(_DWORD *a1, __int64 a2, int *a3)
{
  __int64 v3; // r8
  __int64 v4; // rax
  int v5; // ecx
  _DWORD *v6; // r8
  _DWORD *result; // rax
  int v8; // ecx

  v3 = (a2 - (__int64)a1) >> 4;
  v4 = (a2 - (__int64)a1) >> 2;
  if ( v3 <= 0 )
  {
LABEL_11:
    switch ( v4 )
    {
      case 2LL:
        v8 = *a3;
        break;
      case 3LL:
        v8 = *a3;
        result = a1;
        if ( ((*a3 ^ *a1) & 0x3FFFFFFF) == 0 )
          return result;
        ++a1;
        break;
      case 1LL:
        v8 = *a3;
LABEL_18:
        result = a1;
        if ( ((*a1 ^ v8) & 0x3FFFFFFF) != 0 )
          return (_DWORD *)a2;
        return result;
      default:
        return (_DWORD *)a2;
    }
    result = a1;
    if ( ((v8 ^ *a1) & 0x3FFFFFFF) == 0 )
      return result;
    ++a1;
    goto LABEL_18;
  }
  v5 = *a3;
  if ( ((*a3 ^ *a1) & 0x3FFFFFFF) == 0 )
    return a1;
  v6 = &a1[4 * v3];
  while ( 1 )
  {
    if ( ((v5 ^ a1[1]) & 0x3FFFFFFF) == 0 )
      return a1 + 1;
    if ( ((v5 ^ a1[2]) & 0x3FFFFFFF) == 0 )
      return a1 + 2;
    if ( ((v5 ^ a1[3]) & 0x3FFFFFFF) == 0 )
      return a1 + 3;
    a1 += 4;
    if ( a1 == v6 )
    {
      v4 = (a2 - (__int64)a1) >> 2;
      goto LABEL_11;
    }
    if ( ((v5 ^ *a1) & 0x3FFFFFFF) == 0 )
      return a1;
  }
}
