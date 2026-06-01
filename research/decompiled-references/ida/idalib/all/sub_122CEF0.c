void __fastcall sub_122CEF0(__int64 a1, __int64 a2, void *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  int v5; // r11d
  __int64 v6; // rax
  const char **v7; // rax
  char *v8; // r13
  __int64 v9; // rax
  const char **v10; // rax
  size_t v11; // rdx
  const char *v12; // rbx
  __int64 v13; // rax
  const char **v14; // rax
  char *v15; // rbx
  unsigned __int64 v16; // rbp
  char *v17; // rdx
  size_t v18; // rax
  __int64 v19; // rbx
  unsigned __int8 (__fastcall *v20)(__int64, __m128i *); // rax
  void **v21; // rbp
  void *v22; // rdx
  size_t v23; // rax
  unsigned __int8 (__fastcall *v24)(__int64, __m128i *); // rax
  __int64 (__fastcall *v25)(__int64, __m128i *); // r13
  unsigned __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64, __m128i *); // r14
  size_t v28; // rax
  char v29; // r15
  char v30; // r14
  __int64 v31; // r13
  char *v32; // r13
  char *v33; // rbx
  _BYTE *v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  void *v41; // r12
  signed __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  char *v44; // rbp
  __int64 v45; // rdx
  __m128i *v46; // rax
  unsigned __int8 (__fastcall *v47)(__int64, __m128i *); // rax
  _BYTE *v48; // rsi
  __int64 (__fastcall *v49)(__int64, __m128i *); // r12
  unsigned __int64 v50; // rax
  __int64 (__fastcall *v51)(__int64, __m128i *); // r13
  unsigned __int64 v52; // rax
  char v53; // r14
  __int64 v54; // r12
  char *v55; // r12
  char *v56; // rbx
  _BYTE *v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbp
  void **v60; // rbx
  char *v61; // r13
  size_t v62; // rdx
  size_t v63; // r14
  _BYTE *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  size_t v67; // r12
  __m128i *v68; // rax
  size_t v69; // rbp
  unsigned __int64 v70; // rdx
  _BYTE *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  size_t v76; // r13
  __m128i *v77; // rax
  size_t v78; // r14
  unsigned __int64 v79; // rdx
  size_t v80; // rax
  __int64 v81; // rbp
  void *v82; // rdi
  char *v83; // rbx
  size_t v84; // rax
  char *v85; // rbp
  __int64 v86; // rax
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rbp
  _BYTE *v89; // r12
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r14
  __int64 v95; // r15
  __int64 v98; // [rsp+18h] [rbp-760h]
  void **v99; // [rsp+20h] [rbp-758h]
  char *v100; // [rsp+28h] [rbp-750h]
  char v101; // [rsp+30h] [rbp-748h]
  __int64 v102; // [rsp+38h] [rbp-740h]
  char v103; // [rsp+58h] [rbp-720h]
  __int64 v104; // [rsp+58h] [rbp-720h]
  __int64 v105; // [rsp+70h] [rbp-708h]
  void *v106; // [rsp+C0h] [rbp-6B8h] BYREF
  __int64 v107; // [rsp+C8h] [rbp-6B0h]
  _BYTE v108[16]; // [rsp+D0h] [rbp-6A8h] BYREF
  void *v109; // [rsp+E0h] [rbp-698h] BYREF
  __int64 v110; // [rsp+E8h] [rbp-690h]
  _BYTE v111[16]; // [rsp+F0h] [rbp-688h] BYREF
  void *v112; // [rsp+100h] [rbp-678h] BYREF
  __int64 v113; // [rsp+108h] [rbp-670h]
  __int64 v114; // [rsp+110h] [rbp-668h] BYREF
  void *v115[2]; // [rsp+120h] [rbp-658h] BYREF
  _BYTE v116[16]; // [rsp+130h] [rbp-648h] BYREF
  void *v117; // [rsp+140h] [rbp-638h] BYREF
  size_t v118; // [rsp+148h] [rbp-630h]
  __m128i v119; // [rsp+150h] [rbp-628h] BYREF
  void *v120; // [rsp+160h] [rbp-618h] BYREF
  size_t v121; // [rsp+168h] [rbp-610h]
  __m128i v122; // [rsp+170h] [rbp-608h] BYREF
  __int16 v123; // [rsp+180h] [rbp-5F8h]
  void *v124; // [rsp+190h] [rbp-5E8h] BYREF
  size_t v125; // [rsp+198h] [rbp-5E0h]
  __m128i v126; // [rsp+1A0h] [rbp-5D8h] BYREF
  __int16 v127; // [rsp+1B0h] [rbp-5C8h]
  void *v128[2]; // [rsp+1C0h] [rbp-5B8h] BYREF
  _BYTE v129[16]; // [rsp+1D0h] [rbp-5A8h] BYREF
  __int16 v130; // [rsp+1E0h] [rbp-598h]
  __m128i v131; // [rsp+1F0h] [rbp-588h] BYREF
  _BYTE v132[16]; // [rsp+200h] [rbp-578h] BYREF
  __int16 v133; // [rsp+210h] [rbp-568h]
  void *v134[2]; // [rsp+220h] [rbp-558h] BYREF
  _DWORD v135[12]; // [rsp+230h] [rbp-548h] BYREF
  void *v136; // [rsp+260h] [rbp-518h] BYREF
  __int64 v137; // [rsp+268h] [rbp-510h]
  _BYTE v138[64]; // [rsp+270h] [rbp-508h] BYREF
  void *v139; // [rsp+2B0h] [rbp-4C8h] BYREF
  __int64 v140; // [rsp+2B8h] [rbp-4C0h]
  _BYTE v141[64]; // [rsp+2C0h] [rbp-4B8h] BYREF
  void *src; // [rsp+300h] [rbp-478h] BYREF
  __int64 v143; // [rsp+308h] [rbp-470h]
  _BYTE v144[256]; // [rsp+310h] [rbp-468h] BYREF
  void *v145; // [rsp+410h] [rbp-368h] BYREF
  __int64 v146; // [rsp+418h] [rbp-360h]
  _BYTE v147[256]; // [rsp+420h] [rbp-358h] BYREF
  __m128i v148; // [rsp+520h] [rbp-258h] BYREF
  _BYTE v149[16]; // [rsp+530h] [rbp-248h] BYREF
  __int16 v150; // [rsp+540h] [rbp-238h]
  __m128i ptr; // [rsp+630h] [rbp-148h] BYREF
  _BYTE v152[16]; // [rsp+640h] [rbp-138h] BYREF
  __int64 v153; // [rsp+650h] [rbp-128h]
  int v154; // [rsp+658h] [rbp-120h]
  __int64 v155; // [rsp+660h] [rbp-118h] BYREF
  __int64 v156; // [rsp+680h] [rbp-F8h] BYREF
  __int64 v157; // [rsp+6A0h] [rbp-D8h] BYREF

  if ( (unsigned __int8)sub_22B7EC0(a2) )
    sub_22BB610(v134, a2);
  else
    sub_22BB2E0(v134, a2);
  v136 = v138;
  v3 = *(_QWORD *)a2;
  v139 = v141;
  v137 = 0x400000000LL;
  v140 = 0x400000000LL;
  v145 = v147;
  v4 = *(_QWORD *)(a2 + 8);
  src = v144;
  v143 = 0x1000000000LL;
  v146 = 0x1000000000LL;
  sub_111E070((__int64)&src, v3, v4);
  v5 = *(_DWORD *)(a2 + 40);
  v107 = 0;
  v106 = v108;
  v108[0] = 0;
  v109 = v111;
  v110 = 0;
  v111[0] = 0;
  if ( v5 )
    goto LABEL_4;
  v61 = (char *)sub_22B77D0(a2);
  v63 = v62;
  if ( *(_DWORD *)(a2 + 48) == 12 )
  {
    v61 = "linux-gnu";
    v63 = j__strlen("linux-gnu");
  }
  v131.m128i_i64[0] = (__int64)v61;
  v133 = 261;
  v131.m128i_i64[1] = v63;
  v64 = (_BYTE *)sub_22B7480(a2);
  if ( v64 )
  {
    v117 = &v119;
    sub_1213C40(&v117, v64, (__int64)&v64[v65]);
    v67 = v118;
    if ( v118 == 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_164;
    v68 = (__m128i *)v117;
    v69 = v118 + 1;
    if ( v117 == &v119 )
      v70 = 15;
    else
      v70 = v119.m128i_i64[0];
    if ( v69 > v70 )
    {
      sub_998B30((__int64)&v117, v118, 0, nullptr, 1u);
      v68 = (__m128i *)v117;
    }
  }
  else
  {
    v68 = &v119;
    v119.m128i_i8[0] = 0;
    v69 = 1;
    v67 = 0;
    v117 = &v119;
  }
  v68->m128i_i8[v67] = 45;
  v118 = v69;
  *((_BYTE *)v117 + v69) = 0;
  v124 = &v126;
  if ( v117 == &v119 )
  {
    v126 = _mm_load_si128(&v119);
  }
  else
  {
    v124 = v117;
    v126.m128i_i64[0] = v119.m128i_i64[0];
  }
  v125 = v118;
  v117 = &v119;
  v150 = 260;
  v118 = 0;
  v119.m128i_i8[0] = 0;
  v148.m128i_i64[0] = (__int64)&v124;
  sub_A41580(&ptr, &v148, &v131, (__int64)&v148, v66, 260);
  sub_2253560(v128, &ptr);
  sub_A0AAD0((__int64)&v106, v128);
  if ( v128[0] != v129 )
    operator delete(v128[0]);
  if ( v124 != &v126 )
    operator delete(v124);
  if ( v117 != &v119 )
    operator delete(v117);
  sub_111E070((__int64)&src, (__int64)v106, v107);
  if ( v135[4] )
  {
    v148.m128i_i64[0] = (__int64)v61;
    v150 = 261;
    v148.m128i_i64[1] = v63;
    v71 = (_BYTE *)sub_22B7480(v134);
    if ( !v71 )
    {
      v77 = &v122;
      v122.m128i_i8[0] = 0;
      v78 = 1;
      v76 = 0;
      v120 = &v122;
LABEL_127:
      v77->m128i_i8[v76] = 45;
      v121 = v78;
      *((_BYTE *)v120 + v78) = 0;
      v124 = &v126;
      if ( v120 == &v122 )
      {
        v126 = _mm_load_si128(&v122);
      }
      else
      {
        v124 = v120;
        v126.m128i_i64[0] = v122.m128i_i64[0];
      }
      v80 = v121;
      v121 = 0;
      v133 = 260;
      v125 = v80;
      v120 = &v122;
      v122.m128i_i8[0] = 0;
      v131.m128i_i64[0] = (__int64)&v124;
      sub_A41580(&ptr, &v131, &v148, v73, v74, v75);
      sub_2253560(v128, &ptr);
      sub_A0AAD0((__int64)&v109, v128);
      if ( v128[0] != v129 )
        operator delete(v128[0]);
      if ( v124 != &v126 )
        operator delete(v124);
      if ( v120 != &v122 )
        operator delete(v120);
      sub_111E070((__int64)&v145, (__int64)v109, v110);
      goto LABEL_4;
    }
    v120 = &v122;
    sub_1213C40(&v120, v71, (__int64)&v71[v72]);
    v76 = v121;
    if ( v121 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v77 = (__m128i *)v120;
      v78 = v121 + 1;
      if ( v120 == &v122 )
        v79 = 15;
      else
        v79 = v122.m128i_i64[0];
      if ( v78 > v79 )
      {
        sub_998B30((__int64)&v120, v121, 0, nullptr, 1u);
        v77 = (__m128i *)v120;
      }
      goto LABEL_127;
    }
LABEL_164:
    std::__throw_length_error("basic_string::_M_replace_aux");
  }
LABEL_4:
  sub_1216EB0(a2, (__int64)v134, (__int64)&v136, (__int64)&src, (__int64)&v139, (__int64)&v145);
  v6 = sub_10DCD30((__int64)a3, 0x7C6u);
  if ( !v6 || (v7 = *(const char ***)(v6 + 48), v8 = (char *)*v7, !**v7) )
  {
    v9 = sub_10DCD30((__int64)a3, 0x7C8u);
    if ( v9 )
    {
      v10 = *(const char ***)(v9 + 48);
      v11 = 0;
      v12 = *v10;
      if ( *v10 )
        v11 = j__strlen(*v10);
      LODWORD(v143) = 0;
      sub_111E070((__int64)&src, (__int64)v12, v11);
    }
    v148.m128i_i64[0] = (__int64)v149;
    v148.m128i_i64[1] = 0x800000000LL;
    v13 = sub_10DCD30((__int64)a3, 0x7C7u);
    if ( !v13 )
      goto LABEL_43;
    v14 = *(const char ***)(v13 + 48);
    v15 = (char *)*v14;
    if ( *v14 )
    {
      v16 = j__strlen(*v14);
      if ( j__strlen(&byte_22F0C30) == v16 && (!v16 || !memcmp(v15, &byte_22F0C30, v16)) )
        goto LABEL_43;
      v17 = &v15[v16 - 1];
      if ( *v17 == 47 )
      {
        if ( v16 - 1 > v16 )
          v17 = v15;
        goto LABEL_15;
      }
    }
    else
    {
      if ( !j__strlen(&byte_22F0C30) )
      {
LABEL_43:
        v36 = *(_QWORD *)(a1 + 64);
        if ( *(_QWORD *)(v36 + 496) )
        {
          sub_12201A0((__int64)&v148, v36 + 488);
          sub_122C340(
            a1,
            a2,
            (__int64)&v148,
            *(_BYTE **)(*(_QWORD *)(a1 + 64) + 488LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 64) + 496LL));
          v36 = *(_QWORD *)(a1 + 64);
        }
        sub_F7DA00((size_t *)&ptr, v36 + 104, "/..");
        sub_CEFAC0((__int64)&v148, &ptr);
        if ( (_BYTE *)ptr.m128i_i64[0] != v152 )
          operator delete((void *)ptr.m128i_i64[0]);
        v37 = *(_QWORD *)(a1 + 64);
        if ( !*(_QWORD *)(v37 + 496) )
          sub_122C340(a1, a2, (__int64)&v148, *(_BYTE **)(v37 + 488), 0);
        ptr.m128i_i64[1] = 0x1000000000LL;
        v38 = *(_QWORD *)(a2 + 8);
        v39 = *(_QWORD *)a2;
        ptr.m128i_i64[0] = (__int64)v152;
        sub_111E070((__int64)&ptr, v39, v38);
        v40 = ptr.m128i_u32[2];
        v41 = src;
        v42 = 16LL * (unsigned int)v143;
        v43 = (v42 >> 4) + ptr.m128i_u32[2];
        if ( v43 > ptr.m128i_u32[3] )
        {
          sub_2237220(&ptr, v152, v43, 16);
          v40 = ptr.m128i_u32[2];
        }
        if ( v42 )
        {
          memcpy((void *)(ptr.m128i_i64[0] + 16 * v40), v41, v42);
          LODWORD(v40) = ptr.m128i_i32[2];
        }
        ptr.m128i_i32[2] = (v42 >> 4) + v40;
        if ( (unsigned __int8)sub_1228850(a1, (_DWORD *)a2, a3, ptr.m128i_i64, (__int64 *)&v145) )
        {
          if ( (_BYTE *)ptr.m128i_i64[0] != v152 )
            free((void *)ptr.m128i_i64[0]);
          v81 = v148.m128i_i64[0];
          v60 = (void **)(v148.m128i_i64[0] + 32LL * v148.m128i_u32[2]);
          if ( (void **)v148.m128i_i64[0] == v60 )
            goto LABEL_85;
          while ( 1 )
          {
            v60 -= 4;
            v82 = *v60;
            if ( *v60 != v60 + 2 )
              break;
LABEL_143:
            if ( (void **)v81 == v60 )
              goto LABEL_84;
          }
          while ( 1 )
          {
            operator delete(v82);
            if ( (void **)v81 == v60 )
              break;
            v60 -= 4;
            v82 = *v60;
            if ( *v60 == v60 + 2 )
              goto LABEL_143;
          }
LABEL_84:
          v60 = (void **)v148.m128i_i64[0];
LABEL_85:
          if ( v60 != (void **)v149 )
            free(v60);
          goto LABEL_87;
        }
        if ( (_BYTE *)ptr.m128i_i64[0] != v152 )
          free((void *)ptr.m128i_i64[0]);
LABEL_17:
        v18 = j__strlen("0.0.0");
        sub_1220870(&ptr, "0.0.0", v18);
        sub_9EE8A0(a1 + 528, (__int64)&ptr);
        *(_QWORD *)(a1 + 560) = v153;
        *(_DWORD *)(a1 + 568) = v154;
        sub_9EE8A0(a1 + 576, (__int64)&v155);
        sub_9EE8A0(a1 + 608, (__int64)&v156);
        sub_9EE8A0(a1 + 640, (__int64)&v157);
        v98 = v148.m128i_i64[0];
        v105 = v148.m128i_i64[0] + 32LL * v148.m128i_u32[2];
        if ( v148.m128i_i64[0] != v105 )
        {
          do
          {
            v19 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
            v20 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v19 + 96LL);
            v133 = 260;
            v131.m128i_i64[0] = v98;
            if ( v20(v19, &v131) )
            {
              v21 = (void **)v136;
              v99 = (void **)((char *)v136 + 16 * (unsigned int)v137);
              if ( v136 != v99 )
              {
                do
                {
                  v22 = *v21;
                  v23 = (size_t)v21[1];
                  v127 = 257;
                  v121 = v23;
                  v133 = 257;
                  v130 = 257;
                  v123 = 261;
                  v120 = v22;
                  sub_1130220(
                    &v112,
                    *(_BYTE **)v98,
                    *(_QWORD *)(v98 + 8),
                    (__int64)&v120,
                    (__int64)&v124,
                    (__int64)v128,
                    (__int64)&v131);
                  v24 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v19 + 96LL);
                  v131.m128i_i64[0] = (__int64)&v112;
                  v133 = 260;
                  if ( v24(v19, &v131) )
                  {
                    v25 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v19 + 96LL);
                    v115[0] = v116;
                    sub_1213B80(v115, v112, (__int64)v112 + v113);
                    v26 = j__strlen("/gcc");
                    if ( v26 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v115[1] )
                      goto LABEL_163;
                    sub_9EE560(v115, "/gcc", v26);
                    v131.m128i_i64[0] = (__int64)v115;
                    v133 = 260;
                    v103 = v25(v19, &v131);
                    if ( v115[0] != v116 )
                      operator delete(v115[0]);
                    v27 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v19 + 96LL);
                    v117 = &v119;
                    sub_1213B80(&v117, v112, (__int64)v112 + v113);
                    v28 = j__strlen("/gcc-cross");
                    if ( v28 > 0x7FFFFFFFFFFFFFFFLL - v118 )
LABEL_163:
                      std::__throw_length_error("basic_string::append");
                    sub_9EE560(&v117, "/gcc-cross", v28);
                    v131.m128i_i64[0] = (__int64)&v117;
                    v133 = 260;
                    v29 = v27(v19, &v131);
                    if ( v117 != &v119 )
                      operator delete(v117);
                    v30 = v103;
                    v31 = 16LL * (unsigned int)v143;
                    if ( src != (char *)src + v31 )
                    {
                      v32 = (char *)src + v31;
                      v104 = v19;
                      v33 = (char *)src;
                      do
                      {
                        v34 = *(_BYTE **)v33;
                        v35 = *((_QWORD *)v33 + 1);
                        v33 += 16;
                        sub_1228A00(a1, (_DWORD *)a2, a3, &v112, v34, v35, 0, v30, v29);
                      }
                      while ( v32 != v33 );
                      v19 = v104;
                    }
                  }
                  if ( v112 != &v114 )
                    operator delete(v112);
                  v21 += 2;
                }
                while ( v99 != v21 );
              }
              v44 = (char *)v139;
              v100 = (char *)v139 + 16 * (unsigned int)v140;
              if ( v139 != v100 )
              {
                do
                {
                  v48 = *(_BYTE **)v44;
                  if ( *(_QWORD *)v44 )
                  {
                    v45 = (__int64)&v48[*((_QWORD *)v44 + 1)];
                    v131.m128i_i64[0] = (__int64)v132;
                    sub_1213C40(&v131, v48, v45);
                  }
                  else
                  {
                    v132[0] = 0;
                    v131.m128i_i64[1] = 0;
                    v131.m128i_i64[0] = (__int64)v132;
                  }
                  v46 = (__m128i *)sub_99BDC0(&v131, 0, 0, *(_BYTE **)v98, *(_QWORD *)(v98 + 8));
                  v120 = &v122;
                  if ( (__m128i *)v46->m128i_i64[0] == &v46[1] )
                  {
                    v122 = _mm_loadu_si128(v46 + 1);
                  }
                  else
                  {
                    v120 = (void *)v46->m128i_i64[0];
                    v122.m128i_i64[0] = v46[1].m128i_i64[0];
                  }
                  v121 = v46->m128i_u64[1];
                  v46->m128i_i64[0] = (__int64)v46[1].m128i_i64;
                  v46->m128i_i64[1] = 0;
                  v46[1].m128i_i8[0] = 0;
                  if ( (_BYTE *)v131.m128i_i64[0] != v132 )
                    operator delete((void *)v131.m128i_i64[0]);
                  v47 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v19 + 96LL);
                  v133 = 260;
                  v131.m128i_i64[0] = (__int64)&v120;
                  if ( v47(v19, &v131) )
                  {
                    v49 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v19 + 96LL);
                    v124 = &v126;
                    sub_1213B80(&v124, v120, (__int64)v120 + v121);
                    v50 = j__strlen("/gcc");
                    if ( v50 > 0x7FFFFFFFFFFFFFFFLL - v125 )
                      goto LABEL_163;
                    sub_9EE560(&v124, "/gcc", v50);
                    v133 = 260;
                    v131.m128i_i64[0] = (__int64)&v124;
                    v101 = v49(v19, &v131);
                    if ( v124 != &v126 )
                      operator delete(v124);
                    v51 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v19 + 96LL);
                    v128[0] = v129;
                    sub_1213B80(v128, v120, (__int64)v120 + v121);
                    v52 = j__strlen("/gcc-cross");
                    if ( v52 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v128[1] )
                      goto LABEL_163;
                    sub_9EE560(v128, "/gcc-cross", v52);
                    v131.m128i_i64[0] = (__int64)v128;
                    v133 = 260;
                    v53 = v51(v19, &v131);
                    if ( v128[0] != v129 )
                      operator delete(v128[0]);
                    v54 = 16LL * (unsigned int)v146;
                    if ( v145 != (char *)v145 + v54 )
                    {
                      v55 = (char *)v145 + v54;
                      v102 = v19;
                      v56 = (char *)v145;
                      do
                      {
                        v57 = *(_BYTE **)v56;
                        v58 = *((_QWORD *)v56 + 1);
                        v56 += 16;
                        sub_1228A00(a1, (_DWORD *)a2, a3, &v120, v57, v58, 1u, v101, v53);
                      }
                      while ( v55 != v56 );
                      v19 = v102;
                    }
                  }
                  if ( v120 != &v122 )
                    operator delete(v120);
                  v44 += 16;
                }
                while ( v100 != v44 );
              }
              if ( (unsigned __int8)sub_1213FB0(
                                      (__int64)&ptr,
                                      *(_DWORD *)(a1 + 560),
                                      *(_DWORD *)(a1 + 564),
                                      *(_DWORD *)(a1 + 568),
                                      *(const void **)(a1 + 640),
                                      *(_QWORD *)(a1 + 648)) )
                break;
            }
            v98 += 32;
          }
          while ( v105 != v98 );
        }
        sub_1213F50((__int64)&ptr);
        v59 = v148.m128i_i64[0];
        v60 = (void **)(v148.m128i_i64[0] + 32LL * v148.m128i_u32[2]);
        if ( (void **)v148.m128i_i64[0] == v60 )
          goto LABEL_85;
        do
        {
          while ( 1 )
          {
            v60 -= 4;
            if ( *v60 == v60 + 2 )
              break;
            operator delete(*v60);
            if ( (void **)v59 == v60 )
              goto LABEL_84;
          }
        }
        while ( (void **)v59 != v60 );
        goto LABEL_84;
      }
      v17 = nullptr;
      v16 = 0;
      if ( MEMORY[0xFFFFFFFFFFFFFFFF] == 47 )
      {
LABEL_15:
        ptr.m128i_i64[0] = (__int64)v152;
        sub_1213C40(&ptr, v15, (__int64)v17);
        sub_CEFAC0((__int64)&v148, &ptr);
        if ( (_BYTE *)ptr.m128i_i64[0] != v152 )
          operator delete((void *)ptr.m128i_i64[0]);
        goto LABEL_17;
      }
    }
    v17 = &v15[v16];
    goto LABEL_15;
  }
  v83 = (char *)j__strlen(*v7);
  if ( (unsigned __int8)sub_1224500(a1, (_DWORD *)a2, a3, v8, v83, 0) )
  {
    v84 = j__strlen("/");
    if ( (unsigned __int64)v83 >= v84 )
    {
      v85 = &v83[-v84];
      if ( (!v84 || !memcmp(&v85[(_QWORD)v8], "/", v84)) && v83 > v85 )
        v83 = v85;
    }
    v86 = sub_228AA60(v8, v83, 0);
    v88 = v87;
    v89 = (_BYTE *)v86;
    v90 = sub_228A4B0(v8, v83, 0);
    v92 = sub_228AA60(v90, v91, 0);
    v94 = v93;
    v95 = v92;
    sub_1220870(&ptr, v89, v88);
    sub_1214A30((_DWORD *)(a1 + 528), (__int64)&ptr);
    sub_1213F50((__int64)&ptr);
    ptr.m128i_i64[1] = v94;
    LOWORD(v153) = 261;
    ptr.m128i_i64[0] = v95;
    sub_22BA1F0(a1 + 8, &ptr);
    ptr.m128i_i64[0] = (__int64)v152;
    sub_1213C40(&ptr, v8, (__int64)&v83[(_QWORD)v8]);
    sub_A0AAD0(a1 + 72, &ptr);
    if ( (_BYTE *)ptr.m128i_i64[0] != v152 )
      operator delete((void *)ptr.m128i_i64[0]);
    sub_F7DA00((size_t *)&ptr, a1 + 72, "/../../..");
    sub_A0AAD0(a1 + 104, &ptr);
    if ( (_BYTE *)ptr.m128i_i64[0] != v152 )
      operator delete((void *)ptr.m128i_i64[0]);
    *(_BYTE *)a1 = 1;
  }
  else
  {
    sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 64), 0, 380);
    sub_AEC220((unsigned __int8 **)&ptr, v8, (signed __int64)v83);
    sub_AEA040((__int64)&ptr);
  }
LABEL_87:
  if ( v109 != v111 )
    operator delete(v109);
  if ( v106 != v108 )
    operator delete(v106);
  if ( v145 != v147 )
    free(v145);
  if ( src != v144 )
    free(src);
  if ( v139 != v141 )
    free(v139);
  if ( v136 != v138 )
    free(v136);
  if ( v134[0] != v135 )
    operator delete(v134[0]);
}
