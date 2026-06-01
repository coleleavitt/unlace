void __fastcall ClpPackedMatrix3::swapOne(
        ClpPackedMatrix3 *this,
        const ClpSimplex *a2,
        __int64 (__fastcall ***a3)(ClpPackedMatrix *this),
        int a4)
{
  __int64 v4; // rbp
  int v5; // r15d
  int v7; // r13d
  _DWORD *v8; // rdx
  char v9; // cl
  char v10; // si
  unsigned __int8 v11; // cl
  _DWORD *v12; // rax
  int v13; // edx
  __int64 v14; // r12
  int v15; // ecx
  int *v16; // r14
  __int64 v17; // r12
  int v18; // ebp
  int v19; // edx
  int v20; // edx
  int v21; // r14d
  int v22; // ebp
  __int64 (__fastcall *v23)(ClpPackedMatrix *); // rax
  __int64 (__fastcall **v24)(ClpPackedMatrix *); // rax
  int v25; // ecx
  int v26; // edi
  int v27; // r9d
  __int64 (__fastcall *v28)(ClpPackedMatrix *); // r8
  __int64 v29; // rdx
  int v30; // r10d
  unsigned __int64 v31; // rax
  unsigned int v32; // r10d
  __m128i v33; // xmm2
  __m128d *v34; // rax
  unsigned int v35; // edx
  __m128d v36; // xmm0
  __m128i v37; // xmm2
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int8 v41; // cl
  char v42; // cl
  _DWORD *v43; // [rsp+0h] [rbp-48h]
  const ClpPackedMatrix *v44; // [rsp+0h] [rbp-48h]

  if ( *((_DWORD *)this + 20) )
  {
    v4 = a4;
    v5 = *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * *((int *)this + 4) + 4LL * a4);
    if ( v5 >= 0 )
    {
      v7 = *((_DWORD *)this + 2);
      if ( a4 >= *((_DWORD *)a2 + 27) )
      {
        v8 = (_DWORD *)(*((_QWORD *)this + 9) + 40LL * v7);
        goto LABEL_5;
      }
      v23 = **a3;
      if ( v23 == ClpPackedMatrix::getPackedMatrix )
      {
        v24 = a3[11];
      }
      else
      {
        v44 = (const ClpPackedMatrix *)a3;
        v24 = (__int64 (__fastcall **)(ClpPackedMatrix *))v23((ClpPackedMatrix *)a3);
        v7 = *((_DWORD *)this + 2);
        a3 = (__int64 (__fastcall ***)(ClpPackedMatrix *))v44;
      }
      v25 = *((_DWORD *)v24[7] + v4);
      if ( (*((_BYTE *)a3 + 100) & 1) != 0 )
      {
        v26 = *((_DWORD *)v24[6] + v4);
        v27 = v26 + v25;
        if ( v26 < v26 + v25 )
        {
          v28 = v24[4];
          v29 = v26;
          v30 = *((_DWORD *)v24[7] + v4);
          v31 = (((unsigned __int64)v28 + 8 * v26) >> 3) & 1;
          if ( (unsigned int)(v25 - 1) > 5 )
          {
            if ( (_DWORD)v31 )
            {
              if ( *((double *)v28 + v26) == 0.0 )
                --v25;
              ++v26;
            }
            v32 = v30 - v31;
            v33 = 0;
            v34 = (__m128d *)((char *)v28 + 8 * v29 + 8 * v31);
            v35 = 0;
            do
            {
              v36 = *v34;
              ++v35;
              v34 += 2;
              v33 = _mm_add_epi32(
                      v33,
                      (__m128i)_mm_shuffle_ps(
                                 (__m128)_mm_cmpeq_pd(v36, (__m128d)0LL),
                                 (__m128)_mm_cmpeq_pd(v34[-1], (__m128d)0LL),
                                 136));
            }
            while ( v35 < v32 >> 2 );
            v37 = _mm_add_epi32(v33, _mm_srli_si128(v33, 8));
            v25 += _mm_cvtsi128_si32(_mm_add_epi32(v37, _mm_srli_si128(v37, 4)));
            v26 += v32 & 0xFFFFFFFC;
            if ( (v32 & 0xFFFFFFFC) == v32 )
              goto LABEL_49;
            v29 = v26;
          }
          if ( *((double *)v28 + v29) == 0.0 )
            --v25;
          if ( v27 > v26 + 1 )
          {
            if ( *((double *)v28 + v26 + 1) == 0.0 )
              --v25;
            if ( v27 > v26 + 2 )
            {
              if ( *((double *)v28 + v26 + 2) == 0.0 )
                --v25;
              if ( v27 > v26 + 3 )
              {
                if ( *((double *)v28 + v26 + 3) == 0.0 )
                  --v25;
                if ( v27 > v26 + 4 )
                {
                  if ( *((double *)v28 + v26 + 4) == 0.0 )
                    --v25;
                  if ( v27 > v26 + 5 && *((double *)v28 + v26 + 5) == 0.0 )
                    --v25;
                }
              }
            }
          }
        }
      }
LABEL_49:
      v38 = *((_QWORD *)this + 9);
      if ( v25 <= v7 )
        v7 = v25;
      v39 = 40LL * --v7;
      v8 = (_DWORD *)(v38 + v39);
      if ( v25 != *(_DWORD *)(v38 + v39 + 32) )
      {
        v40 = v38 + v39 - 40;
        do
        {
          v8 = (_DWORD *)v40;
          v40 -= 40;
          --v7;
        }
        while ( v25 != *(_DWORD *)(v40 + 72) );
      }
LABEL_5:
      v9 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v4);
      v10 = v9 & 3;
      if ( v5 >= v8[7] )
      {
        if ( v10 == 1 )
          return;
        v11 = v9 & 7;
        v12 = v8 + 4;
        v13 = v11;
        if ( v11 == 2 )
        {
          v15 = 2;
          LODWORD(v14) = 3;
LABEL_11:
          v16 = &v12[(int)v14];
          v17 = (__int64)&v16[-(unsigned int)(v14 - 1 - v15) - 1];
          do
          {
            v18 = *v16;
            v19 = v5;
            --v16;
            v5 = v18;
            v16[1] = v18 + 1;
            ClpPackedMatrix3::swapOne(this, v7, v19, v18);
          }
          while ( v16 != (int *)v17 );
          return;
        }
        LODWORD(v14) = 3;
        goto LABEL_9;
      }
      v12 = v8 + 4;
      if ( v5 >= v8[6] )
      {
        v21 = 3;
        v14 = 2;
        if ( v10 != 1 )
        {
          v41 = v9 & 7;
          v13 = v41;
          if ( v41 == 2 )
            return;
LABEL_9:
          v15 = v13 == 3;
          goto LABEL_10;
        }
        goto LABEL_17;
      }
      v20 = v8[5];
      v21 = 3;
      v14 = v5 >= v20;
      if ( v10 != 1 )
      {
        v42 = v9 & 7;
        v21 = 2;
        if ( v42 != 2 )
        {
          if ( v42 == 3 )
          {
            if ( v5 < v20 )
            {
              v21 = 1;
              goto LABEL_17;
            }
            v15 = 1;
          }
          else
          {
            v15 = 0;
          }
LABEL_10:
          if ( (int)v14 <= v15 )
            return;
          goto LABEL_11;
        }
      }
      do
      {
LABEL_17:
        v43 = v12;
        v22 = v12[v14 + 1] - 1;
        v12[++v14] = v22;
        ClpPackedMatrix3::swapOne(this, v7, v5, v22);
        v5 = v22;
        v12 = v43;
      }
      while ( v21 > (int)v14 );
    }
  }
}

