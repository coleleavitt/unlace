_QWORD *__fastcall sub_1BC6F60(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8

  result = a1;
  v3 = (a2 - (__int64)a1) >> 5;
  v4 = (a2 - (__int64)a1) >> 3;
  if ( v3 <= 0 )
  {
LABEL_21:
    if ( v4 != 2 )
    {
      if ( v4 != 3 )
      {
        if ( v4 != 1 )
          return (_QWORD *)a2;
LABEL_31:
        if ( !*(_DWORD *)(*result + 64LL) && !*(_DWORD *)(*result + 68LL) )
          return (_QWORD *)a2;
        return result;
      }
      if ( *(_DWORD *)(*result + 64LL) || *(_DWORD *)(*result + 68LL) )
        return result;
      ++result;
    }
    if ( *(_DWORD *)(*result + 64LL) || *(_DWORD *)(*result + 68LL) )
      return result;
    ++result;
    goto LABEL_31;
  }
  if ( !*(_DWORD *)(*a1 + 64LL) && !*(_DWORD *)(*a1 + 68LL) )
  {
    v5 = a1[1];
    if ( *(_DWORD *)(v5 + 64) || *(_DWORD *)(v5 + 68) )
    {
      return a1 + 1;
    }
    else
    {
      v6 = a1 + 2;
      v7 = (__int64)&a1[4 * v3 - 2];
      while ( 1 )
      {
        result = v6;
        if ( *(_DWORD *)(*v6 + 64LL) || *(_DWORD *)(*v6 + 68LL) )
          break;
        v8 = v6[1];
        v9 = v6 + 1;
        if ( *(_DWORD *)(v8 + 64) || *(_DWORD *)(v8 + 68) )
          return v9;
        v10 = result + 2;
        if ( result == (_QWORD *)v7 )
        {
          result += 2;
          v4 = (a2 - (__int64)v10) >> 3;
          goto LABEL_21;
        }
        v11 = result[2];
        if ( !*(_DWORD *)(v11 + 64) && !*(_DWORD *)(v11 + 68) )
        {
          v12 = result[3];
          v10 = result + 3;
          if ( !*(_DWORD *)(v12 + 64) )
          {
            v6 = result + 4;
            if ( !*(_DWORD *)(v12 + 68) )
              continue;
          }
        }
        return v10;
      }
    }
  }
  return result;
}
