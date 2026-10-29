int **__fastcall std::__adjust_heap<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,long,CoinTreeSiblings *,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int *a4)
{
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // r8
  int **result; // rax
  int **v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r9
  int *v11; // r10
  int v12; // ebx

  v4 = (a3 - 1) / 2;
  if ( a2 >= v4 )
  {
    v6 = a2;
    if ( (a3 & 1) == 0 )
      goto LABEL_10;
    result = (int **)(a1 + 8 * a2);
    goto LABEL_17;
  }
  for ( i = a2; ; i = v6 )
  {
    v6 = 2 * (i + 1);
    result = (int **)(a1 + 16 * (i + 1));
    v8 = (int **)(a1 + 8 * (v6 - 1));
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v8 + 1) + 8LL * **v8) + 8LL) <= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*result + 1) + 8LL * **result)
                                                                                        + 8LL) )
      break;
    *(_QWORD *)(a1 + 8 * i) = *result;
    if ( v4 <= v6 )
    {
      v9 = a3 & 1;
      goto LABEL_9;
    }
LABEL_5:
    ;
  }
  *(_QWORD *)(a1 + 8 * i) = *v8;
  if ( v4 > v6 - 1 )
  {
    --v6;
    goto LABEL_5;
  }
  v9 = a3 & 1;
  result = (int **)(a1 + 8 * --v6);
LABEL_9:
  if ( !v9 )
  {
LABEL_10:
    if ( (a3 - 2) / 2 == v6 )
    {
      result = (int **)(a1 + 8 * (2 * v6 + 1));
      *(_QWORD *)(a1 + 8 * v6) = *result;
      v6 = 2 * v6 + 1;
    }
    else
    {
      result = (int **)(a1 + 8 * v6);
    }
  }
  v10 = (v6 - 1) / 2;
  if ( v6 > a2 )
  {
    v11 = *(int **)(a1 + 8 * v10);
    v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 8LL * *a4) + 8LL);
    while ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL * *v11) + 8LL) >= v12 )
    {
      *(_QWORD *)(a1 + 8 * v6) = v11;
      result = (int **)(a1 + 8 * v10);
      if ( a2 >= v10 )
        break;
      v11 = *(int **)(a1 + 8 * ((v10 - 1) / 2));
      v6 = v10;
      v10 = (v10 - 1) / 2;
    }
  }
LABEL_17:
  *result = a4;
  return result;
}

