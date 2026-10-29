__int64 __fastcall CoinModel::setObjective(CoinModel *this, int a2, double *a3)
{
  __int64 result; // rax
  double *v7; // rdi
  unsigned __int64 v8; // rdx
  int v9; // r10d
  unsigned int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned __int64 v13; // r8
  unsigned int v14; // r11d
  __int64 v15; // rax
  unsigned int v16; // ecx
  const double *v17; // r9
  unsigned int v18; // r11d
  double *v19; // rsi
  __m128i si128; // xmm2
  __int128 v21; // xmm1
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx

  result = CoinModel::fillColumns(this, a2, 1, 1);
  if ( a2 > 0 )
  {
    v7 = *((double **)this + 23);
    v8 = *((_QWORD *)this + 35);
    if ( ((unsigned __int64)v7 >= v8 + 4LL * a2 || v8 >= (unsigned __int64)&v7[a2])
      && (unsigned int)a2 > 9
      && (v7 >= a3 + 4 || a3 >= v7 + 4) )
    {
      v9 = 0;
      v10 = -(int)(v8 >> 2) & 3;
      if ( v10 )
      {
        v9 = 1;
        *v7 = *a3;
        *(_DWORD *)v8 &= ~4u;
        if ( v10 != 1 )
        {
          v9 = 2;
          v7[1] = a3[1];
          *(_DWORD *)(v8 + 4) &= ~4u;
          if ( v10 != 2 )
          {
            v9 = 3;
            v7[2] = a3[2];
            *(_DWORD *)(v8 + 8) &= ~4u;
          }
        }
      }
      v11 = v10;
      v12 = a2 - v10;
      v13 = v8 + 4LL * v10;
      v14 = a2 - v10;
      v15 = 0;
      v16 = 0;
      v17 = &a3[v11];
      v18 = v14 >> 2;
      v19 = &v7[v11];
      si128 = _mm_load_si128((const __m128i *)&xmmword_297220);
      do
      {
        ++v16;
        v21 = *(_OWORD *)&v17[v15];
        *(_OWORD *)&v19[v15 + 2] = *(_OWORD *)&v17[v15 + 2];
        *(_OWORD *)&v19[v15] = v21;
        *(__m128i *)(v13 + v15 * 4) = _mm_and_si128(_mm_load_si128((const __m128i *)(v13 + v15 * 4)), si128);
        v15 += 4;
      }
      while ( v18 > v16 );
      result = (v12 & 0xFFFFFFFC) + v9;
      if ( v12 != (v12 & 0xFFFFFFFC) )
      {
        v7[(int)result] = a3[(int)result];
        *(_DWORD *)(v8 + 4LL * (int)result) &= ~4u;
        v22 = result + 1;
        if ( a2 > (int)result + 1 )
        {
          v7[v22] = a3[v22];
          *(_DWORD *)(v8 + 4LL * v22) &= ~4u;
          v23 = result + 2;
          if ( a2 > (int)result + 2 )
          {
            v7[v23] = a3[v23];
            *(_DWORD *)(v8 + 4LL * v23) &= ~4u;
            v24 = result + 3;
            if ( a2 > (int)result + 3 )
            {
              v7[v24] = a3[v24];
              *(_DWORD *)(v8 + 4LL * v24) &= ~4u;
              v25 = result + 4;
              if ( a2 > (int)result + 4 )
              {
                result = (unsigned int)(result + 5);
                v7[v25] = a3[v25];
                *(_DWORD *)(v8 + 4LL * v25) &= ~4u;
                if ( a2 > (int)result )
                {
                  result = (int)result;
                  v7[(int)result] = a3[(int)result];
                  *(_DWORD *)(v8 + 4LL * (int)result) &= ~4u;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      result = 0;
      do
      {
        v7[result] = a3[result];
        *(_DWORD *)(v8 + 4 * result++) &= ~4u;
      }
      while ( result != (unsigned int)(a2 - 1) + 1LL );
    }
  }
  return result;
}

