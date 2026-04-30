__int64 __fastcall sub_52C660(__int64 a1, unsigned __int8 a2, __int64 *a3)
{
  const char *v3; // r13
  const char *v4; // r15
  char *v8; // rax
  size_t v9; // rbp
  __int64 v10; // rax
  const char *v11; // rcx
  char *v13; // r15
  char *v14; // rax
  char *v15; // r8
  size_t v16; // r9
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const char *v20; // r8
  char *v21; // r15
  size_t v22; // r9
  const char *v23; // rdx
  size_t v24; // rax
  __int64 v25; // rdx
  const char *v26; // rdx
  const char *v27; // rsi
  size_t v28; // rax
  char *v29; // rdx
  unsigned __int64 v30; // rcx
  double v31; // xmm0_8
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rdx
  bool v35; // zf
  const char *v36; // r13
  char *v37; // r12
  size_t v38; // rax
  __int64 v39; // rbp
  size_t v40; // r14
  size_t v41; // r9
  _BYTE *v42; // rsi
  __int64 v43; // rdx
  const char *v44; // r15
  size_t v45; // rax
  __int64 v46; // rbp
  size_t v47; // r13
  size_t v48; // r14
  _BYTE *v49; // rsi
  __int64 v50; // rdx
  void *v51; // rdi
  __int64 v52; // rax
  void *v53; // rdx
  __m128i v54; // xmm0
  void *v55; // rdi
  void *v56; // rdx
  const char *v57; // rsi
  void *v58; // r9
  __int64 v59; // rcx
  _BYTE *v60; // rdi
  signed __int64 v61; // r15
  char *v62; // rdx
  char *v63; // rax
  _BYTE *v64; // rsi
  __int64 v65; // r15
  char *v66; // rdi
  __int64 v67; // rax
  char *v68; // rdi
  void *v69; // rdx
  const char *v70; // rsi
  void *v71; // r9
  __int64 v72; // rcx
  char *v73; // rdi
  signed __int64 v74; // r8
  char *v75; // rdx
  char *v76; // rax
  char *v77; // rsi
  char *v78; // rdi
  __int64 v79; // rax
  char *v80; // rcx
  const char *src; // [rsp+8h] [rbp-130h]
  const char *srcc; // [rsp+8h] [rbp-130h]
  _BYTE *srcf; // [rsp+8h] [rbp-130h]
  void *srca; // [rsp+8h] [rbp-130h]
  _BYTE *srch; // [rsp+8h] [rbp-130h]
  void *srcb; // [rsp+8h] [rbp-130h]
  char *srci; // [rsp+8h] [rbp-130h]
  char *srcj; // [rsp+8h] [rbp-130h]
  void *srcg; // [rsp+8h] [rbp-130h]
  void *srck; // [rsp+8h] [rbp-130h]
  void *srcm; // [rsp+8h] [rbp-130h]
  void *srce; // [rsp+8h] [rbp-130h]
  void *srcd; // [rsp+8h] [rbp-130h]
  void *srcl; // [rsp+8h] [rbp-130h]
  void *srcn; // [rsp+8h] [rbp-130h]
  void *srco; // [rsp+8h] [rbp-130h]
  int v97[2]; // [rsp+10h] [rbp-128h]
  int v98[2]; // [rsp+10h] [rbp-128h]
  int v99[2]; // [rsp+10h] [rbp-128h]
  int v100[2]; // [rsp+10h] [rbp-128h]
  int v101[2]; // [rsp+10h] [rbp-128h]
  int v102[2]; // [rsp+10h] [rbp-128h]
  int v103[2]; // [rsp+10h] [rbp-128h]
  int v104[2]; // [rsp+10h] [rbp-128h]
  int v105[2]; // [rsp+10h] [rbp-128h]
  int v106[2]; // [rsp+10h] [rbp-128h]
  size_t v107; // [rsp+18h] [rbp-120h]
  size_t v108; // [rsp+18h] [rbp-120h]
  size_t v109; // [rsp+18h] [rbp-120h]
  char v110; // [rsp+2Fh] [rbp-109h] BYREF
  void *v111; // [rsp+30h] [rbp-108h] BYREF
  __int128 v112; // [rsp+38h] [rbp-100h]
  char *v113; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v114; // [rsp+58h] [rbp-E0h]
  void *dest; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v116; // [rsp+78h] [rbp-C0h] BYREF
  void *v117[4]; // [rsp+90h] [rbp-A8h] BYREF
  void *v118; // [rsp+B0h] [rbp-88h] BYREF
  char *s; // [rsp+B8h] [rbp-80h]
  __int64 v120; // [rsp+C0h] [rbp-78h]
  _QWORD v121[2]; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v122[11]; // [rsp+E0h] [rbp-58h] BYREF

  v3 = "@lighten";
  v122[3] = __readfsqword(0x28u);
  if ( !a2 )
    v3 = "@darken";
  if ( !*(_QWORD *)(a1 + 8) )
    return 1;
  v4 = *(const char **)a1;
  v8 = strstr(*(const char **)a1, v3);
  if ( !v8 )
    return 1;
  v9 = v8 - v4;
  if ( v8 - v4 == -1 )
    return 1;
  v10 = skip_spaces(&v8[a2 + 7]);
  if ( *(_BYTE *)v10 != 40
    || (v13 = (char *)(v10 + 1), v14 = strchr((const char *)(v10 + 1), 44), (v15 = v14) == nullptr) )
  {
LABEL_7:
    v11 = &s1;
    if ( *(_QWORD *)(a1 + 8) )
      v11 = *(const char **)a1;
    sub_169A50(a3, (__int64)"Malformed %s directive: %s", v3, v11);
    return 0;
  }
  v111 = nullptr;
  v112 = 0;
  v16 = v14 - v13;
  if ( v14 != v13 )
  {
    v55 = nullptr;
    v56 = (void *)(v16 + 1);
    if ( v16 != -1 )
    {
      v108 = v14 - v13;
      *(_QWORD *)v103 = v14;
      srce = (void *)(v16 + 1);
      v111 = (void *)qvector_reserve(&v111, 0, v56, 1);
      v16 = v108;
      v55 = v111;
      v15 = *(char **)v103;
      v56 = srce;
    }
    *(_QWORD *)&v112 = v56;
    v57 = v13;
    *(_QWORD *)v97 = v15;
    srcf = (_BYTE *)v16;
    memmove(v55, v13, v16);
    v58 = srcf;
    v15 = *(char **)v97;
    srcf[(_QWORD)v111] = 0;
    v59 = v112;
    if ( (unsigned __int64)v112 > 1 )
    {
      v60 = v111;
      v61 = v112 - 1;
      v62 = (char *)v111 + v112 - 1;
      v63 = v62;
      if ( v111 < v62 )
      {
        while ( *(v63 - 1) == 32 )
        {
          if ( v111 == --v63 )
            goto LABEL_113;
        }
        v61 = v63 - (_BYTE *)v111;
        if ( v63 != v111 )
          goto LABEL_73;
LABEL_113:
        if ( !v111 )
        {
LABEL_79:
          v64 = v60;
          while ( *v64 == 32 )
          {
            if ( ++v64 == v62 )
            {
              *v60 = *v64;
              v66 = (char *)v111;
              goto LABEL_119;
            }
          }
          if ( v60 >= v64 )
            goto LABEL_13;
          *(_QWORD *)v98 = v15;
          v65 = v62 - v64;
          srca = (void *)(v62 - v64 + 1);
          memmove(v60, v64, (size_t)srca);
          v64 = v111;
          v58 = srca;
          v15 = *(char **)v98;
          v66 = (char *)v111;
          if ( v65 )
          {
            v67 = v112;
            if ( (unsigned __int64)v112 < (unsigned __int64)srca )
            {
              if ( *((_QWORD *)&v112 + 1) < (unsigned __int64)srca )
              {
                v111 = (void *)qvector_reserve(&v111, v111, srca, 1);
                v66 = (char *)v111;
                v15 = *(char **)v98;
                v67 = v112;
                v58 = srca;
              }
              *(_QWORD *)v105 = v15;
              srcn = v58;
              memset(&v66[v67], 0, (size_t)v58 - v67);
              v64 = v111;
              v15 = *(char **)v105;
              *(_QWORD *)&v112 = srcn;
            }
            else if ( srca != (void *)v112 )
            {
              *(_QWORD *)&v112 = srca;
            }
            v64[v65] = 0;
            goto LABEL_13;
          }
LABEL_119:
          if ( v66 )
          {
            srcj = v15;
            *(_QWORD *)&v112 = 0;
            qfree(v66, v64, v62, v59, v15, v58);
            v111 = nullptr;
            v15 = srcj;
            *((_QWORD *)&v112 + 1) = 0;
          }
          goto LABEL_13;
        }
        *(_QWORD *)&v112 = 0;
        qfree(v111, v57);
        v111 = nullptr;
        v15 = *(char **)v97;
        *((_QWORD *)&v112 + 1) = 0;
      }
      else
      {
LABEL_73:
        v58 = (void *)(v61 + 1);
        if ( (unsigned __int64)v112 < v61 + 1 )
        {
          if ( *((_QWORD *)&v112 + 1) < (unsigned __int64)v58 )
          {
            v111 = (void *)qvector_reserve(&v111, v111, v61 + 1, 1);
            v59 = v112;
            v60 = v111;
            v15 = *(char **)v97;
            v58 = (void *)(v61 + 1);
          }
          *(_QWORD *)v101 = v15;
          srck = v58;
          memset(&v60[v59], 0, (size_t)v58 - v59);
          v58 = srck;
          v15 = *(char **)v101;
          *(_QWORD *)&v112 = srck;
          v63 = (char *)v111 + v61;
        }
        else if ( (_QWORD)v112 != v61 + 1 )
        {
          *(_QWORD *)&v112 = v61 + 1;
        }
        *v63 = 0;
      }
      if ( (unsigned __int64)v112 <= 1 )
        goto LABEL_13;
      v60 = v111;
      v62 = (char *)v111 + v112 - 1;
      if ( v111 >= v62 )
        goto LABEL_13;
      goto LABEL_79;
    }
  }
LABEL_13:
  src = (const char *)skip_spaces(v15 + 1);
  v17 = strchr(src, 41);
  v20 = src;
  v21 = v17;
  if ( !v17 )
  {
    if ( v111 )
    {
      *(_QWORD *)&v112 = 0;
      qfree(v111, (_BYTE *)&qword_28 + 1, v18, v19, src);
    }
    goto LABEL_7;
  }
  v113 = nullptr;
  v114 = 0;
  v22 = v17 - src;
  if ( v17 == src )
    goto LABEL_15;
  v68 = nullptr;
  v69 = (void *)(v22 + 1);
  if ( v22 != -1 )
  {
    v107 = v17 - src;
    *(_QWORD *)v100 = src;
    srcg = (void *)(v22 + 1);
    v113 = (char *)qvector_reserve(&v113, 0, v69, 1);
    v22 = v107;
    v68 = v113;
    v20 = *(const char **)v100;
    v69 = srcg;
  }
  *(_QWORD *)&v114 = v69;
  v70 = v20;
  srch = (_BYTE *)v22;
  memmove(v68, v20, v22);
  v71 = srch;
  srch[(_QWORD)v113] = 0;
  v72 = v114;
  if ( (unsigned __int64)v114 <= 1 )
    goto LABEL_15;
  v73 = v113;
  v74 = v114 - 1;
  v75 = &v113[v114 - 1];
  v76 = v75;
  if ( v113 >= v75 )
  {
LABEL_96:
    v71 = (void *)(v74 + 1);
    if ( (unsigned __int64)v114 < v74 + 1 )
    {
      if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)v71 )
      {
        *(_QWORD *)v104 = v74;
        srcl = (void *)(v74 + 1);
        v113 = (char *)qvector_reserve(&v113, v113, v74 + 1, 1);
        v72 = v114;
        v73 = v113;
        v74 = *(_QWORD *)v104;
        v71 = srcl;
      }
      srcm = v71;
      *(_QWORD *)v102 = v74;
      memset(&v73[v72], 0, (size_t)v71 - v72);
      v71 = srcm;
      v76 = &v113[*(_QWORD *)v102];
      *(_QWORD *)&v114 = srcm;
    }
    else if ( (_QWORD)v114 != v74 + 1 )
    {
      *(_QWORD *)&v114 = v74 + 1;
    }
    *v76 = 0;
