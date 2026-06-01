unsigned __int64 __fastcall sub_4A15E0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        int a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12)
{
  void (*v14)(void); // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __m128 v18; // xmm0
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  _QWORD *v21; // r12
  __int64 v22; // rbp
  char v23; // al
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128 v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r11
  __int64 v33; // r10
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r15
  size_t v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rbx
  __int64 *v51; // r12
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rdi
  size_t v55; // r9
  __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // r11
  char v59; // r10
  unsigned __int64 v60; // rax
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // r10
  __int64 v64; // rax
  void *v65; // rax
  void *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // rdi
  __int64 v70; // rdi
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __m128 v75; // xmm4
  __m128 v76; // xmm5
  __int64 *v77; // rbx
  __int64 v78; // rbp
  __int64 v79; // r12
  unsigned __int64 v80; // rax
  __int64 v81; // rbx
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbp
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v96; // [rsp+10h] [rbp-E8h]
  __int64 *v97; // [rsp+18h] [rbp-E0h]
  __int64 v98; // [rsp+20h] [rbp-D8h]
  char *n; // [rsp+28h] [rbp-D0h]
  size_t nb; // [rsp+28h] [rbp-D0h]
  size_t ng; // [rsp+28h] [rbp-D0h]
  size_t nf; // [rsp+28h] [rbp-D0h]
  size_t ne; // [rsp+28h] [rbp-D0h]
  size_t nd; // [rsp+28h] [rbp-D0h]
  size_t nc; // [rsp+28h] [rbp-D0h]
  size_t na; // [rsp+28h] [rbp-D0h]
  __int64 v107; // [rsp+30h] [rbp-C8h]
  __int64 v108; // [rsp+30h] [rbp-C8h]
  __int64 v109; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v110; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v111; // [rsp+38h] [rbp-C0h]
  char v112; // [rsp+38h] [rbp-C0h]
  __int64 v113; // [rsp+38h] [rbp-C0h]
  __int64 v114; // [rsp+50h] [rbp-A8h] BYREF
  __m128 v115; // [rsp+58h] [rbp-A0h]
  __int64 v116; // [rsp+70h] [rbp-88h] BYREF
  __m128i v117; // [rsp+78h] [rbp-80h] BYREF
  char v118; // [rsp+88h] [rbp-70h]
  unsigned __int64 v119; // [rsp+90h] [rbp-68h] BYREF
  __int128 v120; // [rsp+98h] [rbp-60h]
  __int64 v121; // [rsp+A8h] [rbp-50h]
  int v122; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v123; // [rsp+B8h] [rbp-40h]

  v97 = (__int64 *)a2;
  v123 = __readfsqword(0x28u);
  v14 = *(void (**)(void))(*(_QWORD *)a1 + 672LL);
  if ( v14 != nullsub_263 )
    v14();
  v15 = a3[3];
  v98 = v15;
  if ( (a4 & 0x400) == 0 )
  {
    if ( v15 == -1 )
      goto LABEL_103;
    v16 = (_QWORD *)*a3;
    v17 = *a3 + 8 * a3[1];
    if ( *a3 == v17 )
      goto LABEL_103;
    while ( v15 != *v16 )
    {
      if ( (_QWORD *)v17 == ++v16 )
        goto LABEL_103;
    }
    if ( (_QWORD *)v17 == v16 )
    {
LABEL_103:
      v98 = -1;
      v71 = a3[1];
      if ( v71 )
        v98 = *(_QWORD *)(*a3 + 8 * v71 - 8);
    }
  }
  v18 = 0;
  v19 = *(unsigned int *)(a1 + 2376);
  v119 = 0;
  v121 = a1;
  v122 = a4;
  v120 = 0;
  if ( (_DWORD)v19 )
  {
    if ( (a4 & 1) != 0 )
    {
      v48 = a3[1];
      if ( v48 )
      {
        a2 = 0;
        v119 = qvector_reserve(&v119, 0, v48, 9);
        v19 = *a3;
        v50 = *a3 + 8 * a3[1];
        if ( *a3 != v50 )
        {
          v51 = (__int64 *)*a3;
          do
          {
            a2 = *v51;
            v53 = sub_4A0960(v121, *v51, 1, (__m128)0LL, a6, a7, a8, a9, a10, a11, a12, v15, v49, v19);
            v49 = v53;
            if ( v53 != -1 )
            {
              v116 = v53;
              a2 = v119;
              v85 = v120;
              v117.m128i_i8[0] = 0;
              v54 = v120 + 1;
              if ( (unsigned __int64)&v116 < v119
                || (v15 = v119 + 9LL * *((_QWORD *)&v120 + 1), (unsigned __int64)&v116 >= v15) )
              {
                if ( *((_QWORD *)&v120 + 1) < v54 )
                {
                  v119 = qvector_reserve(&v119, v119, v120 + 1, 9);
                  a2 = v119;
                  v85 = v120;
                }
                a2 += 9 * v85;
                *(_QWORD *)a2 = v116;
                *(_BYTE *)(a2 + 8) = v117.m128i_i8[0];
              }
              else
              {
                if ( *((_QWORD *)&v120 + 1) < v54 )
                {
                  v96 = v49;
                  v119 = qvector_reserve(&v119, v119, v120 + 1, 9);
                  a2 = v119;
                  v49 = v96;
                  v85 = v120;
                }
                v52 = a2 + 9 * v85;
                *(_QWORD *)v52 = v49;
                *(_BYTE *)(v52 + 8) = 0;
              }
              *(_QWORD *)&v120 = v120 + 1;
            }
            ++v51;
          }
          while ( (__int64 *)v50 != v51 );
        }
      }
    }
  }
  v20 = *v97;
  v21 = (_QWORD *)*v97;
  v22 = *v97 + 32 * v97[1];
  if ( v22 != *v97 )
  {
    while ( v21[1] != -2 )
    {
      v23 = v122;
      if ( (v122 & 1) != 0 )
        goto LABEL_18;
LABEL_15:
      v21 += 4;
      if ( (_QWORD *)v22 == v21 )
        goto LABEL_53;
    }
    if ( (a4 & 1) == 0 )
      goto LABEL_15;
    do
    {
      if ( *v21 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 8LL))(*v21);
      *v21 = 0;
      if ( a3[1] )
      {
        v40 = operator new(0x20u);
        v41 = a3[1];
        v42 = v40;
        v15 = 0;
        *(_QWORD *)(v40 + 8) = 0;
        *(_QWORD *)v40 = &chooser_flat_bucket_data_t___vtable;
        *(_OWORD *)(v40 + 16) = 0;
        if ( v41 )
        {
          v65 = (void *)qalloc_or_throw(8 * v41);
          a2 = *a3;
          v66 = memcpy(v65, (const void *)*a3, 8 * v41);
          v68 = *(_QWORD *)(v42 + 8);
          v15 = (unsigned __int64)v66;
          if ( v68 )
          {
            *(_QWORD *)(v42 + 16) = 0;
            ng = (size_t)v66;
            qfree(v68, (const char *)a2, v67, v66);
            v15 = ng;
          }
        }
        *(_QWORD *)(v42 + 8) = v15;
        v21 += 4;
        v18 = (__m128)_mm_unpacklo_epi64((__m128i)v41, (__m128i)v41);
        *(__m128 *)(v42 + 16) = v18;
        *(v21 - 4) = v42;
        if ( (_QWORD *)v22 == v21 )
          goto LABEL_53;
      }
      else
      {
        v21 += 4;
        if ( (_QWORD *)v22 == v21 )
          goto LABEL_53;
      }
    }
    while ( v21[1] == -2 );
    v23 = v122;
    if ( (v122 & 1) == 0 )
      goto LABEL_15;
LABEL_18:
    v24 = *v21;
    if ( *v21 )
    {
      if ( (v23 & 4) != 0 )
      {
        v114 = 0;
        v116 = 0;
        v115 = 0;
        v117 = 0;
        if ( *(_QWORD *)(v24 + 16) )
        {
          a2 = 0;
          nb = *(_QWORD *)(v24 + 16);
          v114 = qvector_reserve(&v114, 0, nb, 9);
          v55 = nb;
          if ( v117.m128i_i64[1] < nb )
          {
            a2 = v116;
            v116 = qvector_reserve(&v116, v116, nb, 8);
            v55 = nb;
          }
          v25 = *(_QWORD *)(v24 + 8);
          v56 = 0;
          do
          {
            while ( 1 )
            {
              v57 = v25 + 9 * v56;
              if ( *(_BYTE *)(v57 + 8) )
                break;
              if ( v55 == ++v56 )
                goto LABEL_94;
            }
            v58 = *(_QWORD *)v57;
            v59 = *(_BYTE *)(v57 + 8);
            v60 = v115.m128_u64[0];
            v61 = v114;
            if ( v115.m128_u64[1] < v115.m128_u64[0] + 1 )
            {
              v112 = v59;
              v109 = v58;
              ne = v55;
              v114 = qvector_reserve(&v114, v114, v115.m128_u64[0] + 1, 9);
              v61 = v114;
              v59 = v112;
              v60 = v115.m128_u64[0];
              v58 = v109;
              v55 = ne;
            }
            v62 = v61 + 9 * v60;
            *(_QWORD *)v62 = v58;
            *(_BYTE *)(v62 + 8) = v59;
            a2 = v116;
            ++v115.m128_u64[0];
            v63 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v56);
            v64 = v117.m128i_i64[0];
            if ( v117.m128i_i64[1] < (unsigned __int64)(v117.m128i_i64[0] + 1) )
            {
              v108 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v56);
              nf = v55;
              v116 = qvector_reserve(&v116, v116, v117.m128i_i64[0] + 1, 8);
              a2 = v116;
              v63 = v108;
              v64 = v117.m128i_i64[0];
              v55 = nf;
            }
            ++v56;
            *(_QWORD *)(a2 + 8 * v64) = v63;
            ++v117.m128i_i64[0];
            v25 = *(_QWORD *)(v24 + 8);
          }
          while ( v55 != v56 );
LABEL_94:
          v27 = v114;
          v26 = v116;
        }
        else
        {
          v25 = *(_QWORD *)(v24 + 8);
          v26 = 0;
          v27 = 0;
        }
        *(_QWORD *)(v24 + 8) = v27;
        v28 = _mm_loadh_ps((const double *)(v24 + 24));
        *(__m128 *)(v24 + 16) = v115;
        v115 = v28;
        v114 = v25;
        v29 = *(_QWORD *)(v24 + 32);
        v30 = *(_QWORD *)(v24 + 48);
        *(_QWORD *)(v24 + 32) = v26;
        v18 = (__m128)_mm_loadu_si128(&v117);
        *(__m128 *)(v24 + 40) = v18;
        v116 = v29;
        v117.m128i_i64[1] = v30;
        if ( v29 )
        {
          v117.m128i_i64[0] = 0;
          *(double *)v18.m128_u64 = qfree(v29, (const char *)a2);
          v25 = v114;
        }
        if ( v25 )
        {
          v115.m128_u64[0] = 0;
          *(double *)v18.m128_u64 = qfree(v25, (const char *)a2);
        }
      }
      else
      {
        v69 = *(_QWORD *)(v24 + 8);
        if ( v69 )
        {
          *(_QWORD *)(v24 + 16) = 0;
          *(double *)v18.m128_u64 = qfree(v69, (const char *)a2);
          *(_QWORD *)(v24 + 8) = 0;
          *(_QWORD *)(v24 + 24) = 0;
        }
        v70 = *(_QWORD *)(v24 + 32);
        if ( v70 )
        {
          *(_QWORD *)(v24 + 40) = 0;
          *(double *)v18.m128_u64 = qfree(v70, (const char *)a2);
          *(_QWORD *)(v24 + 32) = 0;
          *(_QWORD *)(v24 + 48) = 0;
        }
      }
      if ( (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v24 + 24LL))(v24, *(double *)v18.m128_u64) )
      {
        *v21 = v24;
        v19 = v120;
        if ( !(_QWORD)v120 )
          goto LABEL_69;
        v31 = *(_QWORD *)(v24 + 16);
        a2 = *(_QWORD *)(v24 + 8);
        v32 = 9 * v31;
LABEL_29:
        v33 = 9 * v19;
        if ( v19 )
        {
          v34 = v31 + v19;
          v35 = v119;
          v36 = 0;
          if ( *(_QWORD *)(v24 + 24) < v34 )
          {
            v113 = 9 * v19;
            v110 = v19;
            nd = v32;
            v83 = qvector_reserve(v24 + 8, a2, v34, 9);
            *(_QWORD *)(v24 + 8) = v83;
            a2 = v83;
            v32 = nd;
            v33 = v113;
            v19 = v110;
            v36 = 9LL * *(_QWORD *)(v24 + 16) - nd;
          }
          v111 = v19;
          v107 = v33;
          n = (char *)(v32 + a2);
          memmove(&n[v33], n, v36);
          v19 = v111;
          v37 = 0;
          a2 = (unsigned __int64)n;
          do
          {
            *(_QWORD *)&n[v37] = *(_QWORD *)(v35 + v37);
            n[v37 + 8] = *(_BYTE *)(v35 + v37 + 8);
            v37 += 9;
          }
          while ( v107 != v37 );
          v31 = v111 + *(_QWORD *)(v24 + 16);
          *(_QWORD *)(v24 + 16) = v31;
        }
        v116 = -1;
        v15 = *(_QWORD *)(v24 + 40);
        if ( v31 < v15 )
        {
LABEL_43:
          *(_QWORD *)(v24 + 40) = v31;
          goto LABEL_69;
        }
        if ( v15 < v31 )
        {
          a2 = *(_QWORD *)(v24 + 32);
          v38 = *(_QWORD *)(v24 + 48);
          v39 = v24 + 32;
          if ( (unsigned __int64)&v116 < a2 || (v19 = a2 + 8 * v38, (unsigned __int64)&v116 >= v19) )
          {
            if ( v38 >= v31
              || (nc = v31,
                  v93 = qvector_reserve(v39, a2, v31, 8),
                  v15 = *(_QWORD *)(v24 + 40),
                  v31 = nc,
                  *(_QWORD *)(v24 + 32) = v93,
                  a2 = v93,
                  v15 < nc) )
            {
              while ( 1 )
              {
                *(_QWORD *)(a2 + 8 * v15++) = -1;
                if ( v31 == v15 )
                  break;
                a2 = *(_QWORD *)(v24 + 32);
              }
              *(_QWORD *)(v24 + 40) = v31;
              goto LABEL_69;
            }
          }
          else if ( v38 >= v31
                 || (na = v31,
                     v94 = qvector_reserve(v39, a2, v31, 8),
                     v15 = *(_QWORD *)(v24 + 40),
                     v31 = na,
                     *(_QWORD *)(v24 + 32) = v94,
                     a2 = v94,
                     v15 < na) )
          {
            while ( 1 )
            {
              *(_QWORD *)(a2 + 8 * v15++) = -1;
              if ( v31 == v15 )
                break;
              a2 = *(_QWORD *)(v24 + 32);
            }
          }
          goto LABEL_43;
        }
LABEL_69:
        *v21 = v24;
        goto LABEL_15;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      *v21 = 0;
    }
    if ( !(_QWORD)v120 )
    {
      v24 = 0;
      goto LABEL_69;
    }
    v24 = operator new(0x68u);
    v47 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(v121 + 2384));
    v18 = 0;
    v32 = 0;
    v31 = 0;
    *(_QWORD *)(v24 + 8) = 0;
    v19 = v120;
    a2 = 0;
    *(_QWORD *)(v24 + 32) = 0;
    *(_QWORD *)(v24 + 56) = -1;
    *(_QWORD *)(v24 + 64) = -256;
    *(_QWORD *)(v24 + 72) = 255;
    *(_QWORD *)(v24 + 80) = 0;
    *(_QWORD *)(v24 + 88) = 0;
    *(_QWORD *)v24 = &chooser_folder_data_t___vtable;
    *(_QWORD *)(v24 + 96) = v47;
    *(_OWORD *)(v24 + 16) = 0;
    *(_OWORD *)(v24 + 40) = 0;
    goto LABEL_29;
  }
