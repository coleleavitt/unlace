__int64 __fastcall sub_3BEBC0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rdi
  _QWORD *v6; // rax
  __int64 v7; // xmm0_8
  int v8; // eax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  size_t v12; // r13
  void *v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rdi
  int v17; // eax
  int v18; // r13d
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  const char *v21; // rdi
  unsigned int v22; // eax
  int v23; // eax
  int tinfo_size; // eax
  __int64 v25; // r14
  __int64 v26; // rbx
  _QWORD *v27; // r12
  unsigned int v28; // r12d
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 v31; // r14
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  char tinfo_property; // al
  const char *v37; // rdx
  _BOOL4 v38; // eax
  __int64 v39; // r12
  __int64 v40; // r14
  unsigned int v41; // eax
  __int64 v42; // rsi
  __int32 v43; // eax
  __m128i v44; // xmm0
  __int64 v45; // r13
  __int64 **v46; // rsi
  unsigned __int8 v47; // r13
  __int64 v48; // r13
  __int64 v49; // r14
  __int64 v50; // rsi
  int v51; // ecx
  __m128i *v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // r8
  size_t v55; // rbx
  void *v56; // rax
  __int64 v57; // rbx
  __int64 *v58; // rax
  size_t v59; // [rsp+0h] [rbp-2C0h]
  __int64 *v61; // [rsp+20h] [rbp-2A0h]
  _QWORD *v62; // [rsp+28h] [rbp-298h]
  int v63; // [rsp+30h] [rbp-290h]
  __int64 *v64; // [rsp+38h] [rbp-288h]
  char v65; // [rsp+40h] [rbp-280h]
  __int64 v66; // [rsp+48h] [rbp-278h]
  unsigned int v67; // [rsp+48h] [rbp-278h]
  __int64 v68; // [rsp+48h] [rbp-278h]
  _QWORD *v69[2]; // [rsp+50h] [rbp-270h] BYREF
  __m128i si128; // [rsp+60h] [rbp-260h] BYREF
  void *src; // [rsp+70h] [rbp-250h]
  size_t n[2]; // [rsp+78h] [rbp-248h]
  _QWORD v73[2]; // [rsp+88h] [rbp-238h] BYREF
  int v74; // [rsp+98h] [rbp-228h]
  __m128i v75; // [rsp+A0h] [rbp-220h] BYREF
  __int64 *v76; // [rsp+B0h] [rbp-210h] BYREF
  void *v77[2]; // [rsp+B8h] [rbp-208h] BYREF
  __int128 v78; // [rsp+C8h] [rbp-1F8h]
  _DWORD v79[4]; // [rsp+D8h] [rbp-1E8h] BYREF
  int v80; // [rsp+E8h] [rbp-1D8h]
  __int64 v81; // [rsp+F0h] [rbp-1D0h] BYREF
  __int128 v82; // [rsp+F8h] [rbp-1C8h]
  __int64 v83; // [rsp+108h] [rbp-1B8h]
  __int64 v84; // [rsp+110h] [rbp-1B0h] BYREF
  __int64 v85; // [rsp+118h] [rbp-1A8h] BYREF
  __int128 v86; // [rsp+120h] [rbp-1A0h]
  __int64 v87; // [rsp+130h] [rbp-190h]
  __int128 v88; // [rsp+138h] [rbp-188h]
  char v89; // [rsp+148h] [rbp-178h]
  __int64 v90; // [rsp+150h] [rbp-170h] BYREF
  __int64 v91; // [rsp+158h] [rbp-168h]
  __int64 v92; // [rsp+160h] [rbp-160h]
  unsigned __int64 v93; // [rsp+168h] [rbp-158h] BYREF
  __int128 v94; // [rsp+170h] [rbp-150h]
  __int64 v95; // [rsp+180h] [rbp-140h]
  __int128 v96; // [rsp+188h] [rbp-138h]
  __int64 v97; // [rsp+198h] [rbp-128h]
  __int64 v98; // [rsp+1A0h] [rbp-120h]
  __int64 v99; // [rsp+1A8h] [rbp-118h]
  __int64 v100; // [rsp+1B0h] [rbp-110h]
  __int64 v101; // [rsp+1B8h] [rbp-108h]
  __int64 v102; // [rsp+1C0h] [rbp-100h]
  __int128 v103; // [rsp+1C8h] [rbp-F8h]
  __int64 v104[2]; // [rsp+1D8h] [rbp-E8h] BYREF
  __int64 *v105; // [rsp+1E8h] [rbp-D8h] BYREF
  __int128 v106; // [rsp+1F0h] [rbp-D0h]
  __int64 v107; // [rsp+200h] [rbp-C0h]
  __int64 v108; // [rsp+208h] [rbp-B8h]
  __int64 v109; // [rsp+210h] [rbp-B0h]
  __int128 v110; // [rsp+218h] [rbp-A8h]
  __int64 v111; // [rsp+228h] [rbp-98h]
  __int128 v112; // [rsp+230h] [rbp-90h]
  __int64 v113; // [rsp+240h] [rbp-80h]
  __int64 v114; // [rsp+248h] [rbp-78h]
  __int64 v115; // [rsp+250h] [rbp-70h]
  __int128 v116; // [rsp+258h] [rbp-68h]
  __int64 v117; // [rsp+268h] [rbp-58h]
  __int64 v118; // [rsp+270h] [rbp-50h]
  __int128 v119; // [rsp+278h] [rbp-48h]
  unsigned __int64 v120; // [rsp+288h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 24);
  v120 = __readfsqword(0x28u);
  v89 = 16;
  v81 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  v87 = 0;
  v82 = 0;
  v86 = 0;
  v88 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v4, 12, &v81) )
  {
    v28 = -12;
    goto LABEL_34;
  }
  v6 = *(_QWORD **)(a2 + 16);
  v7 = 0;
  v90 = -1;
  v91 = 0;
  v62 = v6;
  v92 = 0;
  v93 = 0;
  v95 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v104[0] = 0;
  v104[1] = 0;
  v105 = nullptr;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v111 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v117 = 0;
  v118 = 0;
  v94 = 0;
  v96 = 0;
  v103 = 0;
  v106 = 0;
  v110 = 0;
  v112 = 0;
  v116 = 0;
  v119 = 0;
  v8 = sub_1C8C90(v6[8], *(_QWORD *)(a2 + 40));
  v9 = v82;
  v10 = v94;
  HIDWORD(v91) = v8;
  if ( (_QWORD)v82 != (_QWORD)v94 )
  {
    v69[1] = nullptr;
    v69[0] = (_QWORD *)0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
    v7 = 0;
    src = nullptr;
    v73[0] = 0;
    v73[1] = 0;
    v74 = 0;
    *(_OWORD *)n = 0;
    if ( (unsigned __int64)v82 < (unsigned __int64)v94 )
    {
      v14 = v82;
      do
      {
        v15 = v93 + 80 * v14;
        cleanup_argloc(v15 + 56);
        v16 = *(_QWORD *)(v15 + 32);
        if ( v16 )
        {
          *(_QWORD *)(v15 + 40) = 0;
          qfree(v16);
        }
        clear_tinfo_t(v15 + 24);
        sub_1166E0(v15);
        ++v14;
      }
      while ( v14 < v10 );
      *(_QWORD *)&v94 = v9;
    }
    else if ( (unsigned __int64)v69 < v93 || (unsigned __int64)v69 >= v93 + 80LL * *((_QWORD *)&v94 + 1) )
    {
      if ( *((_QWORD *)&v94 + 1) < (unsigned __int64)v82 )
      {
        v93 = qvector_reserve(&v93, v93, v82, 80);
        v10 = v94;
      }
      for ( ; v10 < v9; *(_DWORD *)(v66 + 72) = v74 )
      {
        v66 = v93 + 80 * v10;
        sub_11D380(v66, (unsigned __int8 *)v69);
        v11 = si128.m128i_i64[0];
        *(_QWORD *)(v66 + 24) = 0;
        *(_QWORD *)(v66 + 16) = v11;
        copy_tinfo_t(v66 + 24, &si128.m128i_u64[1]);
        v7 = 0;
        *(_QWORD *)(v66 + 32) = 0;
        *(_OWORD *)(v66 + 40) = 0;
        v12 = n[0];
        if ( n[0] )
        {
          v13 = (void *)qalloc_or_throw(n[0]);
          *(_QWORD *)(v66 + 32) = v13;
          *(_QWORD *)(v66 + 48) = v12;
          memcpy(v13, src, v12);
          *(_QWORD *)(v66 + 40) = v12;
        }
        *(_DWORD *)(v66 + 56) = 0;
        copy_argloc(v66 + 56, v73);
        ++v10;
      }
      *(_QWORD *)&v94 = v9;
    }
    else
    {
      sub_11D380((__int64)&v75, (unsigned __int8 *)v69);
      v77[0] = nullptr;
      v76 = (__int64 *)si128.m128i_i64[0];
      copy_tinfo_t(v77, &si128.m128i_u64[1]);
      v55 = n[0];
      v7 = 0;
      v77[1] = nullptr;
      v78 = 0;
      if ( n[0] )
      {
        v77[1] = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v78 + 1) = v55;
        memcpy(v77[1], src, v55);
        *(_QWORD *)&v78 = v55;
      }
      v79[0] = 0;
      copy_argloc(v79, v73);
      v80 = v74;
      if ( *((_QWORD *)&v94 + 1) < v9 )
        v93 = qvector_reserve(&v93, v93, v9, 80);
      v68 = v94;
      if ( (unsigned __int64)v94 < v9 )
      {
        do
        {
          v57 = v93 + 80 * v68;
          sub_11D380(v57, (unsigned __int8 *)&v75);
          v58 = v76;
          *(_QWORD *)(v57 + 24) = 0;
          *(_QWORD *)(v57 + 16) = v58;
          copy_tinfo_t(v57 + 24, v77);
          a4 = 0;
          *(_QWORD *)(v57 + 32) = 0;
          *(_OWORD *)(v57 + 40) = 0;
          if ( (_QWORD)v78 )
          {
            v59 = v78;
            v56 = (void *)qalloc_or_throw(v78);
            *(_QWORD *)(v57 + 32) = v56;
            *(_QWORD *)(v57 + 48) = v59;
            memcpy(v56, v77[1], v59);
            *(_QWORD *)(v57 + 40) = v59;
          }
          *(_DWORD *)(v57 + 56) = 0;
          copy_argloc(v57 + 56, v79);
          ++v68;
          *(_DWORD *)(v57 + 72) = v80;
        }
        while ( v9 != v68 );
      }
      *(_QWORD *)&v94 = v9;
      cleanup_argloc(v79);
      if ( v77[1] )
      {
        *(_QWORD *)&v78 = 0;
        qfree(v77[1]);
      }
      clear_tinfo_t(v77);
      sub_1166E0((__int64)&v75);
    }
    cleanup_argloc(v73);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    clear_tinfo_t(&si128.m128i_u64[1]);
    sub_1166E0((__int64)v69);
    v10 = v82;
  }
  v17 = v89 & 0xF0;
  if ( (v89 & 0xF0) == 0xC0 )
    v17 = HIDWORD(v83);
  HIDWORD(v92) = v17;
  v18 = 0;
  v19 = 0;
  if ( !v10 )
  {
LABEL_48:
    tinfo_property = get_tinfo_property(v84, 2);
    v37 = s1;
    v65 = tinfo_property & 0x3F;
    v38 = (tinfo_property & 0x3F) != 1;
    if ( *(_QWORD *)(a1 + 8) )
      v37 = *(const char **)a1;
    v39 = sub_32E2F0(v62[8], *(_QWORD *)(a2 + 40), (__int64)v37, &v84, v94, v93, v38);
    v40 = *(_QWORD *)(v62[60] + 112LL);
    if ( *(_QWORD *)(a1 + 8) )
    {
      v41 = sub_3BD870(*(const char **)a1);
      v42 = v41;
      if ( v41 > 7 )
        goto LABEL_55;
    }
    else
    {
      v41 = sub_3BD870(s1);
      v42 = v41;
      if ( v41 > 7 )
        goto LABEL_55;
    }
    if ( *(_BYTE *)(a2 + 40LL * (int)v41 + 65) )
    {
      v67 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, v42, 0);
      if ( v67 == -1 )
      {
        if ( !under_debugger )
          sub_37B760(0xC927u, v42, 0.0);
        goto LABEL_95;
      }
      v43 = *(_DWORD *)(v40 + 64);
      v75.m128i_i64[0] = 0x200000001LL;
      v75.m128i_i32[2] = v43;
      sub_11EAC0(v39 + 32, (unsigned __int8 *)&v75);
      sub_1166E0((__int64)&v75);
      v44 = _mm_cvtsi32_si128(*(_DWORD *)(v40 + 84));
      v75.m128i_i32[0] = 1;
      v7 = _mm_unpacklo_epi32(v44, _mm_cvtsi32_si128(v67)).m128i_u64[0];
      *(__int64 *)((char *)v75.m128i_i64 + 4) = v7;
      sub_11EAC0(v39 + 48, (unsigned __int8 *)&v75);
      sub_1166E0((__int64)&v75);
      *(_DWORD *)v39 = 57;
    }
