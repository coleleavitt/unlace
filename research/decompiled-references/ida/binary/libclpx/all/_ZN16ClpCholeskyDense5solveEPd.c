__int64 __fastcall ClpCholeskyDense::solve(ClpCholeskyDense *this, unsigned __int64 a2)
{
  int v3; // edx
  __int64 v4; // rcx
  int v5; // edi
  double *v6; // rcx
  int v7; // ebp
  int v8; // ecx
  int v9; // r13d
  bool v10; // cc
  int v11; // edx
  double *v12; // r12
  double *v13; // r15
  double *v14; // r14
  int v15; // edx
  double *v16; // r8
  double *v17; // rcx
  int v18; // edx
  unsigned __int64 v19; // rax
  double *v20; // rdi
  int v21; // r8d
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // r10d
  unsigned __int64 v25; // rsi
  unsigned int v26; // r9d
  double *v27; // r11
  double *v28; // rsi
  __int64 v29; // rax
  signed int v30; // r8d
  __int64 v31; // rcx
  int v32; // r8d
  double *v33; // r15
  __int64 result; // rax
  double *v35; // r12
  double *v36; // r13
  int v37; // r14d
  double *v38; // rbp
  double *v39; // rsi
  double *v40; // rsi
  unsigned int v41; // r14d
  double *v42; // rcx
  double *v43; // rcx
  unsigned __int64 v44; // rax
  double *v45; // [rsp+0h] [rbp-68h]
  unsigned int v46; // [rsp+0h] [rbp-68h]
  double *v47; // [rsp+8h] [rbp-60h]
  unsigned int v48; // [rsp+8h] [rbp-60h]
  int v49; // [rsp+14h] [rbp-54h]
  unsigned int v50; // [rsp+18h] [rbp-50h]
  int v51; // [rsp+1Ch] [rbp-4Ch]
  double *v53; // [rsp+20h] [rbp-48h]
  double *v54; // [rsp+28h] [rbp-40h]

  v3 = *((_DWORD *)this + 11);
  v4 = *((_QWORD *)this + 11);
  v5 = (v3 + 15) >> 4;
  v51 = v5;
  v6 = (double *)(v4 + 8LL * (v5 << 8));
  v54 = v6;
  if ( v5 > 0 )
  {
    v47 = (double *)a2;
    v45 = v6;
    v49 = 0;
    v50 = v5 - 2;
    v7 = 16 * (v5 + 0xFFFFFFF);
    while ( 1 )
    {
      v8 = v3 - v49;
      v9 = v49;
      v10 = v3 <= v49 + 15;
      v11 = 16;
      if ( v10 )
        v11 = v8;
      v12 = v47;
      ClpCholeskyDense::solveF1(this, v45, v11, v47);
      if ( v49 == v7 )
        break;
      v47 += 16;
      v13 = v45;
      v14 = v47;
      do
      {
        v9 += 16;
        v18 = *((_DWORD *)this + 11);
        v13 += 256;
        if ( v18 <= v9 + 15 )
        {
          v15 = v18 - v9;
          v16 = v14;
          v17 = v12;
        }
        else
        {
          v16 = v14;
          v17 = v12;
          v15 = 16;
        }
        v14 += 16;
        ClpCholeskyDense::solveF2(this, v13, v15, v17, v16);
      }
      while ( v9 != v7 );
      v3 = *((_DWORD *)this + 11);
      v49 += 16;
      v19 = (unsigned __int64)&v45[256 * (unsigned __int64)v50-- + 512];
      v45 = (double *)v19;
    }
    v3 = *((_DWORD *)this + 11);
  }
  if ( v3 > 0 )
  {
    v20 = *((double **)this + 15);
    if ( (a2 >= (unsigned __int64)(v20 + 2) || (unsigned __int64)v20 >= a2 + 16) && (unsigned int)v3 > 9 )
    {
      v21 = 0;
      v22 = (a2 >> 3) & 1;
      if ( ((a2 >> 3) & 1) != 0 )
      {
        v21 = 1;
        *(double *)a2 = *(double *)a2 * *v20;
      }
      v23 = 0;
      v24 = v3 - v22;
      v25 = (a2 >> 3) & 1;
      v26 = (unsigned int)(v3 - v22) >> 1;
      v27 = (double *)(a2 + v25 * 8);
      v28 = &v20[v25];
      v29 = 0;
      do
      {
        ++v23;
        *(__m128d *)&v27[v29] = _mm_mul_pd(*(__m128d *)&v28[v29], *(__m128d *)&v27[v29]);
        v29 += 2;
      }
      while ( v26 > v23 );
      v30 = (v24 & 0xFFFFFFFE) + v21;
      if ( v24 != (v24 & 0xFFFFFFFE) )
      {
        v31 = v30;
        v32 = v30 + 1;
        *(double *)(a2 + 8 * v31) = *(double *)(a2 + 8 * v31) * v20[v31];
        if ( v32 < v3 )
          *(double *)(a2 + 8LL * v32) = *(double *)(a2 + 8LL * v32) * v20[v32];
      }
    }
    else
    {
      v44 = 0;
      do
      {
        *(double *)(a2 + v44) = *(double *)(a2 + v44) * v20[v44 / 8];
        v44 += 8LL;
      }
      while ( v44 != 8LL * (unsigned int)(v3 - 1) + 8 );
    }
  }
  v33 = &v54[256 * ((v51 * (v51 + 1)) >> 1) - 256];
  result = (unsigned int)(16 * (v51 - 1));
  if ( v51 - 1 < 0 )
    return result;
  v46 = 16 * (v51 - 1);
  v48 = -1;
  v35 = (double *)(a2 + 8LL * (int)result);
  v53 = v35;
  while ( 2 )
  {
    v41 = v46;
    v38 = v33;
    if ( v3 > (int)(v46 + 15) )
      goto LABEL_34;
LABEL_31:
    v42 = v35;
    v35 -= 16;
    v33 = v38 - 256;
    ClpCholeskyDense::solveB1(this, v38, v3 - v41, v42);
    ++v48;
    result = v41 - 16;
    v46 = v41 - 16;
    if ( v41 )
    {
LABEL_32:
      v3 = *((_DWORD *)this + 11);
      if ( v51 <= (int)(v51 - 1 - v48) )
        continue;
      v36 = v53;
      v37 = 16 * (v51 - 1);
      v38 = &v33[256 * ~(unsigned __int64)v48];
      while ( 1 )
      {
        if ( v3 <= v37 + 15 )
        {
          v39 = v33;
          v33 -= 256;
          ClpCholeskyDense::solveB2(this, v39, v3 - v37, v35, v36);
          v37 -= 16;
          v36 -= 16;
          if ( v38 == v33 )
            goto LABEL_30;
        }
        else
        {
          v40 = v33;
          v33 -= 256;
          ClpCholeskyDense::solveB2(this, v40, 16, v35, v36);
          v37 -= 16;
          v36 -= 16;
          if ( v33 == v38 )
          {
LABEL_30:
            v41 = v46;
            v3 = *((_DWORD *)this + 11);
            if ( v3 <= (int)(v46 + 15) )
              goto LABEL_31;
LABEL_34:
            v43 = v35;
            v35 -= 16;
            v33 = v38 - 256;
            ClpCholeskyDense::solveB1(this, v38, 16, v43);
            v46 -= 16;
            ++v48;
            result = v46;
            if ( v46 == -16 )
              return result;
            goto LABEL_32;
          }
        }
        v3 = *((_DWORD *)this + 11);
      }
    }
    return result;
  }
}

