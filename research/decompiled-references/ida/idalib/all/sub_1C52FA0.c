_DWORD **__fastcall sub_1C52FA0(_DWORD **a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD **v4; // rdx
  _DWORD **result; // rax

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
          return (_DWORD **)a2;
LABEL_27:
        if ( (**result & 0x7C000) == 0 )
          return (_DWORD **)a2;
        return result;
      }
      if ( (**result & 0x7C000) != 0 )
        return result;
      ++result;
    }
    if ( (**result & 0x7C000) != 0 )
      return result;
    ++result;
    goto LABEL_27;
  }
  if ( (**a1 & 0x7C000) != 0 )
    return a1;
  if ( (*a1[1] & 0x7C000) != 0 )
    return a1 + 1;
  if ( (*a1[2] & 0x7C000) != 0 )
    return a1 + 2;
  v4 = &a1[4 * v2];
  if ( (*a1[3] & 0x7C000) != 0 )
    return a1 + 3;
  while ( 1 )
  {
    result = a1 + 4;
    if ( a1 + 4 == v4 )
    {
      v3 = (a2 - (__int64)v4) >> 3;
      goto LABEL_14;
    }
    if ( (*a1[4] & 0x7C000) != 0 )
      return result;
    if ( (*a1[5] & 0x7C000) != 0 )
      return a1 + 5;
    if ( (*a1[6] & 0x7C000) != 0 )
      return a1 + 6;
    if ( (*a1[7] & 0x7C000) != 0 )
      return a1 + 7;
    a1 += 4;
  }
}
