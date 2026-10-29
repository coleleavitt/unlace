void __fastcall CoinSort_2<double,int,CoinFirstLess_2<double,int>>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r9d
  double *v11; // rbx
  int v12; // edx
  __int64 v13; // r14
  unsigned __int64 v14; // rax
  double *v15; // rax
  double v16; // xmm1_8
  __int64 v17; // r8
  double v18; // xmm0_8
  int v19; // edi
  char *v20; // rsi
  __int64 v21; // rdx
  char *v22; // rax
  __int64 v23; // r13
  unsigned __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  double v27; // xmm0_8
  int v28; // esi
  double *v29; // rdx
  __int64 v30; // rcx
  char *v31; // rax
  double v32; // xmm1_8
  int v33; // esi
  double *v34; // rcx
  double v35; // xmm0_8
  char *v36; // rcx
  double v37; // xmm1_8
  char *v38; // rcx
  double v39; // xmm1_8
  double *v40; // rcx

  v3 = (a2 - a1) >> 3;
  if ( v3 > 1 )
  {
    v5 = 16 * v3;
    v7 = operator new(16 * v3);
    v11 = (double *)v7;
    if ( a1 != a2 )
    {
      v9 = v7;
      v8 = 0;
      do
      {
        ++v8;
        if ( v9 )
        {
          v12 = *(_DWORD *)(a3 + 4 * v8 - 4);
          *(_QWORD *)v9 = *(_QWORD *)(a1 + 8 * v8 - 8);
          *(_DWORD *)(v9 + 8) = v12;
        }
        v9 += 16;
      }
      while ( v8 != ((unsigned __int64)(a2 - (a1 + 8)) >> 3) + 1 );
    }
    v13 = v7 + v5;
    if ( v7 + v5 != v7 )
    {
      _BitScanReverse64(&v14, v5 >> 4);
      std::__introsort_loop<CoinPair<double,int> *,long,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstLess_2<double,int>>>(
        (int)v11,
        (_DWORD)v11 + v5,
        2 * (63 - (v14 ^ 0x3F)),
        v8,
        v9,
        v10,
        0);
      v15 = v11 + 2;
      if ( v5 > 256 )
      {
        v26 = -16LL - (_QWORD)v11;
        do
        {
          v27 = *v15;
          v28 = *((_DWORD *)v15 + 2);
          v29 = v15 + 2;
          if ( *v11 <= *v15 )
          {
            v38 = (char *)(v15 - 2);
            if ( *(v15 - 2) > v27 )
            {
              while ( 1 )
              {
                v39 = *((double *)v38 - 2);
                *((_QWORD *)v38 + 2) = *(_QWORD *)v38;
                *((_DWORD *)v38 + 6) = *((_DWORD *)v38 + 2);
                if ( v39 <= v27 )
                  break;
                v38 -= 16;
              }
            }
            else
            {
              v38 = (char *)v15;
            }
            *(double *)v38 = v27;
            *((_DWORD *)v38 + 2) = v28;
          }
          else
          {
            v30 = ((__int64)v29 + v26) >> 4;
            if ( (__int64)v29 + v26 > 0 )
            {
              v31 = (char *)(v15 + 2);
              do
              {
                v31 -= 16;
                --v30;
                *(_QWORD *)v31 = *((_QWORD *)v31 - 2);
                *((_DWORD *)v31 + 2) = *((_DWORD *)v31 - 2);
              }
              while ( v30 );
            }
            *v11 = v27;
            *((_DWORD *)v11 + 2) = v28;
          }
          v15 = v29;
        }
        while ( v11 + 32 != v29 );
        while ( (double *)v13 != v29 )
        {
          v32 = *v29;
          v33 = *((_DWORD *)v29 + 2);
          v34 = v29 - 2;
          if ( *(v29 - 2) > *v29 )
          {
            while ( 1 )
            {
              v35 = *(v34 - 2);
              v34[2] = *v34;
              *((_DWORD *)v34 + 6) = *((_DWORD *)v34 + 2);
              if ( v35 <= v32 )
                break;
              v34 -= 2;
            }
            *v34 = v32;
            *((_DWORD *)v34 + 2) = v33;
            v29 += 2;
          }
          else
          {
            v40 = v29;
            v29 += 2;
            *v40 = v32;
            *((_DWORD *)v40 + 2) = v33;
          }
        }
      }
      else
      {
        v16 = *v11;
        if ( (double *)v13 != v15 )
        {
          v17 = -16LL - (_QWORD)v11;
          do
          {
            v18 = *v15;
            v19 = *((_DWORD *)v15 + 2);
            v20 = (char *)(v15 + 2);
            if ( v16 <= *v15 )
            {
              v36 = (char *)(v15 - 2);
              if ( *(v15 - 2) > v18 )
              {
                while ( 1 )
                {
                  v37 = *((double *)v36 - 2);
                  *((_QWORD *)v36 + 2) = *(_QWORD *)v36;
                  *((_DWORD *)v36 + 6) = *((_DWORD *)v36 + 2);
                  if ( v37 <= v18 )
                    break;
                  v36 -= 16;
                }
              }
              else
              {
                v36 = (char *)v15;
              }
              *(double *)v36 = v18;
              *((_DWORD *)v36 + 2) = v19;
              v16 = *v11;
            }
            else
            {
              v21 = (__int64)&v20[v17] >> 4;
              if ( (__int64)&v20[v17] > 0 )
              {
                v22 = (char *)(v15 + 2);
                do
                {
                  v22 -= 16;
                  --v21;
                  *(_QWORD *)v22 = *((_QWORD *)v22 - 2);
                  *((_DWORD *)v22 + 2) = *((_DWORD *)v22 - 2);
                }
                while ( v21 );
              }
              *v11 = v18;
              v16 = v18;
              *((_DWORD *)v11 + 2) = v19;
            }
            v15 = (double *)v20;
          }
          while ( (char *)v13 != v20 );
        }
      }
    }
    v23 = 4 * v3;
    v24 = 0;
    do
    {
      v25 = LODWORD(v11[v24 / 2 + 1]);
      *(double *)(a1 + 2 * v24) = v11[v24 / 2];
      *(_DWORD *)(a3 + v24) = v25;
      v24 += 4LL;
    }
    while ( v24 != v23 );
    operator delete(v11);
  }
}

