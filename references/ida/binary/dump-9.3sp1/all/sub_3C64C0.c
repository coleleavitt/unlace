__int64 __fastcall sub_3C64C0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // xmm0_8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  _QWORD **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  size_t v14; // r13
  void *v15; // rax
  __int64 v16; // r12
  __int64 v17; // rdi
  int v18; // eax
  int v19; // r13d
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  const char *v22; // rdi
  unsigned int v23; // eax
  int v24; // eax
  int tinfo_size; // eax
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // r12
  unsigned int v29; // r12d
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // rdi
  char tinfo_property; // al
  const char *v38; // rdx
  _BOOL4 v39; // eax
  __int64 v40; // r12
  __int64 v41; // r14
  unsigned int v42; // eax
  __int64 v43; // rsi
  __int32 v44; // eax
  __m128i v45; // xmm0
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int8 v51; // r13
  __int64 v52; // r13
  __int64 v53; // r14
  __int64 v54; // rsi
  __int64 v55; // rcx
  __m128i *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  size_t v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  void *v67; // rax
  __int64 v68; // rbx
  __int64 *v69; // rax
  __int64 v70; // rcx
  size_t v71; // [rsp+0h] [rbp-2C0h]
  __int64 *v73; // [rsp+20h] [rbp-2A0h]
  _QWORD *v74; // [rsp+28h] [rbp-298h]
  int v75; // [rsp+30h] [rbp-290h]
  __int64 *v76; // [rsp+38h] [rbp-288h]
  char v77; // [rsp+40h] [rbp-280h]
  __int64 v78; // [rsp+48h] [rbp-278h]
  unsigned int v79; // [rsp+48h] [rbp-278h]
  __int64 v80; // [rsp+48h] [rbp-278h]
  _QWORD *v81[2]; // [rsp+50h] [rbp-270h] BYREF
  __m128i si128; // [rsp+60h] [rbp-260h] BYREF
  void *src; // [rsp+70h] [rbp-250h]
  size_t n[2]; // [rsp+78h] [rbp-248h]
  __int64 v85; // [rsp+88h] [rbp-238h]
  __int64 v86; // [rsp+90h] [rbp-230h]
  int v87; // [rsp+98h] [rbp-228h]
  __m128i v88; // [rsp+A0h] [rbp-220h] BYREF
  __int64 *v89; // [rsp+B0h] [rbp-210h] BYREF
  void *v90[2]; // [rsp+B8h] [rbp-208h] BYREF
  __int128 v91; // [rsp+C8h] [rbp-1F8h]
  int v92; // [rsp+D8h] [rbp-1E8h]
  int v93; // [rsp+E8h] [rbp-1D8h]
  __int64 v94; // [rsp+F0h] [rbp-1D0h] BYREF
  __int128 v95; // [rsp+F8h] [rbp-1C8h]
  __int64 v96; // [rsp+108h] [rbp-1B8h]
  __int64 v97; // [rsp+110h] [rbp-1B0h] BYREF
  __int64 v98; // [rsp+118h] [rbp-1A8h] BYREF
  __int128 v99; // [rsp+120h] [rbp-1A0h]
  __int64 v100; // [rsp+130h] [rbp-190h]
  __int128 v101; // [rsp+138h] [rbp-188h]
  char v102; // [rsp+148h] [rbp-178h]
  __int64 v103; // [rsp+150h] [rbp-170h] BYREF
  __int64 v104; // [rsp+158h] [rbp-168h]
  __int64 v105; // [rsp+160h] [rbp-160h]
  unsigned __int64 v106; // [rsp+168h] [rbp-158h] BYREF
  __int128 v107; // [rsp+170h] [rbp-150h]
  __int64 v108; // [rsp+180h] [rbp-140h]
  __int128 v109; // [rsp+188h] [rbp-138h]
  __int64 v110; // [rsp+198h] [rbp-128h]
  __int64 v111; // [rsp+1A0h] [rbp-120h]
  __int64 v112; // [rsp+1A8h] [rbp-118h]
  __int64 v113; // [rsp+1B0h] [rbp-110h]
  __int64 v114; // [rsp+1B8h] [rbp-108h]
  __int64 v115; // [rsp+1C0h] [rbp-100h]
  __int128 v116; // [rsp+1C8h] [rbp-F8h]
  __int64 v117[2]; // [rsp+1D8h] [rbp-E8h] BYREF
  __int64 *v118; // [rsp+1E8h] [rbp-D8h] BYREF
  __int128 v119; // [rsp+1F0h] [rbp-D0h]
  __int64 v120; // [rsp+200h] [rbp-C0h]
  __int64 v121; // [rsp+208h] [rbp-B8h]
  __int64 v122; // [rsp+210h] [rbp-B0h]
  __int128 v123; // [rsp+218h] [rbp-A8h]
  __int64 v124; // [rsp+228h] [rbp-98h]
  __int128 v125; // [rsp+230h] [rbp-90h]
  __int64 v126; // [rsp+240h] [rbp-80h]
  __int64 v127; // [rsp+248h] [rbp-78h]
  __int64 v128; // [rsp+250h] [rbp-70h]
  __int128 v129; // [rsp+258h] [rbp-68h]
  __int64 v130; // [rsp+268h] [rbp-58h]
  __int64 v131; // [rsp+270h] [rbp-50h]
  __int128 v132; // [rsp+278h] [rbp-48h]
  unsigned __int64 v133; // [rsp+288h] [rbp-38h]

  v133 = __readfsqword(0x28u);
  v102 = 16;
  v94 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v100 = 0;
  v95 = 0;
  v99 = 0;
  v101 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
  {
    v29 = -12;
    goto LABEL_32;
  }
  v5 = *(_QWORD **)(a2 + 16);
  v6 = 0;
  v103 = -1;
  v104 = 0;
  v74 = v5;
  v105 = 0;
  v106 = 0;
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v117[0] = 0;
  v117[1] = 0;
  v118 = nullptr;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v124 = 0;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v130 = 0;
  v131 = 0;
  v107 = 0;
  v109 = 0;
  v116 = 0;
  v119 = 0;
  v123 = 0;
  v125 = 0;
  v129 = 0;
  v132 = 0;
  v7 = v95;
  v8 = 0;
  HIDWORD(v104) = sub_1CFBB0(v5[8], *(_QWORD *)(a2 + 40));
  if ( (_QWORD)v95 )
  {
    v81[1] = nullptr;
    v81[0] = (_QWORD *)0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v6 = 0;
    src = nullptr;
    v85 = 0;
    v86 = 0;
    v87 = 0;
    *(_OWORD *)n = 0;
    if ( (unsigned __int64)v95 < (unsigned __int64)v107 )
    {
      v16 = v106 + 80 * v95;
      cleanup_argloc();
      v17 = *(_QWORD *)(v16 + 32);
      if ( v17 )
      {
        *(_QWORD *)(v16 + 40) = 0;
        qfree(v17);
      }
      clear_tinfo_t();
      sub_11CDA0(v16);
      *(_QWORD *)&v107 = v7;
    }
    else
    {
      v9 = v81;
      v10 = *((_QWORD *)&v107 + 1);
      if ( (unsigned __int64)v81 < v106 || (unsigned __int64)v81 >= v106 + 80LL * *((_QWORD *)&v107 + 1) )
      {
        if ( *((_QWORD *)&v107 + 1) < (unsigned __int64)v95 )
        {
          v106 = qvector_reserve((__int64)&v106, v106, v95, 80);
          v8 = v107;
        }
        for ( ; v8 < v7; *(_DWORD *)(v78 + 72) = v87 )
        {
          v78 = v106 + 80 * v8;
          sub_123A40(v78, (unsigned __int8 *)v81, v10, (__int64)v9);
          v11 = si128.m128i_i64[0];
          *(_QWORD *)(v78 + 24) = 0;
          *(_QWORD *)(v78 + 16) = v11;
          copy_tinfo_t();
          v6 = 0;
          *(_QWORD *)(v78 + 32) = 0;
          *(_OWORD *)(v78 + 40) = 0;
          v14 = n[0];
          if ( n[0] )
          {
            v15 = (void *)qalloc_or_throw(n[0], (__int64)&si128.m128i_i64[1], v12, v13);
            *(_QWORD *)(v78 + 32) = v15;
            *(_QWORD *)(v78 + 48) = v14;
            memcpy(v15, src, v14);
            *(_QWORD *)(v78 + 40) = v14;
          }
          *(_DWORD *)(v78 + 56) = 0;
          copy_argloc();
          v9 = (_QWORD **)v78;
          ++v8;
        }
        *(_QWORD *)&v107 = v7;
      }
      else
      {
        sub_123A40((__int64)&v88, (unsigned __int8 *)v81, *((__int64 *)&v107 + 1), (__int64)v81);
        v90[0] = nullptr;
        v89 = (__int64 *)si128.m128i_i64[0];
        copy_tinfo_t();
        v64 = n[0];
        v6 = 0;
        v90[1] = nullptr;
        v91 = 0;
        if ( n[0] )
        {
          v90[1] = (void *)qalloc_or_throw(n[0], (__int64)&si128.m128i_i64[1], v62, v63);
          *((_QWORD *)&v91 + 1) = v64;
          memcpy(v90[1], src, v64);
          *(_QWORD *)&v91 = v64;
        }
        v92 = 0;
        copy_argloc();
        v93 = v87;
        if ( *((_QWORD *)&v107 + 1) < v7 )
          v106 = qvector_reserve((__int64)&v106, v106, v7, 80);
        v80 = v107;
        if ( (unsigned __int64)v107 < v7 )
        {
          do
          {
            v68 = v106 + 80 * v80;
            sub_123A40(v68, (unsigned __int8 *)&v88, v65, v66);
            v69 = v89;
            *(_QWORD *)(v68 + 24) = 0;
            *(_QWORD *)(v68 + 16) = v69;
            copy_tinfo_t();
            a4 = 0;
            *(_QWORD *)(v68 + 32) = 0;
            *(_OWORD *)(v68 + 40) = 0;
            if ( (_QWORD)v91 )
            {
              v71 = v91;
              v67 = (void *)qalloc_or_throw(v91, (__int64)v90, v91, v70);
              *(_QWORD *)(v68 + 32) = v67;
              *(_QWORD *)(v68 + 48) = v71;
              memcpy(v67, v90[1], v71);
              *(_QWORD *)(v68 + 40) = v71;
            }
            *(_DWORD *)(v68 + 56) = 0;
            copy_argloc();
            ++v80;
            *(_DWORD *)(v68 + 72) = v93;
          }
          while ( v7 != v80 );
        }
        *(_QWORD *)&v107 = v7;
        cleanup_argloc();
        if ( v90[1] )
        {
          *(_QWORD *)&v91 = 0;
          qfree((__int64)v90[1]);
        }
        clear_tinfo_t();
        sub_11CDA0((__int64)&v88);
      }
    }
    cleanup_argloc();
    if ( src )
    {
      n[0] = 0;
      qfree((__int64)src);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v81);
    v8 = v95;
  }
  v18 = v102 & 0xF0;
  if ( (v102 & 0xF0) == 0xC0 )
    v18 = HIDWORD(v96);
  HIDWORD(v105) = v18;
  v19 = 0;
  v20 = 0;
  if ( !v8 )
  {
LABEL_46:
    tinfo_property = get_tinfo_property();
    v38 = s1;
    v77 = tinfo_property & 0x3F;
    v39 = (tinfo_property & 0x3F) != 1;
    if ( *(_QWORD *)(a1 + 8) )
      v38 = *(const char **)a1;
    v40 = sub_335B10(v74[8], *(_QWORD *)(a2 + 40), (__int64)v38, (__int64)&v97, v107, v106, v39);
    v41 = *(_QWORD *)(v74[60] + 112LL);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v42 = sub_3C5170(*(const char **)a1);
      v43 = v42;
      if ( v42 > 7 )
        goto LABEL_53;
    }
    else
    {
      v42 = sub_3C5170(s1);
      v43 = v42;
      if ( v42 > 7 )
        goto LABEL_53;
    }
    if ( *(_BYTE *)(a2 + 40LL * (int)v42 + 65) )
    {
      v79 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, v43, 0);
      if ( v79 == -1 )
      {
        if ( !under_debugger )
          sub_383060(0xC927u, 0.0);
        goto LABEL_93;
      }
      v44 = *(_DWORD *)(v41 + 64);
      v88.m128i_i64[0] = 0x200000001LL;
      v88.m128i_i32[2] = v44;
      sub_125180(v40 + 32, (unsigned __int8 *)&v88);
      sub_11CDA0((__int64)&v88);
      v45 = _mm_cvtsi32_si128(*(_DWORD *)(v41 + 84));
      v88.m128i_i32[0] = 1;
      v6 = _mm_unpacklo_epi32(v45, _mm_cvtsi32_si128(v79)).m128i_u64[0];
      *(__int64 *)((char *)v88.m128i_i64 + 4) = v6;
      sub_125180(v40 + 48, (unsigned __int8 *)&v88);
      sub_11CDA0((__int64)&v88);
      *(_DWORD *)v40 = 57;
    }
