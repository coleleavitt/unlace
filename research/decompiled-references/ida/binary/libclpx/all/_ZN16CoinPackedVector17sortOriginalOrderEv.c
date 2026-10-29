void __fastcall CoinPackedVector::sortOriginalOrder(CoinPackedVector *this)
{
  __int64 v1; // r12
  __int64 v2; // r13
  signed __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  int v6; // r8d
  __m128i *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  int v12; // esi
  unsigned __int64 v13; // rax
  __m128i *v14; // rdi
  __m128i *v15; // r9
  __m128i *v16; // r14
  __m128i *v17; // rbp
  __m128i *v18; // r11
  __int32 v19; // r8d
  __int32 v20; // r10d
  __int64 v21; // xmm1_8
  __m128i *v22; // rax
  bool v23; // cc
  unsigned __int64 v24; // rax
  __int64 v25; // xmm0_8
  __int32 *v26; // rax
  __int32 v27; // esi
  __m128i *v28; // rax
  __int32 v29; // edi
  __int64 v30; // xmm1_8
  __int32 v31; // eax
  __int32 v32; // r10d
  __int64 v33; // xmm1_8
  __int32 v34; // ebp
  __m128i *v35; // r14
  __m128i *v36; // rax
  __int64 v37; // [rsp+0h] [rbp-68h]
  __int64 v38; // [rsp+0h] [rbp-68h]
  __int64 v39; // [rsp+0h] [rbp-68h]
  __m128i *v40; // [rsp+8h] [rbp-60h]
  __m128i *v41; // [rsp+8h] [rbp-60h]
  __int32 v42; // [rsp+10h] [rbp-58h]
  __int32 v43; // [rsp+18h] [rbp-50h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  __int32 v45; // [rsp+24h] [rbp-44h]
  __m128i *v46; // [rsp+28h] [rbp-40h]

  v1 = 4LL * *((int *)this + 12);
  if ( (unsigned __int64)(v1 >> 2) > 1 )
  {
    v2 = *((_QWORD *)this + 7);
    v3 = v1 >> 2;
    v4 = *((_QWORD *)this + 5);
    v37 = *((_QWORD *)this + 4);
    v5 = operator new(v3 * 16);
    v7 = (__m128i *)v5;
    v8 = v37;
    if ( v2 != v2 + v1 )
    {
      v9 = v5;
      v10 = 0;
      do
      {
        ++v10;
        if ( v9 )
        {
          v11 = *(_QWORD *)(v4 + 8 * v10 - 8);
          *(_DWORD *)v9 = *(_DWORD *)(v2 + 4 * v10 - 4);
          v12 = *(_DWORD *)(v37 + 4 * v10 - 4);
          *(_QWORD *)(v9 + 8) = v11;
          *(_DWORD *)(v9 + 4) = v12;
        }
        v9 += 16;
      }
      while ( v10 != ((unsigned __int64)(v1 - 4) >> 2) + 1 );
    }
    if ( v7 != &v7[v3] )
    {
      _BitScanReverse64(&v13, (v3 * 16) >> 4);
      std::__introsort_loop<CoinTriple<int,int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_3<int,int,double>>>(
        (int)v7,
        (_DWORD)v7 + v3 * 16,
        2 * (63 - (v13 ^ 0x3F)),
        v37,
        v6,
        (_DWORD)v7 + v3 * 16,
        0);
      v14 = v7 + 1;
      v15 = &v7[v3];
      v8 = v37;
      if ( v3 <= 16 )
      {
        v31 = v7->m128i_i32[0];
        if ( &v7[v3] != v14 )
        {
          do
          {
            v34 = v14->m128i_i32[0];
            v32 = v14->m128i_i32[1];
            v35 = v14 + 1;
            v33 = v14->m128i_i64[1];
            if ( v14->m128i_i32[0] < v31 )
            {
              if ( (char *)v14 - (char *)v7 > 0 )
              {
                v44 = v14->m128i_i64[1];
                v42 = v14->m128i_i32[1];
                v41 = v15;
                v39 = v8;
                memmove(&v7[1], v7, (char *)v14 - (char *)v7);
                v32 = v42;
                v15 = v41;
                v8 = v39;
                v33 = v44;
              }
              v7->m128i_i64[1] = v33;
              v7->m128i_i32[0] = v34;
              v7->m128i_i32[1] = v32;
              v31 = v34;
            }
            else
            {
              v36 = v14 - 1;
              if ( v34 < v14[-1].m128i_i32[0] )
              {
                while ( 1 )
                {
                  v23 = v34 < v36[-1].m128i_i32[0];
                  v36[1] = _mm_loadu_si128(v36);
                  if ( !v23 )
                    break;
                  --v36;
                }
              }
              else
              {
                v36 = v14;
              }
              v36->m128i_i64[1] = v33;
              v36->m128i_i32[0] = v34;
              v36->m128i_i32[1] = v32;
              v31 = v7->m128i_i32[0];
            }
            ++v14;
          }
          while ( v15 != v35 );
        }
      }
      else
      {
        v16 = v7 + 16;
        v17 = v7 + 1;
        v18 = v7 + 16;
        do
        {
          v19 = v17->m128i_i32[0];
          v20 = v17->m128i_i32[1];
          v21 = v17->m128i_i64[1];
          if ( v17->m128i_i32[0] < v7->m128i_i32[0] )
          {
            if ( (char *)v17 - (char *)v7 > 0 )
            {
              v46 = v18;
              v45 = v17->m128i_i32[0];
              v43 = v17->m128i_i32[1];
              v40 = v15;
              v38 = v8;
              memmove(&v7[1], v7, (char *)v17 - (char *)v7);
              v18 = v46;
              v19 = v45;
              v20 = v43;
              v15 = v40;
              v8 = v38;
            }
            v7->m128i_i64[1] = v21;
            v7->m128i_i32[0] = v19;
            v7->m128i_i32[1] = v20;
          }
          else
          {
            v22 = v17 - 1;
            if ( v19 < v17[-1].m128i_i32[0] )
            {
              while ( 1 )
              {
                v23 = v19 < v22[-1].m128i_i32[0];
                v22[1] = _mm_loadu_si128(v22);
                if ( !v23 )
                  break;
                --v22;
              }
            }
            else
            {
              v22 = v17;
            }
            v22->m128i_i64[1] = v21;
            v22->m128i_i32[0] = v19;
            v22->m128i_i32[1] = v20;
          }
          ++v17;
        }
        while ( v18 != v17 );
        while ( v15 != v16 )
        {
          v27 = v16->m128i_i32[0];
          v28 = v16 - 1;
          v29 = v16->m128i_i32[1];
          v30 = v16->m128i_i64[1];
          if ( v16[-1].m128i_i32[0] > v16->m128i_i32[0] )
          {
            while ( 1 )
            {
              v23 = v27 < v28[-1].m128i_i32[0];
              v28[1] = _mm_loadu_si128(v28);
              if ( !v23 )
                break;
              --v28;
            }
            v28->m128i_i64[1] = v30;
            ++v16;
            v28->m128i_i32[0] = v27;
            v28->m128i_i32[1] = v29;
          }
          else
          {
            v26 = (__int32 *)v16++;
            *((_QWORD *)v26 + 1) = v30;
            *v26 = v27;
            v26[1] = v29;
          }
        }
      }
    }
    v24 = 0;
    do
    {
      v25 = v7[v24 / 4].m128i_i64[1];
      *(_DWORD *)(v2 + v24) = v7[v24 / 4].m128i_i32[0];
      *(_DWORD *)(v8 + v24) = v7[v24 / 4].m128i_i32[1];
      *(_QWORD *)(v4 + 2 * v24) = v25;
      v24 += 4LL;
    }
    while ( v1 != v24 );
    operator delete(v7);
  }
}

