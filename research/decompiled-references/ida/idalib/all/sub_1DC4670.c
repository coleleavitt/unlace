unsigned __int64 __fastcall sub_1DC4670(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        double a5,
        __m128 a6,
        __m128i a7)
{
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *i; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r9
  __int64 *v18; // r12
  __int64 *v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  void **v35; // r14
  _BYTE *v36; // r8
  __int64 v37; // rax
  __int64 *v38; // rax
  unsigned __int8 *v39; // r14
  unsigned __int8 *v40; // rbx
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rax
  _QWORD *v43; // rbp
  _QWORD *v44; // r13
  _QWORD *v45; // rdi
  void *v46; // rdi
  void **v47; // r13
  void **v48; // rbp
  unsigned __int64 v49; // r8
  _QWORD *v50; // rbx
  _QWORD *v51; // r14
  _QWORD **v52; // rbp
  _QWORD **v53; // r12
  _QWORD *v54; // rdx
  _QWORD *v55; // rax
  _QWORD **v56; // r12
  __int64 v57; // r8
  _QWORD **v58; // rbp
  _QWORD *v59; // rdx
  _QWORD *v60; // rax
  __int64 *v61; // rbx
  __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 *v72; // rdi
  int v73; // edx
  __int64 v74; // rdx
  __m128i *v75; // rcx
  __int64 v76; // rdx
  __m128i *v77; // r14
  __m128i v78; // xmm3
  unsigned int **v79; // r15
  unsigned int **v80; // r14
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rcx
  _QWORD *v87; // rax
  unsigned __int64 v88; // rdx
  const __m128i *v89; // r9
  void *v90; // rsi
  __int64 v91; // rax
  int v92; // ebp
  size_t v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r14
  __int64 *v99; // rax
  _QWORD *v100; // rax
  unsigned __int64 v101; // [rsp+8h] [rbp-830h] BYREF
  __int64 v102; // [rsp+10h] [rbp-828h]
  char *v103; // [rsp+18h] [rbp-820h]
  _BYTE *v104; // [rsp+20h] [rbp-818h]
  _QWORD *v105; // [rsp+28h] [rbp-810h]
  __int64 v106; // [rsp+30h] [rbp-808h]
  __int64 *v107; // [rsp+38h] [rbp-800h]
  __int64 v108; // [rsp+40h] [rbp-7F8h]
  __int64 v109; // [rsp+48h] [rbp-7F0h]
  void **p_src; // [rsp+50h] [rbp-7E8h]
  void **p_dest; // [rsp+58h] [rbp-7E0h]
  __int64 *v112; // [rsp+60h] [rbp-7D8h]
  void **v113; // [rsp+68h] [rbp-7D0h]
  int v114; // [rsp+70h] [rbp-7C8h]
  int v115; // [rsp+74h] [rbp-7C4h]
  void **v116; // [rsp+78h] [rbp-7C0h]
  __int64 v117; // [rsp+88h] [rbp-7B0h] BYREF
  char v118[8]; // [rsp+90h] [rbp-7A8h] BYREF
  char v119; // [rsp+98h] [rbp-7A0h]
  char v120; // [rsp+99h] [rbp-79Fh]
  void *v121; // [rsp+A0h] [rbp-798h] BYREF
  __int64 v122; // [rsp+A8h] [rbp-790h]
  __int64 v123; // [rsp+B0h] [rbp-788h] BYREF
  __m128i v124; // [rsp+D0h] [rbp-768h] BYREF
  __m128i v125; // [rsp+E0h] [rbp-758h] BYREF
  __m128i v126; // [rsp+F0h] [rbp-748h] BYREF
  void *v127[2]; // [rsp+100h] [rbp-738h] BYREF
  __m128i v128; // [rsp+110h] [rbp-728h] BYREF
  __m128i v129[2]; // [rsp+120h] [rbp-718h] BYREF
  void *dest; // [rsp+140h] [rbp-6F8h] BYREF
  __int64 v131; // [rsp+148h] [rbp-6F0h]
  char v132; // [rsp+150h] [rbp-6E8h] BYREF
  void *src; // [rsp+190h] [rbp-6A8h] BYREF
  __int64 v134; // [rsp+198h] [rbp-6A0h]
  char v135; // [rsp+1A0h] [rbp-698h] BYREF
  __int128 v136; // [rsp+1E0h] [rbp-658h] BYREF
  __int64 *v137; // [rsp+1F0h] [rbp-648h]
  __int64 v138; // [rsp+1F8h] [rbp-640h]
  unsigned __int8 *v139; // [rsp+200h] [rbp-638h] BYREF
  __int64 v140; // [rsp+208h] [rbp-630h]
  __int64 v141; // [rsp+210h] [rbp-628h] BYREF
  char v142; // [rsp+258h] [rbp-5E0h]
  unsigned int v143; // [rsp+260h] [rbp-5D8h]
  char v144; // [rsp+264h] [rbp-5D4h]
  __int64 v145; // [rsp+290h] [rbp-5A8h]
  __int64 v146; // [rsp+298h] [rbp-5A0h]
  __int64 v147; // [rsp+2A0h] [rbp-598h]
  __int64 v148; // [rsp+2B0h] [rbp-588h]
  __int64 v149; // [rsp+2B8h] [rbp-580h]
  int v150; // [rsp+2C8h] [rbp-570h]
  char v151; // [rsp+2CCh] [rbp-56Ch]
  void *v152; // [rsp+2D0h] [rbp-568h]
  __int64 v153; // [rsp+2D8h] [rbp-560h]
  __int64 v154; // [rsp+320h] [rbp-518h]
  __int64 v155; // [rsp+328h] [rbp-510h]
  void *v156; // [rsp+330h] [rbp-508h]
  __int64 v157; // [rsp+338h] [rbp-500h]
  __int16 v158; // [rsp+3A0h] [rbp-498h]
  void *ptr; // [rsp+3A8h] [rbp-490h]
  __int64 v160; // [rsp+3B0h] [rbp-488h]
  void *v161; // [rsp+3E0h] [rbp-458h] BYREF
  __int64 v162; // [rsp+3E8h] [rbp-450h]
  char v163; // [rsp+3F0h] [rbp-448h] BYREF
  int v164; // [rsp+7F0h] [rbp-48h]
  char v165; // [rsp+7F4h] [rbp-44h]

  v7 = a3;
  v8 = a1;
  LODWORD(v102) = a2;
  v114 = a4;
  v103 = v118;
  sub_1DC3470((__int64)v118, a1, 0, a2, 0, a3, 0, 0, 0, 0);
  if ( !v119 )
  {
    if ( v120 )
    {
      v9 = 0;
LABEL_6:
      sub_1DBAC30(v103);
      return v9;
    }
    v11 = *(_QWORD *)(v7 + 152);
    v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v11 )
    {
      if ( (v11 & 4) != 0 )
      {
        if ( !v12 )
          goto LABEL_26;
        v12 = *(_QWORD *)v12 | 4LL;
      }
      if ( (v12 & 4) != 0 )
      {
LABEL_12:
        if ( (v11 & 4) == 0
          || (v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
          || (v9 = *v13 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
LABEL_15:
          for ( i = (_QWORD *)sub_BBF290(v7);
                (*(_QWORD *)sub_BC3640(i) & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)sub_BC3640(i) & 4) == 0;
                i = (_QWORD *)(*(_QWORD *)sub_BC3640(i) & 0xFFFFFFFFFFFFFFF8LL) )
          {
            ;
          }
          v9 = i[6];
          goto LABEL_20;
        }
        while ( 1 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(v9 + 104) + 192LL);
          if ( (v15 & 0xFFFFFFFFFFFFFFF8LL) == 0 || (v15 & 4) != 0 )
            break;
          v9 = *(_QWORD *)(*(_QWORD *)(v9 + 104) + 192LL) & 0xFFFFFFFFFFFFFFF8LL;
        }
LABEL_20:
        if ( v119 )
          return v9;
        goto LABEL_6;
      }
    }
LABEL_26:
    v16 = (_QWORD *)sub_BBF290(v7);
    v131 = 0x400000000LL;
    v105 = v16;
    dest = &v132;
    p_dest = &dest;
    src = &v135;
    v121 = &v123;
    p_src = &src;
    v134 = 0x400000000LL;
    v113 = &v121;
    v122 = 0x400000000LL;
    sub_BC4340(v16, (__int64 *)&v121);
    v18 = (__int64 *)v121;
    v165 = 0;
    v112 = (__int64 *)&v161;
    v161 = &v163;
    v162 = 0x1000000000LL;
    v164 = v102;
    v107 = (__int64 *)((char *)v121 + 8 * (unsigned int)v122);
    if ( v121 != v107 )
    {
      v19 = (__int64 *)&v136;
      v109 = 0x400000000LL;
      v106 = a1;
      v101 = (unsigned __int64)&v141;
      v108 = v7;
      while ( 1 )
      {
        v20 = *v18;
        v21 = v105[9];
        v22 = *(_QWORD *)(v21 + 64);
        v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v22 & 1) == 0 )
        {
          v24 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v22 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v25 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v22 & 2) == 0 )
              goto LABEL_31;
            v66 = v24[2295];
            v67 = v21 & 0xFFFFFFFFFFFFFFFBLL;
            if ( v66 )
            {
              v68 = v24[294];
              v24[304] += 24LL;
              v69 = (v68 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v24[295] >= v69 + 24 && v68 )
              {
                v24[294] = v69 + 24;
                v70 = (v68 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v104 = (_BYTE *)v66;
                v70 = sub_986170((__int64)(v24 + 294), 24, 24, 3, v66, v17);
                v66 = (__int64)v104;
                v69 = v70 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v70 = v66;
              v67 = v69 | 4;
              *(_DWORD *)(v70 + 8) = 0;
              *(_QWORD *)(v70 + 16) = v21;
            }
            v23 = v67 & 0xFFFFFFFFFFFFFFFELL;
            v22 = v23 | 1;
            *(_QWORD *)(v21 + 64) = v23 | 1;
          }
        }
        v71 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = (_QWORD *)v71;
        if ( v23 )
        {
          if ( (v23 & 4) != 0 )
          {
            v25 = nullptr;
            if ( v71 )
            {
              v72 = *(__int64 **)v71;
              v73 = *(_DWORD *)(*(_QWORD *)v71 + 12LL);
              if ( *(_DWORD *)(v71 + 8) != v73 )
              {
                *(_DWORD *)(v71 + 8) = v73;
                v74 = *v72;
                v104 = (_BYTE *)v71;
                (*(void (__fastcall **)(__int64 *, __int64))(v74 + 152))(v72, v21);
                v71 = (unsigned __int64)v104;
              }
              v25 = *(_QWORD **)(v71 + 16);
            }
          }
        }
