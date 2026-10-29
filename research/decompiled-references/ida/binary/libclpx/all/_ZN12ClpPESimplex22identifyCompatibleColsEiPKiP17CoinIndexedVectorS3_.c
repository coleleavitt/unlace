const int *__fastcall ClpPESimplex::identifyCompatibleCols(
        ClpPESimplex *this,
        int a2,
        const int *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 v9; // rax
  char *v10; // r9
  __int64 v11; // rcx
  int v12; // r12d
  int v13; // r13d
  size_t v14; // rcx
  char *v15; // r8
  char *v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rsi
  _QWORD *v20; // r10
  __int64 v21; // rcx
  _QWORD *v22; // r11
  unsigned __int64 v23; // rdi
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rax
  const int *result; // rax
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // xmm0_8
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 (*v40)(void); // rax
  _QWORD *v41; // rax
  __int64 v42; // r10
  __int64 v43; // rdx
  __int64 v44; // r11
  int v45; // eax
  __int64 v46; // rcx
  int v47; // esi
  __int64 v48; // rax
  int v49; // esi
  int v50; // edi
  double v51; // xmm0_8
  __int64 v52; // rdi
  __int64 v53; // r14
  char *v54; // r9
  __int64 v55; // rax
  __int64 v56; // rsi
  double v57; // xmm2_8
  double v58; // xmm0_8
  double v59; // xmm0_8
  __int64 v60; // r14
  char *v61; // r9
  __int64 v62; // rax
  double v63; // xmm1_8
  char *v64; // [rsp+0h] [rbp-58h]
  __int64 v65; // [rsp+0h] [rbp-58h]
  size_t v66; // [rsp+8h] [rbp-50h]
  __int64 v67; // [rsp+8h] [rbp-50h]
  CoinIndexedVector *v69; // [rsp+10h] [rbp-48h]
  __int64 v70; // [rsp+18h] [rbp-40h]

  v9 = *((int *)this + 31);
  v10 = *((char **)this + 8);
  v11 = *((int *)this + 30);
  *((_DWORD *)this + 12) = 0;
  v12 = v9;
  v13 = v11;
  v14 = v9 + v11;
  v15 = &v10[v14];
  if ( v10 != &v10[v14] )
  {
    v66 = v14;
    v64 = &v10[v14];
    v16 = (char *)memset(v10, 0, v14);
    v14 = v66;
    v15 = v64;
    v10 = v16;
  }
  v17 = *((_QWORD *)this + 7);
  v18 = (_QWORD *)(v17 + 8 * v14);
  if ( (_QWORD *)v17 != v18 )
  {
    v19 = 8 * v14 - 8;
    v20 = (_QWORD *)(v17 + 8);
    v21 = (v17 >> 3) & 1;
    v22 = (_QWORD *)(v17 + 8);
    if ( v19 > 0x20 )
    {
      if ( v21 )
        *(_QWORD *)v17 = 0xBFF0000000000000LL;
      else
        v22 = *((_QWORD **)this + 7);
      v23 = (v19 >> 3) - v21 + 1;
      v24 = (_QWORD *)(v17 + 8 * v21);
      v25 = 0;
      do
      {
        ++v25;
        v24 += 2;
        *((_OWORD *)v24 - 1) = xmmword_28D580;
      }
      while ( v25 < v23 >> 1 );
      v17 = (unsigned __int64)&v22[v23 & 0xFFFFFFFFFFFFFFFELL];
      if ( (v23 & 0xFFFFFFFFFFFFFFFELL) == v23 )
        goto LABEL_16;
      v20 = (_QWORD *)(v17 + 8);
    }
    *(_QWORD *)v17 = 0xBFF0000000000000LL;
    if ( v18 != v20 )
    {
      *(_QWORD *)(v17 + 8) = 0xBFF0000000000000LL;
      if ( v18 != (_QWORD *)(v17 + 16) )
      {
        *(_QWORD *)(v17 + 16) = 0xBFF0000000000000LL;
        if ( v18 != (_QWORD *)(v17 + 24) )
        {
          *(_QWORD *)(v17 + 24) = 0xBFF0000000000000LL;
          if ( v18 != (_QWORD *)(v17 + 32) )
            *(_QWORD *)(v17 + 32) = 0xBFF0000000000000LL;
        }
      }
    }
  }
LABEL_16:
  result = (const int *)*(unsigned int *)this;
  if ( (_DWORD)result )
  {
    if ( v13 != (_DWORD)result )
    {
      if ( (int)result > 0 )
      {
        v28 = *((_QWORD *)this + 16);
        v29 = *((_QWORD *)this + 1);
        v30 = 1;
        v31 = *(_QWORD *)a5;
        v32 = *((_QWORD *)a5 + 1);
        do
        {
          v33 = *((int *)a5 + 4);
          v34 = *(int *)(v29 + 4 * v30 - 4);
          v35 = *(_QWORD *)(v28 + 8 * v30 - 8);
          *((_DWORD *)a5 + 4) = v33 + 1;
          *(_DWORD *)(v31 + 4 * v33) = v34;
          *(_QWORD *)(v32 + 8 * v34) = v35;
          LODWORD(v34) = v30++;
        }
        while ( *(_DWORD *)this > (int)v34 );
      }
      ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(*((_QWORD *)this + 12) + 1264LL), a4, a5);
      *((_DWORD *)this + 12) = 0;
      if ( !a3 )
        a2 = *((_DWORD *)this + 31) + *((_DWORD *)this + 30);
      v36 = *((_QWORD *)this + 12);
      v37 = *(_QWORD *)(v36 + 192);
      if ( !v37 )
        BUG();
      v38 = *(_QWORD *)(v36 + 224);
      v39 = *((_QWORD *)a5 + 1);
      v40 = **(__int64 (***)(void))v37;
      if ( (char *)v40 == (char *)ClpPackedMatrix::getPackedMatrix )
        v41 = *(_QWORD **)(v37 + 88);
      else
        v41 = (_QWORD *)v40();
      v70 = v41[5];
      v65 = v41[6];
      v67 = v41[7];
      v69 = (CoinIndexedVector *)v41[4];
      if ( a2 > 0 )
      {
        v42 = *((_QWORD *)this + 12);
        v43 = 0;
        v44 = (unsigned int)(a2 - 1) + 1LL;
        do
        {
          v45 = v43;
          v46 = v43;
          if ( a3 )
          {
            v46 = a3[v43];
            v45 = a3[v43];
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v42 + 264) + v46) & 7) == 1 )
          {
            *(_BYTE *)(*((_QWORD *)this + 8) + v46) = 0;
          }
          else
          {
            v47 = *((_DWORD *)this + 31);
            if ( v47 <= v45 )
            {
              v58 = fabs(*(double *)(v39 + 8LL * (v45 - v47)));
            }
            else
            {
              v48 = *(int *)(v65 + 4 * v46);
              v49 = *(_DWORD *)(v67 + 4 * v46);
              v50 = v48 + v49;
              if ( v38 )
              {
                if ( (int)v48 >= v50 )
                {
                  v51 = 0.0;
                }
                else
                {
                  v51 = 0.0;
                  v52 = (unsigned int)(v49 - 1) + 1LL;
                  v53 = v70 + 4 * v48;
                  v54 = (char *)v69 + 8 * v48;
                  v55 = 0;
                  do
                  {
                    v56 = *(int *)(v53 + 4 * v55);
                    v57 = *(double *)(v39 + 8 * v56) * *(double *)&v54[8 * v55++];
                    v51 = v51 + v57 * *(double *)(v38 + 8 * v56);
                  }
                  while ( v52 != v55 );
                }
                v58 = fabs(v51 * *(double *)(*(_QWORD *)(v42 + 232) + 8 * v46));
              }
              else if ( (int)v48 >= v50 )
              {
                v58 = 0.0;
              }
              else
              {
                v59 = 0.0;
                v60 = v70 + 4 * v48;
                v61 = (char *)v69 + 8 * v48;
                v62 = 0;
                do
                {
                  v63 = *(double *)(v39 + 8LL * *(int *)(v60 + 4 * v62)) * *(double *)&v61[8 * v62];
                  ++v62;
                  v59 = v59 + v63;
                }
                while ( (unsigned int)(v49 - 1) + 1LL != v62 );
                v58 = fabs(v59);
              }
            }
            *(double *)(*((_QWORD *)this + 7) + 8 * v46) = v58;
            if ( *((double *)this + 14) > v58 )
            {
              *(_BYTE *)(*((_QWORD *)this + 8) + v46) = 1;
              ++*((_DWORD *)this + 12);
            }
          }
          ++v43;
        }
        while ( v44 != v43 );
      }
      return (const int *)CoinIndexedVector::clear(a5);
    }
  }
  else if ( a3 )
  {
    if ( a2 > 0 )
    {
      result = a3;
      do
      {
        v27 = *result++;
        v10[v27] = 1;
      }
      while ( &a3[a2 - 1 + 1] != result );
    }
    *((_DWORD *)this + 12) = a2;
  }
  else
  {
    if ( v10 != v15 )
      result = (const int *)memset(v10, 1, v15 - v10);
    *((_DWORD *)this + 12) = v13 + v12;
  }
  return result;
}

