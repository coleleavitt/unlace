void __fastcall CoinDenseVector<double>::resize(__int64 a1, int a2, __m128d a3)
{
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r13
  char *v8; // rdi
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // xmm1_8
  __int64 v13; // rdx
  char *v14; // rsi
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  int v17; // edi
  unsigned __int64 v18; // rax
  unsigned int v19; // edi
  unsigned __int64 v20; // rcx
  unsigned int v21; // edx
  __m128d v22; // xmm1
  int v23; // eax
  int v24; // ebx

  if ( *(_DWORD *)a1 != a2 )
  {
    if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v5 = a2;
    v6 = operator new[](8LL * a2);
    v7 = v6;
    v8 = *(char **)(a1 + 8);
    if ( *(_DWORD *)a1 <= a2 )
      v5 = *(_DWORD *)a1;
    a3 = (__m128d)*(unsigned __int64 *)&a3.m128d_f64[0];
    if ( v5 && (char *)v6 != v8 )
    {
      if ( v5 >> 3 <= 0 )
      {
        v15 = (_QWORD *)v6;
        v14 = *(char **)(a1 + 8);
      }
      else
      {
        v9 = v6;
        v10 = *(__int64 **)(a1 + 8);
        v11 = (unsigned int)((v5 >> 3) - 1);
        do
        {
          v12 = *v10;
          v9 += 64;
          v10 += 8;
          *(_QWORD *)(v9 - 64) = v12;
          *(_QWORD *)(v9 - 56) = *(v10 - 7);
          *(_QWORD *)(v9 - 48) = *(v10 - 6);
          *(_QWORD *)(v9 - 40) = *(v10 - 5);
          *(_QWORD *)(v9 - 32) = *(v10 - 4);
          *(_QWORD *)(v9 - 24) = *(v10 - 3);
          *(_QWORD *)(v9 - 16) = *(v10 - 2);
          *(_QWORD *)(v9 - 8) = *(v10 - 1);
        }
        while ( v9 != v6 + ((v11 + 1) << 6) );
        v13 = ((int)v11 + 1LL) << 6;
        v14 = &v8[v13];
        v15 = (_QWORD *)(v6 + v13);
      }
      switch ( v5 % 8 )
      {
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_17;
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_15;
        case 5:
          goto LABEL_14;
        case 6:
          goto LABEL_13;
        case 7:
          v15[6] = *((_QWORD *)v14 + 6);
LABEL_13:
          v15[5] = *((_QWORD *)v14 + 5);
LABEL_14:
          v15[4] = *((_QWORD *)v14 + 4);
LABEL_15:
          v15[3] = *((_QWORD *)v14 + 3);
LABEL_16:
          v15[2] = *((_QWORD *)v14 + 2);
LABEL_17:
          v15[1] = *((_QWORD *)v14 + 1);
LABEL_18:
          *v15 = *(_QWORD *)v14;
          break;
        default:
          break;
      }
    }
    if ( v8 )
    {
      operator delete[](v8);
      a3 = (__m128d)*(unsigned __int64 *)&a3.m128d_f64[0];
    }
    *(_QWORD *)(a1 + 8) = v7;
    *(_DWORD *)a1 = a2;
    if ( a2 > v5 )
    {
      v16 = v5;
      v17 = a2 - v5;
      v18 = ((unsigned __int64)(v7 + 8LL * v5) >> 3) & 1;
      if ( (unsigned int)(a2 - 1 - v5) <= 4 )
      {
LABEL_29:
        *(double *)(v7 + 8 * v16) = a3.m128d_f64[0];
        if ( a2 > v5 + 1 )
        {
          *(double *)(v7 + 8LL * (v5 + 1)) = a3.m128d_f64[0];
          if ( a2 > v5 + 2 )
          {
            *(double *)(v7 + 8LL * (v5 + 2)) = a3.m128d_f64[0];
            v23 = v5 + 3;
            if ( a2 > v5 + 3 )
            {
              v24 = v5 + 4;
              *(double *)(v7 + 8LL * v23) = a3.m128d_f64[0];
              if ( a2 > v24 )
                *(double *)(v7 + 8LL * v24) = a3.m128d_f64[0];
            }
          }
        }
        return;
      }
      if ( (_DWORD)v18 )
        *(double *)(v7 + 8LL * v5++) = a3.m128d_f64[0];
      v19 = v17 - v18;
      v20 = v7 + 8 * (v16 + v18);
      v21 = 0;
      v22 = _mm_unpacklo_pd(a3, a3);
      do
      {
        ++v21;
        v20 += 16LL;
        *(__m128d *)(v20 - 16) = v22;
      }
      while ( v21 < v19 >> 1 );
      v5 += v19 & 0xFFFFFFFE;
      if ( v19 != (v19 & 0xFFFFFFFE) )
      {
        v16 = v5;
        goto LABEL_29;
      }
    }
  }
}

