_DWORD *__fastcall sub_1598810(_DWORD *a1, __int64 a2)
{
  signed __int64 v2; // rdx
  _DWORD *v3; // rdx
  _DWORD *result; // rax

  v2 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 3);
  if ( v2 >> 2 <= 0 )
  {
    result = a1;
LABEL_16:
    if ( v2 != 2 )
    {
      if ( v2 != 3 )
      {
        if ( v2 != 1 )
          return (_DWORD *)a2;
LABEL_25:
        if ( (*result & 0xFFFFFFFD) != 0 )
          return (_DWORD *)a2;
        return result;
      }
      if ( (*result & 0xFFFFFFFD) == 0 )
        return result;
      result += 6;
    }
    if ( (*result & 0xFFFFFFFD) == 0 )
      return result;
    result += 6;
    goto LABEL_25;
  }
  if ( (*a1 & 0xFFFFFFFD) == 0 )
    return a1;
  if ( (a1[6] & 0xFFFFFFFD) == 0 )
    return a1 + 6;
  v3 = &a1[24 * (v2 >> 2)];
  while ( 1 )
  {
    if ( (a1[12] & 0xFFFFFFFD) == 0 )
      return a1 + 12;
    if ( (a1[18] & 0xFFFFFFFD) == 0 )
      return a1 + 18;
    result = a1 + 24;
    if ( a1 + 24 == v3 )
    {
      v2 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)v3) >> 3);
      goto LABEL_16;
    }
    if ( (a1[24] & 0xFFFFFFFD) == 0 )
      return result;
    if ( (a1[30] & 0xFFFFFFFD) == 0 )
      return a1 + 30;
    a1 += 24;
  }
}
