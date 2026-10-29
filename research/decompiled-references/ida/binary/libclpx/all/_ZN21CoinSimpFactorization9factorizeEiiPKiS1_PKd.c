__int64 __fastcall CoinSimpFactorization::factorize(
        CoinSimpFactorization *this,
        __int64 a2,
        __int64 a3,
        const int *a4,
        unsigned __int64 a5,
        double *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  double *v12; // rsi
  unsigned __int64 v13; // r9
  char *v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r10d
  double *v18; // r11
  int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // xmm0_8
  __int64 v22; // xmm0_8
  __int64 v23; // xmm0_8
  __int64 v24; // rcx
  unsigned int v25; // r15d
  __int64 v26; // rax
  const int *v27; // r13
  char *v28; // rdi
  unsigned __int64 v29; // rax
  __int128 v30; // xmm0
  double v31; // xmm0_8
  int v32; // eax
  double v33; // xmm0_8
  int v34; // eax
  double v35; // xmm0_8
  int v36; // eax
  double v37; // xmm0_8
  int v38; // eax
  double v39; // xmm0_8
  double v40; // xmm0_8
  unsigned __int64 v42; // rax
  double v43; // xmm0_8

  (*(void (__fastcall **)(CoinSimpFactorization *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)this + 144LL))(
    this,
    a2,
    a3,
    0,
    0);
  v11 = *((int *)this + 10);
  v12 = *((double **)this + 10);
  v13 = *((_QWORD *)this + 9);
  v14 = (char *)(*((_DWORD *)this + 9) * *((_DWORD *)this + 9));
  v15 = (__int64)v14;
  if ( (int)v11 >= 0 )
  {
    v16 = 1;
    do
    {
      v10 = (unsigned int)v16;
      *(_DWORD *)(v13 + 4 * v16 - 4) = a4[v16 - 1];
      v11 = *((int *)this + 10);
      ++v16;
    }
    while ( (int)v11 >= (int)v10 );
  }
  v17 = a4[v11];
  if ( v17 > 0 )
  {
    v18 = &v12[v15];
    v13 = (unsigned __int64)(a6 + 4);
    LOBYTE(v13) = v12 >= a6 + 4;
    if ( (((unsigned int)v17 > 0xE)
        & (unsigned __int8)(v13 | (a6 >= v12 + 4))
        & ((unsigned __int64)&v12[v15] >= a5 + 16 || a5 >= (unsigned __int64)&v12[v15 + 2])) != 0
      && (v15 >= v17 || 4 * (v17 + 2 * (__int64)v14) <= 0) )
    {
      v19 = 0;
      v20 = -(int)(a5 >> 2) & 3;
      if ( v20 )
      {
        v21 = *(_QWORD *)a6;
        v19 = 1;
        LODWORD(v12[(_QWORD)v14]) = *(_DWORD *)a5;
        *(_QWORD *)v12 = v21;
        if ( v20 != 1 )
        {
          v22 = *((_QWORD *)a6 + 1);
          v19 = 2;
          HIDWORD(v12[v15]) = *(_DWORD *)(a5 + 4);
          *((_QWORD *)v12 + 1) = v22;
          if ( v20 != 2 )
          {
            v23 = *((_QWORD *)a6 + 2);
            v19 = 3;
            LODWORD(v12[v15 + 1]) = *(_DWORD *)(a5 + 8);
            *((_QWORD *)v12 + 2) = v23;
          }
        }
      }
      v24 = v20;
      LODWORD(v11) = 0;
      v25 = v17 - v20;
      v26 = 4LL * v20;
      v24 *= 8;
      v14 = (char *)a6 + v24;
      v10 = (__int64)v12 + v24;
      v27 = (const int *)(a5 + v26);
      v28 = (char *)v12 + v26 + v15 * 8;
      v29 = 0;
      do
      {
        v11 = (unsigned int)(v11 + 1);
        *(__m128i *)&v28[v29] = _mm_load_si128((const __m128i *)&v27[v29 / 4]);
        v30 = *(_OWORD *)&v14[2 * v29 + 16];
        *(_OWORD *)(v10 + 2 * v29) = *(_OWORD *)&v14[2 * v29];
        *(_OWORD *)(v10 + 2 * v29 + 16) = v30;
        v29 += 16LL;
      }
      while ( v25 >> 2 > (unsigned int)v11 );
      v13 = (v25 & 0xFFFFFFFC) + v19;
      if ( v25 != (v25 & 0xFFFFFFFC) )
      {
        v11 = *(unsigned int *)(a5 + 4LL * (int)v13);
        v31 = a6[(int)v13];
        *((_DWORD *)v18 + (int)v13) = v11;
        v12[(int)v13] = v31;
        v32 = v13 + 1;
        if ( v17 > (int)v13 + 1 )
        {
          v11 = *(unsigned int *)(a5 + 4LL * v32);
          v33 = a6[v32];
          *((_DWORD *)v18 + v32) = v11;
          v12[v32] = v33;
          v34 = v13 + 2;
          if ( v17 > (int)v13 + 2 )
          {
            v11 = *(unsigned int *)(a5 + 4LL * v34);
            v35 = a6[v34];
            *((_DWORD *)v18 + v34) = v11;
            v12[v34] = v35;
            v36 = v13 + 3;
            if ( v17 > (int)v13 + 3 )
            {
              v11 = *(unsigned int *)(a5 + 4LL * v36);
              v37 = a6[v36];
              *((_DWORD *)v18 + v36) = v11;
              v12[v36] = v37;
              v38 = v13 + 4;
              if ( v17 > (int)v13 + 4 )
              {
                v13 = (unsigned int)(v13 + 5);
                v11 = *(unsigned int *)(a5 + 4LL * v38);
                v39 = a6[v38];
                *((_DWORD *)v18 + v38) = v11;
                v12[v38] = v39;
                if ( v17 > (int)v13 )
                {
                  v13 = (int)v13;
                  v40 = a6[(int)v13];
                  *((_DWORD *)v18 + (int)v13) = *(_DWORD *)(a5 + 4LL * (int)v13);
                  v12[(int)v13] = v40;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v10 = 4LL * (unsigned int)(v17 - 1) + 4;
      v42 = 0;
      do
      {
        v11 = *(unsigned int *)(a5 + v42);
        v43 = a6[v42 / 4];
        *(_DWORD *)((char *)v18 + v42) = v11;
        v12[v42 / 4] = v43;
        v42 += 4LL;
      }
      while ( v42 != v10 );
    }
  }
  (*(void (__fastcall **)(CoinSimpFactorization *, double *, __int64, __int64, char *, unsigned __int64))(*(_QWORD *)this + 152LL))(
    this,
    v12,
    v11,
    v10,
    v14,
    v13);
  return (*(__int64 (__fastcall **)(CoinSimpFactorization *))(*(_QWORD *)this + 160LL))(this);
}

