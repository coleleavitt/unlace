__int64 __fastcall CoinPackedMatrix::resizeForAddingMinorVectors(CoinPackedMatrix *this, const int *a2)
{
  __m128d v4; // xmm1
  double v5; // xmm0_8
  __m128d v6; // xmm4
  int v7; // edi
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // edi
  int *v13; // r15
  int v14; // esi
  __int64 v15; // r14
  int v16; // edx
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  int v20; // r8d
  unsigned int v21; // eax
  unsigned __int64 v22; // r10
  unsigned int v23; // r13d
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // r12
  char *v27; // r11
  char *v28; // r10
  signed int v29; // r8d
  double v30; // xmm4_8
  int v31; // ecx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // ecx
  char *v38; // rsi
  char *v39; // r8
  int v40; // eax
  int v41; // edx
  __m128d v42; // xmm0
  __m128d v43; // xmm4
  int v44; // edi
  __int64 v45; // rax
  unsigned __int64 v46; // rdi
  __int64 v47; // rbp
  int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // r14
  __int64 v51; // r13
  __int64 v52; // rdi
  __int64 v53; // r15
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // eax
  int *v57; // rcx
  bool v58; // r12
  int *v59; // rdx
  unsigned int v60; // r10d
  __int64 v61; // r8
  __int64 v62; // r10
  __m128i v63; // xmm0
  __int64 v64; // r10
  double v65; // xmm4_8
  int *v66; // rcx
  int v67; // r8d
  _DWORD *v68; // r9
  __m128d v69; // xmm0
  __m128d v70; // xmm1
  __int64 *v71; // r9
  __int64 *v72; // r8
  __int64 *v73; // rcx
  __int64 *v74; // rdx
  __int64 v75; // r10
  __int64 v76; // xmm0_8
  __int64 v77; // r10
  int *v79; // r8
  int *v80; // r11
  int v81; // r12d
  __int64 v82; // rax
  __int64 i; // rcx
  _DWORD *v84; // [rsp+0h] [rbp-68h]
  unsigned int v85; // [rsp+8h] [rbp-60h]
  __int64 v86; // [rsp+8h] [rbp-60h]
  __int64 v87; // [rsp+10h] [rbp-58h]
  __int64 v88; // [rsp+18h] [rbp-50h]
  int *v89; // [rsp+20h] [rbp-48h]

  v4 = (__m128d)*((unsigned __int64 *)this + 3);
  v4.m128d_f64[0] = (v4.m128d_f64[0] + 1.0) * (double)*((int *)this + 16);
  v5 = v4.m128d_f64[0];
  if ( fabs(v4.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v6.m128d_f64[0] = (double)(int)v4.m128d_f64[0];
    *(_QWORD *)&v5 = COERCE_UNSIGNED_INT64(
                       COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v4, v6).m128d_f64[0] & 0x3FF0000000000000LL)
                     + v6.m128d_f64[0])
                   | *(_QWORD *)&v4.m128d_f64[0] & 0x8000000000000000LL;
  }
  v7 = (int)v5;
  if ( *((_DWORD *)this + 19) >= (int)v5 )
    v7 = *((_DWORD *)this + 19);
  *((_DWORD *)this + 19) = v7;
  v8 = v7 + 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_98;
  v9 = operator new[](4 * v8);
  v10 = *((int *)this + 19);
  v84 = (_DWORD *)v9;
  if ( v10 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_98;
  v11 = operator new[](4 * v10);
  v12 = *((_DWORD *)this + 16);
  v13 = (int *)v11;
  v14 = v12 - 1;
  v15 = v12;
  v16 = v12 - 1;
  if ( v12 - 1 >= 0 )
  {
    v15 = v12;
    v17 = *((_QWORD *)this + 7);
    v18 = 4LL * v12;
    v19 = v17 + v18 - 16;
    if ( (v17 + v18 <= (unsigned __int64)&v13[(unsigned __int64)v18 / 4 - 4]
       || v19 >= (unsigned __int64)&v13[(unsigned __int64)v18 / 4])
      && (unsigned int)v12 > 8 )
    {
      v20 = v12 - 1;
      v21 = (v19 >> 2) & 3;
      if ( v21 )
      {
        v13[v14] = *(_DWORD *)(v17 + 4LL * v14) + a2[v14];
        v20 = v12 - 2;
        if ( v21 != 1 )
        {
          v13[v20] = *(_DWORD *)(v17 + 4LL * v20) + a2[v20];
          v20 = v12 - 3;
          if ( v21 != 2 )
          {
            v13[v20] = *(_DWORD *)(v17 + 4LL * v20) + a2[v20];
            v20 = v12 - 4;
          }
        }
      }
      v85 = v12 - v21;
      v22 = v18 + 4 * ~(unsigned __int64)v21 - 12;
      v23 = (v12 - v21) >> 2;
      v24 = 0;
      v25 = 0;
      v26 = v17 + v22;
      v27 = (char *)a2 + v22;
      v28 = (char *)v13 + v22;
      do
      {
        ++v25;
        *(__m128i *)&v28[v24] = _mm_shuffle_epi32(
                                  _mm_add_epi32(
                                    _mm_shuffle_epi32(_mm_loadu_si128((const __m128i *)&v27[v24]), 27),
                                    _mm_shuffle_epi32(*(__m128i *)(v26 + v24), 27)),
                                  27);
        v24 -= 16;
      }
      while ( v23 > v25 );
      v29 = v20 - (v85 & 0xFFFFFFFC);
      if ( v85 != (v85 & 0xFFFFFFFC) )
      {
        v13[v29] = *(_DWORD *)(v17 + 4LL * v29) + a2[v29];
        if ( v29 )
        {
          v13[v29 - 1] = *(_DWORD *)(v17 + 4LL * (v29 - 1)) + a2[v29 - 1];
          if ( v29 != 1 )
          {
            v13[v29 - 2] = *(_DWORD *)(v17 + 4LL * (v29 - 2)) + a2[v29 - 2];
            if ( v29 != 2 )
            {
              v13[v29 - 3] = *(_DWORD *)(v17 + 4LL * (v29 - 3)) + a2[v29 - 3];
              if ( v29 != 3 )
              {
                v13[v29 - 4] = *(_DWORD *)(v17 + 4LL * (v29 - 4)) + a2[v29 - 4];
                if ( v29 != 4 )
                  v13[v29 - 5] = *(_DWORD *)(v17 + 4LL * (v29 - 5)) + a2[v29 - 5];
              }
            }
          }
        }
      }
    }
    else
    {
      v82 = v14;
      for ( i = v14 - 1LL; ; --i )
      {
        v13[v82] = *(_DWORD *)(v17 + 4 * v82) + a2[v82];
        v82 = i;
        if ( i == v14 - 1LL - (unsigned int)v14 )
          break;
      }
    }
  }
  v30 = *((double *)this + 2);
  *v84 = 0;
  if ( v30 == 0.0 )
  {
    if ( v12 > 0 )
    {
      v31 = 0;
      v32 = 0;
      do
      {
        v31 += v13[v32 / 4];
        v84[v32 / 4 + 1] = v31;
        v32 += 4LL;
      }
      while ( v32 != 4LL * (unsigned int)v14 + 4 );
    }
  }
  else if ( v12 > 0 )
  {
    v65 = v30 + 1.0;
    v66 = v13;
    v67 = 0;
    v68 = v84 + 1;
    do
    {
      v69 = 0;
      v69.m128d_f64[0] = (double)*v66 * v65;
      if ( fabs(v69.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v70.m128d_f64[0] = (double)(int)v69.m128d_f64[0];
        *(_QWORD *)&v69.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v69, v70).m128d_f64[0] & 0x3FF0000000000000LL)
                                       + v70.m128d_f64[0])
                                     | *(_QWORD *)&v69.m128d_f64[0] & 0x8000000000000000LL;
      }
      ++v66;
      ++v68;
      v67 += (int)v69.m128d_f64[0];
      *(v68 - 1) = v67;
    }
    while ( v66 != &v13[v14 + 1] );
  }
  if ( v14 >= 0 )
  {
    v33 = ((unsigned __int64)&v13[v15 - 4] >> 2) & 3;
    if ( (int)v33 + 3 > (unsigned int)v14 )
      goto LABEL_36;
    if ( (_DWORD)v33 )
    {
      v13[v14] -= a2[v14];
      v16 = v12 - 2;
      if ( (_DWORD)v33 != 1 )
      {
        v13[v16] -= a2[v16];
        v16 = v12 - 3;
        if ( (_DWORD)v33 != 2 )
        {
          v13[v16] -= a2[v16];
          v16 = v12 - 4;
        }
      }
    }
    v34 = v12 - v33;
    v35 = 4 * v15 + 4 * ~v33 - 12;
    v36 = 0;
    v37 = 0;
    v38 = (char *)v13 + v35;
    v39 = (char *)a2 + v35;
    do
    {
      ++v37;
      *(__m128i *)&v38[v36] = _mm_shuffle_epi32(
                                _mm_sub_epi32(
                                  _mm_shuffle_epi32(*(__m128i *)&v38[v36], 27),
                                  _mm_shuffle_epi32(_mm_loadu_si128((const __m128i *)&v39[v36]), 27)),
                                27);
      v36 -= 16;
    }
    while ( v34 >> 2 > v37 );
    v16 -= v34 & 0xFFFFFFFC;
    if ( (v34 & 0xFFFFFFFC) != v34 )
    {
LABEL_36:
      v13[v16] -= a2[v16];
      if ( v16 )
      {
        v13[v16 - 1] -= a2[v16 - 1];
        if ( v16 != 1 )
        {
          v13[v16 - 2] -= a2[v16 - 2];
          if ( v16 != 2 )
          {
            v13[v16 - 3] -= a2[v16 - 3];
            v40 = v16 - 4;
            if ( v16 != 3 )
            {
              v41 = v16 - 5;
              v13[v40] -= a2[v40];
              if ( v41 != -1 )
                v13[v41] -= a2[v41];
            }
          }
        }
      }
    }
  }
  v42 = 0;
  v42.m128d_f64[0] = (double)(int)v84[v15] * (*((double *)this + 3) + 1.0);
  if ( fabs(v42.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v43.m128d_f64[0] = (double)(int)v42.m128d_f64[0];
    *(_QWORD *)&v42.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                     COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v42, v43).m128d_f64[0] & 0x3FF0000000000000LL)
                                   + v43.m128d_f64[0])
                                 | *(_QWORD *)&v42.m128d_f64[0] & 0x8000000000000000LL;
  }
  v44 = (int)v42.m128d_f64[0];
  if ( *((_DWORD *)this + 20) >= (int)v42.m128d_f64[0] )
    v44 = *((_DWORD *)this + 20);
  *((_DWORD *)this + 20) = v44;
  if ( (unsigned __int64)v44 > 0x1FFFFFFFFFFFFFFELL
    || (v45 = operator new[](4LL * v44), v46 = *((int *)this + 20), v47 = v45, v46 > 0xFFFFFFFFFFFFFFFLL) )
  {
LABEL_98:
    __cxa_throw_bad_array_new_length();
  }
  v86 = operator new[](8 * v46);
  v48 = *((_DWORD *)this + 16) - 1;
  if ( v48 >= 0 )
  {
    v49 = v48;
    v50 = *((_QWORD *)this + 7);
    v51 = *((_QWORD *)this + 6);
    v89 = v13;
    v87 = *((_QWORD *)this + 4);
    v52 = v48 - 1LL;
    v53 = *((_QWORD *)this + 5);
    v88 = v52 - (unsigned int)v48;
    while ( 1 )
    {
      v54 = *(int *)(v51 + 4 * v49);
      v55 = (int)v84[v49];
      v56 = *(_DWORD *)(v50 + 4 * v49);
      v57 = (int *)(v53 + 4 * v54);
      v58 = v56 == 0;
      v59 = (int *)(v47 + 4 * v55);
      if ( v59 != v57 && v56 )
      {
        v60 = v56 >> 3;
        if ( v56 >> 3 > 0 )
        {
          if ( ((unsigned __int64)v57 >= v47 + 4 * v55 + 32 || (unsigned __int64)v59 >= v53 + 4 * v54 + 32) && v60 > 1 )
          {
            v61 = 0;
            v62 = v60 - 1;
            do
            {
              v63 = _mm_loadu_si128((const __m128i *)&v57[v61 + 4]);
              *(__m128i *)&v59[v61] = _mm_loadu_si128((const __m128i *)&v57[v61]);
              *(__m128i *)&v59[v61 + 4] = v63;
              v61 += 8;
            }
            while ( v61 != 8 * (v62 + 1) );
          }
          else
          {
            v79 = (int *)(v47 + 4 * v55);
            v80 = v57;
            v62 = v60 - 1;
            do
            {
              v81 = *v80;
              v79 += 8;
              v80 += 8;
              *(v79 - 8) = v81;
              *(v79 - 7) = *(v80 - 7);
              *(v79 - 6) = *(v80 - 6);
              *(v79 - 5) = *(v80 - 5);
              *(v79 - 4) = *(v80 - 4);
              *(v79 - 3) = *(v80 - 3);
              *(v79 - 2) = *(v80 - 2);
              *(v79 - 1) = *(v80 - 1);
            }
            while ( v79 != &v59[8 * v62 + 8] );
          }
          v64 = 32 * ((int)v62 + 1LL);
          v57 = (int *)((char *)v57 + v64);
          v59 = (int *)((char *)v59 + v64);
        }
        switch ( v56 % 8 )
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
            v59[6] = v57[6];
LABEL_66:
            v59[5] = v57[5];
LABEL_67:
            v59[4] = v57[4];
LABEL_68:
            v59[3] = v57[3];
LABEL_69:
            v59[2] = v57[2];
LABEL_70:
            v59[1] = v57[1];
LABEL_71:
            *v59 = *v57;
            break;
          default:
            break;
        }
        v56 = *(_DWORD *)(v50 + 4 * v49);
        v54 = *(int *)(v51 + 4 * v49);
        v58 = v56 == 0;
      }
      v71 = (__int64 *)(v86 + 8 * v55);
      v72 = (__int64 *)(v87 + 8 * v54);
      if ( v71 != v72 && !v58 )
      {
        if ( v56 >> 3 > 0 )
        {
          v73 = v71;
          v74 = v72;
          v75 = (unsigned int)((v56 >> 3) - 1);
          do
          {
            v76 = *v74;
            v74 += 8;
            v73 += 8;
            *(v73 - 8) = v76;
            *(v73 - 7) = *(v74 - 7);
            *(v73 - 6) = *(v74 - 6);
            *(v73 - 5) = *(v74 - 5);
            *(v73 - 4) = *(v74 - 4);
            *(v73 - 3) = *(v74 - 3);
            *(v73 - 2) = *(v74 - 2);
            *(v73 - 1) = *(v74 - 1);
          }
          while ( v74 != &v72[8 * v75 + 8] );
          v77 = ((int)v75 + 1LL) << 6;
          v72 = (__int64 *)((char *)v72 + v77);
          v71 = (__int64 *)((char *)v71 + v77);
        }
        switch ( v56 % 8 )
        {
          case 1:
            goto LABEL_86;
          case 2:
            goto LABEL_85;
          case 3:
            goto LABEL_84;
          case 4:
            goto LABEL_83;
          case 5:
            goto LABEL_82;
          case 6:
            goto LABEL_81;
          case 7:
            v71[6] = v72[6];
LABEL_81:
            v71[5] = v72[5];
LABEL_82:
            v71[4] = v72[4];
LABEL_83:
            v71[3] = v72[3];
LABEL_84:
            v71[2] = v72[2];
LABEL_85:
            v71[1] = v72[1];
LABEL_86:
            *v71 = *v72;
            break;
          default:
            break;
        }
      }
      v49 = v52;
      if ( v52 == v88 )
        break;
      --v52;
    }
    v13 = v89;
  }
  CoinPackedMatrix::gutsOfDestructor(this);
  *((_QWORD *)this + 7) = v13;
  *((_QWORD *)this + 5) = v47;
  *((_QWORD *)this + 6) = v84;
  *((_QWORD *)this + 4) = v86;
  return v86;
}

