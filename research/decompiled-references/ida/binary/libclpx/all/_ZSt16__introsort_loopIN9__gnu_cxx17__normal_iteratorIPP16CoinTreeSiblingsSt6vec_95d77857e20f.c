void __fastcall std::__introsort_loop<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // rdx
  char *v10; // r13
  int **v11; // rbp
  char *v12; // r12
  int *v13; // rcx
  int **v14; // r11
  int v15; // r8d
  int *v16; // rdi
  int v17; // r9d
  int v18; // r10d
  int *v19; // rdx
  int v20; // r10d
  int **v21; // rax
  int *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r12
  __int64 i; // rbp
  char *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // rdx

  v8 = a2 - a1;
  if ( a2 - a1 <= 128 )
    return;
  v10 = a2;
  if ( !a3 )
  {
LABEL_21:
    v24 = v8 >> 3;
    for ( i = ((v8 >> 3) - 2) >> 1; ; --i )
    {
      std::__adjust_heap<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,long,CoinTreeSiblings *,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(
        a1,
        i,
        v24,
        *(_QWORD *)&a1[8 * i]);
      if ( !i )
        break;
    }
    v26 = v10 - 8;
    do
    {
      v27 = *(_QWORD *)v26;
      v28 = v26 - a1;
      v29 = v26 - a1;
      v26 -= 8;
      *((_QWORD *)v26 + 1) = *(_QWORD *)a1;
      std::__adjust_heap<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,long,CoinTreeSiblings *,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(
        a1,
        0,
        v29 >> 3,
        v27);
    }
    while ( v28 > 8 );
    return;
  }
  v11 = (int **)(a1 + 8);
  v12 = a2;
  while ( 2 )
  {
    v13 = *((int **)a1 + 1);
    --a3;
    v14 = (int **)&a1[8 * ((__int64)(((unsigned __int64)(v12 - a1) >> 63) + ((v12 - a1) >> 3)) >> 1)];
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 1) + 8LL * *v13) + 8LL);
    v16 = *((int **)a2 - 1);
    v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v14 + 1) + 8LL * **v14) + 8LL);
    v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 1) + 8LL * *v16) + 8LL);
    v19 = *(int **)a1;
    if ( v15 < v17 )
    {
      if ( v15 >= v18 )
        goto LABEL_7;
      if ( v17 >= v18 )
        goto LABEL_17;
LABEL_27:
      *(_QWORD *)a1 = *v14;
      *v14 = v19;
      v19 = *((int **)a2 - 1);
      goto LABEL_18;
    }
    if ( v17 >= v18 )
      goto LABEL_27;
    if ( v15 >= v18 )
    {
LABEL_17:
      *(_QWORD *)a1 = v16;
      *((_QWORD *)a2 - 1) = v19;
LABEL_18:
      v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8LL * **(int **)a1) + 8LL);
      goto LABEL_8;
    }
LABEL_7:
    *(_QWORD *)a1 = v13;
    *((_QWORD *)a1 + 1) = v19;
    v19 = *((int **)a2 - 1);
LABEL_8:
    v12 = (char *)v11;
    v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 1) + 8LL * *v19) + 8LL);
    v21 = (int **)a2;
    while ( 1 )
    {
      v22 = *(int **)v12;
      v10 = v12;
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 8LL) + 8LL * **(int **)v12);
      if ( *(_DWORD *)(v23 + 8) >= v15 )
        goto LABEL_14;
      --v21;
      if ( v15 >= v20 )
      {
        do
        {
          v19 = *--v21;
          v23 = *(_QWORD *)(*((_QWORD *)*v21 + 1) + 8LL * **v21);
        }
        while ( *(_DWORD *)(v23 + 8) <= v15 );
      }
      if ( v21 <= (int **)v12 )
        break;
      *(_QWORD *)v12 = v19;
      *v21 = v22;
      v19 = *(v21 - 1);
      v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 8LL * **(int **)a1) + 8LL);
      v20 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 1) + 8LL * *v19) + 8LL);
LABEL_14:
      v12 += 8;
    }
    std::__introsort_loop<__gnu_cxx::__normal_iterator<CoinTreeSiblings **,std::vector<CoinTreeSiblings *>>,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinSearchTreeCompareDepth>>(
      (int)v12,
      (int)a2,
      a3,
      v23,
      v15,
      (int)v22,
      a7);
    v8 = v12 - a1;
    if ( v12 - a1 > 128 )
    {
      a2 = v12;
      if ( !a3 )
        goto LABEL_21;
      continue;
    }
    break;
  }
}

