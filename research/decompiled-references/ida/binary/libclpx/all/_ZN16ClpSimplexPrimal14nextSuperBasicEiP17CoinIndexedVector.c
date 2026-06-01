__int64 __fastcall ClpSimplexPrimal::nextSuperBasic(ClpSimplexPrimal *this, int a2, CoinIndexedVector *a3)
{
  __int64 result; // rax
  int v7; // edx
  __m128i v8; // xmm4
  __m128i v9; // xmm5
  int v10; // r13d
  int v11; // r13d
  int v12; // esi
  char v13; // cl
  __int64 v14; // rdx
  int v15; // edi
  _QWORD *v16; // r14
  __int64 v17; // rax
  char *v18; // rsi
  char v19; // cl
  double v20; // xmm6_8
  double *v21; // r9
  double v22; // xmm1_8
  double v23; // xmm2_8
  double v24; // xmm3_8
  _QWORD *v25; // rsi
  _QWORD *v26; // rax
  double v27; // xmm0_8
  int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rsi
  char *v32; // r11
  char v33; // r8
  double v34; // xmm3_8
  double *v35; // r10
  double v36; // xmm2_8
  double v37; // xmm1_8
  __int64 v38; // rcx
  __m128i v39; // [rsp+0h] [rbp-48h]
  __m128i v40; // [rsp+10h] [rbp-38h]

  result = 0xFFFFFFFFLL;
  v7 = *((_DWORD *)this + 337);
  v8 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  v9 = v8;
  while ( 2 )
  {
    if ( v7 >= 0 )
    {
      v13 = *(_BYTE *)(*((_QWORD *)this + 33) + v7);
      if ( (v13 & 0x40) == 0 && (v13 & 7) == 4 )
        result = (unsigned int)v7;
    }
    if ( a2 <= 1 )
    {
      v28 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
      ++v7;
      v12 = v28;
      if ( v28 <= v7 )
        goto LABEL_5;
      v29 = 0;
      v30 = v7;
      while ( 1 )
      {
        v31 = v30 + v29;
        v32 = (char *)(v30 + v29 + *((_QWORD *)this + 33));
        v33 = *v32;
        if ( (*v32 & 0x40) == 0 && (v33 & 7) == 4 )
        {
          v34 = *((double *)this + 110);
          v35 = (double *)(*((_QWORD *)this + 150) + 8 * v31);
          v36 = *(double *)(*((_QWORD *)this + 123) + 8 * v31);
          if ( v34 < COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v35 - v36) & v8.m128i_i64[0]) )
          {
            v37 = *(double *)(*((_QWORD *)this + 126) + 8 * v31);
            if ( v34 < COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v35 - v37) & v8.m128i_i64[0]) )
            {
              if ( v36 >= -1.0e20 || v37 <= 1.0e20 )
              {
                *((_DWORD *)this + 337) = v7;
                if ( v7 != v28 )
                  goto LABEL_6;
LABEL_58:
                *((_DWORD *)this + 337) = -1;
                v7 = -1;
                goto LABEL_6;
              }
              *v32 = v33 & 0xF8;
              if ( COERCE_DOUBLE(*(_QWORD *)(*((_QWORD *)this + 147) + 8 * v31) & v8.m128i_i64[0]) > *((double *)this + 109) )
              {
                v12 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
                goto LABEL_5;
              }
              v28 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
            }
            else
            {
              *v35 = v37;
              *(_BYTE *)(*((_QWORD *)this + 33) + v31) = *(_BYTE *)(*((_QWORD *)this + 33) + v31) & 0xF8 | 2;
              v28 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
            }
          }
          else
          {
            *v35 = v36;
            *(_BYTE *)(*((_QWORD *)this + 33) + v31) = *(_BYTE *)(*((_QWORD *)this + 33) + v31) & 0xF8 | 3;
            v28 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
          }
        }
        ++v7;
        ++v29;
        v12 = v28;
        if ( v28 <= v7 )
          goto LABEL_5;
      }
    }
    v14 = *(_QWORD *)a3;
    if ( a2 == 2 )
    {
      v10 = *((_DWORD *)a3 + 4);
      if ( v10 )
        goto LABEL_3;
      goto LABEL_29;
    }
    v15 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    v16 = *((_QWORD **)a3 + 1);
    if ( v15 <= 0 )
    {
      CoinSort_2<double,int>(*((_QWORD *)a3 + 1), *((_QWORD *)a3 + 1), v14);
      *((_DWORD *)a3 + 4) = 0;
      *((_BYTE *)a3 + 28) = 0;
LABEL_29:
      *((_DWORD *)this + 337) = -1;
      return 0xFFFFFFFFLL;
    }
    v17 = 0;
    v10 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = (char *)(v17 + *((_QWORD *)this + 33));
        v19 = *v18;
        if ( (*v18 & 0x40) != 0 || (v19 & 7) != 4 )
          goto LABEL_16;
        v20 = *((double *)this + 110);
        v21 = (double *)(*((_QWORD *)this + 150) + 8 * v17);
        v22 = *(double *)(*((_QWORD *)this + 123) + 8 * v17);
        v23 = *v21;
        v24 = *v21 - v22;
        if ( v20 < COERCE_DOUBLE(*(_QWORD *)&v24 & v9.m128i_i64[0]) )
          break;
        *v21 = v22;
        *(_BYTE *)(v17 + *((_QWORD *)this + 33)) = *(_BYTE *)(v17 + *((_QWORD *)this + 33)) & 0xF8 | 3;
        v15 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
        if ( v15 <= (int)++v17 )
        {
LABEL_21:
          v25 = &v16[v10];
          goto LABEL_22;
        }
      }
      v27 = *(double *)(*((_QWORD *)this + 126) + 8 * v17);
      if ( v20 < COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v23 - v27) & v9.m128i_i64[0]) )
        break;
      *v21 = v27;
      *(_BYTE *)(v17 + *((_QWORD *)this + 33)) = *(_BYTE *)(v17 + *((_QWORD *)this + 33)) & 0xF8 | 2;
      v15 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