LABEL_55:
    v45 = *(_QWORD *)(v39 + 72);
    *(_DWORD *)(v45 + 20) = HIDWORD(v92);
    sub_E1BB0(v45, (__int64)&v81);
    *(_DWORD *)(v45 + 280) |= 4u;
    v64 = (__int64 *)(v45 + 136);
    sub_5DD00((__int64 *)(v45 + 136), v104);
    v46 = &v105;
    v61 = (__int64 *)(v45 + 152);
    sub_30F930((__int64 *)(v45 + 152), &v105);
    if ( (v83 & 4) != 0 )
    {
      if ( (v83 & 1) == 0 )
        goto LABEL_57;
    }
    else
    {
      v7 = 0;
      v75 = 0u;
      v76 = nullptr;
      *(_OWORD *)v77 = 0;
      v76 = (__int64 *)qvector_reserve(&v76, 0, 1, 16);
      *(__m128i *)&v76[2 * (__int64)v77[0]++] = _mm_load_si128((const __m128i *)&xmmword_3FA120);
      sub_5DD00(v64, v75.m128i_i64);
      sub_30F930(v61, &v76);
      if ( v76 )
      {
        v77[0] = nullptr;
        qfree(v76);
      }
      qfree(v75.m128i_i64[0]);
      v46 = (__int64 **)&v75;
      v75 = _mm_load_si128((const __m128i *)&xmmword_3FA120);
      sub_30F830((__int64 *)(v45 + 216), &v75, 0.0, a4);
      if ( (v83 & 1) == 0 )
      {
LABEL_57:
        if ( v65 != 1 )
        {
LABEL_58:
          if ( (_DWORD)v85 != 1 )
          {
            copy_argloc(v45 + 80, &v85);
            v47 = sub_116090((int *)v39, v40, 0);
            if ( !v47 )
            {
              v48 = j__qalloc_or_throw(80);
              v49 = v48 + 64;
              v50 = *(_QWORD *)(v39 + 24);
              *(_QWORD *)(v48 + 32) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v48 + 40) = 0;
              *(_QWORD *)(v48 + 48) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v48 + 56) = 0;
              *(_QWORD *)(v48 + 64) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v48 + 72) = 0;
              sub_329320(v48, v50);
              *(_BYTE *)(v48 + 32) = 4;
              *(_DWORD *)v48 = 4;
              *(_QWORD *)(v48 + 40) = v39;
              v51 = *(_DWORD *)(v39 + 68);
              *(_DWORD *)(v48 + 36) = v51;
              sub_1BF790((__int64)&v75, v62[8], (__int64)&v85, v51);
              if ( (_DWORD)v85 == 2 )
              {
                v69[0] = nullptr;
                copy_tinfo_t(v69, &v84);
                sub_116A90(v49, v62[8], nullptr, v69, &v75);
                clear_tinfo_t(v69);
              }
              else
              {
                sub_11FD60(v49, v62[8], (__int64)&v75, *(_DWORD *)(v39 + 68));
              }
              if ( (get_tinfo_property(v84, 2) & 0x2F) == 0xD )
              {
                *(_BYTE *)(v48 + 65) |= 2u;
                *(_BYTE *)(v48 + 33) |= 2u;
                *(_BYTE *)(v39 + 65) |= 2u;
                v52 = (__m128i *)v62[8];
                v69[0] = (_QWORD *)(v39 + 24);
                v53 = sub_C18F0(v52 + 87, (unsigned __int64 *)(v39 + 24), v69);
                copy_tinfo_t(v53 + 32, &v84);
              }
              sub_1BC930((__int64)&v75, v64, *(_DWORD *)(v39 + 68), 0, nullptr);
              cleanup_argloc(&v75);
              sub_AEBD0(v62, v48);
              v28 = 0;
              sub_B4A60(&v90);
              goto LABEL_34;
            }
LABEL_68:
            sub_AEBD0(v62, v39);
            v28 = v47;
            sub_B4A60(&v90);
            goto LABEL_34;
          }
          if ( !under_debugger )
            sub_37B760(0xC928u, (__int64)v46, *(double *)&v7);
