__int64 __fastcall sub_C2A0F0(__int64 a1, unsigned int a2, __int64 a3, const __m128i *a4, int a5, __int64 a6)
{
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  _BYTE *v21; // rcx
  _BYTE *v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // al
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 *v35; // rax
  __int64 *v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 *v43; // rax
  __int64 *v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  bool v47; // al
  int v48; // eax
  int v49; // r12d
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int8 **v52; // r13
  unsigned __int8 v53; // al
  __int64 v54; // r15
  signed __int64 v55; // r12
  char *v56; // r14
  unsigned __int8 **v57; // rax
  unsigned __int8 **v58; // rbp
  char v60; // dl
  _QWORD *v61; // rdi
  __int64 v62; // r8
  _QWORD *v63; // rsi
  _QWORD *v64; // rax
  __int64 v65; // rsi
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // r8
  int v73; // eax
  char v74; // al
  unsigned __int8 **v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  unsigned __int8 **v78; // rax
  unsigned __int8 **v79; // r13
  __int64 v80; // rsi
  unsigned __int8 **v81; // rax
  char v82; // r10
  unsigned __int8 **v83; // r12
  __int64 v84; // rbx
  _QWORD *v85; // rax
  _BYTE *v86; // rdi
  unsigned __int64 v87; // rdx
  unsigned __int8 *v88; // r12
  _BYTE *v89; // r14
  __int64 v90; // rax
  unsigned __int64 v91; // rcx
  __int64 v92; // rdx
  unsigned __int64 v93; // rbx
  __int64 v94; // rax
  __int16 v95; // ax
  signed __int64 v96; // rdx
  unsigned __int8 **v97; // rax
  _BYTE *v98; // r11
  unsigned __int64 *v99; // rax
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // rax
  unsigned __int8 **v102; // rax
  unsigned __int8 **v103; // r13
  _BYTE *v104; // rdi
  unsigned int v105; // eax
  unsigned __int8 **v106; // rax
  __int64 *v107; // rax
  __int64 v108; // rcx
  __int64 *v109; // rax
  __int64 *v110; // rax
  __int64 *v111; // rax
  __int64 *v112; // rax
  size_t v113; // rdx
  char v114; // al
  __int64 *v115; // rax
  __int64 v116; // rcx
  unsigned __int8 *v117; // rdx
  int v118; // eax
  __int64 v119; // rbx
  void *v120; // r15
  __int64 v121; // rbx
  int v122; // r13d
  void *v123; // rdi
  __int64 v124; // rax
  __int64 v125; // r14
  __int64 v126; // r15
  __int64 v127; // r14
  void *v128; // rdi
  __int64 v129; // rbx
  int v130; // r13d
  void *v131; // rdi
  __int64 v132; // rax
  _BYTE *v133; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE *v134; // [rsp+10h] [rbp-C8h]
  _BYTE *v135; // [rsp+18h] [rbp-C0h]
  __int64 v136; // [rsp+20h] [rbp-B8h]
  __int64 v137; // [rsp+28h] [rbp-B0h]
  __m128i si128; // [rsp+30h] [rbp-A8h] BYREF
  void *src; // [rsp+40h] [rbp-98h] BYREF
  size_t n; // [rsp+48h] [rbp-90h]
  _QWORD v141[2]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v142[20]; // [rsp+60h] [rbp-78h] BYREF
  char v143; // [rsp+74h] [rbp-64h]
  void *dest; // [rsp+78h] [rbp-60h]
  __m128 v145; // [rsp+80h] [rbp-58h] BYREF
  char v146; // [rsp+98h] [rbp-40h]

  v9 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v14 = a4->m128i_i64[0];
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  si128 = _mm_load_si128(a4);
  v16 = *(unsigned __int8 *)(v15 + 16) - 43;
  LOBYTE(v133) = v16 <= 1;
  if ( !v14 )
    goto LABEL_61;
  v17 = v14 & 3;
  if ( v17 == 1 )
  {
    v18 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    v19 = v18;
    if ( a5 > 2 )
      goto LABEL_6;
    if ( a5 <= 0 )
    {
      if ( a5 )
        goto LABEL_53;
      goto LABEL_6;
    }
    if ( !v18 )
      goto LABEL_6;
    v95 = *(_WORD *)v18 & 0x1FF;
    if ( v95 != 9 )
    {
      if ( v95 == 48 )
      {
LABEL_55:
        v54 = 2;
        v55 = 0;
        v56 = nullptr;
        goto LABEL_56;
      }
      if ( v95 == 18 )
      {
        v54 = 3;
        v56 = (char *)sub_BF81C0((*(_BYTE *)(v18 + 2) >> 3) & 0xF);
        v55 = v96;
        goto LABEL_56;
      }
LABEL_6:
      v8 = 0;
      goto LABEL_7;
    }
    v54 = 1;
    v55 = 0;
    v56 = nullptr;
LABEL_56:
    v57 = (unsigned __int8 **)sub_E33C80(a1, a2, 101, 0);
    v58 = v57;
    if ( v57 )
    {
      sub_C11320(v57, (unsigned __int8)v133);
      sub_C11320(v58, a4[3].m128i_i32[2] != 0);
      sub_C11320(v58, v54);
      sub_AEC220(v58, v56, v55);
    }
    goto LABEL_58;
  }
  if ( (v14 & 3) == 0 )
  {
    v18 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    v6 = v9;
    v7 = v18;
    v8 = v18;
    if ( a5 > 2 )
    {
      if ( a5 != 3 )
        goto LABEL_53;
    }
    else if ( a5 )
    {
      goto LABEL_53;
    }
    if ( v18 )
    {
      v53 = *(_BYTE *)(v18 + 28) & 0x7F;
      goto LABEL_49;
    }
    goto LABEL_61;
  }
  if ( a5 <= 2 )
  {
    if ( a5 <= 0 )
    {
      v19 = 0;
      v8 = 0;
      goto LABEL_7;
    }
    if ( v17 == 2 )
    {
      v54 = 0;
      v55 = 0;
      v56 = nullptr;
      goto LABEL_56;
    }
LABEL_61:
    v19 = 0;
    v8 = 0;
    goto LABEL_7;
  }
  v19 = 0;
  v8 = 0;
  while ( 1 )
  {
LABEL_7:
    v135 = (_BYTE *)a6;
    v134 = (_BYTE *)v19;
    LOBYTE(v20) = sub_C1D2F0(si128.m128i_i64[0], si128.m128i_i64[1]);
    v21 = v134;
    v22 = v135;
    LODWORD(v6) = v20;
    if ( !(_BYTE)v20 )
    {
      LOBYTE(v134) = 0;
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) == 0 )
      {
        sub_E33C80(a1, a2, 108, 0);
        LODWORD(v6) = (unsigned __int8)v134;
        return (unsigned int)v6;
      }
      v78 = (unsigned __int8 **)sub_E33C80(a1, a2, 2457, 1);
      v79 = v78;
      if ( v78 )
      {
        sub_C11320(v78, (unsigned __int8)v133);
        sub_C11320(v79, a4[3].m128i_i32[2] != 0);
        sub_C11320(v79, v8 != 0);
        sub_AE9DF0(v79, v8, 0xAu);
      }
      if ( !v8
        || (*(_BYTE *)(v8 + 28) & 0x7F) == 43
        || (*(_BYTE *)(v8 + 28) & 0x7Fu) - 40 > 6
        || *(char *)(v8 + 97) >= 0 )
      {
LABEL_86:
        sub_C11AA0(a1, si128.m128i_i64[0], si128.m128i_i64[1], v76, v77);
        LODWORD(v6) = 0;
        return (unsigned int)v6;
      }
      v80 = *(unsigned int *)(v8 + 24);
      LOBYTE(v133) = 0;
      v81 = (unsigned __int8 **)sub_E33DB0(a1, v80, 2459);
      v82 = 0;
      v83 = v81;
      if ( v81 )
      {
        sub_AE9DF0(v81, v8, 0xAu);
        v82 = (char)v133;
      }
      LOBYTE(v133) = v82;
      v84 = j__strlen("static ");
      *(_QWORD *)&v142[12] = 0;
      *(_DWORD *)v142 = sub_B73090(v8);
      LODWORD(v6) = (unsigned __int8)v133;
      *(_DWORD *)&v142[4] = *(_DWORD *)v142;
      v85 = v141;
      v143 = 0;
      dest = &v145.m128_u16[4];
      v145.m128_u64[0] = 0;
      v145.m128_i8[8] = 0;
      v146 = 0;
      v142[8] = 0;
      src = v141;
      if ( (unsigned __int64)v84 > 0xF )
      {
        if ( v84 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v85 = (_QWORD *)operator new(v84 + 1);
        v141[0] = v84;
        LOBYTE(v6) = (_BYTE)v133;
        src = v85;
      }
      else
      {
        if ( v84 == 1 )
        {
          LOBYTE(v141[0]) = 115;
          goto LABEL_98;
        }
        if ( !v84 )
        {
LABEL_98:
          n = v84;
          *((_BYTE *)v85 + v84) = 0;
          v86 = dest;
          if ( src == v141 )
          {
            v113 = n;
            if ( n )
            {
              if ( n == 1 )
              {
                *(_BYTE *)dest = v141[0];
                v113 = n;
                v86 = dest;
              }
              else
              {
                LOBYTE(v133) = v6;
                memcpy(dest, src, n);
                v113 = n;
                v86 = dest;
                LODWORD(v6) = (unsigned __int8)v133;
              }
            }
            v145.m128_u64[0] = v113;
            v86[v113] = 0;
            v86 = src;
            goto LABEL_102;
          }
          if ( dest == &v145.m128_u16[4] )
          {
            v133 = (_BYTE *)v141[0];
            dest = src;
            v145 = _mm_loadh_ps((const double *)&v133);
          }
          else
          {
            v133 = (_BYTE *)v141[0];
            v87 = v145.m128_u64[1];
            dest = src;
            v145 = _mm_loadh_ps((const double *)&v133);
            if ( v86 )
            {
              src = v86;
              v141[0] = v87;
LABEL_102:
              n = 0;
              *v86 = 0;
              if ( src != v141 )
              {
                LOBYTE(v133) = v6;
                operator delete(src);
                LODWORD(v6) = (unsigned __int8)v133;
              }
              v146 = 0;
              if ( v83 && *(_DWORD *)v142 && *(_DWORD *)&v142[4] )
              {
                if ( !*v83 )
                {
                  v117 = v83[1];
                  v118 = *((_DWORD *)v117 + 3744);
                  if ( v118 )
                  {
                    v124 = (unsigned int)(v118 - 1);
                    *((_DWORD *)v117 + 3744) = v124;
                    v119 = *(_QWORD *)&v117[8 * v124 + 14848];
                    v125 = *(unsigned int *)(v119 + 536);
                    *(_BYTE *)v119 = 0;
                    v126 = *(_QWORD *)(v119 + 528);
                    *(_DWORD *)(v119 + 424) = 0;
                    v127 = v126 + (v125 << 6);
                    while ( v126 != v127 )
                    {
                      v127 -= 64;
                      v128 = *(void **)(v127 + 24);
                      if ( v128 != (void *)(v127 + 40) )
                      {
                        LOBYTE(v133) = v6;
                        operator delete(v128);
                        LOBYTE(v6) = (_BYTE)v133;
                      }
                    }
                    *(_DWORD *)(v119 + 536) = 0;
                  }
                  else
                  {
                    LOBYTE(v133) = v6;
                    v119 = operator new(0x3A0u);
                    *(_BYTE *)v119 = 0;
                    *(_QWORD *)(v119 + 96) = v119 + 112;
                    *(_QWORD *)(v119 + 128) = v119 + 144;
                    *(_QWORD *)(v119 + 160) = v119 + 176;
                    *(_QWORD *)(v119 + 192) = v119 + 208;
                    *(_QWORD *)(v119 + 224) = v119 + 240;
                    *(_QWORD *)(v119 + 256) = v119 + 272;
                    *(_QWORD *)(v119 + 288) = v119 + 304;
                    *(_QWORD *)(v119 + 320) = v119 + 336;
                    *(_QWORD *)(v119 + 352) = v119 + 368;
                    *(_QWORD *)(v119 + 384) = v119 + 400;
                    *(_QWORD *)(v119 + 416) = v119 + 432;
                    *(_BYTE *)(v119 + 112) = 0;
                    *(_QWORD *)(v119 + 104) = 0;
                    *(_QWORD *)(v119 + 136) = 0;
                    *(_BYTE *)(v119 + 144) = 0;
                    *(_QWORD *)(v119 + 168) = 0;
                    *(_BYTE *)(v119 + 176) = 0;
                    *(_QWORD *)(v119 + 200) = 0;
                    *(_BYTE *)(v119 + 208) = 0;
                    *(_QWORD *)(v119 + 232) = 0;
                    *(_BYTE *)(v119 + 240) = 0;
                    *(_QWORD *)(v119 + 264) = 0;
                    *(_BYTE *)(v119 + 272) = 0;
                    *(_QWORD *)(v119 + 296) = 0;
                    *(_BYTE *)(v119 + 304) = 0;
                    *(_QWORD *)(v119 + 328) = 0;
                    *(_BYTE *)(v119 + 336) = 0;
                    *(_QWORD *)(v119 + 360) = 0;
                    *(_BYTE *)(v119 + 368) = 0;
                    *(_QWORD *)(v119 + 392) = 0;
                    *(_BYTE *)(v119 + 400) = 0;
                    *(_QWORD *)(v119 + 424) = 0x800000000LL;
                    LOBYTE(v6) = (_BYTE)v133;
                    *(_QWORD *)(v119 + 528) = v119 + 544;
                    *(_QWORD *)(v119 + 536) = 0x600000000LL;
                  }
                  *v83 = (unsigned __int8 *)v119;
                }
                v88 = *v83;
                v89 = v142;
                v90 = *((unsigned int *)v88 + 134);
                v91 = *((_QWORD *)v88 + 66);
                v92 = v90 + 1;
                v93 = v91 + (v90 << 6);
                if ( v90 + 1 > (unsigned __int64)*((unsigned int *)v88 + 135) )
                {
                  v120 = v88 + 544;
                  if ( v91 > (unsigned __int64)v142 || v93 <= (unsigned __int64)v142 )
                  {
                    LOBYTE(v133) = v6;
                    v129 = sub_2237400(v88 + 528, v88 + 544, v92, 64, &src);
                    sub_9EF810((__int64 *)v88 + 66, v129);
                    v130 = (int)src;
                    v131 = *((void **)v88 + 66);
                    LOBYTE(v6) = (_BYTE)v133;
                    if ( v120 == v131 )
                    {
                      v132 = *((unsigned int *)v88 + 134);
                      *((_QWORD *)v88 + 66) = v129;
                      v89 = v142;
                      *((_DWORD *)v88 + 135) = v130;
                    }
                    else
                    {
                      v89 = v142;
                      free(v131);
                      v132 = *((unsigned int *)v88 + 134);
                      *((_QWORD *)v88 + 66) = v129;
                      *((_DWORD *)v88 + 135) = v130;
                      LOBYTE(v6) = (_BYTE)v133;
                    }
                    v93 = (v132 << 6) + v129;
                  }
                  else
                  {
                    LOBYTE(v134) = v6;
                    v133 = &v142[-v91];
                    v121 = sub_2237400(v88 + 528, v88 + 544, v92, 64, &src);
                    sub_9EF810((__int64 *)v88 + 66, v121);
                    v122 = (int)src;
                    v123 = *((void **)v88 + 66);
                    LOBYTE(v6) = (_BYTE)v134;
                    if ( v120 == v123 )
                    {
                      *((_QWORD *)v88 + 66) = v121;
                    }
                    else
                    {
                      free(v123);
                      *((_QWORD *)v88 + 66) = v121;
                      LOBYTE(v6) = (_BYTE)v134;
                    }
                    *((_DWORD *)v88 + 135) = v122;
                    v89 = &v133[v121];
                    v93 = ((unsigned __int64)*((unsigned int *)v88 + 134) << 6) + v121;
                  }
                }
                v94 = *(_QWORD *)v89;
                LOBYTE(v133) = v6;
                *(_QWORD *)v93 = v94;
                *(_DWORD *)(v93 + 8) = *((_DWORD *)v89 + 2);
                *(_QWORD *)(v93 + 12) = *(_QWORD *)(v89 + 12);
                *(_DWORD *)(v93 + 20) = *((_DWORD *)v89 + 5);
                *(_QWORD *)(v93 + 24) = v93 + 40;
                sub_C11D80((_QWORD *)(v93 + 24), *((_BYTE **)v89 + 3), *((_QWORD *)v89 + 3) + *((_QWORD *)v89 + 4));
                LODWORD(v6) = (unsigned __int8)v133;
                *(_BYTE *)(v93 + 56) = v89[56];
                ++*((_DWORD *)v88 + 134);
              }
              if ( dest != &v145.m128_u16[4] )
              {
                LOBYTE(v133) = v6;
                operator delete(dest);
                LODWORD(v6) = (unsigned __int8)v133;
              }
              return (unsigned int)v6;
            }
          }
          v86 = v141;
          src = v141;
          goto LABEL_102;
        }
      }
      LOBYTE(v133) = v6;
      memcpy(v85, "static ", v84);
      v85 = src;
      LODWORD(v6) = (unsigned __int8)v133;
      goto LABEL_98;
    }
    if ( a4[8].m128i_i8[1] )
    {
      if ( !v8 )
        goto LABEL_128;
      v75 = (unsigned __int8 **)sub_E33C80(a1, a2, 2501, 1);
      if ( v75 )
        sub_AE9DF0(v75, v8, 0xAu);
      goto LABEL_86;
    }
    if ( (si128.m128i_i8[0] & 3) == 3 )
    {
      v102 = (unsigned __int8 **)sub_E33C80(a1, a2, 2407, 0);
      v103 = v102;
      if ( v102 )
      {
        sub_C11320(v102, (unsigned __int8)v133);
        sub_C11320(v103, a4[3].m128i_i32[2] != 0);
      }
      goto LABEL_86;
    }
    if ( !v8 )
    {
      if ( !v134 || (*(_WORD *)v134 & 0x1FF) != 0x30 )
        goto LABEL_37;
      v60 = v135[20];
      if ( !v60 )
        goto LABEL_132;
      v61 = *(_QWORD **)v135;
      v62 = *((unsigned int *)v135 + 3);
      v63 = (_QWORD *)(*(_QWORD *)v135 + 8 * v62);
      if ( *(_QWORD **)v135 != v63 )
      {
        v64 = *(_QWORD **)v135;
        if ( v134 == (_BYTE *)*v61 )
        {
LABEL_134:
          v60 = 0;
          goto LABEL_72;
        }
        while ( v63 != ++v64 )
        {
          if ( v134 == (_BYTE *)*v64 )
            goto LABEL_134;
        }
      }
      if ( (unsigned int)v62 < *((_DWORD *)v135 + 2) )
      {
        *((_DWORD *)v135 + 3) = v62 + 1;
        *v63 = v21;
        v61 = *(_QWORD **)v22;
        v64 = (_QWORD *)(*(_QWORD *)v22 + 8 * v62);
      }
      else
      {
LABEL_132:
        v104 = v135;
        LOBYTE(v135) = v6;
        v133 = v22;
        v64 = (_QWORD *)sub_2236760(v104, v134);
        v22 = v133;
        v21 = v134;
        LODWORD(v6) = (unsigned __int8)v135;
        v61 = *(_QWORD **)v133;
        if ( !v133[20] )
        {
          v65 = (__int64)&v61[*((unsigned int *)v133 + 2)];
LABEL_73:
          if ( (_QWORD *)v65 != v64 && (*v64 == -2 || *v64 == -1) )
          {
            do
              ++v64;
            while ( (_QWORD *)v65 != v64 && *v64 >= 0xFFFFFFFFFFFFFFFELL );
          }
          if ( !v60 )
            goto LABEL_37;
          v135 = v22;
          LOBYTE(v134) = v6;
          v133 = v21;
          *(__m128i *)v142 = _mm_load_si128(&si128);
          v136 = sub_A4F310(v142);
          v66 = sub_F65A30(v136);
          v69 = (__int64)v135;
          if ( v66 )
          {
            v105 = sub_C00A40((unsigned __int64)v133, v65, v67, (__int64)v133, v68);
            v106 = (unsigned __int8 **)sub_E33C80(a1, v105, 2498, 0);
            if ( v106 )
              sub_AE9DF0(v106, v136, 8u);
            goto LABEL_58;
          }
          v70 = *((_QWORD *)v133 + 2);
          LOBYTE(v135) = (_BYTE)v134;
          v137 = v69;
          v134 = v133;
          v133 = (_BYTE *)sub_B9B790(v70 & 0xFFFFFFFFFFFFFFF8LL, 0);
          v73 = sub_C00A40((unsigned __int64)v134, 0, v71, (__int64)v134, v72);
          v74 = sub_C2B330(0, a1, v73, v136, (_DWORD)v133, a5, 0, v137);
          LODWORD(v6) = (unsigned __int8)v135;
          if ( !v74 )
            goto LABEL_58;
          goto LABEL_37;
        }
      }
LABEL_72:
      v65 = (__int64)&v61[*((unsigned int *)v22 + 3)];
      goto LABEL_73;
    }
    v23 = *(_BYTE *)(v8 + 28) & 0x7F;
    if ( (unsigned int)(v23 - 40) > 6 )
      goto LABEL_27;
    v18 = v8;
    LOBYTE(v133) = v6;
    if ( (unsigned int)sub_B73370(v8) )
      goto LABEL_58;
    v6 = (unsigned __int8)v133;
    if ( a5 == 1 )
      goto LABEL_16;
    if ( a5 < 4 )
      break;
LABEL_53:
    if ( !v18 )
      goto LABEL_82;
    v53 = *(_BYTE *)(v18 + 28) & 0x7F;
    if ( v53 == 82 )
      goto LABEL_55;
LABEL_49:
    v134 = (_BYTE *)v6;
    if ( (unsigned int)v53 - 34 <= 5 )
    {
      v135 = (_BYTE *)v7;
      v136 = a6;
      if ( (unsigned __int8)sub_B7D7F0(v7) )
      {
        v133 = v135;
        v97 = (unsigned __int8 **)sub_E33C80(a1, a2, 2365, 0);
        v98 = v135;
        if ( v97 )
        {
          sub_C11320(
            v97,
            (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v134 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 34);
          v98 = v133;
        }
        sub_E33DB0(a1, *((unsigned int *)v98 + 6), 103);
        LODWORD(v6) = 0;
        return (unsigned int)v6;
      }
      v19 = 0;
      a6 = v136;
    }
    else
    {
LABEL_82:
      v19 = 0;
    }
  }
  if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
  {
    v99 = sub_B8C3D0(v8, si128.m128i_i64[1], v24, v25, v26, a6);
    LODWORD(v6) = (unsigned __int8)v133;
    v100 = *v99;
    v25 = *v99 + 8LL * *((unsigned int *)v99 + 2);
    if ( *v99 >= v25 )
    {
      if ( v100 != v25 )
      {
        while ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 197 )
        {
          v25 += 8LL;
          if ( v100 == v25 )
            goto LABEL_16;
        }
        goto LABEL_58;
      }
    }
    else
    {
      v101 = *v99;
      while ( *(_WORD *)(*(_QWORD *)v101 + 36LL) != 197 )
      {
        v101 += 8LL;
        if ( v25 == v101 )
          goto LABEL_16;
      }
      if ( v25 != v101 )
        goto LABEL_58;
    }
  }
