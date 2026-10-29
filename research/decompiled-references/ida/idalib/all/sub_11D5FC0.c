void __fastcall sub_11D5FC0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void (__fastcall *v7)(void **, __m128i *, __int64); // rax
  __int64 v8; // rdx
  __m128i si128; // xmm0
  __m128i v10; // xmm1
  void (__fastcall *v11)(void **, void **, __int64); // rcx
  __int64 v12; // rax
  void (__fastcall *v13)(void **, __m128i *, __int64); // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  void (__fastcall *v17)(void **, void **, __int64); // rcx
  __int64 v18; // rax
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // r13
  _QWORD *v28; // rax
  _QWORD *v29; // rbp
  __m128i v30; // xmm0
  _BYTE *v31; // rsi
  signed __int64 v32; // r13
  __int64 v33; // r14
  _BYTE *v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r14
  _QWORD *v39; // rdi
  __m128i *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rcx
  __m128i *v44; // rax
  __m128i *v45; // rdx
  __m128i *v46; // rdi
  void *v47; // rdi
  _BYTE *v48; // rsi
  __int64 v49; // rdx
  bool v50; // zf
  __int64 v51; // r15
  __int64 v52; // rbp
  void *v53; // rdi
  void *v54; // rdi
  void **v55; // rdi
  void **v56; // r14
  void **v57; // r13
  void *v58; // rdi
  void *v59; // rdi
  __int32 v60; // r10d
  __int64 v61; // rbp
  unsigned __int64 v62; // r15
  signed __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  _QWORD *v65; // r13
  __m128i v66; // xmm0
  _QWORD *v67; // r8
  _BYTE *v68; // rsi
  size_t v69; // r14
  char *v70; // r15
  _BYTE *v71; // rax
  void **v72; // r13
  void **v73; // rbp
  __int64 v74; // rdx
  _BYTE *v75; // r14
  void *v76; // r13
  __int64 v77; // rax
  void *v78; // rcx
  void **v79; // r15
  void **v80; // r13
  __m128i *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rsi
  __int64 v84; // rcx
  __m128i *v85; // rax
  __m128i *v86; // rdx
  __m128i *v87; // rdi
  void *v88; // rax
  void *v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rsi
  __int64 v92; // rcx
  __m128i *v93; // rax
  __m128i *v94; // rdx
  __int64 *v95; // rdi
  void *v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rsi
  __int64 v99; // rcx
  __m128i *v100; // rax
  __m128i *v101; // rdx
  __m128i *v102; // rdi
  __int64 v103; // r14
  __m128i *v104; // rax
  __m128i *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rsi
  __int64 v108; // rcx
  __m128i *v109; // rax
  __m128i *v110; // rdx
  __m128i *v111; // rdi
  __int64 v112; // r13
  __m128i *v113; // rdi
  __int32 v114; // r15d
  __int64 v115; // rax
  _BYTE *v116; // rsi
  __int64 v117; // rdx
  unsigned __int64 v118; // r14
  __int64 v119; // rax
  unsigned __int64 v120; // r13
  __int64 v121; // rdi
  unsigned __int64 v122; // r13
  unsigned __int64 v123; // rax
  __int64 m128i_i64; // rdi
  unsigned __int64 v125; // rax
  __int64 v126; // rdi
  unsigned __int64 v127; // r14
  __int64 v129; // [rsp+8h] [rbp-190h]
  __int64 v130; // [rsp+8h] [rbp-190h]
  __int64 v131; // [rsp+8h] [rbp-190h]
  __m128i src; // [rsp+10h] [rbp-188h] BYREF
  void *v133[2]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v134; // [rsp+30h] [rbp-168h] BYREF
  void *v135[2]; // [rsp+40h] [rbp-158h] BYREF
  __m128i v136; // [rsp+50h] [rbp-148h] BYREF
  __int16 v137; // [rsp+60h] [rbp-138h]
  void *v138; // [rsp+70h] [rbp-128h] BYREF
  void *v139; // [rsp+78h] [rbp-120h]
  __m128i v140; // [rsp+80h] [rbp-118h] BYREF
  __int16 v141; // [rsp+90h] [rbp-108h]
  void *v142[2]; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v143; // [rsp+B0h] [rbp-E8h] BYREF
  void *v144[2]; // [rsp+C0h] [rbp-D8h] BYREF
  _BYTE v145[16]; // [rsp+D0h] [rbp-C8h] BYREF
  void *v146[2]; // [rsp+E0h] [rbp-B8h] BYREF
  _BYTE v147[16]; // [rsp+F0h] [rbp-A8h] BYREF
  void *v148[2]; // [rsp+100h] [rbp-98h]
  char *v149; // [rsp+110h] [rbp-88h]
  void *v150[2]; // [rsp+118h] [rbp-80h] BYREF
  _BYTE v151[16]; // [rsp+128h] [rbp-70h] BYREF
  void *v152[2]; // [rsp+138h] [rbp-60h] BYREF
  _BYTE v153[16]; // [rsp+148h] [rbp-50h] BYREF
  char v154; // [rsp+158h] [rbp-40h]

  sub_121FCF0(a1, a2, a3, a4);
  a1->m128i_i64[0] = (__int64)off_2C38280;
  sub_122CEF0(&a1[149], a3, a4);
  if ( a1[149].m128i_i8[0] )
  {
    sub_117F8A0(a1[115].m128i_i64, a1[194].m128i_i64);
    sub_1180210((__int64)&a1[116].m128i_i64[1], (__int64)&a1[195].m128i_i64[1]);
    sub_1180630((__int64)a1[121].m128i_i64, (__int64)a1[200].m128i_i64);
    v7 = (void (__fastcall *)(void **, __m128i *, __int64))a1[212].m128i_i64[0];
    v143.m128i_i64[0] = 0;
    if ( v7 )
    {
      v7(v142, a1 + 211, 2);
      v8 = a1[212].m128i_i64[1];
      v7 = (void (__fastcall *)(void **, __m128i *, __int64))a1[212].m128i_i64[0];
    }
    else
    {
      v8 = v143.m128i_i64[1];
    }
    si128 = _mm_load_si128((const __m128i *)v142);
    v10 = _mm_loadu_si128(a1 + 132);
    v11 = (void (__fastcall *)(void **, void **, __int64))a1[133].m128i_i64[0];
    a1[133].m128i_i64[0] = (__int64)v7;
    v12 = a1[133].m128i_i64[1];
    *(__m128i *)v142 = v10;
    a1[132] = si128;
    v143.m128i_i64[0] = (__int64)v11;
    v143.m128i_i64[1] = v12;
    a1[133].m128i_i64[1] = v8;
    if ( v11 )
      v11(v142, v142, 3);
    v13 = (void (__fastcall *)(void **, __m128i *, __int64))a1[214].m128i_i64[0];
    v14 = v143.m128i_i64[1];
    v143.m128i_i64[0] = 0;
    if ( v13 )
    {
      v13(v142, a1 + 213, 2);
      v14 = a1[214].m128i_i64[1];
      v13 = (void (__fastcall *)(void **, __m128i *, __int64))a1[214].m128i_i64[0];
    }
    v15 = _mm_load_si128((const __m128i *)v142);
    v16 = _mm_loadu_si128(a1 + 134);
    v17 = (void (__fastcall *)(void **, void **, __int64))a1[135].m128i_i64[0];
    a1[135].m128i_i64[0] = (__int64)v13;
    v18 = a1[135].m128i_i64[1];
    *(__m128i *)v142 = v16;
    a1[134] = v15;
    v143.m128i_i64[0] = (__int64)v17;
    v143.m128i_i64[1] = v18;
    a1[135].m128i_i64[1] = v14;
    if ( v17 )
      v17(v142, v142, 3);
    v19 = (_BYTE *)a1[157].m128i_i64[1];
    v20 = a1[158].m128i_i64[0];
    v142[0] = &v143;
    sub_11D4760(v142, v19, (__int64)&v19[v20]);
    v21 = (_BYTE *)a1[159].m128i_i64[1];
    v22 = a1[160].m128i_i64[0];
    v144[0] = v145;
    sub_11D4760(v144, v21, (__int64)&v21[v22]);
    v23 = (_BYTE *)a1[161].m128i_i64[1];
    v24 = a1[162].m128i_i64[0];
    v146[0] = v147;
    sub_11D4760(v146, v23, (__int64)&v23[v24]);
    v25 = a1[164].m128i_i64[0];
    v26 = a1[163].m128i_i64[1];
    *(_OWORD *)v148 = 0;
    v149 = nullptr;
    v27 = v25 - v26;
    if ( (v25 - v26) >> 5 )
    {
      if ( (unsigned __int64)((v25 - v26) >> 5) > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_200;
      v28 = (_QWORD *)operator new(v25 - v26);
      v25 = a1[164].m128i_i64[0];
      v26 = a1[163].m128i_i64[1];
      v29 = v28;
    }
    else
    {
      v29 = nullptr;
    }
    src.m128i_i64[0] = (__int64)v29;
    v30 = _mm_loadl_epi64(&src);
    v149 = (char *)v29 + v27;
    *(__m128i *)v148 = _mm_unpacklo_epi64(v30, v30);
    if ( v26 != v25 )
    {
      *v29 = v29 + 2;
      v31 = *(_BYTE **)v26;
      v32 = *(_QWORD *)(v26 + 8);
      if ( !(v32 + *(_QWORD *)v26) || v31 )
      {
        v33 = v26 + 32;
        while ( (unsigned __int64)v32 <= 0xF )
        {
          v34 = (_BYTE *)*v29;
          if ( v32 == 1 )
          {
            *v34 = *v31;
            v34 = (_BYTE *)*v29;
          }
          else if ( v32 )
          {
            goto LABEL_28;
          }
LABEL_20:
          v29[1] = v32;
          v29 += 4;
          v34[v32] = 0;
          if ( v33 == v25 )
            goto LABEL_42;
          v33 += 32;
          *v29 = v29 + 2;
          v31 = *(_BYTE **)(v33 - 32);
          v32 = *(_QWORD *)(v33 - 24);
          if ( &v31[v32] && !v31 )
            goto LABEL_23;
        }
        if ( v32 < 0 )
LABEL_199:
          std::__throw_length_error("basic_string::_M_create");
        src.m128i_i64[0] = (__int64)v31;
        v34 = (_BYTE *)operator new(v32 + 1);
        v29[2] = v32;
        v31 = (_BYTE *)src.m128i_i64[0];
        *v29 = v34;
LABEL_28:
        memcpy(v34, v31, v32);
        v34 = (_BYTE *)*v29;
        goto LABEL_20;
      }
LABEL_23:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    }
LABEL_42:
    v48 = (_BYTE *)a1[165].m128i_i64[0];
    v49 = a1[165].m128i_i64[1];
    v148[1] = v29;
    v150[0] = v151;
    sub_11D4760(v150, v48, (__int64)&v48[v49]);
    v50 = a1[169].m128i_i8[0] == 0;
    v154 = 0;
    if ( !v50 )
    {
      v116 = (_BYTE *)a1[167].m128i_i64[0];
      v117 = a1[167].m128i_i64[1];
      v152[0] = v153;
      sub_11D4760(v152, v116, (__int64)&v116[v117]);
      v154 = 1;
    }
    v51 = a1[136].m128i_i64[0];
    v52 = v51 + 192LL * a1[136].m128i_u32[2];
    while ( v51 != v52 )
    {
      while ( 1 )
      {
        v52 -= 192;
        if ( *(_BYTE *)(v52 + 184) )
        {
          v53 = *(void **)(v52 + 152);
          if ( v53 != (void *)(v52 + 168) )
            operator delete(v53);
        }
        v54 = *(void **)(v52 + 120);
        if ( v54 != (void *)(v52 + 136) )
          operator delete(v54);
        v55 = *(void ***)(v52 + 96);
        v56 = *(void ***)(v52 + 104);
        v57 = v55;
        if ( v56 != v55 )
        {
          do
          {
            while ( *v57 != v57 + 2 )
            {
              operator delete(*v57);
              v57 += 4;
              if ( v56 == v57 )
                goto LABEL_54;
            }
            v57 += 4;
          }
          while ( v56 != v57 );
LABEL_54:
          v55 = *(void ***)(v52 + 96);
        }
        if ( v55 )
          operator delete(v55);
        v58 = *(void **)(v52 + 64);
        if ( v58 != (void *)(v52 + 80) )
          operator delete(v58);
        v59 = *(void **)(v52 + 32);
        if ( v59 != (void *)(v52 + 48) )
          operator delete(v59);
        if ( *(_QWORD *)v52 == v52 + 16 )
          break;
        operator delete(*(void **)v52);
        if ( v51 == v52 )
          goto LABEL_63;
      }
    }
LABEL_63:
    v60 = a1[136].m128i_i32[3];
    a1[136].m128i_i32[2] = 0;
    if ( v60 )
    {
      v61 = a1[136].m128i_i64[0];
    }
    else
    {
      v112 = sub_2237400(&a1[136], &a1[137], 1, 192, &v138);
      sub_11821E0(a1[136].m128i_i64, v112);
      v113 = (__m128i *)a1[136].m128i_i64[0];
      v114 = (int)v138;
      if ( &a1[137] != v113 )
        free(v113);
      v115 = a1[136].m128i_u32[2];
      a1[136].m128i_i64[0] = v112;
      a1[136].m128i_i32[3] = v114;
      v61 = v112 + 192 * v115;
    }
    *(_QWORD *)v61 = v61 + 16;
    sub_11D4760((_QWORD *)v61, (_BYTE *)v142[0], (__int64)v142[0] + (unsigned __int64)v142[1]);
    *(_QWORD *)(v61 + 32) = v61 + 48;
    sub_11D4760((_QWORD *)(v61 + 32), (_BYTE *)v144[0], (__int64)v144[0] + (unsigned __int64)v144[1]);
    *(_QWORD *)(v61 + 64) = v61 + 80;
    sub_11D4760((_QWORD *)(v61 + 64), (_BYTE *)v146[0], (__int64)v146[0] + (unsigned __int64)v146[1]);
    v62 = (char *)v148[1] - (char *)v148[0];
    v63 = (char *)v148[1] - (char *)v148[0];
    *(_OWORD *)(v61 + 96) = 0;
    v64 = v63 >> 5;
    *(_QWORD *)(v61 + 112) = 0;
    if ( !v64 )
    {
      v65 = nullptr;
LABEL_68:
      src.m128i_i64[0] = (__int64)v65;
      v66 = _mm_loadl_epi64(&src);
      *(_QWORD *)(v61 + 112) = (char *)v65 + v62;
      *(__m128i *)(v61 + 96) = _mm_unpacklo_epi64(v66, v66);
      v67 = v148[0];
      src.m128i_i64[0] = (__int64)v148[1];
      if ( v148[1] != v148[0] )
      {
        *v65 = v65 + 2;
        v68 = (_BYTE *)*v67;
        v69 = v67[1];
        if ( v69 + *v67 && !v68 )
          goto LABEL_23;
        v70 = (char *)(v67 + 4);
LABEL_72:
        if ( v69 > 0xF )
          goto LABEL_79;
        do
        {
          v71 = (_BYTE *)*v65;
          if ( v69 == 1 )
          {
            *v71 = *v68;
            v71 = (_BYTE *)*v65;
            goto LABEL_75;
          }
          if ( v69 )
            goto LABEL_81;
LABEL_75:
          v65[1] = v69;
          v65 += 4;
          v71[v69] = 0;
          if ( (char *)src.m128i_i64[0] == v70 )
            goto LABEL_82;
          v70 += 32;
          *v65 = v65 + 2;
          v68 = *((_BYTE **)v70 - 4);
          v69 = *((_QWORD *)v70 - 3);
          if ( !&v68[v69] )
            goto LABEL_72;
          if ( !v68 )
            goto LABEL_23;
        }
        while ( v69 <= 0xF );
LABEL_79:
        src.m128i_i64[1] = (__int64)v68;
        if ( (v69 & 0x8000000000000000LL) != 0LL )
          goto LABEL_199;
        v71 = (_BYTE *)operator new(v69 + 1);
        v65[2] = v69;
        v68 = (_BYTE *)src.m128i_i64[1];
        *v65 = v71;
LABEL_81:
        memcpy(v71, v68, v69);
        v71 = (_BYTE *)*v65;
        goto LABEL_75;
      }
LABEL_82:
      *(_QWORD *)(v61 + 104) = v65;
      *(_QWORD *)(v61 + 120) = v61 + 136;
      sub_11D4760((_QWORD *)(v61 + 120), (_BYTE *)v150[0], (__int64)v150[0] + (unsigned __int64)v150[1]);
      *(_BYTE *)(v61 + 184) = 0;
      if ( v154 )
      {
        *(_QWORD *)(v61 + 152) = v61 + 168;
        sub_11D4760((_QWORD *)(v61 + 152), (_BYTE *)v152[0], (__int64)v152[0] + (unsigned __int64)v152[1]);
        *(_BYTE *)(v61 + 184) = 1;
        ++a1[136].m128i_i32[2];
        if ( v154 && v152[0] != v153 )
          operator delete(v152[0]);
      }
      else
      {
        ++a1[136].m128i_i32[2];
      }
      if ( v150[0] != v151 )
        operator delete(v150[0]);
      v72 = (void **)v148[1];
      v73 = (void **)v148[0];
      if ( v148[1] != v148[0] )
      {
        do
        {
          while ( *v73 != v73 + 2 )
          {
            operator delete(*v73);
            v73 += 4;
            if ( v73 == v72 )
              goto LABEL_89;
          }
          v73 += 4;
        }
        while ( v73 != v72 );
LABEL_89:
        v73 = (void **)v148[0];
      }
      if ( v73 )
        operator delete(v73);
      if ( v146[0] != v147 )
        operator delete(v146[0]);
      if ( v144[0] != v145 )
        operator delete(v144[0]);
      if ( v142[0] != &v143 )
        operator delete(v142[0]);
      v74 = a1[136].m128i_i64[0];
      v75 = (_BYTE *)a1[153].m128i_i64[1];
      src.m128i_i64[1] = (__int64)a1[39].m128i_i64;
      v76 = (void *)a1[154].m128i_i64[0];
      v77 = v74 + 192LL * a1[136].m128i_u32[2] - 192;
      if ( a1[135].m128i_i64[0] )
      {
        ((void (__fastcall *)(void **, __int64 *, __int64))a1[135].m128i_i64[1])(
          &v138,
          a1[134].m128i_i64,
          v74 + 192LL * a1[136].m128i_u32[2] - 192);
        v78 = v138;
        v79 = (void **)v139;
        if ( v138 != v139 )
        {
          do
          {
            src.m128i_i64[0] = (__int64)v78;
            v143.m128i_i64[0] = (__int64)v78;
            v142[0] = v75;
            v142[1] = v76;
            LOWORD(v144[0]) = 1029;
            sub_11C52D0(a2, (__int64)v142, src.m128i_i64[1]);
            v78 = (void *)(src.m128i_i64[0] + 32);
          }
          while ( v79 != (void **)(src.m128i_i64[0] + 32) );
          v80 = (void **)v139;
          v79 = (void **)v138;
          if ( v139 != v138 )
          {
            do
            {
              while ( *v79 != v79 + 2 )
              {
                operator delete(*v79);
                v79 += 4;
                if ( v79 == v80 )
                  goto LABEL_104;
              }
              v79 += 4;
            }
            while ( v80 != v79 );
LABEL_104:
            v79 = (void **)v138;
          }
        }
        if ( v79 )
          operator delete(v79);
        v75 = (_BYTE *)a1[153].m128i_i64[1];
        v76 = (void *)a1[154].m128i_i64[0];
        v77 = a1[136].m128i_i64[0] + 192LL * a1[136].m128i_u32[2] - 192;
      }
      if ( v75 )
      {
        v129 = v77;
        v142[0] = &v143;
        sub_11D4820(v142, v75, (__int64)v76 + (_QWORD)v75);
        v77 = v129;
      }
      else
      {
        v143.m128i_i8[0] = 0;
        v142[0] = &v143;
        v142[1] = nullptr;
      }
      v81 = (__m128i *)sub_9EE560(v142, *(_BYTE **)(v77 + 32), *(_QWORD *)(v77 + 40));
      v138 = &v140;
      if ( (__m128i *)v81->m128i_i64[0] == &v81[1] )
      {
        v140 = _mm_loadu_si128(v81 + 1);
      }
      else
      {
        v138 = (void *)v81->m128i_i64[0];
        v140.m128i_i64[0] = v81[1].m128i_i64[0];
      }
      v139 = (void *)v81->m128i_i64[1];
      v81->m128i_i64[0] = (__int64)v81[1].m128i_i64;
      v81[1].m128i_i8[0] = 0;
      v82 = a1[39].m128i_u32[2];
      v81->m128i_i64[1] = 0;
      v83 = v82 + 1;
      if ( v82 + 1 > (unsigned __int64)a1[39].m128i_u32[3] )
      {
        v122 = a1[39].m128i_u64[0];
        if ( v122 <= (unsigned __int64)&v138 && (unsigned __int64)&v138 < v122 + 32 * v82 )
        {
          sub_A8C1F0(src.m128i_i64[1], v83);
          v84 = a1[39].m128i_i64[0];
          v82 = a1[39].m128i_u32[2];
          v85 = (__m128i *)((char *)&v138 + v84 - v122);
        }
        else
        {
          sub_A8C1F0(src.m128i_i64[1], v83);
          v84 = a1[39].m128i_i64[0];
          v82 = a1[39].m128i_u32[2];
          v85 = (__m128i *)&v138;
        }
      }
      else
      {
        v84 = a1[39].m128i_i64[0];
        v85 = (__m128i *)&v138;
      }
      v86 = (__m128i *)(v84 + 32 * v82);
      v86->m128i_i64[0] = (__int64)v86[1].m128i_i64;
      if ( (__m128i *)v85->m128i_i64[0] == &v85[1] )
      {
        v86[1] = _mm_loadu_si128(v85 + 1);
      }
      else
      {
        v86->m128i_i64[0] = v85->m128i_i64[0];
        v86[1].m128i_i64[0] = v85[1].m128i_i64[0];
      }
      v86->m128i_i64[1] = v85->m128i_i64[1];
      v85->m128i_i64[0] = (__int64)v85[1].m128i_i64;
      v85->m128i_i64[1] = 0;
      v85[1].m128i_i8[0] = 0;
      v87 = (__m128i *)v138;
      ++a1[39].m128i_i32[2];
      if ( v87 != &v140 )
        operator delete(v87);
      if ( v142[0] != &v143 )
        operator delete(v142[0]);
      v88 = (void *)a1[156].m128i_i64[0];
      v89 = (void *)a1[155].m128i_i64[1];
      LOWORD(v144[0]) = 773;
      v142[1] = v88;
      v143.m128i_i64[0] = (__int64)"/../";
      v140.m128i_i64[0] = (__int64)&a1[149].m128i_i64[1];
      v141 = 1026;
      v142[0] = v89;
      v136.m128i_i64[0] = (__int64)"/bin";
      v138 = v142;
      v135[0] = &v138;
      v137 = 770;
      sub_2253560(v133, v135);
      v90 = a1[72].m128i_u32[2];
      v91 = v90 + 1;
      if ( v90 + 1 > (unsigned __int64)a1[72].m128i_u32[3] )
      {
        v123 = a1[72].m128i_u64[0];
        m128i_i64 = (__int64)a1[72].m128i_i64;
        if ( v123 > (unsigned __int64)v133 || (v130 = a1[72].m128i_i64[0], (unsigned __int64)v133 >= v123 + 32 * v90) )
        {
          sub_A8C1F0(m128i_i64, v91);
          v92 = a1[72].m128i_i64[0];
          v90 = a1[72].m128i_u32[2];
          v93 = (__m128i *)v133;
        }
        else
        {
          sub_A8C1F0(m128i_i64, v91);
          v92 = a1[72].m128i_i64[0];
          v90 = a1[72].m128i_u32[2];
          v93 = (__m128i *)((char *)v133 + v92 - v130);
        }
      }
      else
      {
        v92 = a1[72].m128i_i64[0];
        v93 = (__m128i *)v133;
      }
      v94 = (__m128i *)(v92 + 32 * v90);
      v94->m128i_i64[0] = (__int64)v94[1].m128i_i64;
      if ( (__m128i *)v93->m128i_i64[0] == &v93[1] )
      {
        v94[1] = _mm_loadu_si128(v93 + 1);
      }
      else
      {
        v94->m128i_i64[0] = v93->m128i_i64[0];
        v94[1].m128i_i64[0] = v93[1].m128i_i64[0];
      }
      v94->m128i_i64[1] = v93->m128i_i64[1];
      v93->m128i_i64[0] = (__int64)v93[1].m128i_i64;
      v95 = (__int64 *)v133[0];
      v93->m128i_i64[1] = 0;
      v93[1].m128i_i8[0] = 0;
      ++a1[72].m128i_i32[2];
      if ( v95 != &v134 )
        operator delete(v95);
      v96 = (void *)a1[155].m128i_i64[1];
      v142[1] = (void *)a1[156].m128i_i64[0];
      v142[0] = v96;
      v143.m128i_i64[0] = (__int64)"/../bin";
      LOWORD(v144[0]) = 773;
      sub_2253560(&v138, v142);
      v97 = a1[72].m128i_u32[2];
      v98 = v97 + 1;
      if ( v97 + 1 > (unsigned __int64)a1[72].m128i_u32[3] )
      {
        v125 = a1[72].m128i_u64[0];
        v126 = (__int64)a1[72].m128i_i64;
        if ( v125 > (unsigned __int64)&v138 || (v131 = a1[72].m128i_i64[0], (unsigned __int64)&v138 >= v125 + 32 * v97) )
        {
          sub_A8C1F0(v126, v98);
          v99 = a1[72].m128i_i64[0];
          v97 = a1[72].m128i_u32[2];
          v100 = (__m128i *)&v138;
        }
        else
        {
          sub_A8C1F0(v126, v98);
          v99 = a1[72].m128i_i64[0];
          v97 = a1[72].m128i_u32[2];
          v100 = (__m128i *)((char *)&v138 + v99 - v131);
        }
      }
      else
      {
        v99 = a1[72].m128i_i64[0];
        v100 = (__m128i *)&v138;
      }
      v101 = (__m128i *)(v99 + 32 * v97);
      v101->m128i_i64[0] = (__int64)v101[1].m128i_i64;
      if ( (__m128i *)v100->m128i_i64[0] == &v100[1] )
      {
        v101[1] = _mm_loadu_si128(v100 + 1);
      }
      else
      {
        v101->m128i_i64[0] = v100->m128i_i64[0];
        v101[1].m128i_i64[0] = v100[1].m128i_i64[0];
      }
      v101->m128i_i64[1] = v100->m128i_i64[1];
      v100->m128i_i64[0] = (__int64)v100[1].m128i_i64;
      v100->m128i_i64[1] = 0;
      v100[1].m128i_i8[0] = 0;
      v102 = (__m128i *)v138;
      ++a1[72].m128i_i32[2];
      if ( v102 != &v140 )
        operator delete(v102);
      v103 = a1[136].m128i_i64[0] + 192LL * a1[136].m128i_u32[2] - 192;
      sub_11D48E0((__int64)&v138, (__int64)a1);
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - (_QWORD)v139) > 3 )
      {
        v104 = (__m128i *)sub_9EE560(&v138, "/lib", 4u);
        v142[0] = &v143;
        if ( (__m128i *)v104->m128i_i64[0] == &v104[1] )
        {
          v143 = _mm_loadu_si128(v104 + 1);
        }
        else
        {
          v142[0] = (void *)v104->m128i_i64[0];
          v143.m128i_i64[0] = v104[1].m128i_i64[0];
        }
        v142[1] = (void *)v104->m128i_i64[1];
        v104->m128i_i64[0] = (__int64)v104[1].m128i_i64;
        v104->m128i_i64[1] = 0;
        v104[1].m128i_i8[0] = 0;
        v105 = (__m128i *)sub_9EE560(v142, *(_BYTE **)(v103 + 32), *(_QWORD *)(v103 + 40));
        v135[0] = &v136;
        if ( (__m128i *)v105->m128i_i64[0] == &v105[1] )
        {
          v136 = _mm_loadu_si128(v105 + 1);
        }
        else
        {
          v135[0] = (void *)v105->m128i_i64[0];
          v136.m128i_i64[0] = v105[1].m128i_i64[0];
        }
        v135[1] = (void *)v105->m128i_i64[1];
        v105->m128i_i64[0] = (__int64)v105[1].m128i_i64;
        v105[1].m128i_i8[0] = 0;
        v106 = a1[39].m128i_u32[2];
        v105->m128i_i64[1] = 0;
        v107 = v106 + 1;
        if ( v106 + 1 > (unsigned __int64)a1[39].m128i_u32[3] )
        {
          v127 = a1[39].m128i_u64[0];
          if ( v127 > (unsigned __int64)v135 || (unsigned __int64)v135 >= v127 + 32 * v106 )
          {
            sub_A8C1F0(src.m128i_i64[1], v107);
            v108 = a1[39].m128i_i64[0];
            v106 = a1[39].m128i_u32[2];
            v109 = (__m128i *)v135;
          }
          else
          {
            sub_A8C1F0(src.m128i_i64[1], v107);
            v108 = a1[39].m128i_i64[0];
            v106 = a1[39].m128i_u32[2];
            v109 = (__m128i *)((char *)v135 + v108 - v127);
          }
        }
        else
        {
          v108 = a1[39].m128i_i64[0];
          v109 = (__m128i *)v135;
        }
        v110 = (__m128i *)(v108 + 32 * v106);
        v110->m128i_i64[0] = (__int64)v110[1].m128i_i64;
        if ( (__m128i *)v109->m128i_i64[0] == &v109[1] )
        {
          v110[1] = _mm_loadu_si128(v109 + 1);
        }
        else
        {
          v110->m128i_i64[0] = v109->m128i_i64[0];
          v110[1].m128i_i64[0] = v109[1].m128i_i64[0];
        }
        v110->m128i_i64[1] = v109->m128i_i64[1];
        v109->m128i_i64[0] = (__int64)v109[1].m128i_i64;
        v109->m128i_i64[1] = 0;
        v109[1].m128i_i8[0] = 0;
        v111 = (__m128i *)v135[0];
        ++a1[39].m128i_i32[2];
        if ( v111 != &v136 )
          operator delete(v111);
        if ( v142[0] != &v143 )
          operator delete(v142[0]);
        v47 = v138;
        if ( v138 == &v140 )
          return;
LABEL_40:
        operator delete(v47);
        return;
      }
LABEL_201:
      std::__throw_length_error("basic_string::append");
    }
    if ( v64 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v65 = (_QWORD *)operator new(v62);
      goto LABEL_68;
    }