LABEL_100:
    if ( (unsigned __int64)v114 <= 1 )
      goto LABEL_15;
    v73 = v113;
    v75 = &v113[v114 - 1];
    if ( v113 >= v75 )
      goto LABEL_15;
    goto LABEL_102;
  }
  while ( *(v76 - 1) == 32 )
  {
    if ( v113 == --v76 )
      goto LABEL_111;
  }
  v74 = v76 - v113;
  if ( v76 != v113 )
    goto LABEL_96;
LABEL_111:
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113, v70);
    v113 = nullptr;
    *((_QWORD *)&v114 + 1) = 0;
    goto LABEL_100;
  }
LABEL_102:
  v77 = v73;
  while ( *v77 == 32 )
  {
    if ( v75 == ++v77 )
    {
      *v73 = *v75;
      v78 = v113;
      goto LABEL_131;
    }
  }
  if ( v73 >= v77 )
    goto LABEL_15;
  *(_QWORD *)v99 = v75 - v77;
  srcb = (void *)(v75 - v77 + 1);
  memmove(v73, v77, (size_t)srcb);
  v74 = *(_QWORD *)v99;
  v77 = v113;
  v71 = srcb;
  v78 = v113;
  if ( *(_QWORD *)v99 )
  {
    v79 = v114;
    if ( (unsigned __int64)v114 < (unsigned __int64)srcb )
    {
      if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)srcb )
      {
        v113 = (char *)qvector_reserve(&v113, v113, srcb, 1);
        v78 = v113;
        v74 = *(_QWORD *)v99;
        v79 = v114;
        v71 = srcb;
      }
      *(_QWORD *)v106 = v74;
      srco = v71;
      memset(&v78[v79], 0, (size_t)v71 - v79);
      v77 = v113;
      v74 = *(_QWORD *)v106;
      *(_QWORD *)&v114 = srco;
    }
    else if ( srcb != (void *)v114 )
    {
      *(_QWORD *)&v114 = srcb;
    }
    v77[v74] = 0;
    goto LABEL_15;
  }
