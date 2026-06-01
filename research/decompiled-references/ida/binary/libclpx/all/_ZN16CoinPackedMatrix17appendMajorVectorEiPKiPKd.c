__int64 __fastcall CoinPackedMatrix::appendMajorVector(CoinPackedMatrix *this, int a2, const __m128i *a3, double *a4)
{
  __int64 v7; // rax
  bool v8; // zf
  int v9; // edx
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r13
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // esi
  int *v19; // r8
  bool v20; // r11
  unsigned int v21; // eax
  __m128i *v22; // rdx
  const __m128i *v23; // rdi
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __int64 v26; // rax
  const int *m128i_i32; // rdx
  double *v28; // rdi
  __int64 v29; // rdx
  double *v30; // rax
  double v31; // xmm0_8
  __int64 v32; // rax
  int v33; // eax
  __m128d v34; // xmm1
  double v35; // xmm0_8
  __m128d v36; // xmm2
  __int64 v37; // rdx
  int v38; // esi
  __int64 result; // rax
  int v40; // esi
  const int *v41; // rcx
  int v42; // eax
  int v43; // edx
  __int64 v44; // rdi
  int *v45; // rdx
  const int *v46; // rax
  int *v47; // rdi
  int v48; // r11d
  int v49[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v7 = *((int *)this + 16);
  v8 = (_DWORD)v7 == *((_DWORD *)this + 19);
  v49[0] = a2;
  if ( v8 )
    goto LABEL_6;
  v9 = *((_DWORD *)this + 20);
  v10 = *((_DWORD **)this + 6);
  if ( (_DWORD)v7 )
  {
    if ( a2 <= v9 - v10[v7] )
    {
      v11 = v7;
LABEL_7:
      v16 = (int)v10[v11];
      v13 = 4 * v16;
      v12 = 8 * v16;
      v14 = v10[v11];
      goto LABEL_8;
    }
LABEL_6:
    CoinPackedMatrix::resizeForAddingMajorVectors(this, 1, v49);
    a2 = v49[0];
    v10 = *((_DWORD **)this + 6);
    v15 = *((int *)this + 16);
    v11 = v15;
    if ( !(_DWORD)v15 )
    {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( v9 < a2 )
    goto LABEL_6;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
LABEL_8:
  *(_DWORD *)(*((_QWORD *)this + 7) + v11 * 4) = a2;
  v17 = *((_QWORD *)this + 5);
  v18 = v49[0];
  v19 = (int *)(v17 + v13);
  v20 = v49[0] == 0;
  if ( (const __m128i *)(v17 + v13) != a3 && v49[0] )
  {
    v21 = v49[0] >> 3;
    if ( v49[0] >> 3 <= 0 )
    {
      m128i_i32 = (const int *)a3;
    }
    else
    {
      if ( (v19 >= a3[2].m128i_i32 || (unsigned __int64)a3 >= v17 + v13 + 32) && v21 > 1 )
      {
        v22 = (__m128i *)(v17 + v13);
        v23 = a3;
        v13 = v21 - 1;
        do
        {
          v24 = _mm_loadu_si128(v23);
          v22 += 2;
          v23 += 2;
          v25 = _mm_loadu_si128(v23 - 1);
          v22[-2] = v24;
          v22[-1] = v25;
        }
        while ( &v19[8 * v13 + 8] != (int *)v22 );
      }
      else
      {
        v44 = v21 - 1;
        v45 = (int *)(v17 + v13);
        v46 = (const int *)a3;
        LODWORD(v13) = v44;
        v47 = &v19[8 * v44 + 8];
        do
        {
          v48 = *v46;
          v45 += 8;
          v46 += 8;
          *(v45 - 8) = v48;
          *(v45 - 7) = *(v46 - 7);
          *(v45 - 6) = *(v46 - 6);
          *(v45 - 5) = *(v46 - 5);
          *(v45 - 4) = *(v46 - 4);
          *(v45 - 3) = *(v46 - 3);
          *(v45 - 2) = *(v46 - 2);
          *(v45 - 1) = *(v46 - 1);
        }
        while ( v45 != v47 );
      }
      v26 = 2 * ((int)v13 + 1LL);
      m128i_i32 = a3[v26].m128i_i32;
      v19 = (int *)((char *)v19 + v26 * 16);
    }
    switch ( v18 % 8 )
    {
      case 1:
        goto LABEL_23;
      case 2:
        goto LABEL_22;
      case 3:
        goto LABEL_21;
      case 4:
        goto LABEL_20;
      case 5:
        goto LABEL_19;
      case 6:
        goto LABEL_18;
      case 7:
        v19[6] = m128i_i32[6];
LABEL_18:
        v19[5] = m128i_i32[5];
LABEL_19:
        v19[4] = m128i_i32[4];
LABEL_20:
        v19[3] = m128i_i32[3];
LABEL_21:
        v19[2] = m128i_i32[2];
LABEL_22:
        v19[1] = m128i_i32[1];
LABEL_23:
        *v19 = *m128i_i32;
        break;
      default:
        break;
    }
    v18 = v49[0];
    v20 = v49[0] == 0;
  }
  v28 = (double *)(v12 + *((_QWORD *)this + 4));
  if ( v28 != a4 && !v20 )
  {
    if ( v18 >> 3 > 0 )
    {
      v29 = v12 + *((_QWORD *)this + 4);
      v30 = a4;
      do
      {
        v31 = *v30;
        v30 += 8;
        v29 += 64;
        *(double *)(v29 - 64) = v31;
        *(double *)(v29 - 56) = *(v30 - 7);
        *(double *)(v29 - 48) = *(v30 - 6);
        *(double *)(v29 - 40) = *(v30 - 5);
        *(double *)(v29 - 32) = *(v30 - 4);
        *(double *)(v29 - 24) = *(v30 - 3);
        *(double *)(v29 - 16) = *(v30 - 2);
        *(double *)(v29 - 8) = *(v30 - 1);
      }
      while ( v30 != &a4[8 * (unsigned int)((v18 >> 3) - 1) + 8] );
      v32 = ((v18 >> 3) - 1 + 1LL) << 6;
      a4 = (double *)((char *)a4 + v32);
      v28 = (double *)((char *)v28 + v32);
    }
    switch ( v18 % 8 )
    {
      case 1:
        goto LABEL_38;
      case 2:
        goto LABEL_37;
      case 3:
        goto LABEL_36;
      case 4:
        goto LABEL_35;
      case 5:
        goto LABEL_34;
      case 6:
        goto LABEL_33;
      case 7:
        v28[6] = a4[6];
LABEL_33:
        v28[5] = a4[5];
LABEL_34:
        v28[4] = a4[4];
LABEL_35:
        v28[3] = a4[3];
LABEL_36:
        v28[2] = a4[2];
LABEL_37:
        v28[1] = a4[1];
LABEL_38:
        *v28 = *a4;
        break;
      default:
        break;
    }
  }
  v33 = *((_DWORD *)this + 16);
  if ( !v33 )
  {
    *v10 = 0;
    v18 = v49[0];
    v33 = *((_DWORD *)this + 16);
  }
  v34 = (__m128d)*((unsigned __int64 *)this + 2);
  v34.m128d_f64[0] = (v34.m128d_f64[0] + 1.0) * (double)v18;
  v35 = v34.m128d_f64[0];
  if ( fabs(v34.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v36.m128d_f64[0] = (double)(int)v34.m128d_f64[0];
    *(_QWORD *)&v35 = COERCE_UNSIGNED_INT64(
                        COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v34, v36).m128d_f64[0] & 0x3FF0000000000000LL)
                      + v36.m128d_f64[0])
                    | *(_QWORD *)&v34.m128d_f64[0] & 0x8000000000000000LL;
  }
  v37 = v33;
  v38 = *((_DWORD *)this + 20);
  result = (unsigned int)(v14 + (int)v35);
  if ( (int)result > v38 )
    result = (unsigned int)v38;
  v10[v37 + 1] = result;
  v40 = v49[0];
  if ( v49[0] > 0 )
  {
    v41 = &a3->m128i_i32[v49[0]];
    v42 = a3->m128i_i32[0];
    if ( v41 != (const int *)a3 )
    {
      while ( 1 )
      {
        a3 = (const __m128i *)((char *)a3 + 4);
        if ( v41 == (const int *)a3 )
          break;
        if ( v42 < a3->m128i_i32[0] )
          v42 = a3->m128i_i32[0];
      }
    }
    v43 = *((_DWORD *)this + 17);
    result = (unsigned int)(v42 + 1);
    if ( (int)result < v43 )
      result = (unsigned int)v43;
    *((_DWORD *)this + 17) = result;
  }
  ++*((_DWORD *)this + 16);
  *((_DWORD *)this + 18) += v40;
  return result;
}

