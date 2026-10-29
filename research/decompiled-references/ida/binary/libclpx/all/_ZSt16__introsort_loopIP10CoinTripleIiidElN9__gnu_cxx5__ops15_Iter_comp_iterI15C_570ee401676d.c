void __fastcall std::__introsort_loop<CoinTriple<int,int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_3<int,int,double>>>(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v8; // rdx
  __m128i *v10; // r12
  int v11; // ecx
  int v12; // r8d
  __int32 v13; // edi
  __m128i *v14; // rax
  int v15; // r9d
  __int64 v16; // xmm0_8
  int v17; // edx
  __m128i v18; // xmm1
  __int32 v19; // edx
  unsigned __int64 v20; // rbx
  __m128i *v21; // rax
  int v22; // ecx
  double *v23; // r14
  __int32 v24; // edx
  __int64 v25; // xmm0_8
  __int64 v26; // rbx
  __int64 v27; // r15
  double *m128i_i64; // r12
  double v29; // rcx
  double v30; // xmm0_8
  double v31; // rcx
  double v32; // [rsp+8h] [rbp-40h]

  v8 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v10 = a1 + 1;
    if ( !a3 )
    {
      v23 = (double *)a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v11 = a1[1].m128i_i32[0];
      --a3;
      v12 = a2[-1].m128i_i32[0];
      v13 = a1->m128i_i32[0];
      v14 = &a1[v8 >> 5];
      v15 = a1->m128i_i32[1];
      v16 = a1->m128i_i64[1];
      v17 = v14->m128i_i32[0];
      if ( v11 >= v14->m128i_i32[0] )
      {
        if ( v11 >= v12 )
        {
          if ( v17 >= v12 )
          {
LABEL_24:
            *a1 = _mm_loadu_si128(v14);
            v14->m128i_i32[0] = v13;
            v14->m128i_i32[1] = v15;
            v14->m128i_i64[1] = v16;
            v13 = a2[-1].m128i_i32[0];
            goto LABEL_7;
          }
LABEL_16:
          *a1 = _mm_loadu_si128(a2 - 1);
          a2[-1].m128i_i32[0] = v13;
          a2[-1].m128i_i32[1] = v15;
          a2[-1].m128i_i64[1] = v16;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v17 < v12 )
          goto LABEL_24;
        if ( v11 < v12 )
          goto LABEL_16;
      }
      v18 = _mm_loadu_si128(a1 + 1);
      a1[1].m128i_i32[0] = v13;
      a1[1].m128i_i32[1] = v15;
      *a1 = v18;
      a1[1].m128i_i64[1] = v16;
      v13 = a2[-1].m128i_i32[0];
LABEL_7:
      v19 = a1->m128i_i32[0];
      v20 = (unsigned __int64)v10;
      v21 = a2;
      while ( 1 )
      {
        v22 = *(_DWORD *)v20;
        v23 = (double *)v20;
        if ( *(_DWORD *)v20 < v19 )
          goto LABEL_13;
        --v21;
        if ( v13 > v19 )
        {
          do
            --v21;
          while ( v21->m128i_i32[0] > v19 );
        }
        if ( (unsigned __int64)v21 <= v20 )
          break;
        v24 = *(_DWORD *)(v20 + 4);
        v25 = *(_QWORD *)(v20 + 8);
        *(__m128i *)v20 = _mm_loadu_si128(v21);
        v21->m128i_i32[0] = v22;
        v21->m128i_i32[1] = v24;
        v21->m128i_i64[1] = v25;
        v13 = v21[-1].m128i_i32[0];
        v19 = a1->m128i_i32[0];
LABEL_13:
        v20 += 16LL;
      }
      std::__introsort_loop<CoinTriple<int,int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_3<int,int,double>>>(
        v20,
        (int)a2,
        a3,
        v22,
        v12,
        v15,
        a7);
      v8 = v20 - (_QWORD)a1;
      if ( (__int64)(v20 - (_QWORD)a1) <= 256 )
        return;
      a2 = (__m128i *)v20;
      if ( !a3 )
      {
LABEL_19:
        v26 = v8 >> 4;
        v27 = ((v8 >> 4) - 2) >> 1;
        m128i_i64 = (double *)a1[v27].m128i_i64;
        while ( 1 )
        {
          v29 = *m128i_i64;
          v30 = m128i_i64[1];
          m128i_i64 -= 2;
          std::__adjust_heap<CoinTriple<int,int,double> *,long,CoinTriple<int,int,double>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_3<int,int,double>>>(
            a1,
            v27,
            v26,
            *(_QWORD *)&v29,
            v30);
          if ( !v27 )
            break;
          --v27;
        }
        do
        {
          v23 -= 2;
          v31 = *v23;
          v32 = v23[1];
          *(__m128i *)v23 = _mm_loadu_si128(a1);
          std::__adjust_heap<CoinTriple<int,int,double> *,long,CoinTriple<int,int,double>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_3<int,int,double>>>(
            a1,
            0,
            ((char *)v23 - (char *)a1) >> 4,
            *(_QWORD *)&v31,
            v32);
        }
        while ( (char *)v23 - (char *)a1 > 16 );
        return;
      }
    }
  }
}

