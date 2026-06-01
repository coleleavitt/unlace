void __fastcall CoinIndexedVector::sortDecrIndex(CoinIndexedVector *this)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbp
  signed __int64 v9; // r15
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __m128i *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rax
  __m128i *v18; // rbp
  __m128i *v19; // rcx
  __m128i *v20; // r15
  __m128i *v21; // r10
  __int32 v22; // r9d
  __int64 v23; // xmm1_8
  __m128i *v24; // rax
  bool v25; // cc
  unsigned __int64 v26; // rax
  __int64 v27; // xmm0_8
  __int64 *v28; // rax
  __int32 v29; // esi
  __m128i *v30; // rax
  __int64 v31; // xmm1_8
  __int32 v32; // eax
  __int32 v33; // r8d
  __int64 v34; // xmm1_8
  __m128i *v35; // r15
  __m128i *v36; // rax
  __m128i *v37; // [rsp+0h] [rbp-58h]
  __m128i *v38; // [rsp+0h] [rbp-58h]
  __int32 v39; // [rsp+8h] [rbp-50h]
  __m128i *v40; // [rsp+10h] [rbp-48h]
  __int64 v41; // [rsp+10h] [rbp-48h]
  __int32 v42; // [rsp+1Ch] [rbp-3Ch]

  v2 = *((int *)this + 4);
  if ( v2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v3 = (_QWORD *)operator new[](8 * v2);
  v4 = *((int *)this + 4);
  v5 = v3;
  if ( (_DWORD)v4 )
  {
    if ( (int)v4 / 8 > 0 )
    {
      do
      {
        *v3 = 0;
        v3[1] = 0;
        v3 += 8;
        *(v3 - 6) = 0;
        *(v3 - 5) = 0;
        *(v3 - 4) = 0;
        *(v3 - 3) = 0;
        *(v3 - 2) = 0;
        *(v3 - 1) = 0;
      }
      while ( v3 != &v5[8 * (unsigned int)((int)v4 / 8 - 1) + 8] );
      v3 = &v5[8 * ((int)v4 / 8 - 1) + 8];
    }
    switch ( (int)v4 % 8 )
    {
      case 1:
        goto LABEL_14;
      case 2:
        goto LABEL_13;
      case 3:
        goto LABEL_12;
      case 4:
        goto LABEL_11;
      case 5:
        goto LABEL_10;
      case 6:
        goto LABEL_9;
      case 7:
        v3[6] = 0;
LABEL_9:
        v3[5] = 0;
LABEL_10:
        v3[4] = 0;
LABEL_11:
        v3[3] = 0;
LABEL_12:
        v3[2] = 0;
LABEL_13:
        v3[1] = 0;
LABEL_14:
        *v3 = 0;
        break;
      default:
        break;
    }
    v6 = 4 * v4;
    v7 = *(_QWORD *)this;
    v8 = *(_QWORD *)this + v6;
    if ( (unsigned __int64)(v6 >> 2) > 1 )
    {
      v9 = v6 >> 2;
      v10 = operator new(v9 * 16);
      v13 = (__m128i *)v10;
      if ( v7 != v8 )
      {
        v14 = v10;
        v15 = 0;
        do
        {
          ++v15;
          if ( v14 )
          {
            v16 = *(_DWORD *)(v7 + 4 * v15 - 4);
            *(_QWORD *)(v14 + 8) = v5[v15 - 1];
            *(_DWORD *)v14 = v16;
          }
          v14 += 16;
        }
        while ( ((unsigned __int64)(v6 - 4) >> 2) + 1 != v15 );
      }
      if ( v13 != &v13[v9] )
      {
        _BitScanReverse64(&v17, (v9 * 16) >> 4);
        v18 = v13 + 1;
        std::__introsort_loop<CoinPair<int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstGreater_2<int,double>>>(
          (int)v13,
          (_DWORD)v13 + v9 * 16,
          2 * (63 - (v17 ^ 0x3F)),
          (_DWORD)v13 + v9 * 16,
          v11,
          v12,
          0);
        v19 = &v13[v9];
        if ( v9 <= 16 )
        {
          v32 = v13->m128i_i32[0];
          if ( &v13[v9] != v18 )
          {
            do
            {
              v33 = v18->m128i_i32[0];
              v34 = v18->m128i_i64[1];
              v35 = v18 + 1;
              if ( v18->m128i_i32[0] > v32 )
              {
                if ( (char *)v18 - (char *)v13 > 0 )
                {
                  v41 = v18->m128i_i64[1];
                  v39 = v18->m128i_i32[0];
                  v38 = v19;
                  memmove(&v13[1], v13, (char *)v18 - (char *)v13);
                  v33 = v39;
                  v19 = v38;
                  v34 = v41;
                }
                v13->m128i_i64[1] = v34;
                v13->m128i_i32[0] = v33;
                v32 = v33;
              }
              else
              {
                v36 = v18 - 1;
                if ( v33 > v18[-1].m128i_i32[0] )
                {
                  while ( 1 )
                  {
                    v25 = v33 <= v36[-1].m128i_i32[0];
                    v36[1] = _mm_loadu_si128(v36);
                    if ( v25 )
                      break;
                    --v36;
                  }
                }
                else
                {
                  v36 = v18;
                }
                v36->m128i_i64[1] = v34;
                v36->m128i_i32[0] = v33;
                v32 = v13->m128i_i32[0];
              }
              ++v18;
            }
            while ( v19 != v35 );
          }
        }
        else
        {
          v20 = v13 + 16;
          v21 = v13 + 16;
          do
          {
            v22 = v18->m128i_i32[0];
            v23 = v18->m128i_i64[1];
            if ( v18->m128i_i32[0] > v13->m128i_i32[0] )
            {
              if ( (char *)v18 - (char *)v13 > 0 )
              {
                v42 = v18->m128i_i32[0];
                v40 = v21;
                v37 = v19;
                memmove(&v13[1], v13, (char *)v18 - (char *)v13);
                v22 = v42;
                v21 = v40;
                v19 = v37;
              }
              v13->m128i_i64[1] = v23;
              v13->m128i_i32[0] = v22;
            }
            else
            {
              v24 = v18 - 1;
              if ( v22 > v18[-1].m128i_i32[0] )
              {
                while ( 1 )
                {
                  v25 = v22 <= v24[-1].m128i_i32[0];
                  v24[1] = _mm_loadu_si128(v24);
                  if ( v25 )
                    break;
                  --v24;
                }
              }
              else
              {
                v24 = v18;
              }
              v24->m128i_i64[1] = v23;
              v24->m128i_i32[0] = v22;
            }
            ++v18;
          }
          while ( v18 != v21 );
          while ( v19 != v20 )
          {
            v29 = v20->m128i_i32[0];
            v30 = v20 - 1;
            v31 = v20->m128i_i64[1];
            if ( v20[-1].m128i_i32[0] < v20->m128i_i32[0] )
            {
              while ( 1 )
              {
                v25 = v29 <= v30[-1].m128i_i32[0];
                v30[1] = _mm_loadu_si128(v30);
                if ( v25 )
                  break;
                --v30;
              }
              v30->m128i_i64[1] = v31;
              ++v20;
              v30->m128i_i32[0] = v29;
            }
            else
            {
              v28 = (__int64 *)v20++;
              v28[1] = v31;
              *(_DWORD *)v28 = v29;
            }
          }
        }
      }
      v26 = 0;
      do
      {
        v27 = v13[v26 / 4].m128i_i64[1];
        *(_DWORD *)(v7 + v26) = v13[v26 / 4].m128i_i32[0];
        v5[v26 / 4] = v27;
        v26 += 4LL;
      }
      while ( v6 != v26 );
      operator delete(v13);
    }
  }
  operator delete[](v5);
}

