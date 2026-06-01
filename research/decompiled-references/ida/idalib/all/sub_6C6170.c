__int64 __fastcall sub_6C6170(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14,
        const __m128i *a15)
{
  unsigned __int64 v16; // rax
  unsigned int v18; // r14d
  __int64 v19; // r12
  size_t v20; // r13
  size_t v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v27; // rax
  __m128i v28; // xmm0
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbp
  unsigned __int64 v32; // rbp
  __int64 tinfo_property; // rax
  unsigned __int64 v34; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // r13
  __int64 v37; // rsi
  unsigned __int64 v38; // r14
  int v39; // ecx
  unsigned __int64 v40; // r15
  _QWORD *v41; // r15
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rax
  double v45; // xmm4_8
  double v46; // xmm5_8
  void *v47; // r13
  __int64 v48; // r12
  __int64 v49; // rbx
  __int64 v50; // rbp
  void *v51; // rdi
  void *v52; // rdi
  __m128i v53; // xmm2
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  __m128i si128; // xmm3
  __int64 v57; // rax
  __int64 v58; // rdx
  __m128i v59; // xmm3
  char v60; // r14
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // esi
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // rbp
  __m128i *v73; // r14
  __m128i v74; // xmm0
  __int32 v75; // eax
  __m128i v76; // xmm0
  __int32 v77; // eax
  __m128i v78; // xmm0
  const __m128i *v79; // r8
  __m128i v80; // xmm0
  const __m128i *v81; // r13
  void *v82; // rax
  void *v83; // rax
  __m128i v84; // xmm2
  __m128i v85; // xmm1
  __m128i v86; // xmm0
  __m128i v87; // xmm3
  __int64 v88; // rax
  __int64 v89; // rdx
  __m128i v90; // xmm3
  unsigned int v91; // r14d
  int v92; // edx
  int v93; // ecx
  int v94; // r8d
  int v95; // r9d
  _QWORD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  int v99; // [rsp+0h] [rbp-1A8h]
  int v100; // [rsp+0h] [rbp-1A8h]
  int *v101; // [rsp+8h] [rbp-1A0h]
  int v102; // [rsp+8h] [rbp-1A0h]
  _QWORD *v103; // [rsp+10h] [rbp-198h]
  char v104; // [rsp+10h] [rbp-198h]
  void *v105; // [rsp+18h] [rbp-190h]
  _QWORD *v106; // [rsp+20h] [rbp-188h]
  __int64 v107; // [rsp+20h] [rbp-188h]
  int v108; // [rsp+28h] [rbp-180h]
  int v109; // [rsp+28h] [rbp-180h]
  unsigned int v110; // [rsp+2Ch] [rbp-17Ch]
  __int64 v111; // [rsp+30h] [rbp-178h]
  __int64 *v112; // [rsp+30h] [rbp-178h]
  __int64 v113; // [rsp+30h] [rbp-178h]
  __int64 v114; // [rsp+38h] [rbp-170h]
  size_t na; // [rsp+48h] [rbp-160h]
  size_t n; // [rsp+48h] [rbp-160h]
  __int64 v117; // [rsp+50h] [rbp-158h] BYREF
  int v118[2]; // [rsp+58h] [rbp-150h] BYREF
  _BYTE v119[48]; // [rsp+60h] [rbp-148h] BYREF
  __int64 v120; // [rsp+90h] [rbp-118h]
  int v121[4]; // [rsp+A0h] [rbp-108h] BYREF
  void *v122; // [rsp+B0h] [rbp-F8h]
  int v123[4]; // [rsp+B8h] [rbp-F0h]
  void *v124; // [rsp+C8h] [rbp-E0h]
  int v125[4]; // [rsp+D0h] [rbp-D8h]
  int v126[2]; // [rsp+E0h] [rbp-C8h] BYREF
  int v127[4]; // [rsp+E8h] [rbp-C0h]
  int v128[4]; // [rsp+F8h] [rbp-B0h]
  int v129[4]; // [rsp+108h] [rbp-A0h]
  int v130[2]; // [rsp+118h] [rbp-90h]
  int v131[2]; // [rsp+120h] [rbp-88h]
  int v132; // [rsp+128h] [rbp-80h]
  __m128i v133; // [rsp+130h] [rbp-78h]
  __m128i v134; // [rsp+140h] [rbp-68h]
  __m128i v135; // [rsp+150h] [rbp-58h]
  __int64 v136; // [rsp+160h] [rbp-48h]
  unsigned __int64 v137; // [rsp+168h] [rbp-40h]

  v16 = *(_QWORD *)(a1 + 8);
  v103 = a2;
  v106 = a5;
  v108 = a6;
  v137 = __readfsqword(0x28u);
  if ( a4 >= v16 )
  {
    set_error_data(0, a4, a3, a4, a5, a6);
    return (unsigned int)-7;
  }
  v18 = a3;
  if ( (int)a6 < 0 )
  {
    if ( !get_tinfo_size(0, *a5, 0) && !get_tinfo_property(*v106, 287) )
      return (unsigned int)-5;
  }
  else if ( a4 + 1 != v16 && get_tinfo_property(*a5, 287) )
  {
    return (unsigned int)-12;
  }
  v19 = *(_QWORD *)a1 + 144 * a4;
  if ( *(_QWORD *)(v19 + 24) <= 1u && (v108 & 0x40) != 0 )
    sub_6C0F70(a1, *(_QWORD *)a1 + 144 * a4, v106, 1);
  v122 = nullptr;
  *(__m128i *)v121 = _mm_loadu_si128((const __m128i *)v19);
  *(_OWORD *)v123 = 0;
  v20 = *(_QWORD *)(v19 + 24);
  if ( v20 )
  {
    v44 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 24));
    *(_QWORD *)&v123[2] = v20;
    v122 = v44;
    memcpy(v44, *(const void **)(v19 + 16), v20);
    *(_QWORD *)v123 = v20;
  }
  v124 = nullptr;
  *(_OWORD *)v125 = 0;
  v21 = *(_QWORD *)(v19 + 48);
  if ( v21 )
  {
    v124 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 48));
    *(_QWORD *)&v125[2] = v21;
    memcpy(v124, *(const void **)(v19 + 40), v21);
    *(_QWORD *)v125 = v21;
  }
  *(_QWORD *)v126 = 0;
  v101 = v126;
  copy_tinfo_t(v126);
  v22 = *(_QWORD *)(v19 + 120);
  v23 = *(_QWORD *)(v19 + 128);
  *(__m128i *)v127 = _mm_loadu_si128((const __m128i *)(v19 + 72));
  v24 = _mm_loadu_si128((const __m128i *)(v19 + 88));
  *(_QWORD *)v130 = v22;
  LOBYTE(v22) = *(_BYTE *)(v19 + 136);
  *(__m128i *)v128 = v24;
  v25 = _mm_loadu_si128((const __m128i *)(v19 + 104));
  LOBYTE(v132) = v22;
  *(_QWORD *)v131 = v23;
  *(__m128i *)v129 = v25;
  sub_544310(a2, (_QWORD *)a1, a4);
  copy_tinfo_t(v126);
  v110 = sub_6C4620(v18, (__int64 *)v121, *(_BYTE *)(a1 + 51), v108, 0);
  if ( !v110 )
  {
    v27 = *(_QWORD *)(a1 + 8);
    memset(v119, 0, 24);
    v111 = v27;
    if ( v27 )
    {
      v70 = v27;
      v71 = qalloc_or_throw(144 * v27);
      *(_QWORD *)&v119[16] = v70;
      v72 = 0;
      v73 = (__m128i *)(v71 + 64);
      *(_QWORD *)v119 = v71;
      v114 = -64 - v71;
      do
      {
        v79 = (__m128i *)((char *)v73 + v114 + *(_QWORD *)a1);
        v80 = _mm_loadu_si128(v79);
        v73[-3].m128i_i64[0] = 0;
        v81 = v79;
        v73[-4] = v80;
        *(__m128i *)((char *)&v73[-3] + 8) = 0;
        if ( v79[1].m128i_i64[1] )
        {
          na = v79[1].m128i_u64[1];
          v82 = (void *)qalloc_or_throw(na);
          v73[-3].m128i_i64[0] = (__int64)v82;
          v73[-2].m128i_i64[0] = na;
          memcpy(v82, (const void *)v81[1].m128i_i64[0], na);
          v73[-3].m128i_i64[1] = na;
        }
        v73[-2].m128i_i64[1] = 0;
        v73[-1] = 0;
        if ( v81[3].m128i_i64[0] )
        {
          n = v81[3].m128i_u64[0];
          v83 = (void *)qalloc_or_throw(n);
          v73[-2].m128i_i64[1] = (__int64)v83;
          v73[-1].m128i_i64[1] = n;
          memcpy(v83, (const void *)v81[2].m128i_i64[1], n);
          v73[-1].m128i_i64[0] = n;
        }
        v73->m128i_i64[0] = 0;
        copy_tinfo_t(v73);
        v74 = _mm_loadu_si128((const __m128i *)((char *)v81 + 72));
        ++v72;
        v73 += 9;
        v73[-6].m128i_i64[1] = v81[7].m128i_i64[1];
        v75 = v81[8].m128i_i32[0];
        *(__m128i *)((char *)v73 - 136) = v74;
        v76 = _mm_loadu_si128((const __m128i *)((char *)v81 + 88));
        v73[-5].m128i_i32[0] = v75;
        v77 = v81[8].m128i_i32[1];
        *(__m128i *)((char *)v73 - 120) = v76;
        v78 = _mm_loadu_si128((const __m128i *)((char *)v81 + 104));
        v73[-5].m128i_i32[1] = v77;
        LOBYTE(v77) = v81[8].m128i_i8[8];
        *(__m128i *)((char *)v73 - 104) = v78;
        v73[-5].m128i_i8[8] = v77;
      }
      while ( v111 != v72 );
      *(_QWORD *)&v119[8] = v111;
    }
    v28 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    *(_QWORD *)&v119[40] = *(_QWORD *)(a1 + 40);
    v29 = *(_DWORD *)(a1 + 48);
    *(__m128i *)&v119[24] = v28;
    LODWORD(v120) = v29;
    if ( a15 )
    {
      *(__m128i *)(v19 + 72) = _mm_loadu_si128(a15);
      *(__m128i *)(v19 + 88) = _mm_loadu_si128(a15 + 1);
      v28 = _mm_loadu_si128(a15 + 2);
      *(__m128i *)(v19 + 104) = v28;
      *(_DWORD *)(v19 + 120) = a15[3].m128i_i32[0];
    }
    else
    {
      sub_54B890((__int64 *)(v19 + 72), (unsigned __int64 *)v126);
    }
    v30 = *(_QWORD *)(v19 + 64);
    v31 = *(_QWORD *)&v121[2];
    *(_QWORD *)(v19 + 64) = *(_QWORD *)v126;
    *(_QWORD *)v126 = v30;
    *(_QWORD *)(v19 + 8) = v31;
    v32 = *(_QWORD *)v19 + v31;
    tinfo_property = get_tinfo_property(*(_QWORD *)v126, 289);
    v117 = tinfo_property;
    v34 = tinfo_property;
    if ( (v108 & 0x88) == 0 || !(_BYTE)tinfo_property || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
    {
      v112 = &v117;
      goto LABEL_22;
    }
    *(_QWORD *)v118 = get_tinfo_property(tinfo_property, 9);
    v60 = get_tinfo_property(*(_QWORD *)v118, 2) & 0x3F;
    clear_tinfo_t(v118);
    v112 = &v117;
    if ( v60 == 48 || (v61 = 0x200020002000200LL, _bittest64(&v61, v34)) )
    {
LABEL_22:
      if ( *(_BYTE *)(a1 + 51)
        || (v35 = *(_QWORD *)a1, v36 = v19 + 144, v37 = *(_QWORD *)a1 + 144LL * *(_QWORD *)(a1 + 8), v37 == v19 + 144) )
      {
LABEL_46:
        clear_tinfo_t(v112);
      }
      else
      {
        v38 = v19 + 144;
        do
        {
          if ( *(_QWORD *)v38 >= v32 )
            break;
          v39 = *(_DWORD *)(v38 + 132);
          if ( !(v108 & 4 | v39 & 0x400) || (v39 & 0x1000) != 0 )
          {
            clear_tinfo_t(v112);
            v110 = -13;
            goto LABEL_81;
          }
          v38 += 144LL;
        }
        while ( v37 != v38 );
        if ( v36 == v38 )
          goto LABEL_46;
        if ( v36 < v38 )
        {
          v40 = v19 + 144;
          while ( 1 )
          {
            sub_544310(v103, (_QWORD *)a1, 0x8E38E38E38E38E39LL * ((__int64)(v40 - v35) >> 4));
            v40 += 144LL;
            if ( v40 >= v38 )
              break;
            v35 = *(_QWORD *)a1;
          }
        }
        v41 = (_QWORD *)(v19 + 144);
        do
        {
          clear_tinfo_t(v41 + 8);
          v42 = (void *)v41[5];
          if ( v42 )
          {
            v41[6] = 0;
            qfree(v42);
          }
          v43 = (void *)v41[2];
          if ( v43 )
          {
            v41[3] = 0;
            qfree(v43);
          }
          v41 += 18;
        }
        while ( v41 != (_QWORD *)v38 );
        memmove((void *)(v19 + 144), v41, *(_QWORD *)a1 + 144LL * *(_QWORD *)(a1 + 8) - (_QWORD)v41);
        *(_QWORD *)(a1 + 8) -= 0x8E38E38E38E38E39LL * ((__int64)((__int64)v41 - v36) >> 4);
        clear_tinfo_t(v112);
      }
      if ( (*(_BYTE *)(v19 + 133) & 1) == 0 && (unsigned __int8)sub_5EB0F0(0, v19) )
        *(_DWORD *)(v19 + 132) |= 0x100u;
      if ( *(_BYTE *)(a1 + 51)
        || (v28 = _mm_loadu_si128((const __m128i *)v19),
            a8 = _mm_srli_si128(v28, 8),
            v28.m128i_i64[0] = _mm_add_epi64(v28, a8).m128i_u64[0],
            v32 == v28.m128i_i64[0]) )
      {
        sub_6C1060(v103 + 12, v19);
        if ( !(unsigned int)sub_6B8250(
                              a1,
                              v19,
                              v108,
                              *(double *)v28.m128i_i64,
                              *(double *)a8.m128i_i64,
                              a9,
                              a10,
                              v45,
                              v46,
                              a13,
                              a14) )
          goto LABEL_51;
      }
      else if ( (unsigned __int8)sub_569960((__int64 *)a1, *(double *)v28.m128i_i64, *(double *)a8.m128i_i64) )
      {
        goto LABEL_51;
      }
      v53 = _mm_loadu_si128((const __m128i *)a1);
      v110 = -28;
      v54 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v55 = _mm_loadu_si128((const __m128i *)(a1 + 32));
      *(__m128i *)a1 = _mm_load_si128((const __m128i *)v119);
      si128 = _mm_load_si128((const __m128i *)&v119[16]);
      v57 = *(_QWORD *)(a1 + 48);
      v58 = v120;
      v133 = v53;
      *(__m128i *)(a1 + 16) = si128;
      v59 = _mm_load_si128((const __m128i *)&v119[32]);
      v136 = v57;
      *(_QWORD *)(a1 + 48) = v58;
      v120 = v57;
      v134 = v54;
      v135 = v55;
      *(__m128i *)(a1 + 32) = v59;
      *(__m128i *)v119 = v53;
      *(__m128i *)&v119[16] = v54;
      *(__m128i *)&v119[32] = v55;
LABEL_51:
      v47 = *(void **)v119;
      if ( *(_QWORD *)v119 )
      {
        v48 = *(_QWORD *)&v119[8];
        v49 = *(_QWORD *)v119 + 64LL;
        v50 = 0;
        if ( *(_QWORD *)&v119[8] )
        {
          do
          {
            clear_tinfo_t(v49);
            v51 = *(void **)(v49 - 24);
            if ( v51 )
            {
              *(_QWORD *)(v49 - 16) = 0;
              qfree(v51);
            }
            v52 = *(void **)(v49 - 48);
            if ( v52 )
            {
              *(_QWORD *)(v49 - 40) = 0;
              qfree(v52);
            }
            ++v50;
            v49 += 144;
          }
          while ( v48 != v50 );
        }
        qfree(v47);
      }
      goto LABEL_10;
    }
    *(_QWORD *)v118 = 0;
    v62 = get_tinfo_property(*v106, 289);
    v63 = v117;
    *(_QWORD *)v118 = v62;
    v112 = &v117;
    if ( !(unsigned int)lexcompare_tinfo(v62, v117, 0, v64, v65) )
      goto LABEL_86;
    if ( (v108 & 0x80u) != 0 )
    {
      v91 = score_tinfo(
              (int)&v117,
              v63,
              v66,
              v67,
              v68,
              v69,
              v99,
              (int)v126,
              (char)v103,
              v121,
              (__int64)v106,
              v108,
              (__int64)&v117);
      if ( v91 >= (unsigned int)score_tinfo(
                                  (int)v118,
                                  v63,
                                  v92,
                                  v93,
                                  v94,
                                  v95,
                                  v100,
                                  v102,
                                  v104,
                                  v105,
                                  v107,
                                  v109,
                                  v113) )
      {
        if ( (unsigned __int8)compare_tinfo(*(_QWORD *)v118, v117, 0) )
        {
LABEL_86:
          v110 = 1;
          goto LABEL_87;
        }
        v110 = -35;
LABEL_87:
        clear_tinfo_t(v118);
        clear_tinfo_t(v112);
LABEL_81:
        v84 = _mm_loadu_si128((const __m128i *)a1);
        v85 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v86 = _mm_loadu_si128((const __m128i *)(a1 + 32));
        *(__m128i *)a1 = _mm_load_si128((const __m128i *)v119);
        v87 = _mm_load_si128((const __m128i *)&v119[16]);
        v88 = *(_QWORD *)(a1 + 48);
        v89 = v120;
        v133 = v84;
        *(__m128i *)(a1 + 16) = v87;
        v90 = _mm_load_si128((const __m128i *)&v119[32]);
        v136 = v88;
        *(_QWORD *)(a1 + 48) = v89;
        v120 = v88;
        v134 = v85;
        v135 = v86;
        *(__m128i *)(a1 + 32) = v90;
        *(__m128i *)v119 = v84;
        *(__m128i *)&v119[16] = v85;
        *(__m128i *)&v119[32] = v86;
        goto LABEL_51;
      }
      *(_DWORD *)(v19 + 132) |= 0x4000u;
    }
    if ( (v108 & 8) == 0
      || (get_tinfo_property(*(_QWORD *)v126, 2) & 0x2F) != 0xD
      || (unsigned __int8)compare_tinfo(*v106, *(_QWORD *)v126, 0) )
    {
      clear_tinfo_t(v118);
      goto LABEL_22;
    }
    v96 = (_QWORD *)get_tinfo_property(*(_QWORD *)v126, 309);
    if ( v96 && v96[1] && !(unsigned int)lexcompare_tinfo(*v106, *(_QWORD *)(*v96 + 64LL), 0, v97, v98) )
      goto LABEL_86;
    v110 = -27;
    goto LABEL_87;
  }
LABEL_10:
  clear_tinfo_t(v101);
  if ( v124 )
  {
    *(_QWORD *)v125 = 0;
    qfree(v124);
  }
  if ( v122 )
  {
    *(_QWORD *)v123 = 0;
    qfree(v122);
  }
  return v110;
}