LABEL_16:
  v27 = *(_QWORD *)(a1 + 16);
  v28 = *(_QWORD *)(v27 + 2320);
  if ( (*(_BYTE *)(v28 + 60) & 0x10) != 0 && (*(_BYTE *)(v28 + 89) & 4) != 0 && *(_BYTE *)(v27 + 18376) )
  {
    if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
      goto LABEL_20;
    LOBYTE(v133) = v6;
    v109 = sub_B8C3D0(v8, si128.m128i_i64[1], v27, v25, v26, a6);
    LODWORD(v6) = (unsigned __int8)v133;
    v31 = *v109;
    v32 = *v109 + 8LL * *((unsigned int *)v109 + 2);
    if ( *v109 < v32 )
    {
      v110 = (__int64 *)*v109;
      while ( 1 )
      {
        v31 = *v110;
        if ( *(_WORD *)(*v110 + 36) == 160 )
          break;
        if ( (__int64 *)v32 == ++v110 )
          goto LABEL_153;
      }
      if ( (__int64 *)v32 != v110 )
        goto LABEL_21;
LABEL_153:
      if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
      {
        v111 = sub_B8C3D0(v8, si128.m128i_i64[1], v31, v32, v33, v34);
        LODWORD(v6) = (unsigned __int8)v133;
        v31 = *v111;
        v32 = *v111 + 8LL * *((unsigned int *)v111 + 2);
        if ( *v111 < v32 )
        {
          v112 = (__int64 *)*v111;
          while ( 1 )
          {
            v31 = *v112;
            if ( *(_WORD *)(*v112 + 36) == 159 )
              break;
            if ( (__int64 *)v32 == ++v112 )
              goto LABEL_20;
          }
          if ( (__int64 *)v32 == v112 )
            goto LABEL_20;
          goto LABEL_21;
        }
        if ( v31 != v32 )
        {
          while ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 159 )
          {
            v32 += 8LL;
            if ( v31 == v32 )
              goto LABEL_20;
          }
          goto LABEL_21;
        }
      }
LABEL_20:
      v29 = *(_QWORD *)(v8 + 48);
      LOBYTE(v133) = v6;
      v30 = sub_F617A0(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL));
      LODWORD(v6) = (unsigned __int8)v133;
      if ( !v30 )
      {
        v114 = sub_F61860(*(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        LODWORD(v6) = (unsigned __int8)v133;
        if ( !v114 )
          goto LABEL_58;
      }
      goto LABEL_21;
    }
    if ( v31 == v32 )
      goto LABEL_153;
    while ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 160 )
    {
      v32 += 8LL;
      if ( v31 == v32 )
        goto LABEL_153;
    }