LABEL_53:
  if ( (a4 & 2) != 0 )
  {
    v18 = 0;
    v116 = 0;
    v118 = 0;
    v117 = 0;
    if ( v98 != -1 )
    {
      if ( *(_DWORD *)(a1 + 2376) == 2 )
      {
        a2 = v98;
        v84 = sub_4A0960(a1, v98, 1, (__m128)0LL, a6, a7, a8, a9, a10, a11, a12, v15, v20, v19);
        if ( v84 == -1 )
        {
          v43 = v116;
        }
        else
        {
          v43 = operator new(0x68u);
          v86 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2384));
          *(_QWORD *)(v43 + 8) = 0;
          v18 = 0;
          *(_QWORD *)v43 = &chooser_folder_data_t___vtable;
          *(_QWORD *)(v43 + 32) = 0;
          *(_QWORD *)(v43 + 56) = -1;
          *(_QWORD *)(v43 + 64) = -256;
          *(_QWORD *)(v43 + 72) = 255;
          *(_QWORD *)(v43 + 80) = 0;
          *(_QWORD *)(v43 + 88) = 0;
          *(_QWORD *)(v43 + 96) = v86;
          *(_OWORD *)(v43 + 16) = 0;
          *(_OWORD *)(v43 + 40) = 0;
          v87 = qvector_reserve(v43 + 8, 0, 1, 9);
          v88 = *(_QWORD *)(v43 + 16);
          *(_QWORD *)(v43 + 8) = v87;
          v89 = 9 * v88 + v87;
          *(_QWORD *)v89 = v84;
          *(_BYTE *)(v89 + 8) = 0;
          v90 = *(_QWORD *)(v43 + 40);
          v91 = *(_QWORD *)(v43 + 48);
          ++*(_QWORD *)(v43 + 16);
          a2 = *(_QWORD *)(v43 + 32);
          v114 = -1;
          if ( v91 < v90 + 1 )
          {
            v92 = qvector_reserve(v43 + 32, a2, v90 + 1, 8);
            *(_QWORD *)(v43 + 32) = v92;
            a2 = v92;
            v90 = *(_QWORD *)(v43 + 40);
          }
          *(_QWORD *)(a2 + 8 * v90) = -1;
          v116 = v43;
          ++*(_QWORD *)(v43 + 40);
        }
      }
      else
      {
        v43 = operator new(0x20u);
        v18 = 0;
        a2 = 0;
        *(_QWORD *)v43 = &chooser_flat_bucket_data_t___vtable;
        *(_QWORD *)(v43 + 8) = 0;
        *(_OWORD *)(v43 + 16) = 0;
        v44 = qvector_reserve(v43 + 8, 0, 1, 8);
        v45 = *(_QWORD *)(v43 + 16);
        *(_QWORD *)(v43 + 8) = v44;
        *(_QWORD *)(v44 + 8 * v45) = v98;
        ++*(_QWORD *)(v43 + 16);
        v116 = v43;
        v117.m128i_i64[0] = -2;
      }
      if ( v43 )
        goto LABEL_58;
    }
    if ( (a4 & 4) == 0 )
    {
LABEL_58:
      a2 = (unsigned __int64)&v116;
      sub_4DE310(v97, &v116);
    }
    sub_4DE2C0(&v116);
  }
  if ( (a4 & 0x10) != 0 )
  {
    if ( *(_DWORD *)(a1 + 2376) )
    {
      a2 = -2;
      if ( sub_4DF940(a1 + 104, -2) )
      {
        v77 = (__int64 *)*a3;
        v78 = *a3 + 8 * a3[1];
        if ( v78 != *a3 )
        {
          do
          {
            v79 = *v77;
            a2 = *v77;
            v80 = sub_4A0960(a1, *v77, 1, v18, a6, a7, a8, v75, v76, a11, a12, v72, v73, v74);
            if ( v80 != -1 )
            {
              a2 = v80;
              sub_4A0080((_QWORD *)a1, v80, v79);
            }
            ++v77;
          }
          while ( (__int64 *)v78 != v77 );
        }
        v81 = a3[3];
        if ( v81 != -1 )
        {
          a2 = a3[3];
          v82 = sub_4A0960(a1, a2, 1, v18, a6, a7, a8, v75, v76, a11, a12, v72, v73, v74);
          if ( v82 != -1 )
          {
            a2 = v82;
            sub_4A0080((_QWORD *)a1, v82, v81);
          }
        }
      }
    }
  }
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119, (const char *)a2);
  }
  return v123 - __readfsqword(0x28u);
}
