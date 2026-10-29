void __fastcall CoinSort_2<int,int,CoinFirstLess_2<int,int>>(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // r15
  __int64 v7; // rax
  _DWORD *v8; // rcx
  int v9; // r9d
  _DWORD *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // rdi
  _DWORD *v14; // r8
  _DWORD *v15; // r14
  int v16; // ecx
  char *v17; // r9
  int v18; // r10d
  char *v19; // rax
  bool v20; // cc
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _DWORD *v27; // rbp
  _DWORD *v28; // r12
  _DWORD *v29; // rdx
  _DWORD *v30; // rdx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  int v34; // esi
  _DWORD *v35; // rax
  int v36; // edi
  int v37; // eax
  int v38; // r9d
  int v39; // r15d
  _DWORD *v40; // r14
  char *v41; // rax
  __int64 i; // rax
  _DWORD *v43; // [rsp+8h] [rbp-50h]
  _DWORD *v44; // [rsp+8h] [rbp-50h]
  int v45; // [rsp+18h] [rbp-40h]
  int v46; // [rsp+18h] [rbp-40h]
  int v47; // [rsp+1Ch] [rbp-3Ch]

  v3 = (__int64)(a2 - a1) >> 2;
  if ( v3 > 1 )
  {
    v4 = 8 * v3;
    v7 = operator new(8 * v3);
    v10 = (_DWORD *)v7;
    if ( a1 != a2 )
    {
      v8 = (_DWORD *)v7;
      v11 = 0;
      do
      {
        ++v11;
        if ( v8 )
        {
          *v8 = *(_DWORD *)(a1 + 4 * v11 - 4);
          v8[1] = *(_DWORD *)(a3 + 4 * v11 - 4);
        }
        v8 += 2;
      }
      while ( v11 != ((a2 - (a1 + 4)) >> 2) + 1 );
    }
    if ( &v10[(unsigned __int64)v4 / 4] != v10 )
    {
      _BitScanReverse64(&v12, v4 >> 3);
      std::__introsort_loop<CoinPair<int,int> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<int,int>>>(
        (int)v10,
        (_DWORD)v10 + v4,
        2 * (63 - (v12 ^ 0x3F)),
        (int)v8,
        (_DWORD)v10 + v4,
        v9,
        0);
      v13 = (char *)(v10 + 2);
      v14 = &v10[(unsigned __int64)v4 / 4];
      if ( (v4 - 128 < 0) ^ __OFADD__(-128, v4) | (v4 == 128) )
      {
        v37 = *v10;
        if ( &v10[(unsigned __int64)v4 / 4] != (_DWORD *)v13 )
        {
          do
          {
            v39 = *(_DWORD *)v13;
            v38 = *((_DWORD *)v13 + 1);
            v40 = v13 + 8;
            if ( v37 > *(_DWORD *)v13 )
            {
              if ( v13 - (char *)v10 > 0 )
              {
                v46 = *((_DWORD *)v13 + 1);
                v44 = v14;
                memmove(v10 + 2, v10, v13 - (char *)v10);
                v38 = v46;
                v14 = v44;
              }
              *v10 = v39;
              v10[1] = v38;
              v37 = v39;
            }
            else
            {
              v41 = v13 - 8;
              if ( v39 < *((_DWORD *)v13 - 2) )
              {
                while ( 1 )
                {
                  v20 = v39 < *((_DWORD *)v41 - 2);
                  *((_QWORD *)v41 + 1) = *(_QWORD *)v41;
                  if ( !v20 )
                    break;
                  v41 -= 8;
                }
              }
              else
              {
                v41 = v13;
              }
              *(_DWORD *)v41 = v39;
              *((_DWORD *)v41 + 1) = v38;
              v37 = *v10;
            }
            v13 += 8;
          }
          while ( v14 != v40 );
        }
      }
      else
      {
        v15 = v10 + 32;
        do
        {
          v16 = *(_DWORD *)v13;
          v17 = v13 + 8;
          v18 = *((_DWORD *)v13 + 1);
          if ( *(_DWORD *)v13 < *v10 )
          {
            if ( v13 - (char *)v10 > 0 )
            {
              v47 = *(_DWORD *)v13;
              v45 = *((_DWORD *)v13 + 1);
              v43 = v14;
              memmove(v10 + 2, v10, v13 - (char *)v10);
              v16 = v47;
              v17 = v13 + 8;
              v18 = v45;
              v14 = v43;
            }
            *v10 = v16;
            v10[1] = v18;
          }
          else
          {
            v19 = v13 - 8;
            if ( v16 < *((_DWORD *)v13 - 2) )
            {
              while ( 1 )
              {
                v20 = v16 < *((_DWORD *)v19 - 2);
                *((_QWORD *)v19 + 1) = *(_QWORD *)v19;
                if ( !v20 )
                  break;
                v19 -= 8;
              }
            }
            else
            {
              v19 = v13;
            }
            *(_DWORD *)v19 = v16;
            *((_DWORD *)v19 + 1) = v18;
          }
          v13 = v17;
        }
        while ( v17 != (char *)(v10 + 32) );
        while ( v14 != v15 )
        {
          v34 = *v15;
          v35 = v15 - 2;
          v36 = v15[1];
          if ( *v15 < *(v15 - 2) )
          {
            while ( 1 )
            {
              v20 = v34 < *(v35 - 2);
              *((_QWORD *)v35 + 1) = *(_QWORD *)v35;
              if ( !v20 )
                break;
              v35 -= 2;
            }
            *v35 = v34;
            v35[1] = v36;
            v15 += 2;
          }
          else
          {
            v33 = v15;
            v15 += 2;
            *v33 = v34;
            v33[1] = v36;
          }
        }
      }
    }
    if ( (a1 >= a3 + 16 || a3 >= a1 + 16) && v3 > 8 )
    {
      v21 = 0;
      v22 = 0;
      do
      {
        ++v22;
        v23 = (__m128)_mm_loadu_si128((const __m128i *)&v10[v21 + 4]);
        v24 = (__m128)_mm_loadu_si128((const __m128i *)&v10[v21]);
        *(__m128 *)(a1 + v21 * 2) = _mm_shuffle_ps(v24, v23, 136);
        *(__m128 *)(a3 + v21 * 2) = _mm_shuffle_ps(v24, v23, 221);
        v21 += 8;
      }
      while ( v3 >> 2 > v22 );
      v25 = v3 & 0xFFFFFFFFFFFFFFFCLL;
      v26 = 4 * (v3 & 0xFFFFFFFFFFFFFFFCLL);
      v27 = (_DWORD *)(v26 + a1);
      v28 = (_DWORD *)(v26 + a3);
      if ( v3 != (v3 & 0xFFFFFFFFFFFFFFFCLL) )
      {
        v29 = &v10[2 * v25];
        *v27 = *v29;
        *v28 = v29[1];
        if ( v25 + 1 < v3 )
        {
          v30 = &v10[2 * v25 + 2];
          v31 = v25 + 2;
          v27[1] = *v30;
          v28[1] = v30[1];
          if ( v3 > v31 )
          {
            v32 = &v10[2 * v31];
            v27[2] = *v32;
            v28[2] = v32[1];
          }
        }
      }
    }
    else
    {
      for ( i = 0; i != v3; ++i )
      {
        *(_DWORD *)(a1 + 4 * i) = v10[2 * i];
        *(_DWORD *)(a3 + 4 * i) = v10[2 * i + 1];
      }
    }
    operator delete(v10);
  }
}