LABEL_131:
  if ( v78 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v78, v77, v75, v72, v74, v71);
    v113 = nullptr;
    *((_QWORD *)&v114 + 1) = 0;
  }
LABEL_15:
  v23 = &s1;
  if ( !(_QWORD)v112 )
  {
    v24 = 0;
    if ( !&s1 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v23 = (const char *)v111;
  v24 = 0;
  if ( v111 )
  {
LABEL_17:
    srcc = v23;
    v24 = strlen(v23);
    v23 = srcc;
  }
LABEL_18:
  v121[0] = QT::QColor::fromString(v23, v24);
  v121[1] = v25;
  if ( !LODWORD(v121[0]) )
  {
    v26 = &s1;
    if ( (_QWORD)v112 )
      v26 = (const char *)v111;
    v27 = "Color \"%s\" is not valid";
    sub_169A50(a3, (__int64)"Color \"%s\" is not valid", v26);
LABEL_22:
    if ( v113 )
    {
      *(_QWORD *)&v114 = 0;
      qfree(v113, v27);
    }
    if ( v111 )
    {
      *(_QWORD *)&v112 = 0;
      qfree(v111, v27);
    }
    return 0;
  }
  v110 = 0;
  if ( (_QWORD)v114 )
  {
    v28 = v114 - 1;
    v29 = v113;
    v30 = (unsigned __int64)(v114 - 1) >> 63;
  }
  else
  {
    LOBYTE(v30) = 0;
    v28 = 0;
    v29 = (char *)&s1;
  }
  if ( !v29 || (_BYTE)v30 )
  {
    v28 = 0;
    if ( v29 )
    {
      srci = v29;
      v28 = strlen(v29);
      v29 = srci;
    }
  }
  v31 = QT::QString::fromUtf8(&v118, v28, v29);
  v32 = QT::QString::toIntegral_helper(v120, s, &v110, 10, v31);
  v33 = v32;
  if ( v32 != (int)v32 )
  {
    v110 = 0;
    v33 = 0;
  }
  if ( v118 && !_InterlockedSub((volatile signed __int32 *)v118, 1u) )
    free(v118);
  if ( !v110 )
  {
    v80 = (char *)&s1;
    if ( (_QWORD)v114 )
      v80 = v113;
    v27 = "Invalid %s factor: %s";
    sub_169A50(a3, (__int64)"Invalid %s factor: %s", v3, v80);
    goto LABEL_22;
  }
  if ( a2 )
    v122[0] = QT::QColor::lighter((QT::QColor *)v121, v33);
  else
    v122[0] = QT::QColor::darker((QT::QColor *)v121, v33);
  v122[1] = v34;
  v35 = *(_QWORD *)(a1 + 8) == 0;
  dest = nullptr;
  v36 = &s1;
  v116 = 0;
  if ( !v35 )
    v36 = *(const char **)a1;
  dest = (void *)qvector_reserve(&dest, 0, v9 + 1, 1);
  v116.m128i_i64[0] = v9 + 1;
  *((_BYTE *)dest + v9) = 0;
  memmove(dest, v36, v9);
  ((void (__fastcall *)(void **, _QWORD *, _QWORD))QT::QColor::name)(v117, v122, 0);
  QT::QString::toUtf8_helper((QT::QString *)&v118, (const QT::QString *)v117);
  v37 = s;
  if ( s )
    goto LABEL_41;
  if ( &QT::QByteArray::_empty )
  {
    v37 = (char *)&QT::QByteArray::_empty;
LABEL_41:
    v38 = strlen(v37);
    v39 = v116.m128i_i64[0];
    v40 = v38;
    v41 = v38;
    if ( v116.m128i_i64[0] )
    {
      v39 = v116.m128i_i64[0] - 1;
      v41 = v38 + v116.m128i_i64[0] - 1;
    }
    v42 = dest;
    v43 = v41 + 1;
    if ( v116.m128i_i64[1] < v41 + 1 )
    {
      v109 = v41;
      srcd = (void *)(v41 + 1);
      dest = (void *)qvector_reserve(&dest, dest, v43, 1);
      v41 = v109;
      v42 = dest;
      v43 = (__int64)srcd;
    }
    v116.m128i_i64[0] = v43;
    v42[v41] = 0;
    memmove((char *)dest + v39, v37, v40);
  }
  if ( v118 && !_InterlockedSub((volatile signed __int32 *)v118, 1u) )
    free(v118);
  if ( v117[0] && !_InterlockedSub((volatile signed __int32 *)v117[0], 1u) )
    free(v117[0]);
  v44 = v21 + 1;
  v45 = strlen(v44);
  v46 = v116.m128i_i64[0];
  v47 = v45;
  v48 = v45;
  if ( v116.m128i_i64[0] )
  {
    v46 = v116.m128i_i64[0] - 1;
    v48 = v45 + v116.m128i_i64[0] - 1;
  }
  v49 = dest;
  v50 = v48 + 1;
  if ( v116.m128i_i64[1] < v48 + 1 )
  {
    dest = (void *)qvector_reserve(&dest, dest, v50, 1);
    v50 = v48 + 1;
    v49 = dest;
  }
  v116.m128i_i64[0] = v50;
  v49[v48] = 0;
  memmove((char *)dest + v46, v44, v47);
  v52 = *(_QWORD *)(a1 + 16);
  v53 = dest;
  v54 = _mm_loadu_si128(&v116);
  dest = *(void **)a1;
  v51 = dest;
  *(_QWORD *)a1 = v53;
  v116.m128i_i64[1] = v52;
  *(__m128i *)(a1 + 8) = v54;
  if ( v51 )
  {
    v116.m128i_i64[0] = 0;
    *(double *)v54.m128i_i64 = qfree(v51, v44);
  }
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    *(double *)v54.m128i_i64 = qfree(v113, v44, *(double *)v54.m128i_i64);
  }
  if ( v111 )
  {
    *(_QWORD *)&v112 = 0;
    qfree(v111, v44, *(double *)v54.m128i_i64);
  }
  return 1;
}
