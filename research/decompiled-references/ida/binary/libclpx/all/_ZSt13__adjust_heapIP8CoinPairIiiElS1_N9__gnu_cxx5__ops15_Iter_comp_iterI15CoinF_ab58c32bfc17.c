__int64 __fastcall std::__adjust_heap<CoinPair<int,int> *,long,CoinPair<int,int>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,int>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 i; // rbx
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rdx
  _QWORD *j; // rbx

  result = a3 - 1;
  v5 = (a3 - 1) / 2;
  if ( a2 < v5 )
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * (i + 1);
      v8 = (_QWORD *)(a1 + 16 * (i + 1));
      if ( *((_DWORD *)v8 - 2) > *(_DWORD *)v8 )
      {
        --v7;
        v8 = (_QWORD *)(a1 + 8 * v7);
        *(_QWORD *)(a1 + 8 * i) = *v8;
        if ( v5 <= v7 )
          goto LABEL_7;
      }
      else
      {
        *(_QWORD *)(a1 + 8 * i) = *v8;
        if ( v5 <= v7 )
        {
LABEL_7:
          if ( (a3 & 1) != 0 )
            goto LABEL_8;
          goto LABEL_16;
        }
      }
    }
  }
  if ( (a3 & 1) != 0 )
  {
    v8 = (_QWORD *)(a1 + 8 * a2);
  }
  else
  {
    v7 = a2;
LABEL_16:
    if ( (a3 - 2) / 2 == v7 )
    {
      *(_QWORD *)(a1 + 8 * v7) = *(_QWORD *)(a1 + 8 * (2 * v7 + 2) - 8);
      v7 = 2 * v7 + 1;
    }
    v8 = (_QWORD *)(a1 + 8 * v7);
LABEL_8:
    result = v7 - 1;
    v9 = (v7 - 1) / 2;
    if ( v7 > a2 )
    {
      for ( j = (_QWORD *)(a1 + 8 * v9); *(_DWORD *)j < (int)a4; v9 = (v9 - 1) / 2 )
      {
        v8 = (_QWORD *)(a1 + 8 * v9);
        *(_QWORD *)(a1 + 8 * v7) = *j;
        result = (v9 - 1) / 2;
        if ( a2 >= v9 )
          break;
        j = (_QWORD *)(a1 + 8 * result);
        v7 = v9;
      }
    }
  }
  *v8 = a4;
  return result;
}

