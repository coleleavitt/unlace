__int64 __fastcall ClpModel::addColumns(
        ClpModel *this,
        int a2,
        const double *a3,
        const double *a4,
        const double *a5,
        const int *a6,
        const int *a7,
        const int *a8,
        const double *a9)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rax
  int v13; // r9d
  int v14; // ecx
  __m128i v15; // xmm0
  unsigned int v16; // r8d
  __m128i *v17; // rdx
  unsigned int v18; // eax
  __m128i v19; // xmm0
  unsigned int v20; // ecx
  int v21; // ebp
  unsigned int v22; // eax
  int v23; // ecx
  int *v24; // rbx
  int *v25; // rbp
  unsigned __int64 v26; // r8
  int v27; // r10d
  int v28; // esi
  int *v29; // rdx
  __int64 v30; // r11
  const int *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  __m128i v34; // xmm1
  __int64 v35; // rdi
  double *v36; // r15
  const double *v38; // r9
  double *v39; // rdi
  double *v40; // rax
  const double *v41; // rdx
  __int64 v42; // r11
  __int128 v43; // xmm2
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm3
  __int64 v47; // r11
  __int64 v48; // rax
  double *v49; // [rsp+0h] [rbp-88h]
  double *v50; // [rsp+0h] [rbp-88h]
  ClpModel *v52; // [rsp+20h] [rbp-68h]

  v52 = this;
  if ( a2 )
  {
    v10 = a2 + 1;
    if ( a2 <= 0 )
    {
      if ( v10 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v24 = (int *)operator new[](4 * v10);
        v25 = (int *)operator new[](0);
        v48 = operator new[](0);
        *v24 = 0;
        v36 = (double *)v48;
LABEL_37:
        ClpModel::addColumns(v52, a2, a3, a4, a5, v24, v25, v36);
        operator delete[](v24);
        operator delete[](v25);
        operator delete[](v36);
        this = v52;
        return ClpModel::synchronizeMatrix(this);
      }
LABEL_57:
      __cxa_throw_bad_array_new_length();
    }
    v11 = (unsigned int)(a2 - 1);
    v12 = -(int)((unsigned __int64)a7 >> 2) & 3;
    if ( (unsigned int)v11 <= 6 )
    {
      v20 = 0;
      v21 = 0;
    }
    else
    {
      if ( (_DWORD)v12 )
      {
        v13 = *a7;
        v14 = 1;
        if ( (_DWORD)v12 != 1 )
        {
          v13 += a7[1];
          v14 = 2;
          if ( (_DWORD)v12 != 2 )
          {
            v13 += a7[2];
            v14 = 3;
          }
        }
      }
      else
      {
        v14 = 0;
        v13 = 0;
      }
      v15 = 0;
      v16 = a2 - v12;
      v17 = (__m128i *)&a7[v12];
      v18 = 0;
      do
      {
        ++v18;
        v15 = _mm_add_epi32(v15, *v17++);
      }
      while ( v16 >> 2 > v18 );
      v19 = _mm_add_epi32(v15, _mm_srli_si128(v15, 8));
      v20 = (v16 & 0xFFFFFFFC) + v14;
      v21 = v13 + _mm_cvtsi128_si32(_mm_add_epi32(v19, _mm_srli_si128(v19, 4)));
      if ( v16 == (v16 & 0xFFFFFFFC) )
      {
LABEL_18:
        if ( v10 <= 0x1FFFFFFFFFFFFFFELL )
        {
          v24 = (int *)operator new[](4 * v10);
          if ( (unsigned __int64)v21 <= 0x1FFFFFFFFFFFFFFELL )
          {
            v49 = (double *)v21;
            v25 = (int *)operator new[](4LL * v21);
            v50 = (double *)operator new[](8LL * (_QWORD)v49);
            *v24 = 0;
            v26 = 0;
            v27 = 0;
            do
            {
              v28 = a7[v26 / 4];
              v29 = &v25[v27];
              v30 = a6[v26 / 4];
              v31 = &a8[v30];
              if ( v29 != v31 && v28 )
              {
                if ( v28 >> 3 > 0 )
                {
                  v32 = 0;
                  v33 = (unsigned int)((v28 >> 3) - 1);
                  do
                  {
                    v34 = _mm_loadu_si128((const __m128i *)&v31[v32]);
                    *(__m128i *)&v29[v32 + 4] = _mm_loadu_si128((const __m128i *)&v31[v32 + 4]);
                    *(__m128i *)&v29[v32] = v34;
                    v32 += 8;
                  }
                  while ( v32 != 8 * (v33 + 1) );
                  v35 = 32 * ((int)v33 + 1LL);
                  v31 = (const int *)((char *)v31 + v35);
                  v29 = (int *)((char *)v29 + v35);
                }
                switch ( v28 % 8 )
                {
                  case 1:
                    goto LABEL_45;
                  case 2:
                    goto LABEL_44;
                  case 3:
                    goto LABEL_43;
                  case 4:
                    goto LABEL_42;
                  case 5:
                    goto LABEL_41;
                  case 6:
                    goto LABEL_40;
                  case 7:
                    v29[6] = v31[6];
LABEL_40:
                    v29[5] = v31[5];
LABEL_41:
                    v29[4] = v31[4];
LABEL_42:
                    v29[3] = v31[3];
LABEL_43:
                    v29[2] = v31[2];
LABEL_44:
                    v29[1] = v31[1];
LABEL_45:
                    *v29 = *v31;
                    break;
                  default:
                    break;
                }
              }
              v38 = &a9[v30];
              v39 = &v50[v27];
              if ( v39 != v38 && v28 )
              {
                if ( v28 >> 3 > 0 )
                {
                  v40 = &v50[v27];
                  v41 = &a9[v30];
                  v42 = (unsigned int)((v28 >> 3) - 1);
                  do
                  {
                    v43 = *((_OWORD *)v41 + 1);
                    v40 += 8;
                    v41 += 8;
                    v44 = *((_OWORD *)v41 - 2);
                    v45 = *((_OWORD *)v41 - 1);
                    v46 = *((_OWORD *)v41 - 4);
                    *((_OWORD *)v40 - 3) = v43;
                    *((_OWORD *)v40 - 4) = v46;
                    *((_OWORD *)v40 - 2) = v44;
                    *((_OWORD *)v40 - 1) = v45;
                  }
                  while ( v40 != &v39[8 * v42 + 8] );
                  v47 = ((int)v42 + 1LL) << 6;
                  v38 = (const double *)((char *)v38 + v47);
                  v39 = (double *)((char *)v39 + v47);
                }
                switch ( v28 % 8 )
                {
                  case 1:
                    goto LABEL_34;
                  case 2:
                    goto LABEL_33;
                  case 3:
                    goto LABEL_32;
                  case 4:
                    goto LABEL_31;
                  case 5:
                    goto LABEL_30;
                  case 6:
                    goto LABEL_29;
                  case 7:
                    v39[6] = v38[6];
LABEL_29:
                    v39[5] = v38[5];
LABEL_30:
                    v39[4] = v38[4];
LABEL_31:
                    v39[3] = v38[3];
LABEL_32:
                    v39[2] = v38[2];
LABEL_33:
                    v39[1] = v38[1];
LABEL_34:
                    *v39 = *v38;
                    break;
                  default:
                    break;
                }
              }
              v27 += v28;
              v24[v26 / 4 + 1] = v27;
              v26 += 4LL;
            }
            while ( v26 != 4 * v11 + 4 );
            v36 = v50;
            goto LABEL_37;
          }
        }
        goto LABEL_57;
      }
    }
    v21 += a7[v20];
    if ( (int)(v20 + 1) < a2 )
    {
      v21 += a7[v20 + 1];
      if ( a2 > (int)(v20 + 2) )
      {
        v21 += a7[v20 + 2];
        if ( a2 > (int)(v20 + 3) )
        {
          v21 += a7[v20 + 3];
          if ( a2 > (int)(v20 + 4) )
          {
            v21 += a7[v20 + 4];
            v22 = v20 + 5;
            if ( a2 > (int)(v20 + 5) )
            {
              v23 = v20 + 6;
              v21 += a7[v22];
              if ( a2 > v23 )
                v21 += a7[v23];
            }
          }
        }
      }
    }
    goto LABEL_18;
  }
  return ClpModel::synchronizeMatrix(this);
}

