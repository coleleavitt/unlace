double *__fastcall ClpPackedMatrix::subsetTimes2(
        ClpPackedMatrix *this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        double a6,
        double a7,
        unsigned int *a8,
        double a9,
        double *a10)
{
  double *result; // rax
  signed int *v11; // r10
  double *v12; // rbx
  _QWORD *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r12
  __int64 v18; // r13
  double v19; // xmm8_8
  __int64 v20; // r15
  __int64 v21; // rdx
  double v22; // xmm5_8
  signed int v23; // ebp
  __int64 v24; // r11
  double v25; // xmm12_8
  int v26; // edx
  __int64 v27; // r8
  double v28; // xmm4_8
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  double v32; // xmm3_8
  double *v33; // r11
  double v34; // xmm11_8
  double v35; // xmm4_8
  double v36; // xmm4_8
  __int64 v37; // r15
  signed int v38; // ebp
  double v39; // xmm4_8
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // r8
  double v43; // xmm3_8
  __int64 v44; // rdi
  __int64 v45; // rax
  double v46; // xmm5_8
  double v47; // xmm11_8
  double v48; // xmm3_8
  double v49; // xmm3_8
  unsigned int v50; // edx
  __int64 v51; // [rsp+0h] [rbp-48h]
  __int64 v52; // [rsp+8h] [rbp-40h]

  result = (double *)*((unsigned int *)a3 + 4);
  v11 = *(signed int **)a3;
  v12 = *((double **)a3 + 1);
  v13 = *((_QWORD **)this + 11);
  v14 = *((_QWORD *)a2 + 28);
  v15 = *((_QWORD *)a4 + 1);
  v16 = v13[5];
  v17 = v13[6];
  v18 = v13[7];
  v51 = v13[4];
  v19 = 1.0;
  if ( a9 == 0.0 )
  {
    if ( v14 )
      goto LABEL_3;
  }
  else
  {
    v19 = a9;
    if ( v14 )
    {
LABEL_3:
      v20 = *((_QWORD *)a2 + 29);
      if ( (int)result > 0 )
      {
        v52 = (__int64)&v11[(_DWORD)result - 1 + 1];
        do
        {
          v21 = *v11;
          v22 = *v12 * v19;
          v23 = *v11;
          v24 = v21;
          v25 = *(double *)(v20 + 8 * v21);
          if ( a9 == 0.0 )
            *v12 = 0.0;
          result = (double *)*(int *)(v17 + 4 * v21);
          v26 = *(_DWORD *)(v18 + 4 * v21);
          if ( (int)result >= (int)result + v26 )
          {
            v28 = 0.0;
          }
          else
          {
            v27 = v16 + 4LL * (_QWORD)result;
            v28 = 0.0;
            v29 = (unsigned int)(v26 - 1) + 1LL;
            v30 = v51 + 8LL * (_QWORD)result;
            result = nullptr;
            do
            {
              v31 = *(int *)(v27 + 4LL * (_QWORD)result);
              v32 = *(double *)(v15 + 8 * v31) * *(double *)(v30 + 8LL * (_QWORD)result);
              result = (double *)((char *)result + 1);
              v28 = v28 + v32 * *(double *)(v14 + 8 * v31);
            }
            while ( (double *)v29 != result );
          }
          v33 = &a10[v24];
          v35 = v28 * v25 * v22 + v22 * v22 * a7 + *v33;
          if ( v35 < 0.0001 )
          {
            v34 = v22 * v22;
            if ( a6 < 0.0 )
            {
              v35 = fmax(0.0001, v34 + 1.0);
            }
            else
            {
              v36 = v34 * a6;
              result = (double *)a8[v23 >> 5];
              if ( _bittest((const int *)&result, v23) )
                v36 = v36 + 1.0;
              v35 = fmax(v36, 0.0001);
            }
          }
          ++v11;
          ++v12;
          *v33 = v35;
        }
        while ( (signed int *)v52 != v11 );
      }
      return result;
    }
  }
  if ( (int)result > 0 )
  {
    v37 = (unsigned int)((_DWORD)result - 1) + 1LL;
    do
    {
      v38 = v11[v14];
      v39 = v12[v14] * v19;
      if ( a9 == 0.0 )
        v12[v14] = 0.0;
      v40 = *(int *)(v17 + 4LL * v38);
      v41 = *(_DWORD *)(v18 + 4LL * v38);
      if ( (int)v40 >= (int)v40 + v41 )
      {
        v43 = 0.0;
      }
      else
      {
        v42 = v16 + 4 * v40;
        v43 = 0.0;
        v44 = v51 + 8 * v40;
        v45 = 0;
        do
        {
          v46 = *(double *)(v15 + 8LL * *(int *)(v42 + 4 * v45)) * *(double *)(v44 + 8 * v45);
          ++v45;
          v43 = v43 + v46;
        }
        while ( (unsigned int)(v41 - 1) + 1LL != v45 );
      }
      result = &a10[v38];
      v48 = v43 * v39 + a7 * (v39 * v39) + *result;
      if ( v48 < 0.0001 )
      {
        v47 = v39 * v39;
        if ( a6 < 0.0 )
        {
          v48 = fmax(0.0001, v47 + 1.0);
        }
        else
        {
          v49 = v47 * a6;
          v50 = a8[v38 >> 5];
          if ( _bittest((const int *)&v50, v38) )
            v49 = v49 + 1.0;
          v48 = fmax(v49, 0.0001);
        }
      }
      ++v14;
      *result = v48;
    }
    while ( v37 != v14 );
  }
  return result;
}

