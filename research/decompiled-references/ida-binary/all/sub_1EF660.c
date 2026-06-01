__int64 __fastcall sub_1EF660(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // r15
  __int64 v20; // rdx
  int *v21; // rax
  int *v22; // rcx
  int *v23; // r13
  int v24; // edx
  int v25; // edx
  int v26; // r12d
  __int64 v27; // rax
  size_t v28; // r12
  __int64 v29; // rdx
  const char *v30; // r15
  _BYTE *v31; // rax
  const char *v32; // rsi
  char *v33; // r15
  _BYTE *v34; // r12
  unsigned int v35; // edi
  __int64 v36; // r10
  unsigned __int64 v37; // r8
  void *v38; // rax
  __m128i v39; // xmm1
  __m128 v40; // xmm0
  bool v41; // al
  __int64 v42; // r15
  int tinfo_udt_member; // eax
  int v44; // edx
  void *v45; // rcx
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __m128i si128; // xmm2
  __int64 v49; // rax
  __int64 v50; // rcx
  __m128i v51; // xmm1
  __m128i v52; // xmm0
  __m128i v53; // xmm2
  const char *v55; // rsi
  char *v56; // rax
  unsigned __int64 v57; // r10
  size_t v58; // r8
  __int64 v59; // r12
  void *v60; // rax
  unsigned __int64 v61; // r10
  __int64 v62; // r12
  __int128 v63; // kr10_16
  const char *v64; // rdi
  unsigned __int64 v65; // rbp
  unsigned __int64 v66; // rax
  char *v67; // r15
  size_t v68; // rax
  unsigned __int64 v69; // r12
  size_t v70; // r9
  void *v71; // rdi
  size_t v72; // rdx
  void *v73; // r13
  size_t v74; // r12
  void *v75; // rax
  struct _Unwind_Exception *v76; // rbx
  unsigned int v77; // [rsp+Ch] [rbp-22Ch]
  QT::QFont *v78; // [rsp+10h] [rbp-228h]
  size_t nb; // [rsp+20h] [rbp-218h]
  size_t nc; // [rsp+20h] [rbp-218h]
  size_t n; // [rsp+20h] [rbp-218h]
  size_t na; // [rsp+20h] [rbp-218h]
  size_t nf; // [rsp+20h] [rbp-218h]
  size_t nd; // [rsp+20h] [rbp-218h]
  size_t ne; // [rsp+20h] [rbp-218h]
  size_t v86; // [rsp+30h] [rbp-208h]
  void *v87; // [rsp+30h] [rbp-208h]
  unsigned __int64 v88; // [rsp+30h] [rbp-208h]
  __int64 v89; // [rsp+30h] [rbp-208h]
  size_t v90; // [rsp+30h] [rbp-208h]
  unsigned __int64 v91; // [rsp+30h] [rbp-208h]
  size_t v92; // [rsp+38h] [rbp-200h]
  __int64 v93; // [rsp+38h] [rbp-200h]
  __int64 v94; // [rsp+38h] [rbp-200h]
  __m128i *v95; // [rsp+48h] [rbp-1F0h] BYREF
  void *dest; // [rsp+50h] [rbp-1E8h] BYREF
  __m128i v97; // [rsp+58h] [rbp-1E0h] BYREF
  void *src; // [rsp+70h] [rbp-1C8h] BYREF
  _BYTE v99[40]; // [rsp+78h] [rbp-1C0h] BYREF
  __m128i v100; // [rsp+A0h] [rbp-198h] BYREF
  int v101; // [rsp+B0h] [rbp-188h]
  bool v102; // [rsp+B4h] [rbp-184h]
  _BYTE v103[24]; // [rsp+C0h] [rbp-178h] BYREF
  __int128 v104; // [rsp+D8h] [rbp-160h]
  __int64 v105; // [rsp+E8h] [rbp-150h]
  __int128 v106; // [rsp+F0h] [rbp-148h]
  __int128 v107[3]; // [rsp+100h] [rbp-138h] BYREF
  __int64 v108; // [rsp+130h] [rbp-108h]
  int v109; // [rsp+138h] [rbp-100h]
  __int64 v110; // [rsp+140h] [rbp-F8h]
  char v111; // [rsp+148h] [rbp-F0h]
  __m128i v112[4]; // [rsp+150h] [rbp-E8h] BYREF
  _BYTE v113[16]; // [rsp+190h] [rbp-A8h] BYREF
  _BYTE v114[88]; // [rsp+1A0h] [rbp-98h] BYREF
  unsigned __int64 v115; // [rsp+1F8h] [rbp-40h]

  v6 = *(unsigned __int8 *)(a1 + 741);
  v115 = __readfsqword(0x28u);
  v7 = v6 ^ 1;
  LOBYTE(v7) = (a2 == 0) | v7;
  if ( (_BYTE)v7 )
    return 0;
  v8 = *(_QWORD *)a1;
  v9 = a6 & 1;
  src = nullptr;
  v13 = v9;
  v100.m128i_i64[0] = 0;
  v100.m128i_i64[1] = -1;
  v101 = -1;
  v102 = 0;
  v77 = v9;
  memset(v99, 0, sizeof(v99));
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v8 + 720))(a1, v9);
  v100.m128i_i64[0] = get_func(v14);
  if ( v100.m128i_i64[0] )
  {
    if ( *(_BYTE *)(a1 + 968) )
    {
      if ( !*(_QWORD *)(a1 + 424) )
      {
        v76 = (struct _Unwind_Exception *)sub_1E69C0(0.0, v14, v13, v15, v16);
        QT::QFont::~QFont(v78);
        sub_1EDC50((__int64 *)&src, (const char *)v13);
        _Unwind_Resume(v76);
      }
      v17 = *(_DWORD *)(a1 + 416);
      if ( v17 == 2 )
      {
        v18 = *(_QWORD *)(a1 + 896);
      }
      else if ( v17 == 3 )
      {
        v18 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v18 = 0;
        if ( v17 == 1 )
          v18 = *(_QWORD *)(a1 + 888);
      }
    }
    else
    {
      v18 = 0;
    }
    v13 = 0;
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 168LL))(v18, 0, v77);
    if ( v19 )
    {
      nb = (*(double (__fastcall **)(__int64))(*(_QWORD *)v18 + 312LL))(v18);
      memset(v112, 0, sizeof(v112));
      QT::QFont::QFont((QT::QFont *)v113);
      QT::QFont::QFont((QT::QFont *)v103);
      QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v114, (const QT::QFont *)v103);
      QT::QFont::~QFont((QT::QFont *)v103);
      sub_1C8200(v112, a1, (__m128d)nb);
      v13 = (__int64)v112;
      v20 = sub_178210(v19, (__int64)v112, a1);
      v21 = *(int **)(v20 + 184);
      v22 = &v21[5 * *(_QWORD *)(v20 + 192)];
      if ( v21 == v22 )
        goto LABEL_46;
      v23 = nullptr;
      do
      {
        v24 = *v21;
        if ( a5 >= *v21 )
        {
          v13 = (unsigned int)(v24 + v21[1]);
          if ( a5 < (int)v13 && *((_BYTE *)v21 + 16) == 25 )
          {
            if ( v23 )
            {
              if ( v24 > *v23 )
                v23 = v21;
            }
            else
            {
              v23 = v21;
            }
          }
        }
        v21 += 5;
      }
      while ( v22 != v21 );
      dest = nullptr;
      v97 = 0;
      if ( !v23 )
        goto LABEL_46;
      v13 = (unsigned int)v23[1];
      if ( (int)v13 < 0 )
        goto LABEL_46;
      if ( !*((_BYTE *)v23 + 16) )
        goto LABEL_46;
      v25 = v23[2];
      if ( v25 < 0 )
        goto LABEL_46;
      v26 = v23[3];
      if ( v25 > v26 )
        goto LABEL_46;
      v27 = *(_QWORD *)(v19 + 16);
      if ( v27 )
      {
        v66 = v27 - 1;
        if ( v66 >= v25 )
        {
          v13 = v26;
          if ( v66 >= v26 )
          {
            v28 = v26 - v25;
            v30 = (const char *)(*(_QWORD *)(v19 + 8) + v25);
            v29 = v28 + 1;
            if ( v28 == -1 )
            {
              v28 = -1;
              v31 = nullptr;
LABEL_26:
              v97.m128i_i64[0] = v29;
              v32 = v30;
              v31[v28] = 0;
              memmove(dest, v30, v28);
              v33 = (char *)dest;
              n = v97.m128i_i64[0];
              if ( v97.m128i_i64[0] > 1uLL )
              {
                v34 = (char *)dest + v97.m128i_i64[0] - 1;
                v86 = v97.m128i_i64[0] - 1;
                if ( dest < v34 )
                {
                  while ( 1 )
                  {
                    v35 = (char)*(v34 - 1);
                    if ( v35 > 0x7F || !isspace(v35) )
                      break;
                    if ( --v34 == v33 )
                      goto LABEL_63;
                  }
                }
                v36 = v34 - v33;
                if ( v34 == v33 )
                {
LABEL_63:
                  if ( !v33 )
                    goto LABEL_66;
                  v97.m128i_i64[0] = 0;
                  qfree(v33, v32);
                  v33 = nullptr;
                  dest = nullptr;
                  v97.m128i_i64[1] = 0;
                  n = v97.m128i_i64[0];
                }
                else
                {
                  v37 = v36 + 1;
                  if ( n < v36 + 1 )
                  {
                    if ( v97.m128i_i64[1] < v37 )
                    {
                      v94 = v34 - v33;
                      v91 = v36 + 1;
                      dest = (void *)qvector_reserve(&dest, v33, v36 + 1, 1);
                      v33 = (char *)dest;
                      v36 = v94;
                      v37 = v91;
                      n = v97.m128i_i64[0];
                    }
                    v93 = v36;
                    v89 = v37;
                    memset(&v33[n], 0, v37 - n);
                    v97.m128i_i64[0] = v89;
                    v34 = (char *)dest + v93;
                  }
                  else if ( n != v36 + 1 )
                  {
                    v97.m128i_i64[0] = v36 + 1;
                  }
                  *v34 = 0;
                  v33 = (char *)dest;
                  n = v97.m128i_i64[0];
                }
              }
              if ( !n )
                goto LABEL_35;
              v86 = n - 1;
LABEL_66:
              v55 = (_BYTE *)(&qword_28 + 6);
              v56 = strchr(v33, 46);
              if ( v56 )
              {
                v57 = v56 - v33;
                if ( v56 - v33 != -1 )
                {
                  memset(v103, 0, sizeof(v103));
                  v58 = v86;
                  if ( v57 <= v86 )
                    v58 = v56 - v33;
                  v59 = 0;
                  v60 = nullptr;
                  if ( v58 )
                  {
                    v74 = v58 + 1;
                    v88 = v57;
                    nd = v58;
                    v75 = (void *)qvector_reserve(v103, 0, v58 + 1, 1);
                    v55 = v33;
                    *(_QWORD *)&v103[8] = v74;
                    *(_QWORD *)v103 = v75;
                    memmove(v75, v33, nd);
                    v57 = v88;
                    *(_BYTE *)(*(_QWORD *)v103 + nd) = 0;
                    v58 = *(_QWORD *)&v103[8];
                    v60 = *(void **)v103;
                    v59 = *(_QWORD *)&v103[16];
                  }
                  memset(v103, 0, sizeof(v103));
                  if ( src )
                  {
                    v92 = v58;
                    v87 = v60;
                    na = v57;
                    *(_QWORD *)v99 = 0;
                    qfree(src, v55);
                    *(_QWORD *)&v99[8] = v59;
                    v57 = na;
                    src = v87;
                    *(_QWORD *)v99 = v92;
                    if ( *(_QWORD *)v103 )
                    {
                      *(_QWORD *)&v103[8] = 0;
                      qfree(*(_QWORD *)v103, v55);
                      v57 = na;
                    }
                  }
                  else
                  {
                    src = v60;
                    *(_QWORD *)v99 = v58;
                    *(_QWORD *)&v99[8] = v59;
                  }
                  v61 = v57 + 1;
                  if ( !v97.m128i_i64[0] )
                    goto LABEL_76;
                  v67 = (char *)dest;
                  memset(v103, 0, sizeof(v103));
                  if ( v61 > v97.m128i_i64[0] - 1 )
                    v61 = v97.m128i_i64[0] - 1;
                  v68 = v97.m128i_i64[0] - 1 - v61;
                  v69 = v61;
                  v70 = v68;
                  if ( v68 )
                  {
                    v71 = nullptr;
                    v72 = v97.m128i_i64[0] - v61;
                    if ( v68 != -1 )
                    {
                      v90 = v97.m128i_i64[0] - 1 - v61;
                      ne = v97.m128i_i64[0] - v61;
                      *(_QWORD *)v103 = qvector_reserve(v103, 0, v72, 1);
                      v70 = v90;
                      v71 = *(void **)v103;
                      v72 = ne;
                    }
                    v55 = &v67[v69];
                    *(_QWORD *)&v103[8] = v72;
                    nf = v70;
                    memmove(v71, &v67[v69], v70);
                    *(_BYTE *)(*(_QWORD *)v103 + nf) = 0;
                    v63 = *(_OWORD *)v103;
                    v62 = *(_QWORD *)&v103[16];
                  }
                  else
                  {
LABEL_76:
                    v62 = 0;
                    v63 = 0u;
                  }
                  memset(v103, 0, sizeof(v103));
                  if ( *(_QWORD *)&v99[16] )
                  {
                    *(_QWORD *)&v99[24] = 0;
                    qfree(*(_QWORD *)&v99[16], v55);
                    *(_QWORD *)&v99[32] = v62;
                    *(_OWORD *)&v99[16] = v63;
                    if ( *(_QWORD *)v103 )
                    {
                      *(_QWORD *)&v103[8] = 0;
                      qfree(*(_QWORD *)v103, v55);
                    }
                  }
                  else
                  {
                    *(_OWORD *)&v99[16] = v63;
                    *(_QWORD *)&v99[32] = v62;
                  }
                  v64 = &s1;
                  v65 = a5 - *v23;
                  if ( *(_QWORD *)v99 )
                    v64 = (const char *)src;
                  v41 = v65 >= qustrlen(v64);
                  goto LABEL_36;
                }
              }
LABEL_35:
              v38 = src;
              src = v33;
              v39 = _mm_loadu_si128((const __m128i *)v99);
              v40 = _mm_loadh_ps((const double *)&v97.m128i_i64[1]);
              dest = v38;
              v41 = 0;
              *(__m128 *)v99 = v40;
              v97 = v39;
LABEL_36:
              v102 = v41;
              v95 = nullptr;
              tinfo_get_func_frame(&v95, v100.m128i_i64[0]);
              v42 = *(_QWORD *)v99;
              v105 = 0;
              v108 = 1;
              v109 = -1;
              v110 = 0;
              v111 = 0;
              memset(v103, 0, sizeof(v103));
              v104 = 0;
              v106 = 0;
              v107[0] = 0;
              if ( *(_QWORD *)v99 >= 2u )
              {
                v73 = src;
                *(_QWORD *)&v103[16] = qvector_reserve(&v103[16], 0, *(_QWORD *)v99, 1);
                *(_QWORD *)&v104 = v42;
                memmove(*(void **)&v103[16], v73, v42 - 1);
                *(_BYTE *)(*(_QWORD *)&v103[16] + v42 - 1) = 0;
              }
              v13 = (__int64)v95;
              tinfo_udt_member = find_tinfo_udt_member(v103, v95, 3);
              if ( tinfo_udt_member >= 0 )
              {
                v13 = v77;
                v100.m128i_i64[1] = get_tinfo_property4(v95, 297, tinfo_udt_member, 0, 0, 0);
                v44 = sub_331180(0, v77, 1);
                v45 = src;
                v7 = 1;
                v46 = _mm_loadu_si128((const __m128i *)(a2 + 8));
                v47 = _mm_loadu_si128((const __m128i *)v99);
                si128 = _mm_load_si128((const __m128i *)&v99[24]);
                src = *(void **)a2;
                v49 = *(_QWORD *)(a2 + 24);
                *(_QWORD *)a2 = v45;
                v50 = *(_QWORD *)&v99[16];
                *(__m128i *)(a2 + 8) = v47;
                v51 = _mm_loadu_si128((const __m128i *)(a2 + 32));
                *(_QWORD *)&v99[16] = v49;
                LODWORD(v49) = *(_DWORD *)(a2 + 64);
                *(_DWORD *)(a2 + 64) = v44;
                LOBYTE(v44) = v102;
                v101 = v49;
                LOBYTE(v49) = *(_BYTE *)(a2 + 68);
                *(__m128i *)v99 = v46;
                v52 = _mm_loadu_si128((const __m128i *)(a2 + 48));
                *(__m128i *)(a2 + 32) = si128;
                v53 = _mm_load_si128(&v100);
                *(_QWORD *)(a2 + 24) = v50;
                *(_BYTE *)(a2 + 68) = v44;
                v102 = v49;
                *(__m128i *)(a2 + 48) = v53;
                *(__m128i *)&v99[24] = v51;
                v100 = v52;
              }
              clear_tinfo_t(v107);
              if ( v105 )
              {
                *(_QWORD *)&v106 = 0;
                qfree(v105, (const char *)v13);
              }
              if ( *(_QWORD *)&v103[16] )
              {
                *(_QWORD *)&v104 = 0;
                qfree(*(_QWORD *)&v103[16], (const char *)v13);
              }
              clear_tinfo_t(&v95);
              if ( dest )
              {
                v97.m128i_i64[0] = 0;
                qfree(dest, (const char *)v13);
              }
              goto LABEL_46;
            }
LABEL_25:
            nc = v29;
            v31 = (_BYTE *)qvector_reserve(&dest, 0, v29, 1);
            dest = v31;
            v29 = nc;
            goto LABEL_26;
          }
        }
      }
      else if ( !v25 && !v26 )
      {
        v28 = 0;
        v29 = 1;
        v30 = &s1;
        goto LABEL_25;
      }
LABEL_46:
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v114);
      QT::QFont::~QFont((QT::QFont *)v113);
    }
  }
  if ( *(_QWORD *)&v99[16] )
  {
    *(_QWORD *)&v99[24] = 0;
    qfree(*(_QWORD *)&v99[16], (const char *)v13);
  }
  if ( src )
  {
    *(_QWORD *)v99 = 0;
    qfree(src, (const char *)v13);
  }
  return v7;
}
