__int64 __fastcall ClpPlusMinusOneMatrix::appendCols(
        ClpPlusMinusOneMatrix *this,
        __int64 a2,
        const CoinPackedVectorBase *const *a3,
        __m128i a4,
        __m128 a5,
        __m128i a6,
        __m128i si128,
        __m128d a8,
        __m128d a9,
        double a10)
{
  const CoinPackedVectorBase *const *v12; // r12
  int v13; // ebx
  int v14; // r13d
  const CoinPackedVectorBase *v15; // rdi
  int v16; // r15d
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm2
  unsigned int v20; // edi
  __m128d *v21; // rdx
  unsigned int v22; // ecx
  __m128d v23; // xmm0
  __m128i v24; // xmm2
  void *v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rcx
  unsigned int v28; // esi
  __int64 v29; // rdx
  int v30; // ebx
  unsigned __int64 v31; // rdi
  __m128i *v32; // rax
  int v33; // ecx
  __m128i *v34; // r15
  __m128i *v35; // rdi
  int v36; // r9d
  unsigned int v37; // r8d
  const __m128i *v38; // rdx
  __m128i *v39; // rsi
  __int64 v40; // r8
  __m128i v41; // xmm1
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int32 *m128i_i32; // rdx
  int v45; // ecx
  __m128i *v46; // rax
  int v47; // r8d
  __m128i *v48; // r15
  __m128i *v49; // rdi
  unsigned int v50; // esi
  const __m128i *v51; // rdx
  __m128i *v52; // rcx
  __int64 v53; // rsi
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  __int64 v56; // rax
  __int32 *v57; // rdx
  unsigned __int64 v58; // rdi
  __int64 v59; // rax
  double v60; // xmm4_8
  double v61; // xmm5_8
  unsigned __int64 v62; // r13
  char *v63; // rdi
  unsigned int v64; // eax
  unsigned __int64 v65; // rdx
  const __m128i *v66; // rcx
  __int64 v67; // rsi
  __m128i v68; // xmm1
  __m128i v69; // xmm0
  __int64 v70; // rdx
  char *v71; // rsi
  _DWORD *v72; // rdx
  int v73; // eax
  __int64 v74; // r15
  int v75; // r12d
  __int64 v76; // r13
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r9
  bool v82; // zf
  __int64 result; // rax
  int *v84; // rdx
  int v85; // esi
  int *v86; // rdx
  int v87; // ecx
  unsigned __int64 v88; // rdx
  int *v89; // rcx
  int v90; // eax
  void *exception; // r13
  int v92; // [rsp+0h] [rbp-B8h]
  __m128d v93; // [rsp+10h] [rbp-A8h]
  __m128d v94; // [rsp+20h] [rbp-98h]
  __m128i v95; // [rsp+30h] [rbp-88h] BYREF
  const CoinPackedVectorBase *const *v96; // [rsp+40h] [rbp-78h]
  unsigned int v97; // [rsp+4Ch] [rbp-6Ch]
  __int64 v98; // [rsp+60h] [rbp-58h]
  __int64 v99; // [rsp+68h] [rbp-50h]
  __int64 v100; // [rsp+70h] [rbp-48h]
  char *v101; // [rsp+78h] [rbp-40h]

  v97 = a2;
  if ( (int)a2 <= 0 )
  {
    v14 = 0;
  }
  else
  {
    a10 = NAN;
    a9 = (__m128d)xmmword_28E010;
    v12 = a3;
    v13 = 0;
    a8 = (__m128d)xmmword_289DC0;
    v14 = 0;
    v96 = &a3[(unsigned int)(a2 - 1) + 1];
    si128 = _mm_load_si128((const __m128i *)&xmmword_28D790);
    do
    {
      v15 = *v12;
      v95 = si128;
      v94 = a8;
      v93 = a9;
      v16 = (**(__int64 (__fastcall ***)(const CoinPackedVectorBase *))v15)(v15);
      v14 += v16;
      v17 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *const))(**(_QWORD **)v12 + 16LL))(*v12);
      a9 = v93;
      a8 = v94;
      si128 = _mm_load_si128(&v95);
      if ( v16 > 0 )
      {
        a2 = 0;
        v18 = (v17 >> 3) & 1;
        if ( (unsigned int)(v16 - 1) <= 4 )
          goto LABEL_12;
        if ( (_DWORD)v18 )
        {
          if ( fabs(*(double *)v17) != 1.0 )
            ++v13;
          LODWORD(a2) = 1;
        }
        v19 = 0;
        v20 = v16 - v18;
        v21 = (__m128d *)(v17 + 8 * v18);
        v22 = 0;
        do
        {
          v23 = *v21;
          ++v22;
          v21 += 2;
          a5 = (__m128)_mm_and_si128((__m128i)_mm_cmpneq_pd(_mm_and_pd(v21[-1], v93), v94), si128);
          v19 = _mm_add_epi32(
                  v19,
                  (__m128i)_mm_shuffle_ps(
                             (__m128)_mm_and_si128((__m128i)_mm_cmpneq_pd(_mm_and_pd(v23, v93), v94), si128),
                             a5,
                             136));
        }
        while ( v20 >> 2 > v22 );
        v24 = _mm_add_epi32(v19, _mm_srli_si128(v19, 8));
        a4 = _mm_srli_si128(v24, 4);
        a6 = _mm_add_epi32(v24, a4);
        v13 += _mm_cvtsi128_si32(a6);
        a2 = (v20 & 0xFFFFFFFC) + (unsigned int)a2;
        if ( v20 != (v20 & 0xFFFFFFFC) )
        {
LABEL_12:
          a4.m128i_i64[0] = 0x3FF0000000000000LL;
          a5.m128_u64[0] = fabs(*(double *)(v17 + 8LL * (int)a2));
          if ( *(double *)a5.m128_u64 != 1.0 )
            ++v13;
          if ( v16 > (int)a2 + 1 )
          {
            a5.m128_u64[0] = fabs(*(double *)(v17 + 8LL * ((int)a2 + 1)));
            if ( *(double *)a5.m128_u64 != 1.0 )
              ++v13;
            if ( (int)a2 + 2 < v16 )
            {
              a5.m128_u64[0] = fabs(*(double *)(v17 + 8LL * ((int)a2 + 2)));
              if ( *(double *)a5.m128_u64 != 1.0 )
                ++v13;
              if ( v16 > (int)a2 + 3 )
              {
                a5.m128_u64[0] = fabs(*(double *)(v17 + 8LL * ((int)a2 + 3)));
                if ( *(double *)a5.m128_u64 != 1.0 )
                  ++v13;
                a2 = (unsigned int)(a2 + 4);
                if ( v16 > (int)a2 )
                {
                  a2 = (int)a2;
                  a5.m128_u64[0] = fabs(*(double *)(v17 + 8LL * (int)a2));
                  if ( *(double *)a5.m128_u64 != 1.0 )
                    ++v13;
                }
              }
            }
          }
        }
      }
      ++v12;
    }
    while ( v12 != v96 );
    if ( v13 )
    {
      exception = __cxa_allocate_exception(0x30u);
      v101 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      std::string::string();
      std::string::string();
      std::string::string();
      CoinError::CoinError();
      if ( (_UNKNOWN *)(v98 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v98 - 24);
      if ( (_UNKNOWN *)(v99 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v99 - 24);
      if ( (_UNKNOWN *)(v100 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8(v100 - 24);
      if ( v101 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
        sub_5C4E8((__int64)(v101 - 24));
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
    }
  }
  v25 = *((void **)this + 12);
  if ( v25 )
    operator delete[](v25);
  v26 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 12) = 0;
  if ( v26 )
    (*(void (__fastcall **)(__int64, __int64, double, double, double, double, double, double, double))(*(_QWORD *)v26 + 8LL))(
      v26,
      a2,
      *(double *)a4.m128i_i64,
      *(double *)a5.m128_u64,
      *(double *)a6.m128i_i64,
      *(double *)si128.m128i_i64,
      a8.m128d_f64[0],
      a9.m128d_f64[0],
      a10);
  v27 = *((int *)this + 33);
  v28 = v97;
  v29 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 11) = 0;
  v30 = *(_DWORD *)(v29 + 4 * v27);
  v31 = (int)(v27 + v28 + 1);
  if ( v31 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_116;
  v32 = (__m128i *)operator new[](4 * v31);
  v33 = *((_DWORD *)this + 33);
  v34 = v32;
  v35 = *((__m128i **)this + 13);
  v36 = v33 + 1;
  if ( v33 != -1 && v35 != v32 )
  {
    v37 = v36 >> 3;
    if ( v36 >> 3 <= 0 )
    {
      m128i_i32 = *((__int32 **)this + 13);
    }
    else
    {
      if ( (v32 >= &v35[2] || v35 >= &v32[2]) && v37 > 1 )
      {
        v38 = *((const __m128i **)this + 13);
        v39 = v32;
        v40 = v37 - 1;
        do
        {
          v41 = _mm_loadu_si128(v38);
          v38 += 2;
          v39 += 2;
          v42 = _mm_loadu_si128(v38 - 1);
          v39[-2] = v41;
          v39[-1] = v42;
        }
        while ( v38 != &v35[2 * v40 + 2] );
      }
      else
      {
        v84 = *((int **)this + 13);
        v40 = v37 - 1;
        do
        {
          v85 = *v84;
          v32 += 2;
          v84 += 8;
          v32[-2].m128i_i32[0] = v85;
          v32[-2].m128i_i32[1] = *(v84 - 7);
          v32[-2].m128i_i32[2] = *(v84 - 6);
          v32[-2].m128i_i32[3] = *(v84 - 5);
          v32[-1].m128i_i32[0] = *(v84 - 4);
          v32[-1].m128i_i32[1] = *(v84 - 3);
          v32[-1].m128i_i32[2] = *(v84 - 2);
          v32[-1].m128i_i32[3] = *(v84 - 1);
        }
        while ( v32 != &v34[2 * v40 + 2] );
      }
      v43 = 2 * ((int)v40 + 1LL);
      m128i_i32 = v35[v43].m128i_i32;
      v32 = &v34[v43];
    }
    switch ( v36 % 8 )
    {
      case 1:
        goto LABEL_48;
      case 2:
        goto LABEL_47;
      case 3:
        goto LABEL_46;
      case 4:
        goto LABEL_45;
      case 5:
        goto LABEL_44;
      case 6:
        goto LABEL_43;
      case 7:
        v32[1].m128i_i32[2] = m128i_i32[6];
LABEL_43:
        v32[1].m128i_i32[1] = m128i_i32[5];
LABEL_44:
        v32[1].m128i_i32[0] = m128i_i32[4];
LABEL_45:
        v32->m128i_i32[3] = m128i_i32[3];
LABEL_46:
        v32->m128i_i32[2] = m128i_i32[2];
LABEL_47:
        v32->m128i_i32[1] = m128i_i32[1];
LABEL_48:
        v32->m128i_i32[0] = *m128i_i32;
        break;
      default:
        break;
    }
  }
  if ( v35 )
  {
    operator delete[](v35);
    v33 = *((_DWORD *)this + 33);
  }
  v45 = v97 + v33;
  *((_QWORD *)this + 13) = v34;
  if ( (unsigned __int64)v45 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_116;
  v46 = (__m128i *)operator new[](4LL * v45);
  v47 = *((_DWORD *)this + 33);
  v48 = v46;
  v49 = *((__m128i **)this + 14);
  if ( v47 && v49 != v46 )
  {
    v50 = v47 >> 3;
    if ( v47 >> 3 <= 0 )
    {
      v57 = *((__int32 **)this + 14);
    }
    else
    {
      if ( (v46 >= &v49[2] || v49 >= &v46[2]) && v50 > 1 )
      {
        v51 = *((const __m128i **)this + 14);
        v52 = v46;
        v53 = v50 - 1;
        do
        {
          v54 = _mm_loadu_si128(v51);
          v51 += 2;
          v52 += 2;
          v55 = _mm_loadu_si128(v51 - 1);
          v52[-2] = v54;
          v52[-1] = v55;
        }
        while ( v51 != &v49[2 * v53 + 2] );
      }
      else
      {
        v86 = *((int **)this + 14);
        v53 = v50 - 1;
        do
        {
          v87 = *v86;
          v46 += 2;
          v86 += 8;
          v46[-2].m128i_i32[0] = v87;
          v46[-2].m128i_i32[1] = *(v86 - 7);
          v46[-2].m128i_i32[2] = *(v86 - 6);
          v46[-2].m128i_i32[3] = *(v86 - 5);
          v46[-1].m128i_i32[0] = *(v86 - 4);
          v46[-1].m128i_i32[1] = *(v86 - 3);
          v46[-1].m128i_i32[2] = *(v86 - 2);
          v46[-1].m128i_i32[3] = *(v86 - 1);
        }
        while ( v46 != &v48[2 * v53 + 2] );
      }
      v56 = 2 * ((int)v53 + 1LL);
      v57 = v49[v56].m128i_i32;
      v46 = &v48[v56];
    }
    switch ( v47 % 8 )
    {
      case 1:
        goto LABEL_67;
      case 2:
        goto LABEL_66;
      case 3:
        goto LABEL_65;
      case 4:
        goto LABEL_64;
      case 5:
        goto LABEL_63;
      case 6:
        goto LABEL_62;
      case 7:
        v46[1].m128i_i32[2] = v57[6];
LABEL_62:
        v46[1].m128i_i32[1] = v57[5];
LABEL_63:
        v46[1].m128i_i32[0] = v57[4];
LABEL_64:
        v46->m128i_i32[3] = v57[3];
LABEL_65:
        v46->m128i_i32[2] = v57[2];
LABEL_66:
        v46->m128i_i32[1] = v57[1];
LABEL_67:
        v46->m128i_i32[0] = *v57;
        break;
      default:
        break;
    }
  }
  if ( v49 )
    operator delete[](v49);
  *((_QWORD *)this + 14) = v48;
  v58 = v14 + v30;
  if ( v58 > 0x1FFFFFFFFFFFFFFELL )
LABEL_116:
    __cxa_throw_bad_array_new_length();
  v59 = operator new[](4 * v58);
  v62 = v59;
  v63 = *((char **)this + 15);
  if ( v30 && v63 != (char *)v59 )
  {
    v64 = v30 >> 3;
    if ( v30 >> 3 <= 0 )
    {
      v72 = (_DWORD *)v62;
      v71 = *((char **)this + 15);
    }
    else
    {
      if ( (v62 >= (unsigned __int64)(v63 + 32) || (unsigned __int64)v63 >= v62 + 32) && v64 > 1 )
      {
        v65 = v62;
        v66 = *((const __m128i **)this + 15);
        v67 = v64 - 1;
        do
        {
          v68 = _mm_loadu_si128(v66);
          v65 += 32LL;
          v66 += 2;
          v69 = _mm_loadu_si128(v66 - 1);
          *(__m128i *)(v65 - 32) = v68;
          *(__m128i *)(v65 - 16) = v69;
        }
        while ( v62 + 32 * v67 + 32 != v65 );
      }
      else
      {
        v88 = v62;
        v89 = *((int **)this + 15);
        v67 = v64 - 1;
        do
        {
          v90 = *v89;
          v88 += 32LL;
          v89 += 8;
          *(_DWORD *)(v88 - 32) = v90;
          *(_DWORD *)(v88 - 28) = *(v89 - 7);
          *(_DWORD *)(v88 - 24) = *(v89 - 6);
          *(_DWORD *)(v88 - 20) = *(v89 - 5);
          *(_DWORD *)(v88 - 16) = *(v89 - 4);
          *(_DWORD *)(v88 - 12) = *(v89 - 3);
          *(_DWORD *)(v88 - 8) = *(v89 - 2);
          *(_DWORD *)(v88 - 4) = *(v89 - 1);
        }
        while ( v62 + 32 * (v67 + 1) != v88 );
      }
      v70 = 32 * ((int)v67 + 1LL);
      v71 = &v63[v70];
      v72 = (_DWORD *)(v62 + v70);
    }
    switch ( v30 % 8 )
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
        v72[6] = *((_DWORD *)v71 + 6);
LABEL_81:
        v72[5] = *((_DWORD *)v71 + 5);
LABEL_82:
        v72[4] = *((_DWORD *)v71 + 4);
LABEL_83:
        v72[3] = *((_DWORD *)v71 + 3);
LABEL_84:
        v72[2] = *((_DWORD *)v71 + 2);
LABEL_85:
        v72[1] = *((_DWORD *)v71 + 1);
LABEL_86:
        *v72 = *(_DWORD *)v71;
        break;
      default:
        break;
    }
  }
  if ( v63 )
    operator delete[](v63);
  v73 = v97;
  *((_QWORD *)this + 15) = v62;
  if ( v73 > 0 )
  {
    v74 = 0;
    v95.m128i_i64[0] = (unsigned int)(v73 - 1) + 1LL;
    do
    {
      v75 = v74;
      v92 = (**(__int64 (__fastcall ***)(const CoinPackedVectorBase *const, double, double, double, double, double, double, double))a3[v74])(
              a3[v74],
              -1.0,
              1.0,
              *(double *)a6.m128i_i64,
              *(double *)si128.m128i_i64,
              v60,
              v61,
              a10);
      v76 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *const))(*(_QWORD *)a3[v74] + 8LL))(a3[v74]);
      v77 = (*(__int64 (__fastcall **)(const CoinPackedVectorBase *const))(*(_QWORD *)a3[v74] + 16LL))(a3[v74]);
      if ( v92 <= 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * ((int)v74 + *((_DWORD *)this + 33))) = v30;
      }
      else
      {
        v78 = 0;
        do
        {
          if ( *(double *)(v77 + 8 * v78) == 1.0 )
          {
            v79 = v30++;
            *(_DWORD *)(*((_QWORD *)this + 15) + 4 * v79) = *(_DWORD *)(v76 + 4 * v78);
          }
          ++v78;
        }
        while ( (unsigned int)(v92 - 1) + 1LL != v78 );
        *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * ((int)v74 + *((_DWORD *)this + 33))) = v30;
        v80 = 0;
        do
        {
          if ( *(double *)(v77 + 8 * v80) == -1.0 )
          {
            v81 = v30++;
            *(_DWORD *)(*((_QWORD *)this + 15) + 4 * v81) = *(_DWORD *)(v76 + 4 * v80);
          }
          ++v80;
        }
        while ( v80 != v78 );
      }
      v82 = ++v74 == v95.m128i_i64[0];
      *(_DWORD *)(*((_QWORD *)this + 13) + 4LL * (v75 + *((_DWORD *)this + 33)) + 4) = v30;
    }
    while ( !v82 );
  }
  result = v97;
  *((_DWORD *)this + 33) += v97;
  return result;
}

