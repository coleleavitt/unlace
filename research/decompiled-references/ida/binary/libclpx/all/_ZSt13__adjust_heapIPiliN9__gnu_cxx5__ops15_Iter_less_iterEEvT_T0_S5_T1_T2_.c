__int64 __fastcall std::__adjust_heap<int *,long,int,__gnu_cxx::__ops::_Iter_less_iter>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 i; // r10
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // rdx
  int j; // r10d

  result = a3 - 1;
  v5 = (a3 - 1) / 2;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * (i + 1);
      v8 = (_DWORD *)(a1 + 8 * (i + 1));
      if ( *v8 < *(v8 - 1) )
      {
        --v7;
        v8 = (_DWORD *)(a1 + 4 * v7);
        *(_DWORD *)(a1 + 4 * i) = *v8;
        if ( v7 >= v5 )
          goto LABEL_7;
      }
      else
      {
        *(_DWORD *)(a1 + 4 * i) = *v8;
        if ( v7 >= v5 )
        {
LABEL_7:
          if ( (a3 & 1) != 0 )
            goto LABEL_8;
          goto LABEL_15;
        }
      }
    }
  }
  if ( (a3 & 1) != 0 )
  {
    v8 = (_DWORD *)(a1 + 4 * a2);
  }
  else
  {
    v7 = a2;
LABEL_15:
    if ( (a3 - 2) / 2 == v7 )
    {
      *(_DWORD *)(a1 + 4 * v7) = *(_DWORD *)(a1 + 4 * (2 * v7 + 2) - 4);
      v7 = 2 * v7 + 1;
    }
    v8 = (_DWORD *)(a1 + 4 * v7);
LABEL_8:
    result = v7 - 1;
    v9 = (v7 - 1) / 2;
    if ( v7 > a2 )
    {
      for ( j = *(_DWORD *)(a1 + 4 * v9); a4 > j; v9 = (v9 - 1) / 2 )
      {
        *(_DWORD *)(a1 + 4 * v7) = j;
        v8 = (_DWORD *)(a1 + 4 * v9);
        result = (v9 - 1) / 2;
        if ( a2 >= v9 )
          break;
        j = *(_DWORD *)(a1 + 4 * result);
        v7 = v9;
      }
    }
  }
  *v8 = a4;
  return result;
}