LABEL_95:
          BUG();
        }
LABEL_67:
        v47 = sub_116090((int *)v39, v40, 0);
        goto LABEL_68;
      }
    }
    v7 = 0;
    v54 = *(_QWORD *)(a2 + 40);
    v75 = 0u;
    *(_OWORD *)v77 = 0;
    v76 = nullptr;
    sub_1324F0(v62[8], 0, v75.m128i_i64, (__int64)&v81, v54, 0);
    sub_5DD00(v64, v75.m128i_i64);
    v46 = &v76;
    sub_30F930(v61, &v76);
    if ( v76 )
    {
      v77[0] = nullptr;
      qfree(v76);
    }
    qfree(v75.m128i_i64[0]);
    if ( v65 != 1 )
      goto LABEL_58;
    goto LABEL_67;
  }
  while ( 1 )
  {
    v26 = 80 * v19;
    v27 = (_QWORD *)(80 * v19 + v81);
    if ( !(unsigned __int8)sub_3BDC60(a2 + 24, v27, 1, 0.0) )
      break;
    v20 = v93;
    v21 = s1;
    if ( v27[3] )
      v21 = (const char *)v27[2];
    v22 = sub_3BD870(v21);
    if ( v22 <= 7 && *(_BYTE *)(a2 + 40LL * (int)v22 + 65) )
    {
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, v22, 0);
      if ( v23 == -1 )
        break;
      v63 = v23;
      tinfo_size = get_tinfo_size(0, v27[8], 0);
      v25 = v26 + v20;
      sub_327B90(v25, v63, tinfo_size, (__int64)(v27 + 8));
      if ( (unsigned int)(HIDWORD(v92) - 208) <= 0x2F )
      {
        *(_DWORD *)(v25 + 56) = 1;
        *(_QWORD *)(v25 + 64) = 0;
      }
      v19 = ++v18;
      if ( v18 >= (unsigned __int64)v82 )
        goto LABEL_48;
    }
    else
    {
      if ( !(unsigned __int8)sub_E1B80((__int64)&v90, *(_QWORD *)(a2 + 16), v18, (__int64)v27) )
        break;
      v19 = ++v18;
      if ( v18 >= (unsigned __int64)v82 )
        goto LABEL_48;
    }
  }
  v28 = -12;
  sub_B4A60(&v90);
LABEL_34:
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87);
  }
  cleanup_argloc(&v85);
  clear_tinfo_t(&v84);
  v29 = v81;
  if ( v81 )
  {
    v30 = v82;
    if ( (_QWORD)v82 )
    {
      v31 = 0;
      do
      {
        v32 = (_QWORD *)(v29 + 80 * v31);
        clear_tinfo_t(v32 + 8);
        v33 = v32[5];
        if ( v33 )
        {
          v32[6] = 0;
          qfree(v33);
        }
        v34 = v32[2];
        if ( v34 )
        {
          v32[3] = 0;
          qfree(v34);
        }
        cleanup_argloc(v32);
        v29 = v81;
        ++v31;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v82 = 0;
    qfree(v29);
  }
  return v28;
}
