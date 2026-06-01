__int64 __fastcall CoinFactorization::replaceRow(
        CoinFactorization *this,
        int a2,
        int a3,
        const int *a4,
        const double *a5)
{
  CoinFactorization *v5; // r14
  bool v7; // cc
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  int *v18; // rsi
  __int64 v19; // rdx
  const __m128i *v20; // rax
  int v21; // edx
  __int64 v22; // rdx
  _DWORD *v23; // rsi
  int v24; // edi
  double v25; // xmm3_8
  double v26; // xmm1_8
  const int *v27; // rbp
  __int64 v28; // rdx
  char *v29; // rbx
  _DWORD *v30; // rax
  char *v31; // r13
  __int64 v32; // r13
  __int64 v33; // rbx
  __int64 v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // r15
  __int64 v38; // rax
  double v39; // xmm0_8
  int v40; // esi
  int ColumnSpaceIterate; // eax
  __int64 v43; // r14
  __int64 v44; // r13
  const int *v45; // rax
  int v46; // r12d
  __int64 v47; // rbx
  int v48; // esi
  __int64 v49; // rax
  char RowSpaceIterate; // al
  const double *v51; // r9
  int v54[2]; // [rsp+8h] [rbp-218h]
  int v55; // [rsp+10h] [rbp-210h]
  __int64 v56; // [rsp+10h] [rbp-210h]
  __int64 v57; // [rsp+18h] [rbp-208h]
  const int *v58; // [rsp+18h] [rbp-208h]
  int v60; // [rsp+24h] [rbp-1FCh]
  __int64 v61; // [rsp+28h] [rbp-1F8h]
  int *v62; // [rsp+30h] [rbp-1F0h]
  int *v63; // [rsp+38h] [rbp-1E8h]
  const double *v64; // [rsp+40h] [rbp-1E0h]
  const double *v65; // [rsp+40h] [rbp-1E0h]
  CoinFactorization *v66; // [rsp+48h] [rbp-1D8h]
  const int *v67; // [rsp+50h] [rbp-1D0h]
  _OWORD v68[28]; // [rsp+58h] [rbp-1C8h] BYREF

  if ( !a3 )
    return 0;
  v5 = this;
  v7 = *((_DWORD *)this + 102) <= -2;
  v8 = *((_QWORD *)this + 69);
  v9 = *((_QWORD *)this + 50);
  v10 = a2;
  v11 = 4LL * a2;
  v12 = *((_QWORD *)v5 + 75);
  v13 = *((_QWORD *)v5 + 84);
  if ( v7 )
    v9 = 0;
  v14 = *(_DWORD *)(v9 + 4 * v10);
  v15 = *((_QWORD *)v5 + 26);
  if ( *((int *)v5 + 54) <= -2 )
    v15 = 0;
  v60 = v14;
  v16 = *(_DWORD *)(v15 + v11);
  v62 = (int *)(v15 + v11);
  v17 = *((_QWORD *)v5 + 23);
  if ( *((int *)v5 + 48) <= -2 )
    v17 = 0;
  v61 = v17;
  if ( *((int *)v5 + 140) <= -2 )
    v8 = 0;
  v18 = (int *)(v17 + v11);
  v63 = v18;
  if ( *((int *)v5 + 152) <= -2 )
    v12 = 0;
  v55 = *v18;
  if ( *((int *)v5 + 170) <= -2 )
    v13 = 0;
  if ( v16 && v16 <= 99 )
  {
    v19 = *((_QWORD *)v5 + 63);
    if ( *((int *)v5 + 128) <= -2 )
      v19 = 0;
    v20 = (const __m128i *)(v19 + 4LL * *v18);
    v21 = v16 >> 3;
    if ( v16 >> 3 <= 0 )
    {
      v23 = v68;
    }
    else
    {
      v68[1] = _mm_loadu_si128(v20 + 1);
      v68[0] = _mm_loadu_si128(v20);
      if ( v21 != 1 )
      {
        v68[3] = _mm_loadu_si128(v20 + 3);
        v68[2] = _mm_loadu_si128(v20 + 2);
        if ( v21 != 2 )
        {
          v68[5] = _mm_loadu_si128(v20 + 5);
          v68[4] = _mm_loadu_si128(v20 + 4);
          if ( v21 != 3 )
          {
            v68[7] = _mm_loadu_si128(v20 + 7);
            v68[6] = _mm_loadu_si128(v20 + 6);
            if ( v21 != 4 )
            {
              v68[9] = _mm_loadu_si128(v20 + 9);
              v68[8] = _mm_loadu_si128(v20 + 8);
              if ( v21 != 5 )
              {
                v68[11] = _mm_loadu_si128(v20 + 11);
                v68[10] = _mm_loadu_si128(v20 + 10);
                if ( v21 != 6 )
                {
                  v68[13] = _mm_loadu_si128(v20 + 13);
                  v68[12] = _mm_loadu_si128(v20 + 12);
                  if ( v21 != 7 )
                  {
                    v68[15] = _mm_loadu_si128(v20 + 15);
                    v68[14] = _mm_loadu_si128(v20 + 14);
                    if ( v21 != 8 )
                    {
                      v68[17] = _mm_loadu_si128(v20 + 17);
                      v68[16] = _mm_loadu_si128(v20 + 16);
                      if ( v21 != 9 )
                      {
                        v68[19] = _mm_loadu_si128(v20 + 19);
                        v68[18] = _mm_loadu_si128(v20 + 18);
                        if ( v21 != 10 )
                        {
                          v68[21] = _mm_loadu_si128(v20 + 21);
                          v68[20] = _mm_loadu_si128(v20 + 20);
                          if ( v21 != 11 )
                          {
                            v68[23] = _mm_loadu_si128(v20 + 23);
                            v68[22] = _mm_loadu_si128(v20 + 22);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v22 = 2 * (v21 - 1 + 1LL);
      v23 = &v68[v22];
      v20 = (const __m128i *)((char *)v20 + v22 * 16);
    }
    switch ( v16 % 8 )
    {
      case 1:
        goto LABEL_71;
      case 2:
        goto LABEL_70;
      case 3:
        goto LABEL_69;
      case 4:
        goto LABEL_68;
      case 5:
        goto LABEL_67;
      case 6:
        goto LABEL_66;
      case 7:
        v23[6] = v20[1].m128i_i32[2];
LABEL_66:
        v23[5] = v20[1].m128i_i32[1];
LABEL_67:
        v23[4] = v20[1].m128i_i32[0];
LABEL_68:
        v23[3] = v20->m128i_i32[3];
LABEL_69:
        v23[2] = v20->m128i_i32[2];
LABEL_70:
        v23[1] = v20->m128i_i32[1];
LABEL_71:
        *v23 = v20->m128i_i32[0];
        break;
      default:
        break;
    }
    if ( a3 <= 0 )
    {
LABEL_39:
      if ( v16 > 0 )
      {
        v28 = (unsigned int)(v16 - 1);
        v29 = (char *)v68 + 4;
        v30 = v68;
        v57 = v13;
        v31 = (char *)v68 + 4 * v28 + 4;
        while ( 1 )
        {
          if ( (int)*v30 >= 0 )
            printf("current column %d not in new\n", *v30);
          v30 = v29;
          if ( v29 == v31 )
            break;
          v29 += 4;
        }
        v13 = v57;
      }
      goto LABEL_46;
    }
    v51 = a5;
    v66 = v5;
    v67 = a4;
    v43 = v12;
    v44 = v8;
    v27 = a4;
    v45 = &a4[a3 - 1 + 1];
    v46 = v16;
    v47 = v13;
    v58 = v45;
    while ( 1 )
    {
      v48 = *v27;
      if ( v46 <= 0 )
        break;
      if ( v48 != LODWORD(v68[0]) )
      {
        v49 = 1;
        while ( 1 )
        {
          v24 = v49;
          if ( v49 == (unsigned int)(v46 - 1) + 1LL )
            break;
          if ( *((_DWORD *)v68 + v49++) == v48 )
            goto LABEL_75;
        }
LABEL_34:
        if ( v46 != v24 )
          goto LABEL_35;
        goto LABEL_76;
      }
      v24 = 0;
LABEL_75:
      *((_DWORD *)v68 + v24) = -1;
      if ( v46 != v24 )
      {
LABEL_35:
        v25 = *(double *)(v44 + 8LL * v48);
        v26 = *v51 * v25;
        if ( fabs(*(double *)(v43 + 8LL * *(int *)(v47 + 4LL * (v55 + v24))) - v26) > 0.001 )
        {
          v65 = v51;
          printf(
            "column %d, old value %g new %g (el %g, piv %g)\n",
            v48,
            *(double *)(v43 + 8LL * *(int *)(v47 + 4LL * (v55 + v24))),
            v26,
            *v51,
            v25);
          v51 = v65;
        }
        goto LABEL_37;
      }
LABEL_76:
      v64 = v51;
      printf("new column %d not in current\n", v48);
      v51 = v64;
LABEL_37:
      ++v27;
      ++v51;
      if ( v27 == v58 )
      {
        v13 = v47;
        v5 = v66;
        v16 = v46;
        a4 = v67;
        v8 = v44;
        goto LABEL_39;
      }
    }
    v24 = 0;
    goto LABEL_34;
  }
LABEL_46:
  if ( *(_DWORD *)(v61 + 4LL * v60) - (a3 + v55) < 0 )
  {
    v56 = v13;
    RowSpaceIterate = CoinFactorization::getRowSpaceIterate(v5, a2, a3);
    v13 = v56;
    if ( !RowSpaceIterate )
      return 3;
  }
  v32 = *((_QWORD *)v5 + 63);
  if ( *((int *)v5 + 128) <= -2 )
    v32 = 0;
  *v62 = a3;
  if ( a3 > 0 )
  {
    v33 = 4LL * *v63;
    v34 = v33 + v32;
    *(_QWORD *)v54 = 4LL * (unsigned int)(a3 - 1) + 4;
    v35 = v13 + v33;
    v36 = 0;
    v37 = v35;
    while ( 1 )
    {
      v38 = a4[v36 / 4];
      v39 = *(double *)(v8 + 8 * v38);
      v40 = a4[v36 / 4];
      *(_DWORD *)(v34 + v36) = v38;
      ColumnSpaceIterate = CoinFactorization::getColumnSpaceIterate(v5, v40, v39 * a5[v36 / 4], a2);
      if ( ColumnSpaceIterate < 0 )
        break;
      *(_DWORD *)(v37 + v36) = ColumnSpaceIterate;
      v36 += 4LL;
      if ( v36 == *(_QWORD *)v54 )
        return 0;
    }
    return 3;
  }
  return 0;
}

