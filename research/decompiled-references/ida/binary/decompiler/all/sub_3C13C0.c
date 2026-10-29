__int64 __fastcall sub_3C13C0(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // eax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  size_t v11; // r13
  void *v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // r12
  int v16; // eax
  int v17; // r13d
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  const char *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int v24; // eax
  unsigned int tinfo_size; // eax
  unsigned __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r12
  unsigned int v29; // r12d
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r14
  _QWORD *v33; // rbx
  __int64 v35; // rsi
  char tinfo_property; // al
  const char *v37; // rdx
  __int64 v38; // rdi
  _BOOL4 v39; // eax
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 v42; // r14
  unsigned int v43; // eax
  __int64 v44; // rsi
  __int64 v45; // rax
  int v46; // eax
  __m128i v47; // xmm0
  __int64 v48; // r13
  unsigned __int8 v49; // r13
  __int64 v50; // r13
  __int64 v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rsi
  int v55; // r9d
  __m128i *v56; // rax
  unsigned __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r8
  size_t v63; // rbx
  void *v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // [rsp-8h] [rbp-2C8h]
  size_t v68; // [rsp+0h] [rbp-2C0h]
  int *v69; // [rsp+8h] [rbp-2B8h]
  void **v70; // [rsp+10h] [rbp-2B0h]
  __int64 v71; // [rsp+18h] [rbp-2A8h]
  unsigned __int64 v73; // [rsp+20h] [rbp-2A0h]
  _QWORD *v74; // [rsp+28h] [rbp-298h]
  unsigned int v75; // [rsp+30h] [rbp-290h]
  __int64 v76; // [rsp+30h] [rbp-290h]
  __int64 *v77; // [rsp+38h] [rbp-288h]
  char v78; // [rsp+40h] [rbp-280h]
  __m128i v79; // [rsp+48h] [rbp-278h] BYREF
  __int64 v80; // [rsp+58h] [rbp-268h]
  __m128i si128; // [rsp+60h] [rbp-260h]
  void *src; // [rsp+70h] [rbp-250h]
  size_t n[2]; // [rsp+78h] [rbp-248h]
  __int64 v84; // [rsp+88h] [rbp-238h]
  __int64 v85; // [rsp+90h] [rbp-230h]
  int v86; // [rsp+98h] [rbp-228h]
  __int128 v87; // [rsp+A0h] [rbp-220h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-210h] BYREF
  void *v89[2]; // [rsp+B8h] [rbp-208h] BYREF
  __int128 v90; // [rsp+C8h] [rbp-1F8h]
  int v91; // [rsp+D8h] [rbp-1E8h] BYREF
  int v92; // [rsp+E8h] [rbp-1D8h]
  __int64 v93; // [rsp+F0h] [rbp-1D0h] BYREF
  __int128 v94; // [rsp+F8h] [rbp-1C8h]
  __int64 v95; // [rsp+108h] [rbp-1B8h]
  __int64 v96; // [rsp+110h] [rbp-1B0h] BYREF
  __int64 v97; // [rsp+118h] [rbp-1A8h] BYREF
  __int128 v98; // [rsp+120h] [rbp-1A0h]
  __int64 v99; // [rsp+130h] [rbp-190h]
  __int128 v100; // [rsp+138h] [rbp-188h]
  char v101; // [rsp+148h] [rbp-178h]
  __int64 v102; // [rsp+150h] [rbp-170h] BYREF
  __int64 v103; // [rsp+158h] [rbp-168h]
  __int64 v104; // [rsp+160h] [rbp-160h]
  unsigned __int64 v105; // [rsp+168h] [rbp-158h]
  __int128 v106; // [rsp+170h] [rbp-150h]
  __int64 v107; // [rsp+180h] [rbp-140h]
  __int128 v108; // [rsp+188h] [rbp-138h]
  __int64 v109; // [rsp+198h] [rbp-128h]
  __int64 v110; // [rsp+1A0h] [rbp-120h]
  __int64 v111; // [rsp+1A8h] [rbp-118h]
  __int64 v112; // [rsp+1B0h] [rbp-110h]
  __int64 v113; // [rsp+1B8h] [rbp-108h]
  __int64 v114; // [rsp+1C0h] [rbp-100h]
  __int128 v115; // [rsp+1C8h] [rbp-F8h]
  __int64 v116[2]; // [rsp+1D8h] [rbp-E8h] BYREF
  __int64 v117; // [rsp+1E8h] [rbp-D8h] BYREF
  __int128 v118; // [rsp+1F0h] [rbp-D0h]
  __int64 v119; // [rsp+200h] [rbp-C0h]
  __int64 v120; // [rsp+208h] [rbp-B8h]
  __int64 v121; // [rsp+210h] [rbp-B0h]
  __int128 v122; // [rsp+218h] [rbp-A8h]
  __int64 v123; // [rsp+228h] [rbp-98h]
  __int128 v124; // [rsp+230h] [rbp-90h]
  __int64 v125; // [rsp+240h] [rbp-80h]
  __int64 v126; // [rsp+248h] [rbp-78h]
  __int64 v127; // [rsp+250h] [rbp-70h]
  __int128 v128; // [rsp+258h] [rbp-68h]
  __int64 v129; // [rsp+268h] [rbp-58h]
  __int64 v130; // [rsp+270h] [rbp-50h]
  __int128 v131; // [rsp+278h] [rbp-48h]
  unsigned __int64 v132; // [rsp+288h] [rbp-38h]

  v132 = __readfsqword(0x28u);
  v101 = 16;
  v93 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v99 = 0;
  v94 = 0;
  v98 = 0;
  v100 = 0;
  if ( (unsigned __int8)get_tinfo_details() )
  {
    v3 = (_QWORD *)a2[2];
    v102 = -1;
    v103 = 0;
    v74 = v3;
    v104 = 0;
    v105 = 0;
    v107 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v116[0] = 0;
    v116[1] = 0;
    v117 = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v126 = 0;
    v127 = 0;
    v129 = 0;
    v130 = 0;
    v106 = 0;
    v108 = 0;
    v115 = 0;
    v118 = 0;
    v122 = 0;
    v124 = 0;
    v128 = 0;
    v131 = 0;
    v4 = v3[8];
    v5 = a2[5];
    v79.m128i_i64[0] = (__int64)&v102;
    v6 = sub_1CD070(v4, v5);
    v7 = v94;
    v8 = v106;
    HIDWORD(v103) = v6;
    if ( (_QWORD)v94 != (_QWORD)v106 )
    {
      v80 = 0;
      v79.m128i_i64[1] = 0xFFFFFFFF00000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
      src = 0;
      v84 = 0;
      v85 = 0;
      v86 = 0;
      *(_OWORD *)n = 0;
      if ( (unsigned __int64)v94 < (unsigned __int64)v106 )
      {
        v14 = v94;
        do
        {
          v15 = v105 + 80 * v14;
          cleanup_argloc();
          if ( *(_QWORD *)(v15 + 32) )
          {
            *(_QWORD *)(v15 + 40) = 0;
            qfree();
          }
          clear_tinfo_t();
          sub_11A960(v15);
          ++v14;
        }
        while ( v14 < v8 );
        *(_QWORD *)&v106 = v7;
      }
      else if ( (unsigned __int64)&v79.m128i_u64[1] < v105
             || (unsigned __int64)&v79.m128i_u64[1] >= v105 + 80LL * *((_QWORD *)&v106 + 1) )
      {
        if ( *((_QWORD *)&v106 + 1) < (unsigned __int64)v94 )
        {
          v105 = qvector_reserve();
          v8 = v106;
        }
        for ( ; v8 < v7; *(_DWORD *)(v79.m128i_i64[0] + 72) = v86 )
        {
          v79.m128i_i64[0] = v105 + 80 * v8;
          v9 = v79.m128i_i64[0];
          sub_121540(v79.m128i_i64[0], &v79.m128i_u8[8]);
          v10 = si128.m128i_i64[0];
          *(_QWORD *)(v79.m128i_i64[0] + 24) = 0;
          *(_QWORD *)(v9 + 16) = v10;
          copy_tinfo_t();
          *(_QWORD *)(v9 + 32) = 0;
          *(_OWORD *)(v9 + 40) = 0;
          v11 = n[0];
          if ( n[0] )
          {
            v12 = (void *)qalloc_or_throw();
            v13 = v79.m128i_i64[0];
            *(_QWORD *)(v79.m128i_i64[0] + 32) = v12;
            *(_QWORD *)(v13 + 48) = v11;
            memcpy(v12, src, v11);
            *(_QWORD *)(v79.m128i_i64[0] + 40) = v11;
          }
          *(_DWORD *)(v79.m128i_i64[0] + 56) = 0;
          copy_argloc();
          ++v8;
        }
        *(_QWORD *)&v106 = v7;
      }
      else
      {
        sub_121540((__int64)&v87, &v79.m128i_u8[8]);
        v89[0] = 0;
        v88 = si128.m128i_i64[0];
        v70 = v89;
        copy_tinfo_t();
        v63 = n[0];
        v89[1] = 0;
        v90 = 0;
        if ( n[0] )
        {
          v89[1] = (void *)qalloc_or_throw();
          *((_QWORD *)&v90 + 1) = v63;
          memcpy(v89[1], src, v63);
          *(_QWORD *)&v90 = v63;
        }
        v91 = 0;
        v69 = &v91;
        copy_argloc();
        v92 = v86;
        if ( *((_QWORD *)&v106 + 1) < v7 )
          v105 = qvector_reserve();
        v79.m128i_i64[0] = v106;
        if ( (unsigned __int64)v106 < v7 )
        {
          do
          {
            v65 = v105 + 80 * v79.m128i_i64[0];
            sub_121540(v65, (unsigned __int8 *)&v87);
            v66 = v88;
            *(_QWORD *)(v65 + 24) = 0;
            *(_QWORD *)(v65 + 16) = v66;
            copy_tinfo_t();
            *(_QWORD *)(v65 + 32) = 0;
            *(_OWORD *)(v65 + 40) = 0;
            if ( (_QWORD)v90 )
            {
              v68 = v90;
              v64 = (void *)qalloc_or_throw();
              *(_QWORD *)(v65 + 32) = v64;
              *(_QWORD *)(v65 + 48) = v68;
              memcpy(v64, v89[1], v68);
              *(_QWORD *)(v65 + 40) = v68;
            }
            *(_DWORD *)(v65 + 56) = 0;
            copy_argloc();
            ++v79.m128i_i64[0];
            *(_DWORD *)(v65 + 72) = v92;
          }
          while ( v7 != v79.m128i_i64[0] );
        }
        *(_QWORD *)&v106 = v7;
        cleanup_argloc();
        if ( v89[1] )
        {
          *(_QWORD *)&v90 = 0;
          qfree();
        }
        clear_tinfo_t();
        sub_11A960((__int64)&v87);
      }
      cleanup_argloc();
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_11A960((__int64)&v79.m128i_i64[1]);
      v8 = v94;
    }
    v16 = v101 & 0xF0;
    if ( (v101 & 0xF0) == 0xC0 )
      v16 = HIDWORD(v95);
    HIDWORD(v104) = v16;
    v17 = 0;
    v18 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        v27 = 80 * v18;
        v79.m128i_i64[0] = (__int64)&v102;
        v28 = 80 * v18 + v93;
        if ( !(unsigned __int8)sub_3C0460((__int64)(a2 + 3), v28, 1) )
          break;
        v19 = v105;
        v20 = s1;
        if ( *(_QWORD *)(v28 + 24) )
          v20 = *(const char **)(v28 + 16);
        v21 = sub_3C0070(v20);
        v22 = v21;
        if ( v21 <= 7 && BYTE1(a2[5 * (int)v21 + 8]) )
        {
          v23 = *a2;
          v79.m128i_i64[0] = (__int64)&v102;
          v24 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v23 + 32))(a2, v22, 0);
          if ( v24 == -1 )
            break;
          v75 = v24;
          tinfo_size = get_tinfo_size();
          v26 = v27 + v19;
          v79.m128i_i64[0] = (__int64)&v102;
          sub_32BC70(v26, v75, tinfo_size, v28 + 64);
          if ( (unsigned int)(HIDWORD(v104) - 208) <= 0x2F )
          {
            *(_DWORD *)(v26 + 56) = 1;
            *(_QWORD *)(v26 + 64) = 0;
          }
          v18 = ++v17;
          if ( v17 >= (unsigned __int64)v94 )
            goto LABEL_50;
        }
        else
        {
          v35 = a2[2];
          v79.m128i_i64[0] = (__int64)&v102;
          if ( !(unsigned __int8)sub_E2580((__int64)&v102, v35, v17, v28) )
            goto LABEL_34;
          v18 = ++v17;
          if ( v17 >= (unsigned __int64)v94 )
            goto LABEL_50;
        }
      }
      v79.m128i_i64[0] = (__int64)&v102;
