void __fastcall std::__introsort_loop<CoinPair<int,int> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,int>>>(
        _DWORD *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // rdx
  int *v10; // r12
  int v11; // ecx
  int *v12; // rax
  int v13; // r8d
  int v14; // edi
  int v15; // r9d
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  int *v19; // rbx
  int *v20; // rax
  int v21; // ecx
  int *v22; // r14
  int v23; // edx
  __int64 v24; // rbx
  __int64 i; // r12
  __int64 v26; // rcx

  v8 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v10 = a1 + 2;
    if ( !a3 )
    {
      v22 = a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v11 = a1[2];
      --a3;
      v12 = &a1[2 * (v8 >> 4)];
      v13 = *(a2 - 2);
      v14 = *a1;
      v15 = a1[1];
      v16 = *v12;
      if ( v11 >= *v12 )
      {
        if ( v11 >= v13 )
        {
          if ( v16 >= v13 )
          {
LABEL_24:
            *(_QWORD *)a1 = *(_QWORD *)v12;
            *v12 = v14;
            v12[1] = v15;
            v14 = *(a2 - 2);
            goto LABEL_7;
          }
LABEL_16:
          *(_QWORD *)a1 = *((_QWORD *)a2 - 1);
          *(a2 - 2) = v14;
          *(a2 - 1) = v15;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v16 < v13 )
          goto LABEL_24;
        if ( v11 < v13 )
          goto LABEL_16;
      }
      v17 = *((_QWORD *)a1 + 1);
      a1[2] = v14;
      a1[3] = v15;
      *(_QWORD *)a1 = v17;
      v14 = *(a2 - 2);
LABEL_7:
      v18 = *a1;
      v19 = v10;
      v20 = a2;
      while ( 1 )
      {
        v21 = *v19;
        v22 = v19;
        if ( *v19 < v18 )
          goto LABEL_13;
        v20 -= 2;
        if ( v14 > v18 )
        {
          do
            v20 -= 2;
          while ( *v20 > v18 );
        }
        if ( v19 >= v20 )
          break;
        v23 = v19[1];
        *(_QWORD *)v19 = *(_QWORD *)v20;
        *v20 = v21;
        v20[1] = v23;
        v14 = *(v20 - 2);
        v18 = *a1;
LABEL_13:
        v19 += 2;
      }
      std::__introsort_loop<CoinPair<int,int> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,int>>>(
        (int)v19,
        (int)a2,
        a3,
        v21,
        v13,
        v15,
        a7);
      v8 = (char *)v19 - (char *)a1;
      if ( (char *)v19 - (char *)a1 <= 128 )
        return;
      a2 = v19;
      if ( !a3 )
      {
LABEL_19:
        v24 = v8 >> 3;
        for ( i = ((v8 >> 3) - 2) >> 1; ; --i )
        {
          std::__adjust_heap<CoinPair<int,int> *,long,CoinPair<int,int>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,int>>>(
            a1,
            i,
            v24,
            *(_QWORD *)&a1[2 * i]);
          if ( !i )
            break;
        }
        do
        {
          v22 -= 2;
          v26 = *(_QWORD *)v22;
          *(_QWORD *)v22 = *(_QWORD *)a1;
          std::__adjust_heap<CoinPair<int,int> *,long,CoinPair<int,int>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,int>>>(
            a1,
            0,
            ((char *)v22 - (char *)a1) >> 3,
            v26);
        }
        while ( (char *)v22 - (char *)a1 > 8 );
        return;
      }
    }
  }
}

