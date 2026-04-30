_BOOL8 __fastcall sub_1FC580(
        __int64 a1,
        unsigned __int8 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  const char *v15; // rsi
  __int64 v16; // rbp
  int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128 v20; // xmm0
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  const char *v25; // rsi
  const char *v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rbp
  char *v29; // rax
  _BYTE *v30; // r13
  __int64 v31; // rbp
  char *v32; // r12
  char *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // rbp
  __int64 v38; // rax
  int v39; // r15d
  __int64 v40; // rax
  const char *v41; // rsi
  const char *v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // rsi
  int v45; // ebp
  char *v46; // rax
  __int64 v47; // rbp
  _BYTE *v48; // r14
  size_t v49; // rbp
  char *v50; // r15
  char *v51; // r8
  void *v52; // rsi
  size_t v53; // rdx
  char *v54; // rdi
  void *v55; // rbp
  size_t v56; // r15
  __int64 v57; // rdx
  const char *v58; // rsi
  char *v59; // rax
  int v60; // eax
  __int64 v61; // r13
  void **v62; // r10
  __int64 v63; // rbx
  __int64 v64; // rbp
  size_t v65; // rdx
  size_t v66; // r15
  size_t v67; // r12
  size_t v68; // r8
  _BYTE *v69; // rsi
  size_t v70; // rbp
  char *v71; // rsi
  const char *v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rbp
  __int64 v75; // rbx
  __int64 *v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rdx
  __int64 v79; // rbp
  __int64 v80; // rbx
  __int64 *v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __m128 v87; // xmm4
  __m128 v88; // xmm5
  __int64 v89; // rdi
  double v90; // xmm0_8
  __int64 v91; // rdi
  __int64 v92; // rdi
  __int64 v93; // r12
  __int64 v94; // rdx
  __int64 v95; // rbx
  __int64 *v96; // rax
  __int64 v97; // rdi
  __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 *v100; // rax
  __int64 v101; // rdi
  char v102; // [rsp+0h] [rbp-1A8h]
  int v103[2]; // [rsp+8h] [rbp-1A0h]
  int v104[2]; // [rsp+8h] [rbp-1A0h]
  int v105[2]; // [rsp+8h] [rbp-1A0h]
  int v106[2]; // [rsp+8h] [rbp-1A0h]
  int v107; // [rsp+18h] [rbp-190h]
  size_t v108; // [rsp+18h] [rbp-190h]
  _QWORD *v109; // [rsp+20h] [rbp-188h]
  bool v110; // [rsp+2Bh] [rbp-17Dh]
  char *v112; // [rsp+30h] [rbp-178h]
  size_t v113; // [rsp+30h] [rbp-178h]
  char *v114; // [rsp+38h] [rbp-170h]
  char v115; // [rsp+4Bh] [rbp-15Dh]
  int v116; // [rsp+4Ch] [rbp-15Ch]
  bool v117; // [rsp+57h] [rbp-151h] BYREF
  void *v118; // [rsp+58h] [rbp-150h] BYREF
  __int64 v119; // [rsp+60h] [rbp-148h] BYREF
  int v120; // [rsp+68h] [rbp-140h]
  int v121[2]; // [rsp+70h] [rbp-138h] BYREF
  int v122; // [rsp+78h] [rbp-130h]
  __int64 v123; // [rsp+80h] [rbp-128h] BYREF
  __int128 v124; // [rsp+88h] [rbp-120h]
  void *src; // [rsp+A0h] [rbp-108h] BYREF
  __int128 v126; // [rsp+A8h] [rbp-100h]
  void *v127; // [rsp+C0h] [rbp-E8h] BYREF
  size_t n[3]; // [rsp+C8h] [rbp-E0h]
  char v129[8]; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v130; // [rsp+F0h] [rbp-B8h]
  char v131; // [rsp+F8h] [rbp-B0h]
  _BYTE v132[16]; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v133; // [rsp+110h] [rbp-98h] BYREF
  __int128 v134; // [rsp+118h] [rbp-90h]
  __int64 v135; // [rsp+128h] [rbp-80h]
  __int64 v136; // [rsp+140h] [rbp-68h]
  __int128 v137; // [rsp+148h] [rbp-60h]
  unsigned __int64 v138; // [rsp+168h] [rbp-40h]

  v138 = __readfsqword(0x28u);
  v120 = 0;
  v119 = 0;
  *(_QWORD *)v121 = 0;
  v122 = 0;
  v109 = QT::QCoreApplication::self;
  v115 = sub_1F07A0(a1, (__int64)&v119, (__int64)v121, &v117);
  if ( !v115 )
  {
    v11 = *(_QWORD *)(a1 + 600);
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 592);
      v13 = v12 + 80 * v11;
      if ( v12 != v13 )
      {
        while ( (*(_BYTE *)(v12 + 72) & 4) != 0 )
        {
          v12 += 80;
          if ( v13 == v12 )
            return 1;
        }
        if ( v12 )
          sub_47C5A0(v109 + 2, v12 + 8, a2);
      }
    }
    return 1;
  }
  v15 = (const char *)a1;
  v16 = v119;
  v17 = v120;
  *(_QWORD *)v103 = *(_QWORD *)v121;
  v107 = v122;
  sub_1E96E0((QT::QObject *)v129, a3, a1, 0);
  v110 = v117;
  if ( v117 )
  {
    v20.m128_u64[0] = 0;
    v21 = *(_BYTE *)(a1 + 968) == 0;
    v127 = nullptr;
    *(_OWORD *)n = 0;
    if ( v21 )
    {
      v23 = 0;
      goto LABEL_18;
    }
    if ( *(_QWORD *)(a1 + 424) )
    {
      v22 = *(_DWORD *)(a1 + 416);
      if ( v22 == 2 )
      {
        v23 = *(_QWORD *)(a1 + 896);
      }
      else if ( v22 == 3 )
      {
        v23 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v23 = 0;
        if ( v22 == 1 )
          v23 = *(_QWORD *)(a1 + 888);
      }
LABEL_18:
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 176LL))(v23, 0);
      v25 = &s1;
      if ( *(_QWORD *)(v24 + 16) )
        v25 = *(const char **)(v24 + 8);
      tag_remove(&v127, v25, 0);
      v26 = &s1;
      if ( n[0] )
        v26 = (const char *)v127;
      v27 = qustrlen(v26);
      v133 = 0;
      v134 = 0;
      if ( v27 >= v107 )
        LODWORD(v27) = v107;
      if ( v17 > (int)v27 )
        v17 = v27;
      v28 = (int)v27 - v17;
      v29 = (char *)&s1;
      if ( n[0] )
        v29 = (char *)v127;
      src = v29;
      skip_utf8(&src, v17);
      v30 = src;
      skip_utf8(&src, v28);
      v31 = v134;
      v32 = (char *)((_BYTE *)src - v30);
      v33 = (char *)((_BYTE *)src - v30);
      if ( (_QWORD)v134 )
      {
        v31 = v134 - 1;
        v33 = &v32[v134 - 1];
      }
      v34 = v133;
      if ( *((_QWORD *)&v134 + 1) < (unsigned __int64)(v33 + 1) )
      {
        v133 = qvector_reserve(&v133, v133, v33 + 1, 1);
        v34 = v133;
      }
      *(_QWORD *)&v134 = v33 + 1;
      v33[v34] = 0;
      memmove((void *)(v31 + v133), v30, (size_t)v32);
      sub_47C5A0(v109 + 2, &v133, a2);
      if ( !a2 )
      {
        v89 = *(_QWORD *)(a1 + 224);
        if ( v89 )
        {
          v90 = qfree(v89, (const char *)&v133);
          *(_QWORD *)(a1 + 224) = 0;
          v91 = *(_QWORD *)(a1 + 248);
          *(_DWORD *)(a1 + 232) = 0;
          qfree(v91, (const char *)&v133, v90);
          *(_QWORD *)(a1 + 248) = 0;
          v92 = *(_QWORD *)(a1 + 216);
          *(_DWORD *)(a1 + 256) = 0;
          sub_1FD320(v92);
        }
      }
      if ( v133 )
      {
        *(_QWORD *)&v134 = 0;
        qfree(v133, (const char *)&v133);
      }
      if ( v127 )
      {
        n[0] = 0;
        qfree(v127, (const char *)&v133);
      }