LABEL_200:
    std::__throw_bad_alloc();
  }
  v35 = a1[72].m128i_u32[2];
  v36 = a1[72].m128i_u64[0];
  v37 = v35 + 1;
  v38 = a2 + 104;
  v39 = (_QWORD *)(v36 + 32 * v35);
  if ( v37 > a1[72].m128i_u32[3] )
  {
    if ( v36 > v38 || (unsigned __int64)v39 <= v38 )
    {
      sub_A8C1F0((__int64)a1[72].m128i_i64, v37);
      v39 = (_QWORD *)(a1[72].m128i_i64[0] + 32LL * a1[72].m128i_u32[2]);
    }
    else
    {
      v118 = v38 - v36;
      sub_A8C1F0((__int64)a1[72].m128i_i64, v37);
      v119 = a1[72].m128i_i64[0];
      v38 = v119 + v118;
      v39 = (_QWORD *)(v119 + 32LL * a1[72].m128i_u32[2]);
    }
  }
  *v39 = v39 + 2;
  sub_11D4760(v39, *(_BYTE **)v38, *(_QWORD *)v38 + *(_QWORD *)(v38 + 8));
  ++a1[72].m128i_i32[2];
  sub_11D48E0((__int64)v142, (__int64)a1);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v142[1] <= 3 )
    goto LABEL_201;
  v40 = (__m128i *)sub_9EE560(v142, "/lib", 4u);
  v138 = &v140;
  if ( (__m128i *)v40->m128i_i64[0] == &v40[1] )
  {
    v140 = _mm_loadu_si128(v40 + 1);
  }
  else
  {
    v138 = (void *)v40->m128i_i64[0];
    v140.m128i_i64[0] = v40[1].m128i_i64[0];
  }
  v139 = (void *)v40->m128i_i64[1];
  v40->m128i_i64[0] = (__int64)v40[1].m128i_i64;
  v40[1].m128i_i8[0] = 0;
  v41 = a1[39].m128i_u32[2];
  v40->m128i_i64[1] = 0;
  v42 = v41 + 1;
  if ( v41 + 1 > (unsigned __int64)a1[39].m128i_u32[3] )
  {
    v120 = a1[39].m128i_u64[0];
    v121 = (__int64)a1[39].m128i_i64;
    if ( v120 > (unsigned __int64)&v138 || (unsigned __int64)&v138 >= v120 + 32 * v41 )
    {
      sub_A8C1F0(v121, v42);
      v43 = a1[39].m128i_i64[0];
      v41 = a1[39].m128i_u32[2];
      v44 = (__m128i *)&v138;
    }
    else
    {
      sub_A8C1F0(v121, v42);
      v43 = a1[39].m128i_i64[0];
      v41 = a1[39].m128i_u32[2];
      v44 = (__m128i *)((char *)&v138 + v43 - v120);
    }
  }
  else
  {
    v43 = a1[39].m128i_i64[0];
    v44 = (__m128i *)&v138;
  }
  v45 = (__m128i *)(v43 + 32 * v41);
  v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
  if ( (__m128i *)v44->m128i_i64[0] == &v44[1] )
  {
    v45[1] = _mm_loadu_si128(v44 + 1);
  }
  else
  {
    v45->m128i_i64[0] = v44->m128i_i64[0];
    v45[1].m128i_i64[0] = v44[1].m128i_i64[0];
  }
  v45->m128i_i64[1] = v44->m128i_i64[1];
  v44->m128i_i64[0] = (__int64)v44[1].m128i_i64;
  v44->m128i_i64[1] = 0;
  v44[1].m128i_i8[0] = 0;
  v46 = (__m128i *)v138;
  ++a1[39].m128i_i32[2];
  if ( v46 != &v140 )
    operator delete(v46);
  v47 = v142[0];
  if ( v142[0] != &v143 )
    goto LABEL_40;
}
