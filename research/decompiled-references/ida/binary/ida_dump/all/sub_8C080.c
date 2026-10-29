__int64 __fastcall sub_8C080(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  int v9; // eax
  int v10; // r12d
  int v12; // eax
  unsigned int v13; // edx
  int v14; // r13d
  int v15; // eax
  int v16; // eax
  int v17; // r14d
  _QWORD *func; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r12
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 v30; // r12
  __m128i v31; // xmm0
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 *v34; // r12
  __int64 v35; // r12
  __int64 v36; // r14
  __int64 *v37; // r14
  __int64 (__fastcall *v38)(_QWORD *); // rax
  __int64 *v39; // r12
  __int64 *v40; // rdi
  __int64 v41; // rdi
  int v42; // eax
  unsigned __int64 *v43; // r10
  unsigned __int64 v44; // r12
  unsigned __int64 i; // r12
  unsigned __int64 v46; // r14
  __int64 v47; // rax
  unsigned __int64 *v48; // r10
  unsigned __int64 *v49; // r11
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r12
  __m128i v54; // xmm0
  __m128i v55; // xmm0
  __int64 v56; // rdi
  int v57; // eax
  unsigned __int64 v58; // r12
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  bool v62; // cf
  __int64 v63; // rax
  __int64 v64; // r15
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rdx
  __int64 v69; // rax
  _QWORD *v70; // rax
  unsigned __int64 v71; // r14
  unsigned __int64 v72; // r15
  __int64 v73; // r13
  _QWORD *v74; // rdi
  __int64 v75; // rdi
  __int64 v76; // rdx
  __m128i v77; // xmm0
  __int64 v78; // rcx
  _DWORD *v79; // rdi
  __int64 v80; // rcx
  _DWORD *v81; // rdi
  unsigned __int64 *v82; // r10
  __m128i si128; // xmm0
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 v86; // rdx
  int v87; // r12d
  __int64 *v88; // r14
  __int64 *v89; // r14
  __int64 v90; // rax
  __int64 *v91; // rdi
  __int64 *v92; // rdi
  char v93; // al
  int v94; // eax
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 v98; // rdi
  int v99; // eax
  int v100; // eax
  unsigned __int64 v101; // r14
  __int64 v102; // rax
  unsigned __int64 *v103; // r10
  unsigned __int64 *v104; // r11
  char v105; // al
  __int64 v106; // rax
  char v107; // al
  __int64 v108; // rdx
  __m128i v109; // xmm0
  __int64 v110; // rcx
  _DWORD *v111; // rdi
  __int64 v112; // rcx
  _DWORD *v113; // rdi
  unsigned __int64 v114; // r10
  __m128i v115; // xmm0
  __m128i v116; // xmm0
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // rdi
  _QWORD *v122; // r14
  int v123; // ecx
  int v124; // r8d
  int v125; // r13d
  unsigned __int64 *v126; // r14
  int v127; // r13d
  unsigned __int64 *v128; // r14
  __int64 v129; // rax
  int v130; // edx
  int v131; // ecx
  int v132; // r8d
  int v133; // r9d
  __int64 *v134; // rax
  __int64 *v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 *v138; // r14
  __int64 v139; // rax
  __int64 v140; // rdi
  unsigned __int64 v141; // rdx
  unsigned __int64 v142; // rdx
  __int64 *v143; // r13
  __int64 *v144; // r14
  __int64 v145; // rax
  size_t n[2]; // [rsp+0h] [rbp-188h] BYREF
  __m128i v147; // [rsp+10h] [rbp-178h] BYREF
  __int64 v148; // [rsp+20h] [rbp-168h]
  unsigned __int64 v149; // [rsp+28h] [rbp-160h]
  int v150; // [rsp+30h] [rbp-158h]
  char v151; // [rsp+37h] [rbp-151h]
  __m128i *v152; // [rsp+38h] [rbp-150h]
  unsigned __int64 *v153; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v154; // [rsp+48h] [rbp-140h]
  int v155; // [rsp+50h] [rbp-138h]
  const __m128i *v156; // [rsp+58h] [rbp-130h] BYREF
  const __m128i *v157; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int64 *v158; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v159; // [rsp+70h] [rbp-118h] BYREF
  __m128i v160; // [rsp+78h] [rbp-110h]
  __int64 v161; // [rsp+88h] [rbp-100h]
  void *src; // [rsp+90h] [rbp-F8h]
  __int128 v163; // [rsp+98h] [rbp-F0h]
  void *v164; // [rsp+A8h] [rbp-E0h]
  __int128 v165; // [rsp+B0h] [rbp-D8h]
  __int64 v166; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v167; // [rsp+C8h] [rbp-C0h]
  __int64 v168; // [rsp+D0h] [rbp-B8h]
  int v169; // [rsp+D8h] [rbp-B0h]
  _BYTE v170[24]; // [rsp+E0h] [rbp-A8h] BYREF
  int v171; // [rsp+F8h] [rbp-90h]
  void *v172; // [rsp+100h] [rbp-88h]
  __int128 v173; // [rsp+108h] [rbp-80h]
  void *v174; // [rsp+118h] [rbp-70h]
  __int128 v175; // [rsp+120h] [rbp-68h]
  __int64 v176; // [rsp+130h] [rbp-58h]
  unsigned __int64 v177; // [rsp+138h] [rbp-50h]
  __int64 v178; // [rsp+140h] [rbp-48h]
  unsigned __int64 v179; // [rsp+148h] [rbp-40h]

  v179 = __readfsqword(0x28u);
  v9 = sub_7CD20((_QWORD *)a2);
  *(_DWORD *)(a2 + 48) = v9;
  if ( (unsigned int)(v9 - 1) > 0xC )
    return 0;
  v12 = sub_7CD20((_QWORD *)a2);
  v13 = *(_DWORD *)(a2 + 48);
  v14 = v12;
  v15 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 44) = v15;
  if ( v13 <= 3 )
  {
    if ( !v14 )
    {
      if ( v15 != 4 )
      {
        *(_DWORD *)(a2 + 40) = 4;
        v14 = 4;
        goto LABEL_8;
      }
      goto LABEL_114;
    }
    if ( v14 != v15 )
    {
      if ( v14 != 4 )
        goto LABEL_85;
      goto LABEL_113;
    }
LABEL_111:
    if ( v14 == 3 )
      return 0;
    goto LABEL_89;
  }
  if ( v14 != v15 )
  {
    if ( v14 != 4 )
    {
      if ( !v14 )
      {
        if ( v15 == 4 )
          return 0;
        *(_DWORD *)(a2 + 40) = 0;
LABEL_8:
        LODWORD(n[0]) = sub_7CD20((_QWORD *)a2);
        v16 = sub_7CD20((_QWORD *)a2);
        *(_DWORD *)a1 = v16 & 0xEFFFFFFF;
        v17 = v16 & 4;
        if ( (v16 & 4) != 0 )
          return 0;
        *(_DWORD *)(a1 + 4) = sub_7CD20((_QWORD *)a2);
        if ( *(_DWORD *)(a2 + 48) > 3u )
        {
          if ( *(_DWORD *)(a2 + 40) == 4 )
          {
            a3 = sub_7CEC0((_QWORD *)a2);
          }
          else if ( a3 == -1 )
          {
            return 0;
          }
          *(_QWORD *)(a2 + 32) = a3;
          *(_QWORD *)(a1 + 40) = a3;
          if ( SLOBYTE(n[0]) < 0 )
          {
            if ( !(unsigned __int8)sub_7DB20(a2, a1 + 16) || !*(_QWORD *)(a1 + 24) )
              return 0;
            v70 = *(_QWORD **)(a1 + 8);
            if ( !v70 )
              v70 = *(_QWORD **)(a1 + 16);
            if ( *(_QWORD *)(a1 + 40) != *v70 )
              return 0;
          }
          else
          {
            func = (_QWORD *)get_func();
            *(_QWORD *)(a1 + 8) = func;
            if ( !func
              || *func != *(_QWORD *)(a1 + 40)
              || *(_DWORD *)(a2 + 48) > 4u && !(unsigned __int8)sub_7DB20(a2, a1 + 16) )
            {
              return 0;
            }
          }
LABEL_16:
          *(_QWORD *)(a1 + 48) = sub_7CFC0(a2, 1u);
          *(_QWORD *)(a1 + 56) = sub_7CFC0(a2, 1u);
          *(_DWORD *)(a1 + 68) = sub_7CD20((_QWORD *)a2) - 1;
          *(_DWORD *)(a1 + 72) = sub_7DD90((unsigned __int8 **)a2);
          *(_QWORD *)(a1 + 80) = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 88) = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 96) = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 104) = sub_7D020(a2, 0);
          *(_DWORD *)(a1 + 112) = sub_7CD20((_QWORD *)a2);
          *(_DWORD *)(a1 + 116) = sub_7CD20((_QWORD *)a2);
          *(_DWORD *)(a1 + 120) = sub_7CD20((_QWORD *)a2);
          *(_QWORD *)(a1 + 128) = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 136) = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 144) = sub_7D020(a2, 0);
          v19 = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 152) = v19;
          v20 = v19;
          v21 = sub_1CE9E0(a1);
          sub_1CEA30(a1, v21, v20);
          *(_QWORD *)(a1 + 160) = sub_7CFC0(a2, 1u);
          *(_QWORD *)(a1 + 168) = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 176) = sub_7D020(a2, 0);
          v22 = *(_DWORD *)(a2 + 48);
          if ( v22 > 8 )
          {
            if ( !(unsigned __int8)sub_7F110((__int64 *)(a1 + 1448), (char **)a2) )
              return 0;
            v22 = *(_DWORD *)(a2 + 48);
          }
          if ( v22 <= 6 )
            goto LABEL_18;
          if ( !(unsigned __int8)sub_7F300((__int64 *)(a1 + 1472), (_QWORD *)a2) )
            return 0;
          if ( *(_DWORD *)(a2 + 48) <= 9u )
          {
LABEL_18:
            *(_OWORD *)v170 = 0;
            if ( !(unsigned __int8)sub_7DFD0((__int64 *)v170, a2) || !(unsigned __int8)sub_7DFD0((__int64 *)v170, a2) )
              return 0;
          }
          if ( !(unsigned __int8)sub_7E080((__int64 *)(a1 + 184), a2)
            || !(unsigned __int8)sub_7E080((__int64 *)(a1 + 208), a2)
            || !(unsigned __int8)sub_7E080((__int64 *)(a1 + 232), a2)
            || !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 256), (unsigned __int64 *)a2)
            || !(unsigned __int8)sub_7E660((__int64 *)(a1 + 296), (unsigned __int64 *)a2) )
          {
            return 0;
          }
          *(_DWORD *)(a1 + 312) = sub_7CD20((_QWORD *)a2);
          *(_DWORD *)(a1 + 316) = sub_7CD20((_QWORD *)a2);
          v23 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 320) = n[0];
          *(_BYTE *)(a1 + 320) &= 1u;
          sub_7D2C0((unsigned __int8 **)a2, a1 + 328, v23);
          if ( (*(_BYTE *)a1 & 0x20) != 0 )
          {
            sub_7C6D0((_QWORD *)a2, (__int64 *)(a1 + 336));
            if ( !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 360), (unsigned __int64 *)a2) )
              return 0;
          }
          else
          {
            if ( *(_QWORD *)(a1 + 336) )
            {
              *(_QWORD *)(a1 + 344) = 0;
              qfree();
              *(_QWORD *)(a1 + 336) = 0;
              *(_QWORD *)(a1 + 352) = 0;
            }
            v75 = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(a1 + 368) = 0;
            if ( v75 )
            {
              *(_QWORD *)(a1 + 384) = 0;
              qfree();
              *(_QWORD *)(a1 + 376) = 0;
              *(_QWORD *)(a1 + 392) = 0;
            }
          }
          *(_DWORD *)(a1 + 400) = sub_7CD20((_QWORD *)a2);
          if ( *(_DWORD *)(a2 + 48) <= 3u )
            sub_7CEC0((_QWORD *)a2);
          sub_7D150((__int64)v170, (_QWORD *)a2);
          v24 = *(_QWORD *)(a1 + 408);
          v25 = *(_QWORD *)v170;
          v26 = _mm_loadu_si128((const __m128i *)&v170[8]);
          memset(v170, 0, sizeof(v170));
          if ( v24 )
          {
            v147 = v26;
            *(_QWORD *)(a1 + 416) = 0;
            qfree();
            v26 = _mm_load_si128(&v147);
          }
          v27 = *(_QWORD *)v170;
          *(_QWORD *)(a1 + 408) = v25;
          *(__m128i *)(a1 + 416) = v26;
          if ( v27 )
          {
            *(_QWORD *)&v170[8] = 0;
            qfree();
          }
          if ( !(unsigned __int8)sub_88A40((_QWORD *)a2, (__int64 *)(a1 + 432)) )
            return 0;
          v28 = *(_QWORD *)(a1 + 432);
          for ( v147.m128i_i64[0] = v28 + 104LL * *(_QWORD *)(a1 + 440); v147.m128i_i64[0] != v28; v28 += 104 )
            sub_7DE20(v28, (unsigned __int8 **)a2);
          if ( !(unsigned __int8)sub_7D530((_QWORD *)a2, (__int64 *)(a1 + 456)) )
            return 0;
          *(_DWORD *)(a1 + 480) = sub_7CD20((_QWORD *)a2) - 1;
          *(_QWORD *)(a1 + 488) = sub_7CFC0(a2, 1u);
          sub_7D150((__int64)v170, (_QWORD *)a2);
          v29 = *(_QWORD *)(a1 + 496);
          v30 = *(_QWORD *)v170;
          v31 = _mm_loadu_si128((const __m128i *)&v170[8]);
          memset(v170, 0, sizeof(v170));
          if ( v29 )
          {
            v147 = v31;
            *(_QWORD *)(a1 + 504) = 0;
            qfree();
            v31 = _mm_load_si128(&v147);
          }
          v32 = *(_QWORD *)v170;
          *(_QWORD *)(a1 + 496) = v30;
          *(__m128i *)(a1 + 504) = v31;
          if ( v32 )
          {
            *(_QWORD *)&v170[8] = 0;
            qfree();
          }
          *(_DWORD *)(a1 + 64) = sub_7CD20((_QWORD *)a2);
          *(_QWORD *)(a1 + 520) = 0;
          v151 = 0;
          while ( *(_DWORD *)(a1 + 64) > v17 )
          {
            v33 = j__qalloc_or_throw();
            sub_330B10(v33, *(_QWORD *)(a1 + 1496));
            *(_DWORD *)(v33 + 72) = v17;
            sub_67BE0(a1, v33, 0);
            if ( !(unsigned __int8)sub_8BB70(v33, a2, a1) )
              return 0;
            ++v17;
            v151 |= (*(_BYTE *)(v33 + 24) & 8) != 0;
          }
          sub_67D80(a1);
          sub_1D4FD0(a1);
          v34 = (__int64 *)(a1 + 536);
          do
          {
            if ( !(unsigned __int8)sub_7DFD0(v34, a2) )
              return 0;
            v34 += 4;
          }
          while ( (__int64 *)(a1 + 728) != v34 );
          sub_1AEE70(a1);
          LOBYTE(v149) = sub_82A00((_QWORD *)a2, (__int64 *)(a1 + 728));
          if ( !(_BYTE)v149 )
            return 0;
          v35 = *(_QWORD *)(a1 + 728);
          v36 = v35 + 40LL * *(_QWORD *)(a1 + 736);
          while ( v35 != v36 )
          {
            sub_7EBF0(v35, (_QWORD *)a2);
            v35 += 40;
          }
          sub_7D240(a2, (_BYTE *)(a1 + 752), 32);
          v37 = *(__int64 **)(a1 + 784);
          if ( v37 )
          {
            v38 = *(__int64 (__fastcall **)(_QWORD *))(*v37 + 8);
            if ( v38 == sub_66F30 )
            {
              v39 = v37 + 27;
              *v37 = (__int64)off_4EC750;
              v147.m128i_i64[0] = (__int64)(v37 + 3);
              do
              {
                v40 = v39;
                v39 -= 4;
                sub_66C80(v40);
              }
              while ( (__int64 *)v147.m128i_i64[0] != v39 );
              v41 = v37[1];
              *v37 = (__int64)&unk_4EC808;
              if ( v41 )
              {
                v37[2] = 0;
                qfree();
              }
              j__qfree();
            }
            else
            {
              v38(*(_QWORD **)(a1 + 784));
            }
          }
          *(_QWORD *)(a1 + 784) = 0;
          if ( (n[0] & 2) != 0 )
            sub_670E0((_QWORD *)a1);
          v42 = sub_7CD20((_QWORD *)a2);
          v43 = *(unsigned __int64 **)(a1 + 816);
          *(_DWORD *)(a1 + 792) = v42;
          *(_OWORD *)(a1 + 800) = 0;
          if ( !v43 )
            goto LABEL_184;
          v44 = *v43;
          if ( !*(_QWORD *)(a1 + 824) )
          {
            *v43 = *v43 & 3 | (unsigned __int64)v43 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816));
            **(_QWORD **)(a1 + 816) &= ~1uLL;
            **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_64:
            v150 = sub_7D4F0((_QWORD *)a2);
            if ( v150 < 0 )
              return 0;
            i = *(_QWORD *)(a1 + 816);
            v147.m128i_i64[0] = a1 + 816;
            v152 = (__m128i *)&v159;