LABEL_37:
      if ( !v131 && v130 && *(_DWORD *)(v130 + 964) == 1 )
        dto_copy_to_inf(v132);
      *(_QWORD *)v129 = &object_lifecycle_monitor_t___vtable;
      QT::QObject::~QObject((QT::QObject *)v129);
      return 1;
    }
    sub_1E69C0(0.0, (__int64)v129, a1, v18, v19);
LABEL_151:
    v94 = v133;
    goto LABEL_138;
  }
  v20 = 0;
  v35 = *(_QWORD *)(a1 + 728);
  v123 = 0;
  v133 = 0;
  v136 = 0;
  v124 = 0;
  v134 = 0;
  v137 = 0;
  linearray_t_ctr(&v133, v35);
  linearray_t_set_place(&v133, v16);
  if ( *(_BYTE *)(a1 + 740) && v17 > v107 )
  {
    v36 = v17;
    v17 = v107;
    v107 = v36;
  }
  sub_541E70();
  v116 = (unsigned __int64)qtime64() >> 32;
  while ( 1 )
  {
    if ( (_QWORD)v124 )
    {
      v16 = (unsigned __int8)v124;
      if ( !(_BYTE)v124 )
        break;
    }
    while ( 1 )
    {
LABEL_48:
      v37 = v135;
      if ( (unsigned __int8)sub_541EF0() )
        goto LABEL_86;
      v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 8LL))(v37, *(_QWORD *)(a1 + 728));
      if ( !(_BYTE)v38 )
        show_auto(v38, 0);
      if ( (v39 = 0,
            (*(unsigned int (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)a1 + 464LL))(a1, *(int **)v103, v37) == -1)
        && (*(int *)(a1 + 940) <= 740
          ? (v60 = l_compare(v37, *(_QWORD *)v103))
          : (v60 = l_compare2(v37, *(_QWORD *)v103, *(_QWORD *)(a1 + 728))),
            v39 = v60,
            v60 > 0)
        || (unsigned __int8)linearray_t_ending(&v133)
        || (v40 = linearray_t_down(&v133)) == 0 )
      {
LABEL_86:
        v61 = v124;
        v127 = nullptr;
        v62 = &v127;
        *(_OWORD *)n = 0;
        if ( 80LL * (_QWORD)v124 )
        {
          v127 = (void *)qvector_reserve(&v127, 0, 80 * v124, 1);
          v61 = v124;
          v62 = &v127;
        }
        v63 = 0;
        if ( v61 )
        {
          do
          {
            v70 = n[0];
            if ( n[0] > 1 )
            {
              v71 = (char *)v127;
              if ( n[1] < n[0] + 1 )
              {
                *(_QWORD *)v105 = v62;
                v127 = (void *)qvector_reserve(v62, v127, n[0] + 1, 1);
                v62 = *(void ***)v105;
                v71 = (char *)v127;
              }
              n[0] = v70 + 1;
              v71[v70 - 1] = 10;
              *((_BYTE *)v127 + v70) = 0;
            }
            v64 = v123 + 24 * v63;
            v65 = *(_QWORD *)(v64 + 8);
            if ( v65 )
            {
              v66 = v65 - 1;
              if ( v65 != 1 )
              {
                v67 = n[0];
                v68 = v65 - 1;
                if ( n[0] )
                {
                  v67 = n[0] - 1;
                  v68 = v66 + n[0] - 1;
                  v65 += n[0] - 1;
                }
                v69 = v127;
                if ( n[1] < v65 )
                {
                  v113 = v68;
                  v108 = v65;
                  *(_QWORD *)v106 = v62;
                  v127 = (void *)qvector_reserve(v62, v127, v65, 1);
                  v68 = v113;
                  v69 = v127;
                  v65 = v108;
                  v62 = *(void ***)v106;
                }
                n[0] = v65;
                v69[v68] = 0;
                *(_QWORD *)v104 = v62;
                memcpy((char *)v127 + v67, *(const void **)v64, v66);
                v62 = *(void ***)v104;
              }
            }
            ++v63;
          }
          while ( v63 != v61 );
        }
        v72 = (const char *)v62;
        sub_47C5A0(v109 + 2, v62, a2);
        if ( v110 )
          sub_1C78D0();
        if ( v127 )
        {
          n[0] = 0;
          qfree(v127, v72);
        }
        linearray_t_dtr(&v133);
        if ( v136 )
        {
          *(_QWORD *)&v137 = 0;
          qfree(v136, v72);
        }
        v73 = v133;
        if ( v133 )
        {
          v74 = v134;
          if ( (_QWORD)v134 )
          {
            v75 = 0;
            do
            {
              v76 = (__int64 *)(v73 + 24 * v75);
              v77 = *v76;
              if ( *v76 )
              {
                v76[1] = 0;
                qfree(v77, v72);
                v73 = v133;
              }
              ++v75;
            }
            while ( v74 != v75 );
          }
          *(_QWORD *)&v134 = 0;
          qfree(v73, v72);
        }
        v78 = v123;
        if ( v123 )
        {
          v79 = v124;
          if ( (_QWORD)v124 )
          {
            v80 = 0;
            do
            {
              v81 = (__int64 *)(v78 + 24 * v80);
              v82 = *v81;
              if ( *v81 )
              {
                v81[1] = 0;
                qfree(v82, v72);
                v78 = v123;
              }
              ++v80;
            }
            while ( v79 != v80 );
          }
          *(_QWORD *)&v124 = 0;
          qfree(v78, v72);
        }
        goto LABEL_37;
      }
      v41 = &s1;
      src = nullptr;
      v126 = 0;
      if ( *(_QWORD *)(v40 + 8) )
        v41 = *(const char **)v40;
      tag_remove(&src, v41, 0);
      v42 = &s1;
      if ( (_QWORD)v126 )
        v42 = (const char *)src;
      v43 = qustrlen(v42);
      v44 = v17;
      v45 = v43;
      if ( v43 < v17 )
      {
        v44 = (int)v43;
        v17 = v43;
      }
      if ( *(_BYTE *)(a1 + 740) || !v39 )
        v45 = v107;
      v46 = (char *)&s1;
      v127 = nullptr;
      v47 = v45 - v17;
      *(_OWORD *)n = 0;
      if ( (_QWORD)v126 )
        v46 = (char *)src;
      v118 = v46;
      skip_utf8(&v118, v44);
      v48 = v118;
      skip_utf8(&v118, v47);
      v49 = n[0];
      v50 = (char *)((_BYTE *)v118 - v48);
      v51 = (char *)((_BYTE *)v118 - v48);
      if ( n[0] )
      {
        v49 = n[0] - 1;
        v51 = &v50[n[0] - 1];
      }
      v52 = v127;
      v53 = (size_t)(v51 + 1);
      if ( n[1] < (unsigned __int64)(v51 + 1) )
      {
        v114 = v51;
        v112 = v51 + 1;
        v127 = (void *)qvector_reserve(&v127, v127, v53, 1);
        v51 = v114;
        v52 = v127;
        v53 = (size_t)v112;
      }
      n[0] = v53;
      v51[(_QWORD)v52] = 0;
      v54 = (char *)v127 + v49;
      v55 = nullptr;
      memmove(v54, v48, (size_t)v50);
      v56 = n[0];
      if ( n[0] )
      {
        v55 = (void *)qalloc_or_throw(n[0]);
        memcpy(v55, v127, v56);
      }
      v57 = v124;
      v58 = (const char *)v123;
      if ( *((_QWORD *)&v124 + 1) < (unsigned __int64)(v124 + 1) )
      {
        v123 = qvector_reserve(&v123, v123, v124 + 1, 24);
        v57 = v124;
        v58 = (const char *)v123;
      }
      v59 = (char *)&v58[24 * v57];
      v20 = (__m128)_mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
      *(_QWORD *)v59 = v55;
      *(__m128 *)(v59 + 8) = v20;
      *(_QWORD *)&v124 = v124 + 1;
      if ( !*(_BYTE *)(a1 + 740) )
        v17 = 0;
      if ( v127 )
      {
        n[0] = 0;
        *(double *)v20.m128_u64 = qfree(v127, v58);
      }
      if ( !src )
        break;
      *(_QWORD *)&v126 = 0;
      *(double *)v20.m128_u64 = qfree(src, v58, *(double *)v20.m128_u64);
      if ( (_QWORD)v124 )
      {
        v16 = (unsigned __int8)v124;
        if ( !(_BYTE)v124 )
          goto LABEL_80;
      }
    }
  }
