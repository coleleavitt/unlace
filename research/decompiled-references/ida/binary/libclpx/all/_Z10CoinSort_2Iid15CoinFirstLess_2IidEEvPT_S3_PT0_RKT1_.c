void __fastcall CoinSort_2<int,double,CoinFirstLess_2<int,double>>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r15
  signed __int64 v5; // r15
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  __m128i *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // esi
  unsigned __int64 v15; // rax
  __m128i *v16; // r12
  __m128i *v17; // rcx
  __m128i *v18; // r15
  __m128i *v19; // r10
  __int32 v20; // r9d
  __int64 v21; // xmm1_8
  __m128i *v22; // rax
  bool v23; // cc
  unsigned __int64 v24; // rax
  __int64 v25; // xmm0_8
  __int64 *v26; // rax
  __int32 v27; // esi
  __m128i *v28; // rax
  __int64 v29; // xmm1_8
  __int32 v30; // eax
  __int32 v31; // r8d
  __int64 v32; // xmm1_8
  __m128i *v33; // r15
  __m128i *v34; // rax
  __m128i *v35; // [rsp+0h] [rbp-58h]
  __m128i *v36; // [rsp+0h] [rbp-58h]
  __int32 v37; // [rsp+8h] [rbp-50h]
  __int32 v38; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+10h] [rbp-48h]
  __m128i *v40; // [rsp+18h] [rbp-40h]

  v3 = a2 - a1;
  v4 = (a2 - a1) >> 2;
  if ( v4 > 1 )
  {
    v5 = v4;
    v7 = operator new(v5 * 16);
    v10 = (__m128i *)v7;
    if ( a1 != a2 )
    {
      v11 = v7;
      v12 = 0;
      v13 = ((unsigned __int64)(a2 - (a1 + 4)) >> 2) + 1;
      do
      {
        ++v12;
        if ( v11 )
        {
          v14 = *(_DWORD *)(a1 + 4 * v12 - 4);
          *(_QWORD *)(v11 + 8) = *(_QWORD *)(a3 + 8 * v12 - 8);
          *(_DWORD *)v11 = v14;
        }
        v11 += 16;
      }
      while ( v13 != v12 );
    }
    if ( &v10[v5] != v10 )
    {
      _BitScanReverse64(&v15, (v5 * 16) >> 4);
      v16 = v10 + 1;
      std::__introsort_loop<CoinPair<int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,double>>>(
        (int)v10,
        (_DWORD)v10 + v5 * 16,
        2 * (63 - (v15 ^ 0x3F)),
        (_DWORD)v10 + v5 * 16,
        v8,
        v9,
        0);
      v17 = &v10[v5];
      if ( v5 <= 16 )
      {
        v30 = v10->m128i_i32[0];
        if ( &v10[v5] != v16 )
        {
          do
          {
            v31 = v16->m128i_i32[0];
            v32 = v16->m128i_i64[1];
            v33 = v16 + 1;
            if ( v30 > v16->m128i_i32[0] )
            {
              if ( (char *)v16 - (char *)v10 > 0 )
              {
                v39 = v16->m128i_i64[1];
                v37 = v16->m128i_i32[0];
                v36 = v17;
                memmove(&v10[1], v10, (char *)v16 - (char *)v10);
                v31 = v37;
                v17 = v36;
                v32 = v39;
              }
              v10->m128i_i64[1] = v32;
              v10->m128i_i32[0] = v31;
              v30 = v31;
            }
            else
            {
              v34 = v16 - 1;
              if ( v31 < v16[-1].m128i_i32[0] )
              {
                while ( 1 )
                {
                  v23 = v31 < v34[-1].m128i_i32[0];
                  v34[1] = _mm_loadu_si128(v34);
                  if ( !v23 )
                    break;
                  --v34;
                }
              }
              else
              {
                v34 = v16;
              }
              v34->m128i_i64[1] = v32;
              v34->m128i_i32[0] = v31;
              v30 = v10->m128i_i32[0];
            }
            ++v16;
          }
          while ( v17 != v33 );
        }
      }
      else
      {
        v18 = v10 + 16;
        v19 = v10 + 16;
        do
        {
          v20 = v16->m128i_i32[0];
          v21 = v16->m128i_i64[1];
          if ( v16->m128i_i32[0] < v10->m128i_i32[0] )
          {
            if ( (char *)v16 - (char *)v10 > 0 )
            {
              v40 = v19;
              v38 = v16->m128i_i32[0];
              v35 = v17;
              memmove(&v10[1], v10, (char *)v16 - (char *)v10);
              v19 = v40;
              v20 = v38;
              v17 = v35;
            }
            v10->m128i_i64[1] = v21;
            v10->m128i_i32[0] = v20;
          }
          else
          {
            v22 = v16 - 1;
            if ( v20 < v16[-1].m128i_i32[0] )
            {
              while ( 1 )
              {
                v23 = v20 < v22[-1].m128i_i32[0];
                v22[1] = _mm_loadu_si128(v22);
                if ( !v23 )
                  break;
                --v22;
              }
            }
            else
            {
              v22 = v16;
            }
            v22->m128i_i64[1] = v21;
            v22->m128i_i32[0] = v20;
          }
          ++v16;
        }
        while ( v19 != v16 );
        while ( v17 != v18 )
        {
          v27 = v18->m128i_i32[0];
          v28 = v18 - 1;
          v29 = v18->m128i_i64[1];
          if ( v18->m128i_i32[0] < v18[-1].m128i_i32[0] )
          {
            while ( 1 )
            {
              v23 = v27 < v28[-1].m128i_i32[0];
              v28[1] = _mm_loadu_si128(v28);
              if ( !v23 )
                break;
              --v28;
            }
            v28->m128i_i64[1] = v29;
            ++v18;
            v28->m128i_i32[0] = v27;
          }
          else
          {
            v26 = (__int64 *)v18++;
            v26[1] = v29;
            *(_DWORD *)v26 = v27;
          }
        }
      }
    }
    v24 = 0;
    do
    {
      v25 = v10[v24 / 4].m128i_i64[1];
      *(_DWORD *)(a1 + v24) = v10[v24 / 4].m128i_i32[0];
      *(_QWORD *)(a3 + 2 * v24) = v25;
      v24 += 4LL;
    }
    while ( v24 != v3 );
    operator delete(v10);
  }
}