LABEL_34:
      v29 = -12;
      goto LABEL_35;
    }
LABEL_50:
    v79.m128i_i64[0] = (__int64)&v102;
    tinfo_property = get_tinfo_property();
    v37 = s1;
    v78 = tinfo_property & 0x3F;
    v38 = v74[8];
    v39 = (tinfo_property & 0x3F) != 1;
    if ( *(_QWORD *)(a1 + 8) )
      v37 = *(const char **)a1;
    v40 = a2[5];
    v79.m128i_i64[0] = (__int64)&v102;
    v41 = sub_332690(
            v38,
            v40,
            (_DWORD)v37,
            (unsigned int)&v96,
            v106,
            v105,
            v39,
            v67,
            v68,
            (_DWORD)v69,
            (_DWORD)v70,
            (unsigned int)&v93);
    v42 = *(_QWORD *)(v74[60] + 112LL);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v43 = sub_3C0070(*(const char **)a1);
      v44 = v43;
      if ( v43 > 7 )
        goto LABEL_57;
    }
    else
    {
      v43 = sub_3C0070(s1);
      v44 = v43;
      if ( v43 > 7 )
        goto LABEL_57;
    }
    if ( BYTE1(a2[5 * (int)v43 + 8]) )
    {
      v45 = *a2;
      v79.m128i_i64[0] = (__int64)&v102;
      v79.m128i_i32[0] = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v45 + 32))(a2, v44, 0);
      if ( v79.m128i_i32[0] == -1 )
      {
        if ( !under_debugger )
        {
          v79.m128i_i64[0] = (__int64)&v102;
          sub_37EA20(51495);
        }
        goto LABEL_99;
      }
      v46 = *(_DWORD *)(v42 + 64);
      *(_QWORD *)&v87 = 0x200000001LL;
      DWORD2(v87) = v46;
      sub_122C80(v41 + 32, (unsigned __int8 *)&v87);
      sub_11A960((__int64)&v87);
      v47 = _mm_cvtsi32_si128(*(_DWORD *)(v42 + 84));
      LODWORD(v87) = 1;
      *(_QWORD *)((char *)&v87 + 4) = _mm_unpacklo_epi32(v47, _mm_cvtsi32_si128(v79.m128i_u32[0])).m128i_u64[0];
      sub_122C80(v41 + 48, (unsigned __int8 *)&v87);
      sub_11A960((__int64)&v87);
      *(_DWORD *)v41 = 57;
    }