LABEL_21:
    if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
    {
      LOBYTE(v133) = v6;
      v35 = sub_B8C3D0(v8, si128.m128i_i64[1], v31, v32, v33, v34);
      LODWORD(v6) = (unsigned __int8)v133;
      v36 = (__int64 *)*v35;
      v37 = *v35 + 8LL * *((unsigned int *)v35 + 2);
      if ( *v35 >= v37 )
      {
        if ( v36 != (__int64 *)v37 )
        {
          if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 224 )
            goto LABEL_58;
          v115 = (__int64 *)(v37 + 8);
          while ( v36 != v115 )
          {
            v116 = *v115++;
            if ( *(_WORD *)(v116 + 36) == 224 )
              goto LABEL_58;
          }
        }
      }
      else
      {
        v38 = *v35;
        while ( *(_WORD *)(*(_QWORD *)v38 + 36LL) != 224 )
        {
          v38 += 8LL;
          if ( v37 == v38 )
            goto LABEL_26;
        }
        if ( v37 != v38 )
          goto LABEL_58;
      }
    }
  }
LABEL_26:
  v23 = *(_BYTE *)(v8 + 28) & 0x7F;
LABEL_27:
  if ( (unsigned int)(v23 - 34) > 5 )
    goto LABEL_37;
  v18 = a1;
  LOBYTE(v133) = v6;
  v39 = sub_E32240(a1);
  v6 = (unsigned __int8)v133;
  if ( (*(_BYTE *)(v39 + 1) & 8) == 0 || a5 == 1 )
    goto LABEL_37;
  if ( a5 <= 1 )
  {
    if ( !a5 )
      goto LABEL_32;
    goto LABEL_53;
  }
  if ( a5 > 3 )
  {
LABEL_128:
    sub_E33C80(a1, a2, 108, 0);
    LODWORD(v6) = 0;
    return (unsigned int)v6;
  }
