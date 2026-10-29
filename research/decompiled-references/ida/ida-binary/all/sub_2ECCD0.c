__int64 __fastcall sub_2ECCD0(
        unsigned __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v10; // rdi
  __int16 v13; // r12
  unsigned __int64 v14; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  result = 2;
  v10 = a4;
  if ( !(a1 | (unsigned __int16)a4) )
    return result;
  v13 = a4;
  v20 = a5 + a6;
  v14 = a5;
  LOWORD(v10) = a1 | a4;
  if ( *(_DWORD *)(get_eah(v10, a2, a3) + 24) == 8 )
  {
    if ( v13 )
    {
      result = 0;
      if ( !a6 )
        return result;
      if ( __CFADD__(v14, a6) )
        return 3;
      if ( !a1 )
        goto LABEL_21;
    }
    else if ( !a1 )
    {
      return 5;
    }
    v16 = -1;
    goto LABEL_9;
  }
  if ( !v13 )
  {
    if ( a1 )
    {
      v16 = 0x100000000LL;
      goto LABEL_9;
    }
    return 5;
  }
  result = 0;
  if ( !a6 )
    return result;
  if ( __CFADD__(v14, a6) )
    return 3;
  v16 = 0x100000000LL;
  if ( v20 > 0x100000000LL )
    return 3;
  if ( !a1 )
  {
LABEL_21:
    if ( a7 >= v14 && a7 < v20 )
      return (unsigned int)(v20 >= a8 + a7) + 7;
    return 5;
  }
LABEL_9:
  result = 1;
  if ( !a3 )
    return result;
  v17 = a2 + a3;
  if ( __CFADD__(a2, a3) || v16 < a2 + a3 )
    return 4;
  if ( !v13 )
  {
    if ( a7 >= v17 || a7 < a2 )
      return 5;
    return (unsigned int)(v17 >= a8 + a7) + 7;
  }
  if ( a7 < v14 || a7 >= v20 )
  {
    if ( a7 < a2 || a7 >= v17 )
      return 5;
    v19 = v20;
    result = 6;
    if ( v20 > v17 )
      v19 = a2 + a3;
    if ( v14 < a2 )
      v14 = a2;
    if ( v14 >= v19 )
      goto LABEL_38;
  }
  else
  {
    v18 = v20;
    if ( v14 < a2 )
      v14 = a2;
    if ( v20 > v17 )
      v18 = a2 + a3;
    if ( v14 < v18 )
      return 6;
    result = 7;
    if ( v20 >= a8 + a7 )
    {
LABEL_38:
      if ( a7 < a2 || a7 >= v17 )
        return 8;
      return (unsigned int)(v17 >= a8 + a7) + 7;
    }
  }
  return result;
}