LABEL_31:
        if ( (*(_BYTE *)sub_BC3640(v25) & 4) == 0 )
          goto LABEL_37;
        v30 = (__int64)sub_7052B0(
                         (__int64 *)(*(_QWORD *)(v20 + 104) + 96LL),
                         *(_QWORD *)(v20 + 104),
                         v26,
                         v27,
                         v28,
                         v29);
        while ( sub_B97450(v30) )
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)(v30 + 96);
            v30 = 0;
            if ( (v31 & 3) != 0 )
              break;
            v30 = v31 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !sub_B97450(v31 & 0xFFFFFFFFFFFFFFFCLL) )
              goto LABEL_36;
          }
        }
LABEL_36:
        if ( (*(_BYTE *)(*(_QWORD *)(v30 + 104) + 192LL) & 4) != 0 )
        {
LABEL_37:
          v158 = 0;
          LODWORD(v137) = v164;
          WORD2(v137) = 0;
          v140 = v109;
          v139 = (unsigned __int8 *)v101;
          v146 &= 0xFFFFFFFE00000000LL;
          v148 &= 0xFFFFFFFE00000000LL;
          v152 = v19 + 32;
          v153 = 0x800000000LL;
          v156 = v19 + 44;
          ptr = v19 + 59;
          v157 = v109;
          v32 = *(_QWORD *)(v108 + 168);
          v160 = v109;
          v136 = 0;
          v138 = 0;
          v32 += 8;
          v145 = 0;
          v147 = 0;
          v149 = 0;
          v150 = 0;
          v151 = 0;
          v155 = 0;
          v33 = *(unsigned int *)(v32 - 8);
          v154 = 0;
          v34 = sub_1D720F0(v106, v20, v32, v33, (__int64)v19, (__m128)0LL, *(double *)a6.m128_u64, a7);
          if ( v34 )
          {
            v75 = (__m128i *)((char *)v161 + 64 * (unsigned __int64)(unsigned int)v162);
            if ( (unsigned int)v162 >= (unsigned __int64)HIDWORD(v162) )
            {
              v88 = (unsigned int)v162 + 1LL;
              *(_OWORD *)v127 = 0;
              v89 = (const __m128i *)v127;
              v128 = 0;
              memset(v129, 0, sizeof(v129));
              if ( HIDWORD(v162) < v88 )
              {
                v104 = v161;
                if ( v161 > v127 || (v116 = v127, v75 <= (__m128i *)v127) )
                {
                  LODWORD(v104) = v34;
                  sub_2237220(v112, v112 + 2, v88, 64);
                  v89 = (const __m128i *)v127;
                  v34 = (int)v104;
                  v75 = (__m128i *)((char *)v161 + 64 * (unsigned __int64)(unsigned int)v162);
                }
                else
                {
                  v115 = v34;
                  sub_2237220(v112, v112 + 2, v88, 64);
                  v34 = v115;
                  v89 = (const __m128i *)((char *)v161 + (char *)v116 - v104);
                  v75 = (__m128i *)((char *)v161 + 64 * (unsigned __int64)(unsigned int)v162);
                }
              }
              *v75 = _mm_loadu_si128(v89);
              v75[1] = _mm_loadu_si128(v89 + 1);
              v75[2] = _mm_loadu_si128(v89 + 2);
              v75[3] = _mm_loadu_si128(v89 + 3);
              v76 = (unsigned int)(v162 + 1);
              LODWORD(v162) = v162 + 1;
            }
            else
            {
              *v75 = 0;
              v75[1] = 0;
              v75[2] = 0;
              v75[3] = 0;
              v76 = (unsigned int)(v162 + 1);
              LODWORD(v162) = v162 + 1;
            }
            v77 = (__m128i *)((char *)v161 + 64 * v76 - 64);
            sub_1BD97A0((__int64)&v124, *(_QWORD *)(v106 + 248), v34, v19);
            a6 = (__m128)_mm_load_si128(&v124);
            a7 = _mm_load_si128(&v125);
            v78 = _mm_load_si128(&v126);
            *(__m128 *)v127 = a6;
            v128 = a7;
            v129[0] = v78;
            v77->m128i_i64[0] = (__int64)v105;
            v77->m128i_i64[1] = v20;
            v77[1] = _mm_load_si128((const __m128i *)v127);
            v77[2] = _mm_load_si128(&v128);
            v77[3] = _mm_load_si128(v129);
          }
          else
          {
            v35 = p_dest;
            if ( BYTE5(v137) )
              v35 = p_src;
            v36 = *((_BYTE **)&v136 + 1);
            *((_QWORD *)&v136 + 1) = 0;
            v37 = *((unsigned int *)v35 + 2);
            if ( v37 + 1 > (unsigned __int64)*((unsigned int *)v35 + 3) )
            {
              v104 = v36;
              sub_2237220(v35, v35 + 2, v37 + 1, 16);
              v37 = *((unsigned int *)v35 + 2);
              v36 = v104;
            }
            v38 = (__int64 *)((char *)*v35 + 16 * v37);
            *v38 = v20;
            v38[1] = (__int64)v36;
            ++*((_DWORD *)v35 + 2);
          }
          if ( ptr != v19 + 59 )
            free(ptr);
          if ( v156 != v19 + 44 )
            free(v156);
          if ( v152 != v19 + 32 )
            free(v152);
          v39 = v139;
          v40 = &v139[32 * (unsigned int)v140];
          if ( v139 != v40 )
          {
            v104 = v19;
            do
            {
              v40 -= 32;
              v41 = *((_QWORD *)v40 + 1);
              if ( v41 )
              {
                v42 = *((_QWORD *)v40 + 2);
                if ( v42 )
                {
                  if ( v41 < v42 || v41 > v42 + 14848 )
                  {
                    v43 = *(_QWORD **)(v41 + 528);
                    v44 = &v43[8 * (unsigned __int64)*(unsigned int *)(v41 + 536)];
                    if ( v43 != v44 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v44 -= 8;
                          v45 = (_QWORD *)v44[3];
                          if ( v45 == v44 + 5 )
                            break;
                          operator delete(v45);
                          if ( v43 == v44 )
                            goto LABEL_57;
                        }
                      }
                      while ( v43 != v44 );
LABEL_57:
                      v44 = *(_QWORD **)(v41 + 528);
                    }
                    if ( v44 != (_QWORD *)(v41 + 544) )
                      free(v44);
                    v46 = *(void **)(v41 + 416);
                    v47 = (void **)(v41 + 416);
                    if ( v46 != (void *)(v41 + 432) )
                      free(v46);
                    v48 = (void **)(v41 + 96);
                    do
                    {
                      while ( 1 )
                      {
                        v47 -= 4;
                        if ( *v47 == v47 + 2 )
                          break;
                        operator delete(*v47);
                        if ( v48 == v47 )
                          goto LABEL_65;
                      }
                    }
                    while ( v48 != v47 );
LABEL_65:
                    operator delete((void *)v41, 0x3A0u);
                  }
                  else
                  {
                    v65 = *(unsigned int *)(v42 + 14976);
                    *(_DWORD *)(v42 + 14976) = v65 + 1;
                    *(_QWORD *)(v42 + 8 * v65 + 14848) = v41;
                  }
                }
              }
            }
            while ( v39 != v40 );
            v19 = (__int64 *)v104;
            v40 = v139;
          }
          if ( v40 != (unsigned __int8 *)v101 )
            free(v40);
        }
        if ( v107 == ++v18 )
        {
          v8 = v106;
          v7 = v108;
          break;
        }
      }
    }
    v49 = (unsigned int)v131;
    if ( (_DWORD)v131 || !(_BYTE)v114 )
    {
LABEL_74:
      if ( v49 )
      {
        v50 = dest;
        goto LABEL_76;
      }
LABEL_89:
      v64 = v112;
      sub_1BD6E90(v112);
      if ( v161 != v64 + 2 )
        free(v161);
      if ( v121 != v113 + 2 )
        free(v121);
      if ( src != p_src + 2 )
        free(src);
      if ( dest != p_dest + 2 )
        free(dest);
      v11 = *(_QWORD *)(v7 + 152);
      if ( !v11 )
        goto LABEL_15;
      goto LABEL_12;
    }
    v90 = src;
    if ( src != p_src + 2 )
    {
      if ( dest != p_dest + 2 )
      {
        free(dest);
        v90 = src;
      }
      v91 = v134;
      v49 = (unsigned int)v134;
      dest = v90;
      v134 = 0;
      v131 = v91;
      src = p_src + 2;
      goto LABEL_74;
    }
    v49 = (unsigned int)v134;
    v92 = v134;
    if ( !(_DWORD)v134 )
      goto LABEL_89;
    if ( (unsigned int)v134 > (unsigned __int64)HIDWORD(v131) )
    {
      v101 = (unsigned int)v134;
      sub_2237220(p_dest, p_dest + 2, (unsigned int)v134, 16);
      v49 = v101;
      v90 = src;
      v50 = dest;
      v93 = 16LL * (unsigned int)v134;
      if ( !v93 )
        goto LABEL_158;
    }
    else
    {
      v50 = dest;
      v93 = 16LL * (unsigned int)v134;
    }
    v101 = v49;
    memcpy(v50, v90, v93);
    v50 = dest;
    v49 = v101;
