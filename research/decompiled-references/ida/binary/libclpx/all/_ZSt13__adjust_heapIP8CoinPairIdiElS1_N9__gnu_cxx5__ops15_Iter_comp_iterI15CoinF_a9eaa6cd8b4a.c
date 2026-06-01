__int64 __fastcall std::__adjust_heap<CoinPair<double,int> *,long,CoinPair<double,int>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<double,int>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        double a5)
{
  __int64 result; // rax
  __int64 v6; // r11
  __int64 i; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 j; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx

  result = a3 - 1;
  v6 = (a3 - 1) / 2;
  if ( a2 >= v6 )
  {
    if ( (a3 & 1) != 0 )
    {
      v8 = a1 + 16 * a2;
      goto LABEL_13;
    }
    result = a2;
  }
  else
  {
    for ( i = a2; ; i = result )
    {
      result = 2 * (i + 1);
      v8 = a1 + 32 * (i + 1);
      if ( *(double *)(v8 - 16) > *(double *)v8 )
      {
        --result;
        v8 = a1 + 16 * result;
      }
      v9 = a1 + 16 * i;
      *(_QWORD *)v9 = *(_QWORD *)v8;
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v8 + 8);
      if ( v6 <= result )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
  }
  if ( (a3 - 2) / 2 == result )
  {
    v14 = result + 1;
    v15 = a1 + 16 * result;
    v16 = a1 + 32 * v14;
    *(_QWORD *)v15 = *(_QWORD *)(v16 - 16);
    *(_DWORD *)(v15 + 8) = *(_DWORD *)(v16 - 8);
    result = 2 * v14 - 1;
  }
  v8 = a1 + 16 * result;
LABEL_8:
  v10 = (result - 1) / 2;
  if ( result > a2 )
  {
    for ( j = a1 + 16 * v10; a5 > *(double *)j; j = a1 + 16 * v13 )
    {
      v12 = a1 + 16 * result;
      v8 = a1 + 16 * v10;
      *(_QWORD *)v12 = *(_QWORD *)j;
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(j + 8);
      result = v10 - 1;
      v13 = (v10 - 1) / 2;
      if ( a2 >= v10 )
        break;
      result = v10;
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_13:
  *(double *)v8 = a5;
  *(_DWORD *)(v8 + 8) = a4;
  return result;
}