LABEL_66:
            while ( 2 )
            {
              if ( --v150 != -1 )
              {
                if ( (unsigned __int8)is_cvt64() )
                  v46 = (int)sub_7CD20((_QWORD *)a2);
                else
                  v46 = sub_7CD40(a2);
                if ( (unsigned __int8)is_cvt64() )
                  v47 = (int)sub_7CD20((_QWORD *)a2);
                else
                  v47 = sub_7CD40(a2);
                v160.m128i_i64[0] = v47;
                v48 = *(unsigned __int64 **)(a1 + 816);
                v159 = v46;
                v49 = v48;
                v156 = v152;
                if ( v48 )
                {
                  if ( *(_QWORD *)(a1 + 824) )
                  {
                    v158 = v48;
                    LOBYTE(v157) = 1;
                    *(_QWORD *)v170 = 0;
                    if ( i )
                    {
                      v154 = v48;
                      v153 = v48;
                      v50 = sub_885D0(
                              (unsigned __int64 *)v147.m128i_i64[0],
                              (unsigned __int64 *)v152,
                              (_QWORD *)i,
                              (unsigned __int64 *)&v158,
                              &v157,
                              (unsigned __int64 *)v170);
                      v49 = v153;
                      v48 = v154;
                      if ( v50 )
                      {
                        i = *(_QWORD *)v170;
                        if ( !*(_QWORD *)v170 )
                        {
                          v51 = sub_8A3E0((__m128i *)v147.m128i_i64[0], v158, (char)v157, &v156);
LABEL_77:
                          i = v51;
                        }
                        continue;
                      }
                    }
                    v93 = v149;
                    for ( i = *v48 & 0xFFFFFFFFFFFFFFFCLL; ; i = v142 )
                    {
                      if ( (*(_BYTE *)i & 2) != 0 )
                        goto LABEL_189;
                      v141 = *(_QWORD *)(i + 24);
                      if ( v46 >= v141 )
                      {
                        if ( v141 >= v46 )
                        {
                          if ( !i )
                          {
                            v49 = nullptr;
LABEL_189:
                            v51 = sub_8A3E0((__m128i *)v147.m128i_i64[0], v49, v93, &v156);
                            goto LABEL_77;
                          }
                          goto LABEL_66;
                        }
                        v142 = *(_QWORD *)(i + 16);
                        v93 = 0;
                      }
                      else
                      {
                        v142 = *(_QWORD *)(i + 8);
                        v93 = v149;
                      }
                      v49 = (unsigned __int64 *)i;
                    }
                  }
                }
                else
                {
                  v76 = qalloc();
                  v77 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v76, (__m128i)(unsigned __int64)v76);
                  if ( !v76 )
                  {
                    exception = __cxa_allocate_exception(8u);
                    *exception = (char *)&`vtable for'std::bad_alloc + 16;
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'std::bad_alloc,
                      (void (*)(void *))&std::bad_alloc::~bad_alloc);
                  }
                  v78 = 10;
                  v79 = (_DWORD *)v76;
                  while ( v78 )
                  {
                    *v79++ = 0;
                    --v78;
                  }
                  *(__m128i *)(v76 + 8) = v77;
                  *(_QWORD *)v76 = v76 & 0xFFFFFFFFFFFFFFFCLL | 2;
                  *(_QWORD *)(a1 + 816) = v76;
                  *(_QWORD *)v76 = v76 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v76 & 3LL;
                  *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                                (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                                (__m128i)*(unsigned __int64 *)(a1 + 816));
                  **(_QWORD **)(a1 + 816) &= ~1uLL;
                  **(_QWORD **)(a1 + 816) |= 2uLL;
                  v48 = *(unsigned __int64 **)(a1 + 816);
                }
                v153 = v48;
                i = qalloc();
                if ( !i )
                {
                  v4 = __cxa_allocate_exception(8u);
                  *v4 = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    v4,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                v80 = 10;
                v81 = (_DWORD *)i;
                v82 = v153;
                while ( v80 )
                {
                  *v81++ = 0;
                  --v80;
                }
                si128 = _mm_load_si128((const __m128i *)&v159);
                *(_QWORD *)i = (unsigned __int64)v82 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(i + 24) = si128;
                v84 = _mm_loadl_epi64((const __m128i *)(a1 + 816));
                *(_QWORD *)i = (unsigned __int64)v82 & 0xFFFFFFFFFFFFFFFCLL | 1;
                *(__m128i *)(i + 8) = _mm_unpacklo_epi64(v84, v84);
                if ( v82 == *(unsigned __int64 **)(a1 + 816) )
                {
                  *v82 = i & 0xFFFFFFFFFFFFFFFCLL | *v82 & 3;
                  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 8LL) = i;
                  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 16LL) = i;
                  v86 = *(_QWORD *)i & 2LL;
                  *(_QWORD *)i &= ~1uLL;
                  *(_QWORD *)i = v86 | *(_QWORD *)(a1 + 816) & 0xFFFFFFFFFFFFFFFCLL;
                }
                else
                {
                  v82[1] = i;
                  v85 = *(_QWORD *)(a1 + 816);
                  if ( v82 == *(unsigned __int64 **)(v85 + 8) )
                    *(_QWORD *)(v85 + 8) = i;
                  sub_8A110(v147.m128i_i64[0], (__int64 *)i);
                }
                ++*(_QWORD *)(a1 + 824);
                continue;
              }
              break;
            }
            if ( *(_DWORD *)(a2 + 48) > 2u )
            {
              if ( (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 832), (unsigned __int64 *)a2) )
                goto LABEL_170;
              return 0;
            }
            v140 = *(_QWORD *)(a1 + 848);
            *(_QWORD *)(a1 + 840) = 0;
            if ( v140 )
            {
              *(_QWORD *)(a1 + 856) = 0;
              qfree();
              *(_QWORD *)(a1 + 848) = 0;
              *(_QWORD *)(a1 + 864) = 0;
            }
LABEL_170:
            v147.m128i_i64[0] = a1 + 872;
            sub_82C40((unsigned __int64 **)(a1 + 872));
            v87 = sub_7D4F0((_QWORD *)a2);
            if ( v87 < 0 )
              return 0;
            v88 = *(__int64 **)(a1 + 872);
            while ( 1 )
            {
              v62 = v87-- == 0;
              if ( v62 )
                break;
              sub_7D150((__int64)v170, (_QWORD *)a2);
              v88 = (__int64 *)sub_896E0((__m128i *)v147.m128i_i64[0], v88, (__int64)v170);
              if ( *(_QWORD *)v170 )
              {
                *(_QWORD *)&v170[8] = 0;
                qfree();
              }
            }
            *(_DWORD *)(a1 + 888) = sub_7CD20((_QWORD *)a2);
            *(_DWORD *)(a1 + 892) = sub_7CD20((_QWORD *)a2);
            *(_DWORD *)(a1 + 896) = sub_7CD20((_QWORD *)a2);
            *(_DWORD *)(a1 + 900) = sub_7CD20((_QWORD *)a2);
            *(_DWORD *)(a1 + 904) = sub_7CD20((_QWORD *)a2);
            *(_DWORD *)(a1 + 908) = sub_7CD20((_QWORD *)a2);
            v94 = sub_7CD20((_QWORD *)a2);
            v95 = *(_QWORD *)(a1 + 920);
            *(_DWORD *)(a1 + 912) = v94;
            if ( v95 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v95 + 8LL))(v95);
            *(_QWORD *)(a1 + 920) = 0;
            if ( (n[0] & 4) != 0 )
            {
              v96 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 336LL))(*(_QWORD *)(a1 + 1504));
              *(_QWORD *)(a1 + 920) = v96;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v96 + 24LL))(v96, a2) )
                return 0;
            }
            v97 = *(_QWORD *)(a1 + 928);
            if ( v97 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 8LL))(v97);
            v98 = *(_QWORD *)(a1 + 936);
            *(_QWORD *)(a1 + 928) = 0;
            if ( v98 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 8LL))(v98);
            *(_QWORD *)(a1 + 936) = 0;
            if ( (n[0] & 8) != 0 )
            {
              v98 = *(_QWORD *)(a1 + 928);
              if ( !v98 )
              {
                v145 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 312LL))(
                         *(_QWORD *)(a1 + 1504),
                         a1);
                *(_QWORD *)(a1 + 928) = v145;
                v98 = v145;
              }
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v98 + 88LL))(v98, a2);
              if ( (n[0] & 0x10) != 0 )
              {
                v139 = sub_19FD50(*(_QWORD *)(a1 + 928));
                *(_QWORD *)(a1 + 936) = v139;
                v98 = v139;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v139 + 112LL))(v139, a2) )
                  return 0;
              }
            }
            if ( *(_DWORD *)(a2 + 48) <= 4u )
            {
              if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
                sub_7A510(v98);
              v99 = unpack_dd();
              if ( *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 < (unsigned __int64)v99 )
                return 0;
              if ( v99 )
                return 0;
              v100 = sub_7CD20((_QWORD *)a2);
              if ( *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 < (unsigned __int64)v100
                || v100
                || (unsigned int)sub_7D4F0((_QWORD *)a2) )
              {
                return 0;
              }
              sub_7CD20((_QWORD *)a2);
            }
            if ( !(unsigned __int8)sub_7A640(v14, 0, 0x3B8u) || (unsigned __int8)sub_7D6B0(a2, (_QWORD *)(a1 + 952)) )
            {
              v10 = sub_7D6B0(a2, (_QWORD *)(a1 + 1000));
              if ( (_BYTE)v10
                && (!(unsigned __int8)sub_7A640(v14, 0, 0x418u) || (unsigned __int8)sub_7D6B0(a2, (_QWORD *)(a1 + 1048)))
                && (*(_DWORD *)(a2 + 48) > 5u
                 || !(unsigned __int8)sub_7A640(v14, 0, 0x448u)
                 || (unsigned __int8)sub_7D920((_QWORD *)a2)) )
              {
                LOBYTE(v152) = sub_7A640(v14, 0, 0x478u);
                if ( (_BYTE)v152 )
                {
                  v147.m128i_i64[0] = a1 + 1144;
                  sub_83E70((unsigned __int64 **)(a1 + 1144));
                  v150 = sub_7D4F0((_QWORD *)a2);
                  if ( v150 < 0 )
                    return 0;
                  v101 = *(_QWORD *)(a1 + 1144);
LABEL_216:
                  while ( 2 )
                  {
                    while ( 2 )
                    {
                      if ( --v150 == -1 )
                        goto LABEL_251;
                      v149 = sub_7CFC0(a2, 0);
                      v102 = sub_7CFC0(a2, 0);
                      v103 = *(unsigned __int64 **)(a1 + 1144);
                      v157 = (const __m128i *)v170;
                      *(_QWORD *)&v170[8] = v102;
                      *(_QWORD *)v170 = v149;
                      v104 = v103;
                      if ( v103 )
                      {
                        if ( *(_QWORD *)(a1 + 1152) )
                        {
                          v158 = v103;
                          LOBYTE(v156) = 1;
                          v159 = 0;
                          if ( v101 )
                          {
                            v154 = v103;
                            v153 = v103;
                            v105 = sub_885D0(
                                     (unsigned __int64 *)v147.m128i_i64[0],
                                     (unsigned __int64 *)v170,
                                     (_QWORD *)v101,
                                     (unsigned __int64 *)&v158,
                                     &v156,
                                     &v159);
                            v104 = v153;
                            v103 = v154;
                            if ( v105 )
                            {
                              v101 = v159;
                              if ( !v159 )
                              {
                                v106 = sub_8A520((__m128i *)v147.m128i_i64[0], v158, (char)v156, &v157);
LABEL_223:
                                v101 = v106;
                              }
                              continue;
                            }
                          }
                          v101 = *v103 & 0xFFFFFFFFFFFFFFFCLL;
                          v107 = (char)v152;
                          while ( 1 )
                          {
                            if ( (*(_BYTE *)v101 & 2) != 0 )
                              goto LABEL_230;
                            v118 = *(_QWORD *)(v101 + 24);
                            if ( v149 >= v118 )
                            {
                              if ( v118 >= v149 )
                              {
                                if ( !v101 )
                                {
                                  v104 = nullptr;
LABEL_230:
                                  v106 = sub_8A520((__m128i *)v147.m128i_i64[0], v104, v107, &v157);
                                  goto LABEL_223;
                                }
                                goto LABEL_216;
                              }
                              v119 = *(_QWORD *)(v101 + 16);
                              v107 = 0;
                            }
                            else
                            {
                              v119 = *(_QWORD *)(v101 + 8);
                              v107 = (char)v152;
                            }
                            v104 = (unsigned __int64 *)v101;
                            v101 = v119;
                          }
                        }
                      }
                      else
                      {
                        v108 = qalloc();
                        v109 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v108, (__m128i)(unsigned __int64)v108);
                        if ( !v108 )
                        {
                          v5 = __cxa_allocate_exception(8u);
                          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
                          __cxa_throw(
                            v5,
                            (struct type_info *)&`typeinfo for'std::bad_alloc,
                            (void (*)(void *))&std::bad_alloc::~bad_alloc);
                        }
                        v110 = 10;
                        v111 = (_DWORD *)v108;
                        while ( v110 )
                        {
                          *v111++ = 0;
                          --v110;
                        }
                        *(__m128i *)(v108 + 8) = v109;
                        *(_QWORD *)v108 = v108 & 0xFFFFFFFFFFFFFFFCLL | 2;
                        *(_QWORD *)(a1 + 1144) = v108;
                        *(_QWORD *)v108 = v108 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v108 & 3LL;
                        *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                                       (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                                       (__m128i)*(unsigned __int64 *)(a1 + 1144));
                        **(_QWORD **)(a1 + 1144) &= ~1uLL;
                        **(_QWORD **)(a1 + 1144) |= 2uLL;
                        v103 = *(unsigned __int64 **)(a1 + 1144);
                      }
                      break;
                    }
                    v149 = (unsigned __int64)v103;
                    v101 = qalloc();
                    if ( !v101 )
                    {
                      v6 = __cxa_allocate_exception(8u);
                      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
                      __cxa_throw(
                        v6,
                        (struct type_info *)&`typeinfo for'std::bad_alloc,
                        (void (*)(void *))&std::bad_alloc::~bad_alloc);
                    }
                    v112 = 10;
                    v113 = (_DWORD *)v101;
                    v114 = v149;
                    while ( v112 )
                    {
                      *v113++ = 0;
                      --v112;
                    }
                    v115 = _mm_load_si128((const __m128i *)v170);
                    *(_QWORD *)v101 = v114 & 0xFFFFFFFFFFFFFFFCLL;
                    *(__m128i *)(v101 + 24) = v115;
                    v116 = _mm_loadl_epi64((const __m128i *)(a1 + 1144));
                    *(_QWORD *)v101 = v114 & 0xFFFFFFFFFFFFFFFCLL | 1;
                    *(__m128i *)(v101 + 8) = _mm_unpacklo_epi64(v116, v116);
                    if ( v114 == *(_QWORD *)(a1 + 1144) )
                    {
                      *(_QWORD *)v114 = v101 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v114 & 3LL;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 8LL) = v101;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 16LL) = v101;
                      v120 = *(_QWORD *)v101 & 2LL;
                      *(_QWORD *)v101 &= ~1uLL;
                      *(_QWORD *)v101 = v120 | *(_QWORD *)(a1 + 1144) & 0xFFFFFFFFFFFFFFFCLL;
                    }
                    else
                    {
                      *(_QWORD *)(v114 + 8) = v101;
                      v117 = *(_QWORD *)(a1 + 1144);
                      if ( v114 == *(_QWORD *)(v117 + 8) )
                        *(_QWORD *)(v117 + 8) = v101;
                      sub_8A110(v147.m128i_i64[0], (__int64 *)v101);
                    }
                    ++*(_QWORD *)(a1 + 1152);
                    continue;
                  }
                }
LABEL_251:
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x488u)
                  && !(unsigned __int8)sub_7E080((__int64 *)(a1 + 1160), a2) )
                {
                  return 0;
                }
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x4A0u) )
                  *(_DWORD *)(a1 + 1184) = sub_7CD20((_QWORD *)a2) - 1;
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x4A8u) )
                {
                  if ( !(unsigned __int8)sub_7D9D0(a2, (__int64 *)(a1 + 1192)) )
                    return 0;
                  if ( *(_DWORD *)(a2 + 44) == 2 && *(_QWORD *)(a1 + 1192) )
                  {
                    *(_QWORD *)(a1 + 1200) = 0;
                    qfree();
                    *(_QWORD *)(a1 + 1192) = 0;
                    *(_QWORD *)(a1 + 1208) = 0;
                  }
                }
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x4C0u) )
                {
                  if ( !(unsigned __int8)sub_82D50((_QWORD *)a2, (__int64 *)(a1 + 1216)) )
                    return 0;
                  v138 = *(__int64 **)(a1 + 1216);
                  v147.m128i_i64[0] = (__int64)&v138[*(_QWORD *)(a1 + 1224)];
                  while ( (__int64 *)v147.m128i_i64[0] != v138 )
                    *v138++ = sub_7CFC0(a2, 0);
                }
                if ( v151 )
                {
                  v136 = j__qalloc_or_throw();
                  *(_QWORD *)(v136 + 8) = 0;
                  *(_QWORD *)(v136 + 96) = 0;
                  *(_BYTE *)(v136 + 32) = 0;
                  *(_QWORD *)v136 = off_4EBC98;
                  *(_QWORD *)(v136 + 48) = 0;
                  *(_QWORD *)(v136 + 36) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v136 + 72) = 0;
                  *(_QWORD *)(v136 + 120) = 0;
                  *(_DWORD *)(v136 + 144) = 0;
                  *(_QWORD *)(v136 + 152) = 0;
                  *(_OWORD *)(v136 + 16) = 0;
                  *(_OWORD *)(v136 + 56) = 0;
                  *(_OWORD *)(v136 + 80) = 0;
                  *(_OWORD *)(v136 + 104) = 0;
                  *(_OWORD *)(v136 + 128) = 0;
                  *(_OWORD *)(v136 + 160) = 0;
                  *(_QWORD *)(a1 + 1240) = v136;
                  if ( !(unsigned __int8)sub_7E9C0(v136, (_QWORD *)a2) )
                    return 0;
                  v137 = qalloc_or_throw();
                  *(_QWORD *)v137 = 0;
                  *(_OWORD *)(v137 + 8) = 0;
                  *(_QWORD *)(a1 + 1248) = v137;
                  if ( !(unsigned __int8)sub_7DB20(a2, v137) )
                    return 0;
                }
                else
                {
                  v121 = *(_QWORD *)(a1 + 1240);
                  if ( v121 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v121 + 8LL))(v121);
                  v122 = *(_QWORD **)(a1 + 1248);
                  *(_QWORD *)(a1 + 1240) = 0;
                  if ( v122 )
                  {
                    if ( *v122 )
                    {
                      v122[1] = 0;
                      qfree();
                    }
                    qfree();
                  }
                  *(_QWORD *)(a1 + 1248) = 0;
                }
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x4E8u) )
                {
                  sub_2D7F40(a1 + 1256, a2);
                  if ( *(_DWORD *)(a2 + 44) == 2 )
                    sub_83D10((unsigned __int64 **)(a1 + 1256));
                }
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x520u) )
                {
                  if ( !(unsigned __int8)sub_2D5590(a1 + 1312, a2, *(_QWORD *)(a2 + 8)) )
                    return 0;
                  if ( *(_DWORD *)(a2 + 44) == 2 )
                    sub_83F70((unsigned __int64 **)(a1 + 1312));
                }
                if ( *(_QWORD *)(a1 + 1328) )
                {
                  sub_82E00(*(__int64 **)(a1 + 1328));
                  qfree();
                }
                *(_QWORD *)(a1 + 1328) = 0;
                if ( (n[0] & 0x20) != 0 )
                  *(_QWORD *)(a1 + 1328) = sub_2D2D60(a2);
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x540u) )
                {
                  if ( *(_QWORD *)(a1 + 1344) )
                  {
                    sub_82FA0(*(__int64 **)(a1 + 1344));
                    qfree();
                  }
                  *(_QWORD *)(a1 + 1344) = 0;
                  if ( (n[0] & 0x40) != 0 )
                  {
                    v134 = (__int64 *)sub_2D5B10(a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 32));
                    *(_QWORD *)(a1 + 1344) = v134;
                    if ( *(_DWORD *)(a2 + 44) == 2 )
                    {
                      if ( v134 )
                      {
                        sub_82FA0(v134);
                        qfree();
                      }
                      *(_QWORD *)(a1 + 1344) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x538u) )
                {
                  if ( *(_QWORD *)(a1 + 1336) )
                  {
                    sub_83120(*(__int64 **)(a1 + 1336));
                    qfree();
                  }
                  *(_QWORD *)(a1 + 1336) = 0;
                  if ( (n[0] & 0x100) != 0 )
                  {
                    v135 = (__int64 *)sub_2C3020(
                                        a2,
                                        *(_QWORD *)(a2 + 8),
                                        *(_QWORD *)(a2 + 16),
                                        v123,
                                        v124,
                                        0,
                                        n[0],
                                        n[1],
                                        v147.m128i_i32[0],
                                        v147.m128i_i32[2],
                                        v148,
                                        v149,
                                        v150,
                                        (_DWORD)v152,
                                        (_DWORD)v153,
                                        (_DWORD)v154,
                                        v155,
                                        (_DWORD)v156,
                                        (_DWORD)v157,
                                        (_DWORD)v158,
                                        v159,
                                        v160.m128i_i32[0],
                                        v160.m128i_i8[8],
                                        v161,
                                        (char)src,
                                        v163,
                                        SBYTE8(v163),
                                        (_DWORD)v164,
                                        v165,
                                        DWORD2(v165),
                                        v166,
                                        v167,
                                        v168,
                                        v169,
                                        *(_DWORD *)v170,
                                        *(_DWORD *)&v170[8],
                                        *(_DWORD *)&v170[16],
                                        v171,
                                        (_DWORD)v172,
                                        v173,
                                        DWORD2(v173),
                                        (_DWORD)v174,
                                        v175,
                                        DWORD2(v175),
                                        v176);
                    *(_QWORD *)(a1 + 1336) = v135;
                    if ( *(_DWORD *)(a2 + 44) == 2 )
                    {
                      if ( v135 )
                      {
                        sub_83120(v135);
                        qfree();
                      }
                      *(_QWORD *)(a1 + 1336) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x548u) )
                  *(_QWORD *)(a1 + 1352) = sub_7CFC0(a2, 1u);
                sub_84080((unsigned __int64 **)(a1 + 1360));
                if ( (unsigned __int8)sub_7A640(v14, 0, 0x560u) )
                {
                  n[0] = a1 + 1376;
                  sub_84190((unsigned __int64 **)(a1 + 1376));
                  v125 = sub_7D4F0((_QWORD *)a2);
                  if ( v125 < 0 )
                    return 0;
                  v126 = *(unsigned __int64 **)(a1 + 1376);
                  while ( 1 )
                  {
                    v62 = v125-- == 0;
                    if ( v62 )
                      break;
                    v147.m128i_i64[0] = sub_7CFC0(a2, 0);
                    *(_QWORD *)v170 = 0;
                    sub_7D2C0((unsigned __int8 **)a2, (__int64)v170, v147.m128i_i64[0]);
                    v126 = sub_8AC30((__m128i *)n[0], v126, v147.m128i_i64[0]);
                    clear_tinfo_t();
                  }
                }
                n[0] = a1 + 1392;
                sub_84190((unsigned __int64 **)(a1 + 1392));
                v127 = sub_7D4F0((_QWORD *)a2);
                if ( v127 >= 0 )
                {
                  v128 = *(unsigned __int64 **)(a1 + 1392);
                  while ( 1 )
                  {
                    v62 = v127-- == 0;
                    if ( v62 )
                      break;
                    v147.m128i_i64[0] = sub_7CFC0(a2, 0);
                    *(_QWORD *)v170 = 0;
                    sub_7D2C0((unsigned __int8 **)a2, (__int64)v170, v147.m128i_i64[0]);
                    v128 = sub_8AC30((__m128i *)n[0], v128, v147.m128i_i64[0]);
                    clear_tinfo_t();
                  }
                  if ( *(_DWORD *)(a2 + 48) <= 1u )
                    goto LABEL_295;
                  if ( !(unsigned __int8)sub_82D50((_QWORD *)a2, (__int64 *)(a1 + 1408)) )
                    return 0;
                  if ( *(_QWORD *)(a1 + 1416) )
                  {
                    *(_QWORD *)(a1 + 1432) = sub_7CFC0(a2, 0);
                    v143 = *(__int64 **)(a1 + 1408);
                    v144 = &v143[*(_QWORD *)(a1 + 1416)];
                    while ( v144 != v143 )
                      *v143++ = sub_7D100(a2);
                  }
                  else
                  {
                    *(_QWORD *)(a1 + 1432) = -1;
                  }
                  if ( *(_DWORD *)(a2 + 48) > 0xBu )
                    sub_7F400(*(_QWORD *)(a1 + 944), a2, a1);
                  if ( *(_DWORD *)(a2 + 48) <= 3u )
LABEL_295:
                    v129 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1408LL);
                  else
                    v129 = sub_7CFC0(a2, 0);
                  *(_QWORD *)(a1 + 1440) = v129;
                  if ( (unsigned int)sub_7CD20((_QWORD *)a2) == -559038737 )
                  {
                    sub_321ED0(
                      a1,
                      1,
                      v130,
                      v131,
                      v132,
                      v133,
                      n[0],
                      n[1],
                      v147.m128i_i32[0],
                      v147.m128i_i64[1],
                      v148,
                      v149,
                      v150,
                      (_DWORD)v152,
                      (_DWORD)v153,
                      (_DWORD)v154,
                      v155,
                      (_DWORD)v156,
                      (_DWORD)v157,
                      (_DWORD)v158,
                      v159,
                      v160.m128i_i32[0],
                      v160.m128i_i64[1]);
                    return (unsigned int)v10;
                  }
                }
              }
            }
            return 0;
          }
          v89 = (__int64 *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          v90 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v90 & 2) != 0 )
          {
LABEL_183:
            *v43 = (unsigned __int64)v43 & 0xFFFFFFFFFFFFFFFCLL | *v43 & 3;
            *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816));
            **(_QWORD **)(a1 + 816) &= ~1uLL;
            **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_184:
            *(_QWORD *)(a1 + 824) = 0;
            goto LABEL_64;
          }
          v91 = (__int64 *)v89[1];
          if ( (*(_BYTE *)v91 & 2) != 0 )
          {
            v92 = (__int64 *)v89[2];
            if ( (*(_BYTE *)v92 & 2) != 0 )
              goto LABEL_186;
          }
          else
          {
            sub_7ACC0(v91);
            v92 = (__int64 *)v89[2];
            if ( (*(_BYTE *)v92 & 2) != 0 )
              goto LABEL_179;
          }
          sub_7ACC0(v92);
LABEL_179:
          v90 = *v89;
          if ( (*v89 & 2) != 0 )
          {
LABEL_180:
            if ( v44 > 3 )
              qfree();
            v43 = *(unsigned __int64 **)(a1 + 816);
            goto LABEL_183;
          }
LABEL_186:
          *v89 = v90 | 2;
          goto LABEL_180;
        }
        v63 = sub_7CEC0((_QWORD *)a2);
        v64 = v63 - 1;
        if ( v63 )
        {
          v65 = (_QWORD *)get_func();
          *(_QWORD *)(a1 + 8) = v65;
          if ( !v65 || *v65 != v64 )
            return 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        if ( !(unsigned __int8)sub_7DB20(a2, a1 + 16) )
          return 0;
        v66 = *(_QWORD **)(a1 + 8);
        if ( v66 )
        {
          if ( *(_QWORD *)(a1 + 24) )
            return 0;
          if ( *(_DWORD *)(a2 + 40) == 4 )
            goto LABEL_123;
        }
        else
        {
          if ( *(_DWORD *)(a2 + 40) == 4 )
          {
LABEL_123:
            v67 = sub_7CEC0((_QWORD *)a2);
            v68 = *(_QWORD **)(a1 + 8);
            v69 = v67 - 1;
            *(_QWORD *)(a1 + 40) = v69;
            if ( v68 && v69 != *v68 )
              return 0;
            *(_QWORD *)(a2 + 32) = v69;
            goto LABEL_16;
          }
          v66 = *(_QWORD **)(a1 + 16);
        }
        if ( a3 != *v66 )
          return 0;
        goto LABEL_123;
      }
LABEL_85:
      if ( v14 != 3 || v15 != 2 )
        return 0;
      *(_DWORD *)(a2 + 40) = 3;
      goto LABEL_8;
    }
LABEL_113:
    *(_DWORD *)(a2 + 40) = 4;
LABEL_114:
    v14 = 4;
    goto LABEL_8;
  }
  if ( v13 <= 5 )
    goto LABEL_111;
LABEL_89:
  if ( v15 != 1 )
  {
    v14 = v15;
    goto LABEL_8;
  }
  *(_QWORD *)(a2 + 32) = -1;
  *(_DWORD *)a1 = sub_7CD20((_QWORD *)a2) & 0xEFFFFFFF;
  sub_7D150((__int64)v170, (_QWORD *)a2);
  v52 = *(_QWORD *)(a1 + 408);
  v53 = *(_QWORD *)v170;
  memset(v170, 0, sizeof(v170));
  v54 = _mm_loadu_si128((const __m128i *)&v170[8]);
  if ( v52 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    *(__m128i *)n = v54;
    qfree();
    v55 = _mm_load_si128((const __m128i *)n);
    v56 = *(_QWORD *)v170;
    *(_QWORD *)(a1 + 408) = v53;
    *(__m128i *)(a1 + 416) = v55;
    if ( v56 )
    {
      *(_QWORD *)&v170[8] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(a1 + 408) = v53;
    *(__m128i *)(a1 + 416) = v54;
  }
  v57 = sub_7D4F0((_QWORD *)a2);
  if ( v57 < 0 )
    return 0;
  v58 = v57;
  v59 = *(_QWORD *)(a1 + 440);
  if ( v58 != v59 )
  {
    v159 = 0;
    v161 = 1;
    v160 = _mm_load_si128((const __m128i *)&xmmword_424800);
    src = nullptr;
    v164 = nullptr;
    v166 = 0;
    v167 = 0xFFFFFFFF00000000LL;
    v168 = 0;
    v163 = 0;
    v165 = 0;
    if ( v58 < v59 )
    {
      v71 = v58;
      v72 = v59;
      v73 = 104 * v58;
      do
      {
        ++v71;
        v74 = (_QWORD *)(v73 + *(_QWORD *)(a1 + 432));
        v73 += 104;
        sub_83E20(v74);
      }
      while ( v71 < v72 );
      *(_QWORD *)(a1 + 440) = v58;
    }
    else
    {
      v60 = *(_QWORD *)(a1 + 432);
      if ( (unsigned __int64)&v159 < v60 || (unsigned __int64)&v159 >= v60 + 104LL * *(_QWORD *)(a1 + 448) )
      {
        sub_88870((__int64 *)(a1 + 432), v58, (__int64)&v159);
      }
      else
      {
        *(_DWORD *)v170 = 0;
        copy_argloc();
        v172 = nullptr;
        v173 = 0;
        *(_QWORD *)&v170[16] = v160.m128i_i64[1];
        v171 = v161;
        if ( (_QWORD)v163 )
        {
          n[0] = v163;
          v172 = (void *)qalloc_or_throw();
          *((_QWORD *)&v173 + 1) = n[0];
          memcpy(v172, src, n[0]);
          *(_QWORD *)&v173 = n[0];
        }
        v174 = nullptr;
        v175 = 0;
        if ( (_QWORD)v165 )
        {
          n[0] = v165;
          v174 = (void *)qalloc_or_throw();
          *((_QWORD *)&v175 + 1) = n[0];
          memcpy(v174, v164, n[0]);
          *(_QWORD *)&v175 = n[0];
        }
        v176 = 0;
        copy_tinfo_t();
        v177 = v167;
        v178 = v168;
        sub_88870((__int64 *)(a1 + 432), v58, (__int64)v170);
        sub_83E20(v170);
      }
    }
    sub_83E20(&v159);
  }
  v10 = sub_7D4F0((_QWORD *)a2);
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    v62 = v10-- == 0;
    if ( v62 )
      break;
    v61 = sub_67FD0(a1, -1, 0);
    if ( !(unsigned __int8)sub_8BB70(v61, a2, a1) )
      return 0;
  }
  LOBYTE(v10) = (unsigned int)sub_330F20(a1, 1) == -33;
  return (unsigned int)v10;
}
