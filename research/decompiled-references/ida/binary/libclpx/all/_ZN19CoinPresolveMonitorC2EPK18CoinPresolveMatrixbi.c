// Alternative name is '_ZN19CoinPresolveMonitorC1EPK18CoinPresolveMatrixbi'
void __fastcall CoinPresolveMonitor::CoinPresolveMonitor(
        CoinPresolveMonitor *this,
        const CoinPresolveMatrix *a2,
        char a3,
        int a4)
{
  __int64 v4; // r12
  __int64 Row; // rax
  __int64 v6; // rdx
  __int64 v7; // xmm0_8
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r13
  signed __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // r8d
  __m128i *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  int v20; // esi
  unsigned __int64 v21; // rax
  __m128i *v22; // rdi
  __m128i *v23; // r9
  __m128i *v24; // r14
  __m128i *v25; // rbp
  __m128i *v26; // r11
  __int32 v27; // r10d
  __int32 v28; // r8d
  __int64 v29; // xmm1_8
  __m128i *v30; // rax
  bool v31; // cc
  unsigned __int64 v32; // rax
  __int64 v33; // xmm0_8
  __int64 v34; // rdx
  __int32 *v35; // rax
  __int32 v36; // esi
  __m128i *v37; // rax
  __int32 v38; // edi
  __int64 v39; // xmm1_8
  __int32 v40; // eax
  __int32 v41; // r10d
  __int64 v42; // xmm1_8
  __int32 v43; // ebp
  __m128i *v44; // r14
  __m128i *v45; // rax
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __m128i *v49; // [rsp+10h] [rbp-58h]
  __m128i *v50; // [rsp+10h] [rbp-58h]
  __m128i *v51; // [rsp+18h] [rbp-50h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  __int32 v53; // [rsp+20h] [rbp-48h]
  __int32 v54; // [rsp+20h] [rbp-48h]
  __int32 v55; // [rsp+24h] [rbp-44h]
  __int64 v56; // [rsp+28h] [rbp-40h]

  v4 = a4;
  *(_BYTE *)this = a3;
  *((_DWORD *)this + 1) = a4;
  if ( a3 )
  {
    Row = CoinPresolveMonitor::extractRow(this, a4, a2);
    v34 = *((_QWORD *)a2 + 13);
    *((_QWORD *)this + 1) = Row;
    v7 = *(_QWORD *)(v34 + 8 * v4);
    v8 = *((_QWORD *)a2 + 14);
  }
  else
  {
    Row = CoinPresolveMonitor::extractCol(this, a4, a2);
    v6 = *((_QWORD *)a2 + 11);
    *((_QWORD *)this + 1) = Row;
    v7 = *(_QWORD *)(v6 + 8 * v4);
    v8 = *((_QWORD *)a2 + 12);
  }
  *((_QWORD *)this + 2) = v7;
  *((_QWORD *)this + 3) = *(_QWORD *)(v8 + 8 * v4);
  v9 = 4LL * *(int *)(Row + 48);
  if ( (unsigned __int64)(v9 >> 2) > 1 )
  {
    v10 = *(_QWORD *)(Row + 32);
    v11 = v9 >> 2;
    v12 = *(_QWORD *)(Row + 40);
    v46 = *(_QWORD *)(Row + 56);
    v13 = operator new(v11 * 16);
    v15 = (__m128i *)v13;
    v16 = v46;
    if ( v10 != v10 + v9 )
    {
      v17 = v13;
      v18 = 0;
      do
      {
        ++v18;
        if ( v17 )
        {
          v19 = *(_QWORD *)(v12 + 8 * v18 - 8);
          *(_DWORD *)v17 = *(_DWORD *)(v10 + 4 * v18 - 4);
          v20 = *(_DWORD *)(v46 + 4 * v18 - 4);
          *(_QWORD *)(v17 + 8) = v19;
          *(_DWORD *)(v17 + 4) = v20;
        }
        v17 += 16;
      }
      while ( ((unsigned __int64)(v9 - 4) >> 2) + 1 != v18 );
    }
    if ( v15 != &v15[v11] )
    {
      _BitScanReverse64(&v21, (v11 * 16) >> 4);
      std::__introsort_loop<CoinTriple<int,int,double> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_3<int,int,double>>>(
        (int)v15,
        (_DWORD)v15 + v11 * 16,
        2 * (63 - (v21 ^ 0x3F)),
        v46,
        v14,
        (_DWORD)v15 + v11 * 16,
        0);
      v22 = v15 + 1;
      v23 = &v15[v11];
      v16 = v46;
      if ( v11 <= 16 )
      {
        v40 = v15->m128i_i32[0];
        if ( &v15[v11] != v22 )
        {
          do
          {
            v43 = v22->m128i_i32[0];
            v41 = v22->m128i_i32[1];
            v44 = v22 + 1;
            v42 = v22->m128i_i64[1];
            if ( v22->m128i_i32[0] < v40 )
            {
              if ( (char *)v22 - (char *)v15 > 0 )
              {
                v52 = v22->m128i_i64[1];
                v54 = v22->m128i_i32[1];
                v50 = v23;
                v48 = v16;
                memmove(&v15[1], v15, (char *)v22 - (char *)v15);
                v41 = v54;
                v23 = v50;
                v16 = v48;
                v42 = v52;
              }
              v15->m128i_i64[1] = v42;
              v15->m128i_i32[0] = v43;
              v15->m128i_i32[1] = v41;
              v40 = v43;
            }
            else
            {
              v45 = v22 - 1;
              if ( v43 < v22[-1].m128i_i32[0] )
              {
                while ( 1 )
                {
                  v31 = v43 < v45[-1].m128i_i32[0];
                  v45[1] = _mm_loadu_si128(v45);
                  if ( !v31 )
                    break;
                  --v45;
                }
              }
              else
              {
                v45 = v22;
              }
              v45->m128i_i64[1] = v42;
              v45->m128i_i32[0] = v43;
              v45->m128i_i32[1] = v41;
              v40 = v15->m128i_i32[0];
            }
            ++v22;
          }
          while ( v23 != v44 );
        }
      }
      else
      {
        v24 = v15 + 16;
        v25 = v15 + 1;
        v26 = v15 + 16;
        do
        {
          v28 = v25->m128i_i32[0];
          v27 = v25->m128i_i32[1];
          v29 = v25->m128i_i64[1];
          if ( v25->m128i_i32[0] < v15->m128i_i32[0] )
          {
            if ( (char *)v25 - (char *)v15 > 0 )
            {
              v56 = v25->m128i_i64[1];
              v55 = v25->m128i_i32[1];
              v51 = v26;
              v53 = v25->m128i_i32[0];
              v49 = v23;
              v47 = v16;
              memmove(&v15[1], v15, (char *)v25 - (char *)v15);
              v27 = v55;
              v26 = v51;
              v28 = v53;
              v23 = v49;
              v16 = v47;
              v29 = v56;
            }
            v15->m128i_i64[1] = v29;
            v15->m128i_i32[0] = v28;
            v15->m128i_i32[1] = v27;
          }
          else
          {
            v30 = v25 - 1;
            if ( v28 < v25[-1].m128i_i32[0] )
            {
              while ( 1 )
              {
                v31 = v28 < v30[-1].m128i_i32[0];
                v30[1] = _mm_loadu_si128(v30);
                if ( !v31 )
                  break;
                --v30;
              }
            }
            else
            {
              v30 = v25;
            }
            v30->m128i_i64[1] = v29;
            v30->m128i_i32[0] = v28;
            v30->m128i_i32[1] = v27;
          }
          ++v25;
        }
        while ( v25 != v26 );
        while ( v23 != v24 )
        {
          v36 = v24->m128i_i32[0];
          v37 = v24 - 1;
          v38 = v24->m128i_i32[1];
          v39 = v24->m128i_i64[1];
          if ( v24[-1].m128i_i32[0] > v24->m128i_i32[0] )
          {
            while ( 1 )
            {
              v31 = v36 < v37[-1].m128i_i32[0];
              v37[1] = _mm_loadu_si128(v37);
              if ( !v31 )
                break;
              --v37;
            }
            v37->m128i_i64[1] = v39;
            ++v24;
            v37->m128i_i32[0] = v36;
            v37->m128i_i32[1] = v38;
          }
          else
          {
            v35 = (__int32 *)v24++;
            *((_QWORD *)v35 + 1) = v39;
            *v35 = v36;
            v35[1] = v38;
          }
        }
      }
    }
    v32 = 0;
    do
    {
      v33 = v15[v32 / 4].m128i_i64[1];
      *(_DWORD *)(v10 + v32) = v15[v32 / 4].m128i_i32[0];
      *(_DWORD *)(v16 + v32) = v15[v32 / 4].m128i_i32[1];
      *(_QWORD *)(v12 + 2 * v32) = v33;
      v32 += 4LL;
    }
    while ( v9 != v32 );
    operator delete(v15);
  }
}

