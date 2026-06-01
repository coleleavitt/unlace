__int64 __fastcall CoinPackedMatrix::resizeForAddingMajorVectors(CoinPackedMatrix *this, int a2, const __m128i *a3)
{
  __m128d v6; // xmm1
  double v7; // xmm0_8
  __m128d v8; // xmm4
  int v9; // edi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  _DWORD *v13; // r12
  int *v14; // rax
  int v15; // esi
  int *v16; // rcx
  unsigned int v17; // r8d
  __m128i *v18; // rdx
  const __m128i *v19; // rax
  __int64 v20; // r8
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i *v24; // rdi
  int *v25; // rax
  const __m128i *v26; // rcx
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // rax
  int v31; // ebp
  int v32; // edx
  unsigned __int64 v33; // rax
  __m128d v34; // xmm0
  __m128d v35; // xmm4
  int v36; // edi
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  __int64 v39; // r13
  int v40; // eax
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // r9
  __int64 v46; // r8
  int v47; // eax
  int *v48; // rdx
  int *v49; // rcx
  bool v50; // bp
  unsigned int v51; // r10d
  __int64 v52; // r8
  __int64 v53; // r10
  __m128i v54; // xmm0
  __int64 v55; // r10
  _DWORD *v56; // rdi
  int *v57; // rdx
  int v58; // ecx
  __m128d v59; // xmm0
  __m128d v60; // xmm1
  __int64 *v61; // r9
  __int64 *v62; // r8
  __int64 *v63; // rdx
  __int64 *v64; // rcx
  __int64 v65; // r10
  __int64 v66; // xmm0_8
  __int64 v67; // r10
  int *v69; // r8
  int *v70; // r11
  int v71; // ebp
  int *v72; // rdx
  int *v73; // r9
  int v74; // edi
  double v75; // [rsp+0h] [rbp-68h]
  __int64 v76; // [rsp+0h] [rbp-68h]
  __int64 v77; // [rsp+8h] [rbp-60h]
  __int64 v78; // [rsp+10h] [rbp-58h]
  __int64 v79; // [rsp+18h] [rbp-50h]
  int *v80; // [rsp+20h] [rbp-48h]

  v6 = 0;
  v75 = *((double *)this + 2);
  v6.m128d_f64[0] = (double)(a2 + *((_DWORD *)this + 16)) * (*((double *)this + 3) + 1.0);
  v7 = v6.m128d_f64[0];
  if ( fabs(v6.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v8.m128d_f64[0] = (double)(int)v6.m128d_f64[0];
    *(_QWORD *)&v7 = COERCE_UNSIGNED_INT64(
                       COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v6, v8).m128d_f64[0] & 0x3FF0000000000000LL)
                     + v8.m128d_f64[0])
                   | *(_QWORD *)&v6.m128d_f64[0] & 0x8000000000000000LL;
  }
  v9 = (int)v7;
  if ( *((_DWORD *)this + 19) >= (int)v7 )
    v9 = *((_DWORD *)this + 19);
  *((_DWORD *)this + 19) = v9;
  v10 = v9 + 1;
  if ( v10 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_95;
  v11 = operator new[](4 * v10);
  v12 = *((int *)this + 19);
  v13 = (_DWORD *)v11;
  if ( v12 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_95;
  v14 = (int *)operator new[](4 * v12);
  v15 = *((_DWORD *)this + 16);
  v80 = v14;
  v16 = *((int **)this + 7);
  if ( v15 && v16 != v14 )
  {
    v17 = v15 >> 3;
    if ( v15 >> 3 > 0 )
    {
      if ( (v14 >= v16 + 8 || v16 >= v14 + 8) && v17 > 1 )
      {
        v18 = (__m128i *)v14;
        v19 = *((const __m128i **)this + 7);
        v20 = v17 - 1;
        do
        {
          v21 = _mm_loadu_si128(v19);
          v19 += 2;
          v18 += 2;
          v22 = _mm_loadu_si128(v19 - 1);
          v18[-2] = v21;
          v18[-1] = v22;
        }
        while ( v19 != (const __m128i *)&v16[8 * v20 + 8] );
      }
      else
      {
        v72 = *((int **)this + 7);
        v20 = v17 - 1;
        v73 = &v14[8 * v20 + 8];
        do
        {
          v74 = *v72;
          v14 += 8;
          v72 += 8;
          *(v14 - 8) = v74;
          *(v14 - 7) = *(v72 - 7);
          *(v14 - 6) = *(v72 - 6);
          *(v14 - 5) = *(v72 - 5);
          *(v14 - 4) = *(v72 - 4);
          *(v14 - 3) = *(v72 - 3);
          *(v14 - 2) = *(v72 - 2);
          *(v14 - 1) = *(v72 - 1);
        }
        while ( v14 != v73 );
      }
      v23 = 8 * ((int)v20 + 1LL);
      v16 = (int *)((char *)v16 + v23 * 4);
      v14 = &v80[v23];
    }
    switch ( v15 % 8 )
    {
      case 1:
        goto LABEL_22;
      case 2:
        goto LABEL_21;
      case 3:
        goto LABEL_20;
      case 4:
        goto LABEL_19;
      case 5:
        goto LABEL_18;
      case 6:
        goto LABEL_17;
      case 7:
        v14[6] = v16[6];
LABEL_17:
        v14[5] = v16[5];
LABEL_18:
        v14[4] = v16[4];
LABEL_19:
        v14[3] = v16[3];
LABEL_20:
        v14[2] = v16[2];
LABEL_21:
        v14[1] = v16[1];
LABEL_22:
        *v14 = *v16;
        break;
      default:
        break;
    }
  }
  v24 = (__m128i *)&v80[v15];
  if ( a2 && v24 != a3 )
  {
    if ( a2 >> 3 > 0 )
    {
      v25 = &v80[v15];
      v26 = a3;
      v27 = (unsigned int)((a2 >> 3) - 1);
      do
      {
        v28 = _mm_loadu_si128(v26 + 1);
        v25 += 8;
        v26 += 2;
        v29 = _mm_loadu_si128(v26 - 2);
        *((__m128i *)v25 - 1) = v28;
        *((__m128i *)v25 - 2) = v29;
      }
      while ( &v24[2 * v27 + 2] != (__m128i *)v25 );
      v30 = 32 * ((int)v27 + 1LL);
      a3 = (const __m128i *)((char *)a3 + v30);
      v24 = (__m128i *)((char *)v24 + v30);
    }
    switch ( a2 % 8 )
    {
      case 1:
        goto LABEL_36;
      case 2:
        goto LABEL_35;
      case 3:
        goto LABEL_34;
      case 4:
        goto LABEL_33;
      case 5:
        goto LABEL_32;
      case 6:
        goto LABEL_31;
      case 7:
        v24[1].m128i_i32[2] = a3[1].m128i_i32[2];
LABEL_31:
        v24[1].m128i_i32[1] = a3[1].m128i_i32[1];
LABEL_32:
        v24[1].m128i_i32[0] = a3[1].m128i_i32[0];
LABEL_33:
        v24->m128i_i32[3] = a3->m128i_i32[3];
LABEL_34:
        v24->m128i_i32[2] = a3->m128i_i32[2];
LABEL_35:
        v24->m128i_i32[1] = a3->m128i_i32[1];
LABEL_36:
        v24->m128i_i32[0] = a3->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v31 = v15 + a2;
  *v13 = 0;
  *((_DWORD *)this + 16) = v31;
  if ( v75 == 0.0 )
  {
    if ( v31 > 0 )
    {
      v32 = 0;
      v33 = 0;
      do
      {
        v32 += v80[v33 / 4];
        v13[v33 / 4 + 1] = v32;
        v33 += 4LL;
      }
      while ( v33 != 4LL * (unsigned int)(v31 - 1) + 4 );
    }
  }
  else if ( v31 > 0 )
  {
    v56 = v13 + 1;
    v57 = v80;
    v58 = 0;
    do
    {
      v59 = 0;
      v59.m128d_f64[0] = (double)*v57 * (v75 + 1.0);
      if ( fabs(v59.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v60.m128d_f64[0] = (double)(int)v59.m128d_f64[0];
        *(_QWORD *)&v59.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                         COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v59, v60).m128d_f64[0] & 0x3FF0000000000000LL)
                                       + v60.m128d_f64[0])
                                     | *(_QWORD *)&v59.m128d_f64[0] & 0x8000000000000000LL;
      }
      ++v57;
      ++v56;
      v58 += (int)v59.m128d_f64[0];
      *(v56 - 1) = v58;
    }
    while ( v57 != &v80[v31 - 1 + 1] );
  }
  v34 = 0;
  v34.m128d_f64[0] = (double)(int)v13[v31] * (*((double *)this + 3) + 1.0);
  if ( fabs(v34.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v35.m128d_f64[0] = (double)(int)v34.m128d_f64[0];
    *(_QWORD *)&v34.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                     COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v34, v35).m128d_f64[0] & 0x3FF0000000000000LL)
                                   + v35.m128d_f64[0])
                                 | *(_QWORD *)&v34.m128d_f64[0] & 0x8000000000000000LL;
  }
  v36 = (int)v34.m128d_f64[0];
  *((_DWORD *)this + 16) = v15;
  if ( *((_DWORD *)this + 20) >= (int)v34.m128d_f64[0] )
    v36 = *((_DWORD *)this + 20);
  *((_DWORD *)this + 20) = v36;
  if ( (unsigned __int64)v36 > 0x1FFFFFFFFFFFFFFELL
    || (v37 = operator new[](4LL * v36), v38 = *((int *)this + 20), v39 = v37, v38 > 0xFFFFFFFFFFFFFFFLL) )
  {
LABEL_95:
    __cxa_throw_bad_array_new_length();
  }
  v77 = operator new[](8 * v38);
  v40 = *((_DWORD *)this + 16) - 1;
  if ( v40 >= 0 )
  {
    v41 = *((_QWORD *)this + 7);
    v42 = *((_QWORD *)this + 6);
    v76 = *((_QWORD *)this + 5);
    v79 = *((_QWORD *)this + 4);
    v43 = v40;
    v44 = v40 - 1LL;
    v78 = v44 - (unsigned int)v40;
    while ( 1 )
    {
      v45 = (int)v13[v43];
      v46 = *(int *)(v42 + 4 * v43);
      v47 = *(_DWORD *)(v41 + 4 * v43);
      v48 = (int *)(v39 + 4 * v45);
      v49 = (int *)(4 * v46 + v76);
      v50 = v47 == 0;
      if ( v48 != v49 && v47 )
      {
        v51 = v47 >> 3;
        if ( v47 >> 3 > 0 )
        {
          if ( ((unsigned __int64)v49 >= v39 + 4 * v45 + 32 || (unsigned __int64)v48 >= v76 + 4 * v46 + 32) && v51 > 1 )
          {
            v52 = 0;
            v53 = v51 - 1;
            do
            {
              v54 = _mm_loadu_si128((const __m128i *)&v49[v52 + 4]);
              *(__m128i *)&v48[v52] = _mm_loadu_si128((const __m128i *)&v49[v52]);
              *(__m128i *)&v48[v52 + 4] = v54;
              v52 += 8;
            }
            while ( v52 != 8 * (v53 + 1) );
          }
          else
          {
            v69 = (int *)(v39 + 4 * v45);
            v70 = v49;
            v53 = v51 - 1;
            do
            {
              v71 = *v70;
              v69 += 8;
              v70 += 8;
              *(v69 - 8) = v71;
              *(v69 - 7) = *(v70 - 7);
              *(v69 - 6) = *(v70 - 6);
              *(v69 - 5) = *(v70 - 5);
              *(v69 - 4) = *(v70 - 4);
              *(v69 - 3) = *(v70 - 3);
              *(v69 - 2) = *(v70 - 2);
              *(v69 - 1) = *(v70 - 1);
            }
            while ( &v48[8 * v53 + 8] != v69 );
          }
          v55 = 32 * ((int)v53 + 1LL);
          v49 = (int *)((char *)v49 + v55);
          v48 = (int *)((char *)v48 + v55);
        }
        switch ( v47 % 8 )
        {
          case 1:
            goto LABEL_70;
          case 2:
            goto LABEL_69;
          case 3:
            goto LABEL_68;
          case 4:
            goto LABEL_67;
          case 5:
            goto LABEL_66;
          case 6:
            goto LABEL_65;
          case 7:
            v48[6] = v49[6];
LABEL_65:
            v48[5] = v49[5];
LABEL_66:
            v48[4] = v49[4];
LABEL_67:
            v48[3] = v49[3];
LABEL_68:
            v48[2] = v49[2];
LABEL_69:
            v48[1] = v49[1];
LABEL_70:
            *v48 = *v49;
            break;
          default:
            break;
        }
        v47 = *(_DWORD *)(v41 + 4 * v43);
        v46 = *(int *)(v42 + 4 * v43);
        v50 = v47 == 0;
      }
      v61 = (__int64 *)(v77 + 8 * v45);
      v62 = (__int64 *)(v79 + 8 * v46);
      if ( v61 != v62 && !v50 )
      {
        if ( v47 >> 3 > 0 )
        {
          v63 = v61;
          v64 = v62;
          v65 = (unsigned int)((v47 >> 3) - 1);
          do
          {
            v66 = *v64;
            v63 += 8;
            v64 += 8;
            *(v63 - 8) = v66;
            *(v63 - 7) = *(v64 - 7);
            *(v63 - 6) = *(v64 - 6);
            *(v63 - 5) = *(v64 - 5);
            *(v63 - 4) = *(v64 - 4);
            *(v63 - 3) = *(v64 - 3);
            *(v63 - 2) = *(v64 - 2);
            *(v63 - 1) = *(v64 - 1);
          }
          while ( &v61[8 * v65 + 8] != v63 );
          v67 = ((int)v65 + 1LL) << 6;
          v62 = (__int64 *)((char *)v62 + v67);
          v61 = (__int64 *)((char *)v61 + v67);
        }
        switch ( v47 % 8 )
        {
          case 1:
            goto LABEL_85;
          case 2:
            goto LABEL_84;
          case 3:
            goto LABEL_83;
          case 4:
            goto LABEL_82;
          case 5:
            goto LABEL_81;
          case 6:
            goto LABEL_80;
          case 7:
            v61[6] = v62[6];
LABEL_80:
            v61[5] = v62[5];
LABEL_81:
            v61[4] = v62[4];
LABEL_82:
            v61[3] = v62[3];
LABEL_83:
            v61[2] = v62[2];
LABEL_84:
            v61[1] = v62[1];
LABEL_85:
            *v61 = *v62;
            break;
          default:
            break;
        }
      }
      v43 = v44;
      if ( v44 == v78 )
        break;
      --v44;
    }
  }
  CoinPackedMatrix::gutsOfDestructor(this);
  *((_QWORD *)this + 6) = v13;
  *((_QWORD *)this + 5) = v39;
  *((_QWORD *)this + 7) = v80;
  *((_QWORD *)this + 4) = v77;
  return v77;
}

