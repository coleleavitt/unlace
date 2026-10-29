void __fastcall std::__introsort_loop<CoinPair<int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,double>>>(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  __int64 v8; // rdx
  __m128i *v10; // r12
  int v11; // ecx
  int v12; // r8d
  __int32 v13; // edi
  __m128i *v14; // rax
  __int64 v15; // xmm0_8
  int v16; // edx
  __m128i v17; // xmm1
  __int32 v18; // edx
  unsigned __int64 v19; // rbx
  __m128i *v20; // rax
  int v21; // ecx
  double *v22; // r13
  __int64 v23; // xmm0_8
  __int64 v24; // rbx
  __int64 v25; // r15
  double *m128i_i64; // r12
  double v27; // rcx
  double v28; // xmm0_8
  double v29; // rcx
  double v30; // [rsp+8h] [rbp-40h]

  v8 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v10 = a1 + 1;
    if ( !a3 )
    {
      v22 = (double *)a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v11 = a1[1].m128i_i32[0];
      --a3;
      v12 = a2[-1].m128i_i32[0];
      v13 = a1->m128i_i32[0];
      v14 = &a1[v8 >> 5];
      v15 = a1->m128i_i64[1];
      v16 = v14->m128i_i32[0];
      if ( v11 >= v14->m128i_i32[0] )
      {
        if ( v11 >= v12 )
        {
          if ( v16 >= v12 )
          {
LABEL_24:
            *a1 = _mm_loadu_si128(v14);
            v14->m128i_i32[0] = v13;
            v14->m128i_i64[1] = v15;
            v13 = a2[-1].m128i_i32[0];
            goto LABEL_7;
          }
LABEL_16:
          *a1 = _mm_loadu_si128(a2 - 1);
          a2[-1].m128i_i32[0] = v13;
          a2[-1].m128i_i64[1] = v15;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v16 < v12 )
          goto LABEL_24;
        if ( v11 < v12 )
          goto LABEL_16;
      }
      v17 = _mm_loadu_si128(a1 + 1);
      a1[1].m128i_i32[0] = v13;
      *a1 = v17;
      a1[1].m128i_i64[1] = v15;
      v13 = a2[-1].m128i_i32[0];
LABEL_7:
      v18 = a1->m128i_i32[0];
      v19 = (unsigned __int64)v10;
      v20 = a2;
      while ( 1 )
      {
        v21 = *(_DWORD *)v19;
        v22 = (double *)v19;
        if ( *(_DWORD *)v19 < v18 )
          goto LABEL_13;
        --v20;
        if ( v13 > v18 )
        {
          do
            --v20;
          while ( v20->m128i_i32[0] > v18 );
        }
        if ( v19 >= (unsigned __int64)v20 )
          break;
        v23 = *(_QWORD *)(v19 + 8);
        *(__m128i *)v19 = _mm_loadu_si128(v20);
        v20->m128i_i32[0] = v21;
        v13 = v20[-1].m128i_i32[0];
        v20->m128i_i64[1] = v23;
        v18 = a1->m128i_i32[0];
LABEL_13:
        v19 += 16LL;
      }
      std::__introsort_loop<CoinPair<int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,double>>>(
        v19,
        (int)a2,
        a3,
        v21,
        v12,
        a6,
        a7);
      v8 = v19 - (_QWORD)a1;
      if ( (__int64)(v19 - (_QWORD)a1) <= 256 )
        return;
      a2 = (__m128i *)v19;
      if ( !a3 )
      {
LABEL_19:
        v24 = v8 >> 4;
        v25 = ((v8 >> 4) - 2) >> 1;
        m128i_i64 = (double *)a1[v25].m128i_i64;
        while ( 1 )
        {
          v27 = *m128i_i64;
          v28 = m128i_i64[1];
          m128i_i64 -= 2;
          std::__adjust_heap<CoinPair<int,double> *,long,CoinPair<int,double>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,double>>>(
            a1,
            v25,
            v24,
            *(_QWORD *)&v27,
            v28);
          if ( !v25 )
            break;
          --v25;
        }
        do
        {
          v22 -= 2;
          v29 = *v22;
          v30 = v22[1];
          *(__m128i *)v22 = _mm_loadu_si128(a1);
          std::__adjust_heap<CoinPair<int,double> *,long,CoinPair<int,double>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,double>>>(
            a1,
            0,
            ((char *)v22 - (char *)a1) >> 4,
            *(_QWORD *)&v29,
            v30);
        }
        while ( (char *)v22 - (char *)a1 > 16 );
        return;
      }
    }
  }
}

