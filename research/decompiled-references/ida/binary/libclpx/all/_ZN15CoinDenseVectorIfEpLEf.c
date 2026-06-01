void __fastcall CoinDenseVector<float>::operator+=(__int64 a1, __m128 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  int v5; // r10d
  float *v6; // rcx
  unsigned int v7; // r9d
  unsigned int v8; // edx
  __int64 v9; // rax
  __m128 v10; // xmm2
  unsigned int v11; // eax
  signed int v12; // edx
  int v13; // eax

  v2 = *(_DWORD *)a1;
  if ( *(int *)a1 <= 0 )
    return;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = -(int)(v3 >> 2) & 3;
  if ( v2 - 1 < (unsigned int)(v4 + 3) )
  {
    v11 = 0;
LABEL_10:
    *(float *)(v3 + 4LL * (int)v11) = *(float *)(v3 + 4LL * (int)v11) + a2.m128_f32[0];
    if ( (int)(v11 + 1) < v2 )
    {
      *(float *)(v3 + 4LL * (int)(v11 + 1)) = *(float *)(v3 + 4LL * (int)(v11 + 1)) + a2.m128_f32[0];
      if ( v2 > (int)(v11 + 2) )
      {
        *(float *)(v3 + 4LL * (int)(v11 + 2)) = *(float *)(v3 + 4LL * (int)(v11 + 2)) + a2.m128_f32[0];
        if ( v2 > (int)(v11 + 3) )
        {
          *(float *)(v3 + 4LL * (int)(v11 + 3)) = *(float *)(v3 + 4LL * (int)(v11 + 3)) + a2.m128_f32[0];
          v12 = v11 + 4;
          if ( v2 > (int)(v11 + 4) )
          {
            v13 = v11 + 5;
            *(float *)(v3 + 4LL * v12) = *(float *)(v3 + 4LL * v12) + a2.m128_f32[0];
            if ( v2 > v13 )
              *(float *)(v3 + 4LL * v13) = a2.m128_f32[0] + *(float *)(v3 + 4LL * v13);
          }
        }
      }
    }
    return;
  }
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    v5 = 1;
    *(float *)v3 = *(float *)v3 + a2.m128_f32[0];
    if ( (_DWORD)v4 != 1 )
    {
      v5 = 2;
      *(float *)(v3 + 4) = *(float *)(v3 + 4) + a2.m128_f32[0];
      if ( (_DWORD)v4 != 2 )
      {
        v5 = 3;
        *(float *)(v3 + 8) = *(float *)(v3 + 8) + a2.m128_f32[0];
      }
    }
  }
  v6 = (float *)(v3 + 4 * v4);
  v7 = v2 - v4;
  v8 = 0;
  v9 = 0;
  v10 = _mm_shuffle_ps(a2, a2, 0);
  do
  {
    ++v8;
    *(__m128 *)&v6[v9] = _mm_add_ps(*(__m128 *)&v6[v9], v10);
    v9 += 4;
  }
  while ( v8 < v7 >> 2 );
  v11 = (v7 & 0xFFFFFFFC) + v5;
  if ( v7 != (v7 & 0xFFFFFFFC) )
    goto LABEL_10;
}

