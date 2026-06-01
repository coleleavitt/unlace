void __fastcall std::__introsort_loop<CoinPair<double,int> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstGreater_2<double,int>>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        char a7)
{
  __int64 v8; // rdx
  double v9; // xmm1_8
  __int64 v10; // rax
  double v11; // xmm3_8
  double v12; // xmm2_8
  int v13; // edx
  double v14; // xmm0_8
  __int64 v15; // rax
  double v16; // xmm0_8
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rax
  double v19; // xmm1_8
  _QWORD *v20; // r12
  int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // r15
  double *v24; // r14
  __int64 v25; // rcx
  double v26; // xmm0_8
  double v27; // rax
  __int64 v28; // rcx
  int v29; // [rsp-8h] [rbp-50h]

  v8 = (__int64)a2 - a1;
  if ( (__int64)a2 - a1 > 256 )
  {
    if ( !a3 )
    {
      v20 = a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v9 = *(double *)(a1 + 16);
      --a3;
      v10 = a1 + 16 * (v8 >> 5);
      v11 = *((double *)a2 - 2);
      v12 = *(double *)a1;
      v13 = *(_DWORD *)(a1 + 8);
      v14 = *(double *)v10;
      if ( v9 <= *(double *)v10 )
      {
        if ( v9 <= v11 )
        {
          if ( v14 <= v11 )
          {
LABEL_24:
            *(_QWORD *)a1 = *(_QWORD *)v10;
            a4 = *(_DWORD *)(v10 + 8);
            *(_DWORD *)(a1 + 8) = a4;
            *(double *)v10 = v12;
            *(_DWORD *)(v10 + 8) = v13;
            v12 = *((double *)a2 - 2);
            goto LABEL_7;
          }
LABEL_16:
          *(_QWORD *)a1 = *(a2 - 2);
          *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 - 2);
          *((double *)a2 - 2) = v12;
          *((_DWORD *)a2 - 2) = v13;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v14 > v11 )
          goto LABEL_24;
        if ( v9 > v11 )
          goto LABEL_16;
      }
      v15 = *(_QWORD *)(a1 + 16);
      *(double *)(a1 + 16) = v12;
      *(_QWORD *)a1 = v15;
      LODWORD(v15) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v13;
      *(_DWORD *)(a1 + 8) = v15;
      v12 = *((double *)a2 - 2);
LABEL_7:
      v16 = *(double *)a1;
      v17 = a1 + 16;
      v18 = a2;
      while ( 1 )
      {
        v19 = *(double *)v17;
        v20 = (_QWORD *)v17;
        if ( *(double *)v17 > v16 )
          goto LABEL_13;
        v18 -= 2;
        if ( v16 > v12 )
        {
          do
            v18 -= 2;
          while ( v16 > *(double *)v18 );
        }
        if ( (unsigned __int64)v18 <= v17 )
          break;
        v21 = *(_DWORD *)(v17 + 8);
        *(_QWORD *)v17 = *v18;
        a4 = *((_DWORD *)v18 + 2);
        *(_DWORD *)(v17 + 8) = a4;
        *(double *)v18 = v19;
        *((_DWORD *)v18 + 2) = v21;
        v12 = *((double *)v18 - 2);
        v16 = *(double *)a1;
LABEL_13:
        v17 += 16LL;
      }
      std::__introsort_loop<CoinPair<double,int> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstGreater_2<double,int>>>(
        v17,
        (int)a2,
        a3,
        a4,
        a5,
        a6,
        a7);
      v8 = v17 - a1;
      a4 = v29;
      if ( (__int64)(v17 - a1) <= 256 )
        return;
      a2 = (_QWORD *)v17;
      if ( !a3 )
      {
LABEL_19:
        v22 = v8 >> 4;
        v23 = ((v8 >> 4) - 2) >> 1;
        v24 = (double *)(a1 + 16 * v23);
        while ( 1 )
        {
          v25 = *((_QWORD *)v24 + 1);
          v26 = *v24;
          v24 -= 2;
          std::__adjust_heap<CoinPair<double,int> *,long,CoinPair<double,int>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstGreater_2<double,int>>>(
            a1,
            v23,
            v22,
            v25,
            v26);
          if ( !v23 )
            break;
          --v23;
        }
        do
        {
          v20 -= 2;
          v27 = *(double *)v20;
          v28 = v20[1];
          *v20 = *(_QWORD *)a1;
          *((_DWORD *)v20 + 2) = *(_DWORD *)(a1 + 8);
          std::__adjust_heap<CoinPair<double,int> *,long,CoinPair<double,int>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstGreater_2<double,int>>>(
            a1,
            0,
            ((__int64)v20 - a1) >> 4,
            v28,
            v27);
        }
        while ( (__int64)v20 - a1 > 16 );
        return;
      }
    }
  }
}

