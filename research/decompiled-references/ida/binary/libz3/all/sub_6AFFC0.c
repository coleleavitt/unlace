_QWORD *__fastcall sub_6AFFC0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // r9
  _QWORD *i; // rcx
  _QWORD *result; // rax

  v3 = *(_DWORD *)(a3 + 12);
  v4 = 16LL * a2;
  v5 = v3 & (a2 - 1);
  v6 = &a1[(unsigned __int64)v4 / 8];
  v7 = 16 * v5;
  v8 = &a1[(unsigned __int64)v7 / 8];
  if ( v7 != v4 )
  {
    for ( i = &a1[(unsigned __int64)v7 / 8]; v6 != i; i += 2 )
    {
      result = (_QWORD *)*i;
      if ( *i > 1u )
      {
        if ( *((_DWORD *)result + 3) == v3 && result == (_QWORD *)a3 )
          return i;
      }
      else if ( !result )
      {
        return result;
      }
    }
  }
  if ( v8 == a1 )
    return nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      result = (_QWORD *)*a1;
      if ( *a1 > 1u )
        break;
      if ( !result )
        return result;
      a1 += 2;
      if ( v8 == a1 )
        return nullptr;
    }
    if ( *((_DWORD *)result + 3) == v3 && result == (_QWORD *)a3 )
      break;
    a1 += 2;
    if ( v8 == a1 )
      return nullptr;
  }
  return a1;
}

