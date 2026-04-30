__int64 __fastcall sub_3D60A0(__int64 a1, const char *a2, __int64 a3, double a4, __m128 a5, double a6, __m128 a7)
{
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbx
  void **v12; // r14
  volatile signed __int32 *v13; // rax
  volatile signed __int32 *v14; // rax
  size_t v15; // rbx
  __int16 v16; // ax
  char v17; // dl
  const char *v18; // rsi
  __int16 v19; // ax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r13
  const char *v23; // rbp
  size_t v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __m128i v27; // xmm0
  const char *v28; // rsi
  void *v29; // rbp
  void *v30; // r15
  char *v31; // rdi
  void *v32; // r15
  void *v33; // rbp
  void **v34; // r13
  volatile signed __int32 *v35; // rax
  volatile signed __int32 *v36; // rax
  __m128i v37; // xmm0
  size_t v38; // rax
  double v39; // xmm0_8
  size_t v40; // rax
  char *v41; // rbx
  unsigned __int64 v42; // rdx
  double v43; // xmm0_8
  __int64 v44; // rbp
  __int64 v45; // rax
  unsigned __int64 v46; // rdx
  void **v47; // rcx
  __int64 v48; // rcx
  void *v49; // rcx
  __int64 v50; // rcx
  void *v51; // rcx
  __int64 v52; // rcx
  char *v53; // rax
  __m128 v54; // xmm0
  __int64 v55; // rdx
  __int64 v56; // rdx
  __m128 v57; // xmm0
  __int64 v59; // rbp
  const char *v60; // rbp
  size_t v61; // rax
  size_t v62; // rax
  __int64 v63; // rdx
  __m128i si128; // xmm0
  __m128i v65; // xmm1
  char *v66; // rax
  __m128i v67; // xmm1
  __int64 v68; // rdx
  void *v69; // rbp
  const char *v70; // rsi
  __int64 v71; // r15
  char *v72; // rbp
  __int64 v73; // rbx
  void *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  volatile signed __int32 *v83; // rax
  bool v84; // cf
  void *v85; // r13
  char *v86; // rdi
  void *v87; // r15
  void *v88; // rdi
  const char *v89; // rsi
  __int64 v90; // rbp
  char *v91; // r13
  __int64 v92; // rbx
  void *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  volatile signed __int32 *v102; // rax
  void *v103; // rax
  const void *v104; // rsi
  __int64 v105; // [rsp+18h] [rbp-A20h]
  void **v106; // [rsp+20h] [rbp-A18h] BYREF
  __int64 v107; // [rsp+28h] [rbp-A10h]
  void *v108; // [rsp+30h] [rbp-A08h]
  void *v109; // [rsp+38h] [rbp-A00h] BYREF
  __int64 v110; // [rsp+40h] [rbp-9F8h]
  void *v111; // [rsp+48h] [rbp-9F0h]
  void *v112; // [rsp+50h] [rbp-9E8h] BYREF
  __int64 v113; // [rsp+58h] [rbp-9E0h]
  __int64 v114; // [rsp+60h] [rbp-9D8h]
  __int64 v115; // [rsp+68h] [rbp-9D0h]
  char *v116; // [rsp+70h] [rbp-9C8h] BYREF
  __int128 v117; // [rsp+78h] [rbp-9C0h]
  void *v118[2]; // [rsp+90h] [rbp-9A8h] BYREF
  __int64 v119; // [rsp+A0h] [rbp-998h]
  __m128i v120[2]; // [rsp+B0h] [rbp-988h] BYREF
  void *dest; // [rsp+D0h] [rbp-968h] BYREF
  __int128 v122; // [rsp+D8h] [rbp-960h]
  void *v123[2]; // [rsp+F0h] [rbp-948h] BYREF
  __int64 v124; // [rsp+100h] [rbp-938h]
  void *v125[2]; // [rsp+110h] [rbp-928h] BYREF
  __int64 v126; // [rsp+120h] [rbp-918h]
  void *v127[2]; // [rsp+128h] [rbp-910h] BYREF
  __int64 v128; // [rsp+138h] [rbp-900h]
  void *v129[2]; // [rsp+140h] [rbp-8F8h] BYREF
  __int64 v130; // [rsp+150h] [rbp-8E8h]
  void *ptr[2]; // [rsp+160h] [rbp-8D8h] BYREF
  __int64 v132; // [rsp+170h] [rbp-8C8h]
  void *src; // [rsp+1B0h] [rbp-888h] BYREF
  __int128 v134; // [rsp+1B8h] [rbp-880h]
  __int16 v135; // [rsp+1C8h] [rbp-870h]
  __int64 v136; // [rsp+1D0h] [rbp-868h]
  char v137; // [rsp+1D8h] [rbp-860h]
  __m128i v138; // [rsp+1E0h] [rbp-858h]
  char v139[1024]; // [rsp+1F0h] [rbp-848h] BYREF
  char v140[1032]; // [rsp+5F0h] [rbp-448h] BYREF
  unsigned __int64 v141; // [rsp+9F8h] [rbp-40h]

  v141 = __readfsqword(0x28u);
  v9 = qword_8CC880;
  if ( qword_8CC880 )
  {
    v10 = xmmword_8CC888;
    if ( (_QWORD)xmmword_8CC888 )
    {
      v11 = 0;
      do
      {
        v12 = (void **)(v9 + 72 * v11);
        v13 = (volatile signed __int32 *)v12[6];
        if ( v13 && !_InterlockedSub(v13, 1u) )
          free(v12[6]);
        v14 = (volatile signed __int32 *)v12[3];
        if ( v14 && !_InterlockedSub(v14, 1u) )
          free(v12[3]);
        if ( *v12 && !_InterlockedSub((volatile signed __int32 *)*v12, 1u) )
          free(*v12);
        ++v11;
        v9 = qword_8CC880;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&xmmword_8CC888 = 0;
    qfree(v9, a2);
    qword_8CC880 = 0;
    *((_QWORD *)&xmmword_8CC888 + 1) = 0;
  }
  v15 = *(_QWORD *)(a3 + 8);
  src = nullptr;
  v134 = 0;
  if ( v15 )
  {
    v103 = (void *)qalloc_or_throw(v15);
    v104 = *(const void **)a3;
    *((_QWORD *)&v134 + 1) = v15;
    src = v103;
    memcpy(v103, v104, v15);
    *(_QWORD *)&v134 = v15;
  }
  v16 = *(_WORD *)(a3 + 24);
  v136 = *(_QWORD *)(a3 + 32);
  v17 = *(_BYTE *)(a3 + 40);
  v135 = v16;
  v137 = v17;
  v138 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  if ( v16 != 123 )
    sub_4B0C20(a1, "File extension definition syntax error", 1);
  v18 = (const char *)a1;
  sub_4B0CB0(&src, a1);
LABEL_20:
  v19 = v135;
  if ( v135 == 125 )
    goto LABEL_101;
  do
  {
    v116 = nullptr;
    v117 = 0;
    if ( v19 != 2 )
      sub_4B0C20(a1, "An identifier is expected", 1);
    v20 = v134;
    if ( (unsigned __int64)v134 > 1 )
    {
      v85 = src;
      v86 = v116;
      if ( *((_QWORD *)&v117 + 1) < (unsigned __int64)v134 )
      {
        v116 = (char *)qvector_reserve(&v116, v116, v134, 1);
        v86 = v116;
      }
      *(_QWORD *)&v117 = v20;
      memmove(v86, v85, v20 - 1);
      v116[v20 - 1] = 0;
    }
    else
    {
      *(_QWORD *)&v117 = 0;
    }
    sub_4B0CB0(&src, a1);
    if ( v135 != 44 )
      sub_4B0C20(a1, "File extension definition syntax error", 1);
    sub_4B0CB0(&src, a1);
    sub_3D57B0(a1, (__int64)&src, (__int64)v139);
    sub_4B0CB0(&src, a1);
    if ( v135 != 44 )
      sub_4B0C20(a1, "File extension definition syntax error", 1);
    v119 = 0;
    *(_OWORD *)v118 = 0;
    do
    {
      while ( 1 )
      {
        sub_4B0CB0(&src, a1);
        if ( v135 == 4 )
        {
          sub_3D57B0(a1, (__int64)&src, (__int64)v140);
          v62 = strlen(v140);
          QT::QString::fromUtf8(ptr, v62, v140);
          v63 = v119;
          si128 = _mm_load_si128((const __m128i *)v118);
          a5 = (__m128)_mm_load_si128((const __m128i *)ptr);
          v119 = v132;
          v132 = v63;
          *(__m128 *)v118 = a5;
          *(__m128i *)ptr = si128;
          if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
            free(ptr[0]);
          QT::QString::append(v118, 59);
          sub_4B0CB0(&src, a1);
          goto LABEL_32;
        }
        if ( v135 == 2 )
          break;
        if ( v135 == 42 )
        {
          dest = nullptr;
          v124 = 0;
          v122 = 0;
          *(_OWORD *)v123 = 0;
          QT::QString::operator=(v123, 42, v21);
          sub_4B0CB0(&src, a1);
          if ( v135 != 2 )
            goto LABEL_41;
          v59 = v134;
          if ( (unsigned __int64)v134 > 1 )
          {
            v87 = src;
            v88 = dest;
            if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)v134 )
            {
              dest = (void *)qvector_reserve(&dest, dest, v134, 1);
              v88 = dest;
            }
            *(_QWORD *)&v122 = v59;
            memmove(v88, v87, v59 - 1);
            *((char *)dest + v59 - 1) = 0;
            if ( (_QWORD)v122 )
            {
              v60 = (const char *)dest;
              if ( dest && *(_BYTE *)dest )
                v61 = strlen((const char *)dest + 1) + 1;
              else
                v61 = 0;
LABEL_108:
              QT::QString::fromLocal8Bit(ptr, v61, v60);
              QT::QString::append((QT::QString *)v123, (const QT::QString *)ptr);
              if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                free(ptr[0]);
              goto LABEL_111;
            }
          }
          else
          {
            *(_QWORD *)&v122 = 0;
          }
          v60 = &s1;
          v61 = 0;
          goto LABEL_108;
        }
        sub_4B0C20(a1, "File extension definition syntax error", 1);
LABEL_32:
        if ( v135 != 59 )
          goto LABEL_68;
      }
      v22 = v134;
      dest = nullptr;
      v124 = 0;
      v122 = 0;
      *(_OWORD *)v123 = 0;
      if ( (unsigned __int64)v134 > 1
        && (v69 = src,
            dest = (void *)qvector_reserve(&dest, 0, v134, 1),
            *(_QWORD *)&v122 = v22,
            memmove(dest, v69, v22 - 1),
            *((char *)dest + v22 - 1) = 0,
            (_QWORD)v122) )
      {
        v23 = (const char *)dest;
        if ( dest && *(_BYTE *)dest )
          v24 = strlen((const char *)dest + 1) + 1;
        else
          v24 = 0;
      }
      else
      {
        v23 = &s1;
        v24 = 0;
      }
      QT::QString::fromLocal8Bit(ptr, v24, v23);
      v25 = v124;
      v26 = _mm_load_si128((const __m128i *)v123);
      a5 = (__m128)_mm_load_si128((const __m128i *)ptr);
      v124 = v132;
      v132 = v25;
      *(__m128 *)v123 = a5;
      *(__m128i *)ptr = v26;
      if ( v26.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v26.m128i_i64[0], 1u) )
        free(ptr[0]);
      sub_4B0CB0(&src, a1);
      if ( v135 == 42 )
      {
        QT::QString::append(v123, 42);
LABEL_111:
        sub_4B0CB0(&src, a1);
      }
LABEL_41:
      v27 = _mm_load_si128((const __m128i *)v123);
      v132 = v124;
      *(__m128i *)ptr = v27;
      if ( v27.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v27.m128i_i64[0], 1u);
      v28 = (const char *)&qword_8CC880;
      sub_282DC0(
        (__int64)v125,
        (__int64)&qword_8CC880,
        (__m128i *)ptr,
        *(double *)v27.m128i_i64,
        *(double *)a5.m128_u64,
        a6,
        a7);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v29 = v125[1];
      if ( !v125[1] )
      {
        v31 = (char *)v125[0];
        if ( !v125[0] )
          goto LABEL_63;
        goto LABEL_62;
      }
      v30 = nullptr;
      do
      {
        QT::QString::append((QT::QString *)v118, (const QT::QString *)((char *)v125[0] + 72 * (_QWORD)v30 + 48));
        v28 = (_BYTE *)(&word_3A + 1);
        QT::QString::append(v118, 59);
        v30 = (char *)v30 + 1;
      }
      while ( v30 != v29 );
      v31 = (char *)v125[0];
      if ( v125[0] )
      {
        v32 = v125[1];
        if ( v125[1] )
        {
          v33 = nullptr;
          do
          {
            v34 = (void **)&v31[72 * (_QWORD)v33];
            v35 = (volatile signed __int32 *)v34[6];
            if ( v35 && !_InterlockedSub(v35, 1u) )
              free(v34[6]);
            v36 = (volatile signed __int32 *)v34[3];
            if ( v36 && !_InterlockedSub(v36, 1u) )
              free(v34[3]);
            if ( *v34 && !_InterlockedSub((volatile signed __int32 *)*v34, 1u) )
              free(*v34);
            v33 = (char *)v33 + 1;
            v31 = (char *)v125[0];
          }
          while ( v32 != v33 );
        }
LABEL_62:
        v125[1] = nullptr;
        *(double *)v27.m128i_i64 = qfree(v31, v28);
      }
LABEL_63:
      if ( v123[0] && !_InterlockedSub((volatile signed __int32 *)v123[0], 1u) )
        free(v123[0]);
      if ( !dest )
        goto LABEL_32;
      *(_QWORD *)&v122 = 0;
      qfree(dest, v28, *(double *)v27.m128i_i64);
    }
    while ( v135 == 59 );
LABEL_68:
    v37 = _mm_load_si128((const __m128i *)v118);
    v124 = v119;
    *(__m128i *)v123 = v37;
    if ( v37.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)v37.m128i_i64[0], 1u);
    v38 = strlen(v139);
    v39 = QT::QString::fromUtf8(&dest, v38, v139);
    if ( (_QWORD)v117 )
    {
      v40 = v117 - 1;
      v41 = v116;
      v42 = (unsigned __int64)(v117 - 1) >> 63;
    }
    else
    {
      LOBYTE(v42) = 0;
      v40 = 0;
      v41 = (char *)&s1;
    }
    if ( !v41 || (_BYTE)v42 )
    {
      v40 = 0;
      if ( v41 )
        v40 = strlen(v41);
    }
    v43 = QT::QString::fromUtf8(v120, v40, v41, v39);
    sub_283160((__int64)v125, v120, (const __m128i *)&dest, (__int64)v123, v43, *(double *)a5.m128_u64, a6, a7);
    v18 = (const char *)qword_8CC880;
    v44 = *((_QWORD *)&xmmword_8CC888 + 1);
    v45 = xmmword_8CC888;
    v46 = xmmword_8CC888 + 1;
    if ( (unsigned __int64)v125 < qword_8CC880
      || (unsigned __int64)v125 >= qword_8CC880 + 72LL * *((_QWORD *)&xmmword_8CC888 + 1) )
    {
      if ( *((_QWORD *)&xmmword_8CC888 + 1) < v46 )
      {
        v70 = (const char *)qvector_reserve(&qword_8CC880, 0, v46, 72);
        v105 = *((_QWORD *)&xmmword_8CC888 + 1);
        *((_QWORD *)&xmmword_8CC888 + 1) = v44;
        v71 = qword_8CC880;
        v106 = (void **)xmmword_8CC888;
        if ( (__int64)xmmword_8CC888 - 1 >= 0 )
        {
          v106 = v125;
          v72 = (char *)v70;
          v73 = xmmword_8CC888 - 1;
          do
          {
            v74 = *(void **)v71;
            *(_QWORD *)v71 = 0;
            *(_QWORD *)v72 = v74;
            v75 = *(_QWORD *)(v71 + 8);
            *(_QWORD *)(v71 + 8) = 0;
            *((_QWORD *)v72 + 1) = v75;
            v76 = *(_QWORD *)(v71 + 16);
            *(_QWORD *)(v71 + 16) = 0;
            *((_QWORD *)v72 + 2) = v76;
            v77 = *(_QWORD *)(v71 + 24);
            *(_QWORD *)(v71 + 24) = 0;
            *((_QWORD *)v72 + 3) = v77;
            v78 = *(_QWORD *)(v71 + 32);
            *(_QWORD *)(v71 + 32) = 0;
            *((_QWORD *)v72 + 4) = v78;
            v79 = *(_QWORD *)(v71 + 40);
            *(_QWORD *)(v71 + 40) = 0;
            *((_QWORD *)v72 + 5) = v79;
            v80 = *(_QWORD *)(v71 + 48);
            *(_QWORD *)(v71 + 48) = 0;
            *((_QWORD *)v72 + 6) = v80;
            v81 = *(_QWORD *)(v71 + 56);
            *(_QWORD *)(v71 + 56) = 0;
            *((_QWORD *)v72 + 7) = v81;
            v82 = *(_QWORD *)(v71 + 64);
            *(_QWORD *)(v71 + 64) = 0;
            *((_QWORD *)v72 + 8) = v82;
            v83 = *(volatile signed __int32 **)(v71 + 24);
            if ( v83 && !_InterlockedSub(v83, 1u) )
              free(*(void **)(v71 + 24));
            if ( *(_QWORD *)v71 && !_InterlockedSub(*(volatile signed __int32 **)v71, 1u) )
              free(*(void **)v71);
            v71 += 72;
            v72 += 72;
            v84 = v73-- == 0;
          }
          while ( !v84 );
          v71 = qword_8CC880;
        }
        v106 = (void **)v70;
        qfree(v71, v70);
        v18 = (const char *)v106;
        qword_8CC880 = (__int64)v106;
        *((_QWORD *)&xmmword_8CC888 + 1) = v105;
        v45 = xmmword_8CC888;
      }
      v65 = _mm_load_si128((const __m128i *)v125);
      v66 = (char *)&v18[72 * v45];
      *(_OWORD *)v125 = 0;
      *((_QWORD *)v66 + 2) = v126;
      *(__m128i *)v66 = v65;
      v67 = _mm_loadu_si128((const __m128i *)v127);
      v126 = 0;
      *((_QWORD *)v66 + 5) = v128;
      *(__m128i *)(v66 + 24) = v67;
      v68 = v130;
      a5 = (__m128)_mm_load_si128((const __m128i *)v129);
      v128 = 0;
      *(_OWORD *)v127 = 0;
      v130 = 0;
      *(_OWORD *)v129 = 0;
      *((__m128 *)v66 + 3) = a5;
      *((_QWORD *)v66 + 8) = v68;
    }
    else
    {
      v47 = (void **)v125[1];
      *(_OWORD *)v125 = 0;
      v106 = v47;
      v48 = v126;
      v126 = 0;
      v107 = v48;
      v108 = v127[0];
      v49 = v127[1];
      *(_OWORD *)v127 = 0;
      v109 = v49;
      v50 = v128;
      v128 = 0;
      v110 = v50;
      v111 = v129[0];
      v51 = v129[1];
      *(_OWORD *)v129 = 0;
      v112 = v51;
      v52 = v130;
      v130 = 0;
      v113 = v52;
      if ( *((_QWORD *)&xmmword_8CC888 + 1) < v46 )
      {
        v89 = (const char *)qvector_reserve(&qword_8CC880, 0, v46, 72);
        v114 = *((_QWORD *)&xmmword_8CC888 + 1);
        *((_QWORD *)&xmmword_8CC888 + 1) = v44;
        v90 = qword_8CC880;
        v115 = xmmword_8CC888;
        if ( (__int64)xmmword_8CC888 - 1 >= 0 )
        {
          v115 = (__int64)v89;
          v91 = (char *)v89;
          v92 = xmmword_8CC888 - 1;
          do
          {
            v93 = *(void **)v90;
            *(_QWORD *)v90 = 0;
            *(_QWORD *)v91 = v93;
            v94 = *(_QWORD *)(v90 + 8);
            *(_QWORD *)(v90 + 8) = 0;
            *((_QWORD *)v91 + 1) = v94;
            v95 = *(_QWORD *)(v90 + 16);
            *(_QWORD *)(v90 + 16) = 0;
            *((_QWORD *)v91 + 2) = v95;
            v96 = *(_QWORD *)(v90 + 24);
            *(_QWORD *)(v90 + 24) = 0;
            *((_QWORD *)v91 + 3) = v96;
            v97 = *(_QWORD *)(v90 + 32);
            *(_QWORD *)(v90 + 32) = 0;
            *((_QWORD *)v91 + 4) = v97;
            v98 = *(_QWORD *)(v90 + 40);
            *(_QWORD *)(v90 + 40) = 0;
            *((_QWORD *)v91 + 5) = v98;
            v99 = *(_QWORD *)(v90 + 48);
            *(_QWORD *)(v90 + 48) = 0;
            *((_QWORD *)v91 + 6) = v99;
            v100 = *(_QWORD *)(v90 + 56);
            *(_QWORD *)(v90 + 56) = 0;
            *((_QWORD *)v91 + 7) = v100;
            v101 = *(_QWORD *)(v90 + 64);
            *(_QWORD *)(v90 + 64) = 0;
            *((_QWORD *)v91 + 8) = v101;
            v102 = *(volatile signed __int32 **)(v90 + 24);
            if ( v102 && !_InterlockedSub(v102, 1u) )
              free(*(void **)(v90 + 24));
            if ( *(_QWORD *)v90 && !_InterlockedSub(*(volatile signed __int32 **)v90, 1u) )
              free(*(void **)v90);
            v90 += 72;
            v91 += 72;
            v84 = v92-- == 0;
          }
          while ( !v84 );
          v89 = (const char *)v115;
          v90 = qword_8CC880;
        }
        v115 = (__int64)v89;
        qfree(v90, v89);
        v18 = (const char *)v115;
        qword_8CC880 = v115;
        *((_QWORD *)&xmmword_8CC888 + 1) = v114;
        v45 = xmmword_8CC888;
      }
      v53 = (char *)&v18[72 * v45];
      v54 = _mm_loadh_ps((const double *)&v106);
      *((_QWORD *)v53 + 2) = v107;
      v55 = v110;
      *(__m128 *)v53 = v54;
      *((_QWORD *)v53 + 5) = v55;
      v56 = v113;
      *(__m128 *)(v53 + 24) = _mm_loadh_ps((const double *)&v109);
      v57 = _mm_loadh_ps((const double *)&v112);
      *((_QWORD *)v53 + 8) = v56;
      *((__m128 *)v53 + 3) = v57;
    }
    *(_QWORD *)&xmmword_8CC888 = xmmword_8CC888 + 1;
    if ( v129[0] && !_InterlockedSub((volatile signed __int32 *)v129[0], 1u) )
      free(v129[0]);
    if ( v127[0] && !_InterlockedSub((volatile signed __int32 *)v127[0], 1u) )
      free(v127[0]);
    if ( v125[0] && !_InterlockedSub((volatile signed __int32 *)v125[0], 1u) )
      free(v125[0]);
    if ( v120[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v120[0].m128i_i64[0], 1u) )
      free((void *)v120[0].m128i_i64[0]);
    if ( dest && !_InterlockedSub((volatile signed __int32 *)dest, 1u) )
      free(dest);
    if ( v123[0] && !_InterlockedSub((volatile signed __int32 *)v123[0], 1u) )
      free(v123[0]);
    if ( v118[0] && !_InterlockedSub((volatile signed __int32 *)v118[0], 1u) )
      free(v118[0]);
    if ( !v116 )
      goto LABEL_20;
    *(_QWORD *)&v117 = 0;
    qfree(v116, v18);
    v19 = v135;
  }
  while ( v135 != 125 );
LABEL_101:
  if ( src )
  {
    *(_QWORD *)&v134 = 0;
    qfree(src, v18);
  }
  return 0;
}
