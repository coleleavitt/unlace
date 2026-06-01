__int64 __fastcall sub_115110(
        unsigned __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  result = 2;
  if ( !(a1 | a4) )
    return result;
  v18 = a5 + a6;
  v12 = a5;
  if ( *(_DWORD *)(get_eah() + 24) == 8 )
  {
    if ( a4 )
    {
      result = 0;
      if ( !a6 )
        return result;
      if ( __CFADD__(v12, a6) )
        return 3;
      if ( !a1 )
        goto LABEL_21;
    }
    else if ( !a1 )
    {
      return 5;
    }
    v14 = -1;
    goto LABEL_9;
  }
  if ( !a4 )
  {
    if ( a1 )
    {
      v14 = 0x100000000LL;
      goto LABEL_9;
    }
    return 5;
  }
  result = 0;
  if ( !a6 )
    return result;
  if ( __CFADD__(v12, a6) )
    return 3;
  v14 = 0x100000000LL;
  if ( v18 > 0x100000000LL )
    return 3;
  if ( !a1 )
  {
LABEL_21:
    if ( a7 >= v12 && a7 < v18 )
      return (unsigned int)(v18 >= a8 + a7) + 7;
    return 5;
  }
LABEL_9:
  result = 1;
  if ( !a3 )
    return result;
  v15 = a2 + a3;
  if ( __CFADD__(a2, a3) || v14 < a2 + a3 )
    return 4;
  if ( !a4 )
  {
    if ( a7 >= v15 || a7 < a2 )
      return 5;
    return (unsigned int)(v15 >= a8 + a7) + 7;
  }
  if ( a7 < v12 || a7 >= v18 )
  {
    if ( a7 < a2 || a7 >= v15 )
      return 5;
    v17 = v18;
    result = 6;
    if ( v18 > v15 )
      v17 = a2 + a3;
    if ( v12 < a2 )
      v12 = a2;
    if ( v12 >= v17 )
      goto LABEL_38;
  }
  else
  {
    v16 = v18;
    if ( v12 < a2 )
      v12 = a2;
    if ( v18 > v15 )
      v16 = a2 + a3;
    if ( v12 < v16 )
      return 6;
    result = 7;
    if ( v18 >= a8 + a7 )
    {
LABEL_38:
      if ( a7 < a2 || a7 >= v15 )
        return 8;
      return (unsigned int)(v15 >= a8 + a7) + 7;
    }
  }
  return result;
}

