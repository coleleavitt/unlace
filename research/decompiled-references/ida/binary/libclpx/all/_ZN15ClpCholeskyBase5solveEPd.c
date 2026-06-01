__int64 __fastcall ClpCholeskyBase::solve(ClpCholeskyBase *this, double *a2)
{
  unsigned __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rax
  double *v7; // rcx
  double *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  double *v11; // rbp
  __int64 v12; // r8
  __int64 v13; // rsi
  double v14; // xmm1_8
  unsigned __int64 v15; // rax
  double v16; // xmm0_8
  int v17; // r11d
  __int64 v18; // r14
  __int64 v19; // rdi
  double *v20; // r8
  __int64 v21; // r10
  signed int v22; // edx
  __int64 v23; // rax
  double *v24; // r15
  __m128d v25; // xmm2
  unsigned int v26; // edx
  __m128d v27; // xmm3
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v31; // rax
  _BOOL4 v32; // [rsp+10h] [rbp-68h]
  void *v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+28h] [rbp-50h]
  int v35; // [rsp+34h] [rbp-44h]

  if ( !*((_QWORD *)this + 119) )
    return ClpCholeskyBase::solve(this, a2, 3);
  ClpCholeskyBase::solve(this, a2, 1);
  v4 = *(int *)(*((_QWORD *)this + 121) + 44LL);
  v5 = *(_DWORD *)(*((_QWORD *)this + 121) + 44LL);
  if ( v4 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v6 = operator new[](8 * v4);
  v33 = (void *)v6;
  if ( v5 <= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 121) + 24LL))(*((_QWORD *)this + 121), v6);
  }
  else
  {
    v7 = (double *)v6;
    v8 = (double *)v6;
    v9 = (unsigned int)(v5 - 1);
    v10 = *((_QWORD *)this + 120);
    v11 = v7;
    v12 = (__int64)&v7[v9 + 1];
    v13 = *((int *)this + 11);
    do
    {
      if ( (int)v13 <= 0 )
      {
        v14 = 0.0;
      }
      else
      {
        v14 = 0.0;
        v15 = 0;
        do
        {
          v16 = *(double *)(v10 + v15) * a2[v15 / 8];
          v15 += 8LL;
          v14 = v14 + v16;
        }
        while ( v15 != 8LL * (unsigned int)(v13 - 1) + 8 );
      }
      *v11++ = v14;
      v10 += 8 * v13;
    }
    while ( v11 != (double *)v12 );
    (*(void (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 121) + 24LL))(
      *((_QWORD *)this + 121),
      v33,
      v10);
    v17 = *((_DWORD *)this + 11);
    v18 = *((_QWORD *)this + 120);
    if ( v17 > 0 )
    {
      v19 = 8LL * v17;
      v20 = *((double **)this + 120);
      v32 = ((unsigned __int8)a2 & 8) != 0;
      v21 = 0;
      v22 = ((v17 - v32) & 0xFFFFFFFE) + v32;
      v23 = v22;
      v24 = &a2[v23];
      v34 = v18 + v23 * 8;
      v35 = v22 + 1;
      do
      {
        v25 = (__m128d)*(unsigned __int64 *)v8;
        if ( (a2 >= v20 + 2 || v20 >= a2 + 2) && (unsigned int)v17 > 8 )
        {
          if ( 2 - (unsigned int)(((unsigned __int8)a2 & 8) == 0) > v17 - 1 )
          {
            v29 = 1;
            *a2 = *a2 - *(double *)(v18 + v21) * v25.m128d_f64[0];
          }
          else
          {
            if ( ((unsigned __int8)a2 & 8) != 0 )
              *a2 = *a2 - *v20 * v25.m128d_f64[0];
            v26 = 0;
            v27 = _mm_unpacklo_pd(v25, v25);
            v28 = 0;
            do
            {
              ++v26;
              *(__m128d *)&a2[(((unsigned __int8)a2 & 8) != 0) + v28] = _mm_sub_pd(
                                                                          *(__m128d *)&a2[(((unsigned __int8)a2 & 8) != 0)
                                                                                        + v28],
                                                                          _mm_mul_pd(
                                                                            *(__m128d *)(v18
                                                                                       + 8LL
                                                                                       * (((unsigned __int8)a2 & 8) != 0)
                                                                                       + v21
                                                                                       + v28 * 8),
                                                                            v27));
              v28 += 2;
            }
            while ( v26 < (unsigned int)(v17 - v32) >> 1 );
            if ( ((v17 - v32) & 0xFFFFFFFE) == v17 - v32 )
              goto LABEL_21;
            v29 = v35;
            *v24 = *v24 - *(double *)(v34 + v21) * v25.m128d_f64[0];
            if ( v17 <= v35 )
              goto LABEL_21;
          }
          a2[v29] = a2[v29] - v25.m128d_f64[0] * *(double *)(v18 + 8 * v29 + v21);
        }
        else
        {
          v31 = 0;
          do
          {
            a2[v31 / 8] = a2[v31 / 8] - v20[v31 / 8] * v25.m128d_f64[0];
            v31 += 8LL;
          }
          while ( 8LL * (unsigned int)(v17 - 1) + 8 != v31 );
        }
LABEL_21:
        ++v8;
        v20 = (double *)((char *)v20 + v19);
        v21 += v19;
      }
      while ( v8 != v11 );
    }
  }
  operator delete[](v33);
  return ClpCholeskyBase::solve(this, a2, 2);
}

