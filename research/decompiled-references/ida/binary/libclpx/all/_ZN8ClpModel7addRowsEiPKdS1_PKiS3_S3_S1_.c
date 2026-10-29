__int64 __fastcall ClpModel::addRows(
        ClpModel *this,
        int a2,
        const double *a3,
        const double *a4,
        const int *a5,
        unsigned __int64 a6,
        const int *a7,
        const double *a8)
{
  unsigned __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v12; // rax
  int v13; // r9d
  int v14; // ecx
  __m128i v15; // xmm0
  unsigned int v16; // r8d
  __m128i *v17; // rdx
  unsigned int v18; // eax
  __m128i v19; // xmm0
  signed int v20; // ecx
  int v21; // r12d
  int v22; // eax
  int v23; // ecx
  int *v24; // rbp
  double *v25; // r12
  unsigned __int64 v26; // r10
  int v27; // esi
  int v28; // edi
  int *v29; // rdx
  __int64 v30; // r11
  const int *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __m128i v34; // xmm1
  __int64 v35; // r8
  double *v37; // r8
  const double *v38; // r9
  double *v39; // rax
  const double *v40; // rdx
  __int64 v41; // r11
  __int128 v42; // xmm2
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm3
  __int64 v46; // r11
  __int64 v47; // rax
  int *v48; // [rsp+8h] [rbp-80h]
  ClpModel *v50; // [rsp+28h] [rbp-60h]

  v50 = this;
  if ( a2 )
  {
    v9 = a2 + 1;
    if ( a2 <= 0 )
    {
      if ( v9 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v24 = (int *)operator new[](4 * v9);
        v48 = (int *)operator new[](0);
        v47 = operator new[](0);
        *v24 = 0;
        v25 = (double *)v47;
LABEL_36:
        ClpModel::addRows(v50, a2, a3, a4, v24, v48, v25);
        operator delete[](v24);
        operator delete[](v48);
        operator delete[](v25);
        this = v50;
        return ClpModel::synchronizeMatrix(this);
      }
LABEL_56:
      __cxa_throw_bad_array_new_length();
    }
    v10 = (unsigned int)(a2 - 1);
    v12 = -(int)(a6 >> 2) & 3;
    if ( (unsigned int)v10 <= 6 )
    {
      v20 = 0;
      v21 = 0;
    }
    else
    {
      if ( (_DWORD)v12 )
      {
        v13 = *(_DWORD *)a6;
        v14 = 1;
        if ( (_DWORD)v12 != 1 )
        {
          v13 += *(_DWORD *)(a6 + 4);
          v14 = 2;
          if ( (_DWORD)v12 != 2 )
          {
            v13 += *(_DWORD *)(a6 + 8);
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
      v17 = (__m128i *)(a6 + 4 * v12);
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
        if ( v9 <= 0x1FFFFFFFFFFFFFFELL )
        {
          v24 = (int *)operator new[](4 * v9);
          if ( (unsigned __int64)v21 <= 0x1FFFFFFFFFFFFFFELL )
          {
            v48 = (int *)operator new[](4LL * v21);
            v25 = (double *)operator new[](8LL * v21);
            *v24 = 0;
            v26 = 0;
            v27 = 0;
            do
            {
              v28 = *(_DWORD *)(a6 + v26);
              v29 = &v48[v27];
              v30 = a5[v26 / 4];
              v31 = &a7[v30];
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
                    goto LABEL_44;
                  case 2:
                    goto LABEL_43;
                  case 3:
                    goto LABEL_42;
                  case 4:
                    goto LABEL_41;
                  case 5:
                    goto LABEL_40;
                  case 6:
                    goto LABEL_39;
                  case 7:
                    v29[6] = v31[6];
LABEL_39:
                    v29[5] = v31[5];
LABEL_40:
                    v29[4] = v31[4];
LABEL_41:
                    v29[3] = v31[3];
LABEL_42:
                    v29[2] = v31[2];
LABEL_43:
                    v29[1] = v31[1];
LABEL_44:
                    *v29 = *v31;
                    break;
                  default:
                    break;
                }
              }
              v37 = &v25[v27];
              v38 = &a8[v30];
              if ( v37 != v38 && v28 )
              {
                if ( v28 >> 3 > 0 )
                {
                  v39 = &v25[v27];
                  v40 = &a8[v30];
                  v41 = (unsigned int)((v28 >> 3) - 1);
                  do
                  {
                    v42 = *((_OWORD *)v40 + 1);
                    v39 += 8;
                    v40 += 8;
                    v43 = *((_OWORD *)v40 - 2);
                    v44 = *((_OWORD *)v40 - 1);
                    v45 = *((_OWORD *)v40 - 4);
                    *((_OWORD *)v39 - 3) = v42;
                    *((_OWORD *)v39 - 4) = v45;
                    *((_OWORD *)v39 - 2) = v43;
                    *((_OWORD *)v39 - 1) = v44;
                  }
                  while ( v39 != &v37[8 * v41 + 8] );
                  v46 = ((int)v41 + 1LL) << 6;
                  v38 = (const double *)((char *)v38 + v46);
                  v37 = (double *)((char *)v37 + v46);
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
                    v37[6] = v38[6];
LABEL_29:
                    v37[5] = v38[5];
LABEL_30:
                    v37[4] = v38[4];
LABEL_31:
                    v37[3] = v38[3];
LABEL_32:
                    v37[2] = v38[2];
LABEL_33:
                    v37[1] = v38[1];
LABEL_34:
                    *v37 = *v38;
                    break;
                  default:
                    break;
                }
              }
              v27 += v28;
              v24[v26 / 4 + 1] = v27;
              v26 += 4LL;
            }
            while ( v26 != 4 * v10 + 4 );
            goto LABEL_36;
          }
        }
        goto LABEL_56;
      }
    }
    v21 += *(_DWORD *)(a6 + 4LL * v20);
    if ( v20 + 1 < a2 )
    {
      v21 += *(_DWORD *)(a6 + 4LL * (v20 + 1));
      if ( a2 > v20 + 2 )
      {
        v21 += *(_DWORD *)(a6 + 4LL * (v20 + 2));
        if ( a2 > v20 + 3 )
        {
          v21 += *(_DWORD *)(a6 + 4LL * (v20 + 3));
          if ( a2 > v20 + 4 )
          {
            v21 += *(_DWORD *)(a6 + 4LL * (v20 + 4));
            v22 = v20 + 5;
            if ( a2 > v20 + 5 )
            {
              v23 = v20 + 6;
              v21 += *(_DWORD *)(a6 + 4LL * v22);
              if ( a2 > v23 )
                v21 += *(_DWORD *)(a6 + 4LL * v23);
            }
          }
        }
      }
    }
    goto LABEL_18;
  }
  return ClpModel::synchronizeMatrix(this);
}