LABEL_158:
    LODWORD(v131) = v92;
    LODWORD(v134) = 0;
LABEL_76:
    v51 = (_QWORD *)*v50;
    if ( v49 != 1 )
    {
      v52 = (_QWORD **)(v50 + 2);
      v53 = (_QWORD **)&v50[2 * v49];
      if ( v50 + 2 == v53 )
      {
        v56 = (_QWORD **)v50;
      }
      else
      {
        v54 = (_QWORD *)*v50;
        while ( 1 )
        {
          while ( 1 )
          {
            v55 = sub_1D73490(v8, *v52, v54, v102);
            v54 = *v52;
            if ( v55 == *v52 )
              break;
            v52 += 2;
            v54 = (_QWORD *)*v50;
            if ( v53 == v52 )
            {
              v51 = (_QWORD *)*v50;
              goto LABEL_82;
            }
          }
          if ( v53 == v52 + 2 )
            break;
          v50 = v52;
          v52 += 2;
        }
        v51 = *v52;
        v50 = v52;
LABEL_82:
        v56 = (_QWORD **)dest;
        v49 = (unsigned int)v131;
      }
      v57 = 2 * v49;
      v58 = &v56[v57];
      if ( &v56[v57] != v56 )
      {
        v59 = v51;
        while ( 1 )
        {
          if ( v56 != v50 )
          {
            v60 = sub_1D73490(v8, *v56, v59, v102);
            v59 = (_QWORD *)*v50;
            if ( v60 != (_QWORD *)*v50 )
              break;
          }
          v56 += 2;
          if ( v58 == v56 )
            goto LABEL_88;
        }
        if ( !v119 )
          sub_1DBAC30(v103);
        sub_168B9F0((__int64)&v136, (__int64 *)(v8 + 8), v102, 0x12C0u, 0);
        if ( v142 )
        {
          sub_1DB86A0(&v139, v7);
        }
        else if ( v144 )
        {
          v98 = sub_168B9E0(&v136);
          v99 = v137;
          if ( v137 )
            v99 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v137 + 32))(v137);
          v127[0] = v99;
          v100 = sub_1587BC0(v98, (__int64 *)v127, v94, v95, v96, v97);
          sub_1DB86A0((unsigned __int8 **)(*v100 + 32LL * v143 + 8), v7);
        }
        sub_15F7200(&v136);
        v79 = (unsigned int **)dest;
        v101 = (unsigned __int64)&v117;
        v80 = (unsigned int **)((char *)dest + 16 * (unsigned int)v131);
        if ( dest != v80 )
        {
          do
          {
            sub_168B9F0((__int64)&v136, (__int64 *)(v8 + 8), (*v79)[6], 0x1878u, 0);
            sub_1CB6030((__int64)v127, v8, *((_QWORD *)*v79 + 23), v79[1]);
            if ( v142 )
            {
              sub_AEC220(&v139, (_BYTE *)v127[0], (signed __int64)v127[1]);
            }
            else if ( v144 )
            {
              v81 = sub_168B9E0(&v136);
              v85 = (__int64)v137;
              if ( v137 )
              {
                v86 = *v137;
                v102 = v81;
                v85 = (*(__int64 (__fastcall **)(__int64 *))(v86 + 32))(v137);
                v81 = v102;
              }
              v117 = v85;
              v87 = sub_1587BC0(v81, (__int64 *)v101, v81, v82, v83, v84);
              sub_AEC220((unsigned __int8 **)(*v87 + 32LL * v143 + 8), (_BYTE *)v127[0], (signed __int64)v127[1]);
            }
            if ( v127[0] != &v128 )
              operator delete(v127[0]);
            v79 += 2;
            sub_15F7200(&v136);
          }
          while ( v80 != v79 );
        }
        v9 = 0;
        sub_1BD6E90(v112);
        if ( v161 != v112 + 2 )
          free(v161);
        if ( v121 != v113 + 2 )
          free(v121);
        if ( src != p_src + 2 )
          free(src);
        if ( dest != p_dest + 2 )
          free(dest);
        goto LABEL_20;
      }
    }
LABEL_88:
    v61 = (__int64 *)v50[1];
    v62 = sub_B8C330(v7);
    v63 = sub_1DBD500((__int64 *)(v62 + 2352), 16, 3u);
    v101 = (unsigned __int64)v61;
    *(__m128 *)v63 = _mm_loadh_ps((const double *)&v101);
    *(_QWORD *)(v7 + 152) = v63 | 4;
    goto LABEL_89;
  }
  return 0;
}