LABEL_53:
    v46 = *(_QWORD *)(v40 + 72);
    *(_DWORD *)(v46 + 20) = HIDWORD(v105);
    sub_E8270(v46, (__int64)&v94);
    *(_DWORD *)(v46 + 280) |= 4u;
    v76 = (__int64 *)(v46 + 136);
    sub_64280((__int64 *)(v46 + 136), v117);
    v73 = (__int64 *)(v46 + 152);
    sub_316CB0((__int64 *)(v46 + 152), &v118, v47, v48);
    if ( (v96 & 4) != 0 )
    {
      if ( (v96 & 1) == 0 )
        goto LABEL_55;
    }
    else
    {
      v6 = 0;
      v88 = 0u;
      v89 = nullptr;
      *(_OWORD *)v90 = 0;
      v89 = (__int64 *)qvector_reserve((__int64)&v89, 0, 1, 16);
      *(__m128i *)&v89[2 * (__int64)v90[0]++] = _mm_load_si128((const __m128i *)&xmmword_424800);
      sub_64280(v76, v88.m128i_i64);
      sub_316CB0(v73, &v89, v57, v58);
      if ( v89 )
      {
        v90[0] = nullptr;
        qfree((__int64)v89);
      }
      qfree(v88.m128i_i64[0]);
      v88 = _mm_load_si128((const __m128i *)&xmmword_424800);
      sub_316BB0((__int64 *)(v46 + 216), &v88, 0.0, a4);
      if ( (v96 & 1) == 0 )
      {
LABEL_55:
        if ( v77 != 1 )
        {
LABEL_56:
          if ( (_DWORD)v98 != 1 )
          {
            copy_argloc();
            v51 = sub_11C750((int *)v40, v41, 0);
            if ( !v51 )
            {
              v52 = j__qalloc_or_throw(80, v41, v49, v50);
              v53 = v52 + 64;
              v54 = *(_QWORD *)(v40 + 24);
              *(_QWORD *)(v52 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v52 + 40) = 0;
              *(_QWORD *)(v52 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v52 + 56) = 0;
              *(_QWORD *)(v52 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v52 + 72) = 0;
              sub_330970(v52, v54);
              *(_BYTE *)(v52 + 32) = 4;
              *(_DWORD *)v52 = 4;
              *(_QWORD *)(v52 + 40) = v40;
              v55 = *(unsigned int *)(v40 + 68);
              *(_DWORD *)(v52 + 36) = v55;
              sub_1C6010((__int64)&v88, v74[8], (__int64)&v98, v55);
              if ( (_DWORD)v98 == 2 )
              {
                v81[0] = nullptr;
                copy_tinfo_t();
                sub_11D150(v53, v74[8], nullptr, (__int64 *)v81, &v88);
                clear_tinfo_t();
              }
              else
              {
                sub_126420(v53, v74[8], (__int64)&v88, *(_DWORD *)(v40 + 68));
              }
              if ( (get_tinfo_property() & 0x2F) == 0xD )
              {
                *(_BYTE *)(v52 + 65) |= 2u;
                *(_BYTE *)(v52 + 33) |= 2u;
                *(_BYTE *)(v40 + 65) |= 2u;
                v56 = (__m128i *)v74[8];
                v81[0] = (_QWORD *)(v40 + 24);
                sub_C7FB0(v56 + 87, (unsigned __int64 *)(v40 + 24), v81);
                copy_tinfo_t();
              }
              sub_1C31B0((__int64)&v88, (__int64)v76, *(_DWORD *)(v40 + 68), 0, 0);
              cleanup_argloc();
              sub_B5290(v74, v52);
              v29 = 0;
              sub_BB120(&v103);
              goto LABEL_32;
            }
LABEL_66:
            sub_B5290(v74, v40);
            v29 = v51;
            sub_BB120(&v103);
            goto LABEL_32;
          }
          if ( !under_debugger )
            sub_383060(0xC928u, *(double *)&v6);
LABEL_93:
          BUG();
        }
LABEL_65:
        v51 = sub_11C750((int *)v40, v41, 0);
        goto LABEL_66;
      }
    }
    v6 = 0;
    v59 = *(_QWORD *)(a2 + 40);
    v88 = 0u;
    *(_OWORD *)v90 = 0;
    v89 = nullptr;
    sub_138BB0(v74[8], 0, v88.m128i_i64, (__int64)&v94, v59, 0);
    sub_64280(v76, v88.m128i_i64);
    sub_316CB0(v73, &v89, v60, v61);
    if ( v89 )
    {
      v90[0] = nullptr;
      qfree((__int64)v89);
    }
    qfree(v88.m128i_i64[0]);
    if ( v77 != 1 )
      goto LABEL_56;
    goto LABEL_65;
  }
  while ( 1 )
  {
    v27 = 80 * v20;
    v28 = 80 * v20 + v94;
    if ( !(unsigned __int8)sub_3C5560(a2 + 24, v28, 1, 0.0) )
      break;
    v21 = v106;
    v22 = s1;
    if ( *(_QWORD *)(v28 + 24) )
      v22 = *(const char **)(v28 + 16);
    v23 = sub_3C5170(v22);
    if ( v23 <= 7 && *(_BYTE *)(a2 + 40LL * (int)v23 + 65) )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, v23, 0);
      if ( v24 == -1 )
        break;
      v75 = v24;
      tinfo_size = get_tinfo_size();
      v26 = v27 + v21;
      sub_32F0D0(v26, v75, tinfo_size);
      if ( (unsigned int)(HIDWORD(v105) - 208) <= 0x2F )
      {
        *(_DWORD *)(v26 + 56) = 1;
        *(_QWORD *)(v26 + 64) = 0;
      }
      v20 = ++v19;
      if ( v19 >= (unsigned __int64)v95 )
        goto LABEL_46;
    }
    else
    {
      if ( !(unsigned __int8)sub_E8240((__int64)&v103, *(_QWORD *)(a2 + 16), v19, v28) )
        break;
      v20 = ++v19;
      if ( v19 >= (unsigned __int64)v95 )
        goto LABEL_46;
    }
  }
  v29 = -12;
  sub_BB120(&v103);
LABEL_32:
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v30 = v94;
  if ( v94 )
  {
    v31 = v95;
    if ( (_QWORD)v95 )
    {
      v32 = 0;
      do
      {
        v33 = (_QWORD *)(v30 + 80 * v32);
        clear_tinfo_t();
        v34 = v33[5];
        if ( v34 )
        {
          v33[6] = 0;
          qfree(v34);
        }
        v35 = v33[2];
        if ( v35 )
        {
          v33[3] = 0;
          qfree(v35);
        }
        cleanup_argloc();
        v30 = v94;
        ++v32;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v95 = 0;
    qfree(v30);
  }
  return v29;
}
