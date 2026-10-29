__int64 __fastcall sub_114E10(
        unsigned __int16 a1,
        unsigned int a2,
        int a3,
        unsigned __int16 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int a8)
{
  __int64 result; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // edx
  unsigned int v16; // edx

  result = 2;
  if ( !(a1 | a4) )
    return result;
  v12 = a2 + a3;
  get_eah();
  v13 = a5;
  if ( !a4 )
  {
    result = 5;
    if ( !a1 )
      return result;
    result = 1;
    if ( !a3 )
      return result;
    if ( !__CFADD__(a2, a3) )
    {
      if ( a7 >= a2 )
      {
        v16 = a7 + a8;
        if ( a7 < v12 )
          return (unsigned int)(v12 >= v16) + 7;
      }
      return 5;
    }
    return 4;
  }
  result = 0;
  if ( !a6 )
    return result;
  v14 = a5 + a6;
  if ( __CFADD__(a5, a6) )
    return 3;
  if ( !a1 )
  {
    if ( a7 < v14 && a7 >= a5 )
      return (unsigned int)(v14 >= a8 + a7) + 7;
    return 5;
  }
  result = 1;
  if ( !a3 )
    return result;
  if ( __CFADD__(a2, a3) )
    return 4;
  if ( a7 >= a5 && a7 < v14 )
  {
    v15 = v12;
    result = 6;
    if ( a5 < a2 )
      v13 = a2;
    if ( v14 <= v12 )
      v15 = a5 + a6;
    if ( v13 >= v15 )
    {
      v16 = a8 + a7;
      result = 7;
      if ( v14 >= a8 + a7 )
      {
        if ( a7 < a2 || a7 >= v12 )
          return 8;
        return (unsigned int)(v12 >= v16) + 7;
      }
    }
    return result;
  }
  if ( a7 < a2 || a7 >= v12 )
    return 5;
  result = 6;
  if ( a5 < a2 )
    v13 = a2;
  if ( v14 > v12 )
    v14 = v12;
  if ( v13 >= v14 )
  {
    v16 = a7 + a8;
    return (unsigned int)(v12 >= v16) + 7;
  }
  return result;
}