LABEL_16:
      if ( v15 <= (int)++v17 )
        goto LABEL_21;
    }
    if ( v22 >= -1.0e20 || v27 <= 1.0e20 )
    {
      v38 = v10++;
      *(double *)&v16[v38] = -fmin(v24 * 0.1, v27 - v23);
      *(_DWORD *)(v14 + 4 * v38) = v17;
      goto LABEL_16;
    }
    *v18 = v19 & 0xF8;
    v25 = &v16[v10];
LABEL_22:
    v40 = v9;
    v39 = v8;
    CoinSort_2<double,int>(v16, v25, v14);
    *((_DWORD *)a3 + 4) = v10;
    v8 = v39;
    v9 = v40;
    if ( !v10 )
    {
      *((_BYTE *)a3 + 28) = 0;
      goto LABEL_29;
    }
    if ( v10 >> 3 > 0 )
    {
      v26 = v16;
      do
      {
        *v26 = 0;
        v26[1] = 0;
        v26 += 8;
        *(v26 - 6) = 0;
        *(v26 - 5) = 0;
        *(v26 - 4) = 0;
        *(v26 - 3) = 0;
        *(v26 - 2) = 0;
        *(v26 - 1) = 0;
      }
      while ( v26 != &v16[8 * (unsigned int)((v10 >> 3) - 1) + 8] );
      v16 += 8 * ((v10 >> 3) - 1) + 8;
    }
    v14 = *(_QWORD *)a3;
    switch ( v10 & 7 )
    {
      case 0:
        break;
      case 1:
        goto LABEL_39;
      case 2:
        goto LABEL_38;
      case 3:
        goto LABEL_37;
      case 4:
        goto LABEL_36;
      case 5:
        goto LABEL_35;
      case 6:
        goto LABEL_34;
      case 7:
        v16[6] = 0;
LABEL_34:
        v16[5] = 0;
LABEL_35:
        v16[4] = 0;
LABEL_36:
        v16[3] = 0;
LABEL_37:
        v16[2] = 0;
LABEL_38:
        v16[1] = 0;
LABEL_39:
        *v16 = 0;
        break;
    }
LABEL_3:
    v11 = v10 - 1;
    v7 = *(_DWORD *)(v14 + 4LL * v11);
    *((_DWORD *)a3 + 4) = v11;
    v12 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
    result = (unsigned int)v7;
    if ( !v11 )
      *((_BYTE *)a3 + 28) = 0;
LABEL_5:
    *((_DWORD *)this + 337) = v7;
    if ( v7 == v12 )
      goto LABEL_58;
LABEL_6:
    if ( (int)result >= 0 && (*(_BYTE *)(*((_QWORD *)this + 33) + (int)result) & 3) != 0 )
      continue;
    return result;
  }
}