LABEL_80:
  if ( *(_DWORD *)(a1 + 960) + v116 >= (unsigned __int64)qtime64() >> 32 )
    goto LABEL_48;
  if ( v110 )
    goto LABEL_82;
  v15 = "AUTOHIDE REGISTRY\n"
        "HIDECANCEL\n"
        "This operation seems to copy huge amount of data to the clipboard.\n"
        "Do you want to continue?";
  if ( (int)sub_1698A0(
              0,
              (int)"AUTOHIDE REGISTRY\n"
                   "HIDECANCEL\n"
                   "This operation seems to copy huge amount of data to the clipboard.\n"
                   "Do you want to continue?") > 0 )
  {
    sub_1C76F0((int)"Copying data...");
LABEL_82:
    v110 = v115;
    goto LABEL_48;
  }
  sub_169700(
    (int)"The operation took too long and was canceled.\n",
    (__int64)"AUTOHIDE REGISTRY\n"
             "HIDECANCEL\n"
             "This operation seems to copy huge amount of data to the clipboard.\n"
             "Do you want to continue?",
    v83,
    v84,
    v85,
    v86,
    v20,
    a4,
    a5,
    a6,
    v87,
    v88,
    a9,
    a10,
    v102);
  linearray_t_dtr(&v133);
  if ( v136 )
  {
    *(_QWORD *)&v137 = 0;
    *(double *)v20.m128_u64 = qfree(
                                v136,
                                "AUTOHIDE REGISTRY\n"
                                "HIDECANCEL\n"
                                "This operation seems to copy huge amount of data to the clipboard.\n"
                                "Do you want to continue?");
  }
  if ( !v133 )
    goto LABEL_139;
  v93 = v134;
  if ( !(_QWORD)v134 )
    goto LABEL_151;
  v94 = v133;
  v95 = 0;
  do
  {
    v96 = (__int64 *)(v94 + 24 * v95);
    v97 = *v96;
    if ( *v96 )
    {
      v96[1] = 0;
      *(double *)v20.m128_u64 = qfree(
                                  v97,
                                  "AUTOHIDE REGISTRY\n"
                                  "HIDECANCEL\n"
                                  "This operation seems to copy huge amount of data to the clipboard.\n"
                                  "Do you want to continue?",
                                  *(double *)v20.m128_u64);
      v94 = v133;
    }
    ++v95;
  }
  while ( v93 != v95 );
LABEL_138:
  *(_QWORD *)&v134 = 0;
  *(double *)v20.m128_u64 = qfree(v94, v15, *(double *)v20.m128_u64);
LABEL_139:
  if ( v123 )
  {
    v98 = v124;
    v99 = v123;
    if ( (_QWORD)v124 )
    {
      do
      {
        v100 = (__int64 *)(v99 + 24 * v16);
        v101 = *v100;
        if ( *v100 )
        {
          v100[1] = 0;
          *(double *)v20.m128_u64 = qfree(v101, v15, *(double *)v20.m128_u64);
          v99 = v123;
        }
        ++v16;
      }
      while ( v98 != v16 );
    }
    *(_QWORD *)&v124 = 0;
    qfree(v99, v15, *(double *)v20.m128_u64);
  }
  if ( !v131 && v130 && *(_DWORD *)(v130 + 964) == 1 )
    dto_copy_to_inf(v132);
  *(_QWORD *)v129 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v129);
  return v110;
}