LABEL_57:
    v48 = *(_QWORD *)(v41 + 72);
    *(_DWORD *)(v48 + 20) = HIDWORD(v104);
    v79.m128i_i64[0] = (__int64)&v102;
    sub_E25B0(v48, v71);
    *(_DWORD *)(v48 + 280) |= 4u;
    v77 = (__int64 *)(v48 + 136);
    sub_63980((__int64 *)(v48 + 136), v116);
    v76 = v48 + 152;
    v79.m128i_i64[0] = (__int64)&v102;
    sub_313730(v48 + 152, &v117);
    if ( (v95 & 4) != 0 )
    {
      if ( (v95 & 1) == 0 )
        goto LABEL_59;
    }
    else
    {
      v87 = 0u;
      v57 = *((_QWORD *)&xmmword_4ED7D0 + 1);
      v88 = 0;
      *(_OWORD *)v89 = 0;
      v79.m128i_i64[0] = xmmword_4ED7D0;
      if ( (unsigned __int64)xmmword_4ED7D0 + v57 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
      {
        v73 = v57;
        v88 = qvector_reserve();
        *(__m128i *)(v88 + 16 * (__int64)v89[0]++) = _mm_unpacklo_epi64(_mm_loadl_epi64(&v79), (__m128i)v73);
      }
      sub_63980(v77, (__int64 *)&v87);
      sub_313730(v76, &v88);
      if ( v88 )
      {
        v89[0] = 0;
        qfree();
      }
      qfree();
      v79.m128i_i64[0] = (__int64)&v102;
      sub_313630(v48 + 216, &xmmword_4ED7D0, v58, v59, v60, v61);
      if ( (v95 & 1) == 0 )
      {
LABEL_59:
        if ( v78 != 1 )
        {
LABEL_60:
          if ( (_DWORD)v97 != 1 )
          {
            v79.m128i_i64[0] = (__int64)&v102;
            copy_argloc();
            v79.m128i_i64[0] = (__int64)&v102;
            v49 = sub_11A310((int *)v41, v42, 0);
            if ( !v49 )
            {
              v79.m128i_i64[0] = (__int64)&v102;
              v50 = j__qalloc_or_throw();
              v51 = v50 + 64;
              v52 = *(_QWORD *)(v41 + 24);
              *(_QWORD *)(v50 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v50 + 40) = 0;
              *(_QWORD *)(v50 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v50 + 56) = 0;
              *(_QWORD *)(v50 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v50 + 72) = 0;
              sub_32D4D0(v50, v52);
              *(_BYTE *)(v50 + 32) = 4;
              *(_DWORD *)v50 = 4;
              *(_QWORD *)(v50 + 40) = v41;
              v53 = *(unsigned int *)(v41 + 68);
              *(_DWORD *)(v50 + 36) = v53;
              v54 = v74[8];
              v79.m128i_i64[0] = (__int64)&v102;
              sub_1C3590(&v87, v54, &v97, v53);
              if ( (_DWORD)v97 == 2 )
              {
                v79.m128i_i64[1] = 0;
                copy_tinfo_t();
                sub_11AD10(v51, v74[8], 0, &v79.m128i_i64[1], &v87);
                clear_tinfo_t();
              }
              else
              {
                sub_123F20(v51, v74[8], (__int64)&v87, *(_DWORD *)(v41 + 68));
              }
              if ( (get_tinfo_property() & 0x2F) == 0xD )
              {
                *(_BYTE *)(v50 + 65) |= 2u;
                *(_BYTE *)(v50 + 33) |= 2u;
                *(_BYTE *)(v41 + 65) |= 2u;
                v56 = (__m128i *)v74[8];
                v79.m128i_i64[1] = v41 + 24;
                v79.m128i_i64[0] = (__int64)v56;
                sub_C70D0(v56 + 87, (unsigned __int64 *)(v41 + 24), (_QWORD **)&v79.m128i_i64[1]);
                copy_tinfo_t();
              }
              sub_1C07A0((unsigned int)&v87, (_DWORD)v77, *(_DWORD *)(v41 + 68), 0, 0, v55);
              cleanup_argloc();
              v79.m128i_i64[0] = (__int64)&v102;
              sub_B4460(v74, v50);
              v29 = 0;
              v79.m128i_i64[0] = (__int64)&v102;
              goto LABEL_35;
            }
LABEL_70:
            v79.m128i_i64[0] = (__int64)&v102;
            sub_B4460(v74, v41);
            v29 = v49;
            v79.m128i_i64[0] = (__int64)&v102;
LABEL_35:
            sub_BA2C0(v79.m128i_i64[0]);
            goto LABEL_36;
          }
          if ( !under_debugger )
          {
            v79.m128i_i64[0] = (__int64)&v102;
            sub_37EA20(51496);
          }
LABEL_99:
          BUG();
        }
LABEL_69:
        v79.m128i_i64[0] = (__int64)&v102;
        v49 = sub_11A310((int *)v41, v42, 0);
        goto LABEL_70;
      }
    }
    v62 = a2[5];
    v87 = 0u;
    *(_OWORD *)v89 = 0;
    v88 = 0;
    sub_1366B0(v74[8], 0, (__int64 *)&v87, v71, v62, 0);
    sub_63980(v77, (__int64 *)&v87);
    sub_313730(v76, &v88);
    if ( v88 )
    {
      v89[0] = 0;
      qfree();
    }
    qfree();
    if ( v78 != 1 )
      goto LABEL_60;
    goto LABEL_69;
  }
  v29 = -12;
LABEL_36:
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v30 = v93;
  if ( v93 )
  {
    v31 = v94;
    if ( (_QWORD)v94 )
    {
      v32 = 0;
      do
      {
        v33 = (_QWORD *)(v30 + 80 * v32);
        clear_tinfo_t();
        if ( v33[5] )
        {
          v33[6] = 0;
          qfree();
        }
        if ( v33[2] )
        {
          v33[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v30 = v93;
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v94 = 0;
    qfree();
  }
  return v29;
}