LABEL_32:
  if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
  {
LABEL_37:
    if ( v16 <= 1 )
    {
      LOBYTE(v133) = v6;
      v47 = sub_A4F700(&si128);
      LODWORD(v6) = (unsigned __int8)v133;
      if ( v47 )
      {
        if ( (a4[1].m128i_i8[8] & 1) == 0 )
        {
          LOBYTE(v48) = sub_C105C0((__int64)&a4[1].m128i_i64[1]);
          LODWORD(v6) = (unsigned __int8)v133;
          v49 = v48;
          if ( (_BYTE)v48 )
          {
            v52 = (unsigned __int8 **)sub_E33C80(a1, a2, 2465, 1);
            if ( v52 )
            {
              sub_C11320(v52, a4[3].m128i_i32[2] != 0);
              sub_C11320(v52, v8 != 0);
              sub_AE9DF0(v52, v8, 0xAu);
            }
            sub_C11AA0(a1, si128.m128i_i64[0], si128.m128i_i64[1], v50, v51);
            LODWORD(v6) = v49;
          }
        }
      }
      else
      {
        sub_E33B30(a1, a2, 108, 0);
        LODWORD(v6) = (unsigned __int8)v133;
      }
    }
    return (unsigned int)v6;
  }
  v43 = sub_B8C3D0(v8, si128.m128i_i64[1], v40, v41, v42, a6);
  LODWORD(v6) = (unsigned __int8)v133;
  v44 = (__int64 *)*v43;
  v45 = *v43 + 8LL * *((unsigned int *)v43 + 2);
  if ( *v43 >= v45 )
  {
    if ( v44 == (__int64 *)v45 )
      goto LABEL_37;
    if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 197 )
      goto LABEL_58;
    v107 = (__int64 *)(v45 + 8);
    while ( v107 != v44 )
    {
      v108 = *v107++;
      if ( *(_WORD *)(v108 + 36) == 197 )
        goto LABEL_58;
    }
    goto LABEL_37;
  }
  v46 = *v43;
  while ( *(_WORD *)(*(_QWORD *)v46 + 36LL) != 197 )
  {
    v46 += 8LL;
    if ( v45 == v46 )
      goto LABEL_37;
  }
  if ( v45 == v46 )
    goto LABEL_37;
LABEL_58:
  LODWORD(v6) = 0;
  return (unsigned int)v6;
}
