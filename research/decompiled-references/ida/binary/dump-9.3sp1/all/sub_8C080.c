__int64 __fastcall sub_8C080(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  __int64 v8; // rbx
  int v10; // eax
  int v11; // r12d
  int v13; // eax
  unsigned int v14; // edx
  int v15; // r13d
  int v16; // eax
  int v17; // eax
  int v18; // r14d
  _QWORD *func; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // r12
  __m128i v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // r12
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r12
  __int64 *v37; // r12
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // r14
  __int64 (__fastcall *v43)(_QWORD *); // rax
  _QWORD *v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rdi
  int v47; // eax
  unsigned __int64 *v48; // r10
  unsigned __int64 v49; // r12
  unsigned __int64 i; // r12
  unsigned __int64 v51; // r14
  __int64 v52; // rax
  unsigned __int64 *v53; // r10
  unsigned __int64 *v54; // r11
  char v55; // al
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // r12
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  __int64 v61; // rdi
  int v62; // eax
  unsigned __int64 v63; // r12
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 *v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rax
  bool v70; // cf
  __int64 v71; // rax
  __int64 v72; // r15
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // rax
  _QWORD *v78; // rax
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // r15
  __int64 v81; // r13
  _QWORD *v82; // rdi
  void *v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rdi
  __int64 v86; // rdx
  __m128i v87; // xmm0
  __int64 v88; // rcx
  _DWORD *v89; // rdi
  __int64 v90; // rcx
  _DWORD *v91; // rdi
  unsigned __int64 *v92; // r10
  __m128i si128; // xmm0
  __m128i v94; // xmm0
  __int64 v95; // rax
  __int64 v96; // rdx
  int v97; // r12d
  __int64 *v98; // r14
  __int64 *v99; // r14
  __int64 v100; // rax
  __int64 *v101; // rdi
  __int64 *v102; // rdi
  char v103; // al
  int v104; // eax
  __int64 v105; // rdi
  __int64 v106; // rax
  __int64 v107; // rdi
  __int64 v108; // rdi
  int v109; // eax
  int v110; // eax
  unsigned __int64 v111; // r14
  __int64 v112; // rax
  unsigned __int64 *v113; // r10
  unsigned __int64 *v114; // r11
  char v115; // al
  __int64 v116; // rax
  char v117; // al
  __int64 v118; // rdx
  __m128i v119; // xmm0
  __int64 v120; // rcx
  _DWORD *v121; // rdi
  __int64 v122; // rcx
  _DWORD *v123; // rdi
  unsigned __int64 v124; // r10
  __m128i v125; // xmm0
  __m128i v126; // xmm0
  __int64 v127; // rax
  unsigned __int64 v128; // rdx
  unsigned __int64 v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // rsi
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdi
  __int64 *v135; // r14
  __int64 v136; // rdi
  __int64 v137; // r14
  __int64 v138; // r14
  int v139; // ecx
  int v140; // r8d
  __int64 v141; // r14
  int v142; // r13d
  unsigned __int64 *v143; // r14
  int v144; // r13d
  unsigned __int64 *v145; // r14
  __int64 v146; // rax
  int v147; // edx
  int v148; // ecx
  int v149; // r8d
  int v150; // r9d
  __int64 *v151; // rax
  __int64 v152; // r14
  __int64 *v153; // rax
  __int64 v154; // r14
  __int64 v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 *v160; // r14
  __int64 v161; // rax
  __int64 v162; // rdi
  unsigned __int64 v163; // rdx
  unsigned __int64 v164; // rdx
  __int64 *v165; // r13
  __int64 *v166; // r14
  __int64 v167; // rax
  size_t n[2]; // [rsp+0h] [rbp-188h] BYREF
  __m128i v169; // [rsp+10h] [rbp-178h] BYREF
  __int64 v170; // [rsp+20h] [rbp-168h]
  unsigned __int64 v171; // [rsp+28h] [rbp-160h]
  int v172; // [rsp+30h] [rbp-158h]
  char v173; // [rsp+37h] [rbp-151h]
  __m128i *v174; // [rsp+38h] [rbp-150h]
  unsigned __int64 *v175; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v176; // [rsp+48h] [rbp-140h]
  int v177; // [rsp+50h] [rbp-138h]
  const __m128i *v178; // [rsp+58h] [rbp-130h] BYREF
  const __m128i *v179; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int64 *v180; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v181; // [rsp+70h] [rbp-118h] BYREF
  __m128i v182; // [rsp+78h] [rbp-110h]
  __int64 v183; // [rsp+88h] [rbp-100h]
  void *src; // [rsp+90h] [rbp-F8h]
  __int128 v185; // [rsp+98h] [rbp-F0h]
  void *v186; // [rsp+A8h] [rbp-E0h]
  __int128 v187; // [rsp+B0h] [rbp-D8h]
  __int64 v188; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v189; // [rsp+C8h] [rbp-C0h]
  __int64 v190; // [rsp+D0h] [rbp-B8h]
  int v191; // [rsp+D8h] [rbp-B0h]
  _BYTE v192[24]; // [rsp+E0h] [rbp-A8h] BYREF
  int v193; // [rsp+F8h] [rbp-90h]
  void *v194; // [rsp+100h] [rbp-88h]
  __int128 v195; // [rsp+108h] [rbp-80h]
  void *v196; // [rsp+118h] [rbp-70h]
  __int128 v197; // [rsp+120h] [rbp-68h]
  __int64 v198; // [rsp+130h] [rbp-58h]
  unsigned __int64 v199; // [rsp+138h] [rbp-50h]
  __int64 v200; // [rsp+140h] [rbp-48h]
  unsigned __int64 v201; // [rsp+148h] [rbp-40h]

  v8 = a2;
  v201 = __readfsqword(0x28u);
  v10 = sub_7CD20((_QWORD *)a2);
  *(_DWORD *)(a2 + 48) = v10;
  if ( (unsigned int)(v10 - 1) > 0xC )
    return 0;
  v13 = sub_7CD20((_QWORD *)a2);
  v14 = *(_DWORD *)(a2 + 48);
  v15 = v13;
  v16 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 44) = v16;
  if ( v14 <= 3 )
  {
    if ( !v15 )
    {
      if ( v16 != 4 )
      {
        *(_DWORD *)(a2 + 40) = 4;
        v15 = 4;
        goto LABEL_8;
      }
      goto LABEL_114;
    }
    if ( v15 != v16 )
    {
      if ( v15 != 4 )
        goto LABEL_85;
      goto LABEL_113;
    }
LABEL_111:
    if ( v15 == 3 )
      return 0;
    goto LABEL_89;
  }
  if ( v15 != v16 )
  {
    if ( v15 != 4 )
    {
      if ( !v15 )
      {
        if ( v16 == 4 )
          return 0;
        *(_DWORD *)(a2 + 40) = 0;
LABEL_8:
        LODWORD(n[0]) = sub_7CD20((_QWORD *)a2);
        v17 = sub_7CD20((_QWORD *)a2);
        *(_DWORD *)a1 = v17 & 0xEFFFFFFF;
        v18 = v17 & 4;
        if ( (v17 & 4) != 0 )
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
            v78 = *(_QWORD **)(a1 + 8);
            if ( !v78 )
              v78 = *(_QWORD **)(a1 + 16);
            if ( *(_QWORD *)(a1 + 40) != *v78 )
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
          v20 = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 152) = v20;
          v21 = v20;
          v22 = sub_1CE9E0(a1);
          sub_1CEA30(a1, v22, v21);
          *(_QWORD *)(a1 + 160) = sub_7CFC0(a2, 1u);
          *(_QWORD *)(a1 + 168) = sub_7D020(a2, 0);
          *(_QWORD *)(a1 + 176) = sub_7D020(a2, 0);
          v23 = *(_DWORD *)(a2 + 48);
          if ( v23 > 8 )
          {
            if ( !(unsigned __int8)sub_7F110((__int64 *)(a1 + 1448), (char **)a2) )
              return 0;
            v23 = *(_DWORD *)(a2 + 48);
          }
          if ( v23 <= 6 )
            goto LABEL_18;
          if ( !(unsigned __int8)sub_7F300((__int64 *)(a1 + 1472), (_QWORD *)a2) )
            return 0;
          if ( *(_DWORD *)(a2 + 48) <= 9u )
          {
LABEL_18:
            *(_OWORD *)v192 = 0;
            if ( !(unsigned __int8)sub_7DFD0((__int64 *)v192, a2) || !(unsigned __int8)sub_7DFD0((__int64 *)v192, a2) )
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
          v24 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 320) = n[0];
          *(_BYTE *)(a1 + 320) &= 1u;
          sub_7D2C0((unsigned __int8 **)a2, a1 + 328, v24);
          if ( (*(_BYTE *)a1 & 0x20) != 0 )
          {
            sub_7C6D0((_QWORD *)a2, (__int64 *)(a1 + 336));
            if ( !(unsigned __int8)sub_7E8A0((__int64 *)(a1 + 360), (unsigned __int64 *)a2) )
              return 0;
          }
          else
          {
            v84 = *(_QWORD *)(a1 + 336);
            if ( v84 )
            {
              *(_QWORD *)(a1 + 344) = 0;
              qfree(v84);
              *(_QWORD *)(a1 + 336) = 0;
              *(_QWORD *)(a1 + 352) = 0;
            }
            v85 = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(a1 + 368) = 0;
            if ( v85 )
            {
              *(_QWORD *)(a1 + 384) = 0;
              qfree(v85);
              *(_QWORD *)(a1 + 376) = 0;
              *(_QWORD *)(a1 + 392) = 0;
            }
          }
          *(_DWORD *)(a1 + 400) = sub_7CD20((_QWORD *)a2);
          if ( *(_DWORD *)(a2 + 48) <= 3u )
            sub_7CEC0((_QWORD *)a2);
          sub_7D150((__int64)v192, (_QWORD *)a2);
          v25 = *(_QWORD *)(a1 + 408);
          v26 = *(_QWORD *)v192;
          v27 = _mm_loadu_si128((const __m128i *)&v192[8]);
          memset(v192, 0, sizeof(v192));
          if ( v25 )
          {
            v169 = v27;
            *(_QWORD *)(a1 + 416) = 0;
            qfree(v25);
            v27 = _mm_load_si128(&v169);
          }
          v28 = *(_QWORD *)v192;
          *(_QWORD *)(a1 + 408) = v26;
          *(__m128i *)(a1 + 416) = v27;
          if ( v28 )
          {
            *(_QWORD *)&v192[8] = 0;
            qfree(v28);
          }
          if ( !(unsigned __int8)sub_88A40((_QWORD *)a2, (__int64 *)(a1 + 432)) )
            return 0;
          v29 = *(_QWORD *)(a1 + 432);
          for ( v169.m128i_i64[0] = v29 + 104LL * *(_QWORD *)(a1 + 440); v169.m128i_i64[0] != v29; v29 += 104 )
            sub_7DE20(v29, (unsigned __int8 **)a2);
          if ( !(unsigned __int8)sub_7D530((_QWORD *)a2, (__int64 *)(a1 + 456)) )
            return 0;
          *(_DWORD *)(a1 + 480) = sub_7CD20((_QWORD *)a2) - 1;
          *(_QWORD *)(a1 + 488) = sub_7CFC0(a2, 1u);
          sub_7D150((__int64)v192, (_QWORD *)a2);
          v30 = *(_QWORD *)(a1 + 496);
          v31 = *(_QWORD *)v192;
          v32 = _mm_loadu_si128((const __m128i *)&v192[8]);
          memset(v192, 0, sizeof(v192));
          if ( v30 )
          {
            v169 = v32;
            *(_QWORD *)(a1 + 504) = 0;
            qfree(v30);
            v32 = _mm_load_si128(&v169);
          }
          v33 = *(_QWORD *)v192;
          *(_QWORD *)(a1 + 496) = v31;
          *(__m128i *)(a1 + 504) = v32;
          if ( v33 )
          {
            *(_QWORD *)&v192[8] = 0;
            qfree(v33);
          }
          *(_DWORD *)(a1 + 64) = sub_7CD20((_QWORD *)a2);
          *(_QWORD *)(a1 + 520) = 0;
          v173 = 0;
          while ( *(_DWORD *)(a1 + 64) > v18 )
          {
            v36 = j__qalloc_or_throw(528, a2, v34, v35);
            sub_330B10(v36, *(_QWORD *)(a1 + 1496));
            *(_DWORD *)(v36 + 72) = v18;
            sub_67BE0(a1, v36, 0);
            a2 = v8;
            if ( !(unsigned __int8)sub_8BB70(v36, v8, a1) )
              return 0;
            ++v18;
            v173 |= (*(_BYTE *)(v36 + 24) & 8) != 0;
          }
          sub_67D80(a1);
          sub_1D4FD0(a1);
          v37 = (__int64 *)(a1 + 536);
          do
          {
            if ( !(unsigned __int8)sub_7DFD0(v37, v8) )
              return 0;
            v37 += 4;
          }
          while ( (__int64 *)(a1 + 728) != v37 );
          sub_1AEE70(a1);
          LOBYTE(v171) = sub_82A00((_QWORD *)v8, (__int64 *)(a1 + 728));
          if ( !(_BYTE)v171 )
            return 0;
          v38 = *(_QWORD *)(a1 + 728);
          v39 = v38 + 40LL * *(_QWORD *)(a1 + 736);
          while ( v38 != v39 )
          {
            sub_7EBF0(v38, (_QWORD *)v8);
            v38 += 40;
          }
          sub_7D240(v8, (_BYTE *)(a1 + 752), 32);
          v42 = *(_QWORD **)(a1 + 784);
          if ( v42 )
          {
            v43 = *(__int64 (__fastcall **)(_QWORD *))(*v42 + 8LL);
            if ( v43 == sub_66F30 )
            {
              v44 = v42 + 27;
              *v42 = off_4EC750;
              v169.m128i_i64[0] = (__int64)(v42 + 3);
              do
              {
                v45 = (__int64)v44;
                v44 -= 4;
                sub_66C80(v45);
              }
              while ( (_QWORD *)v169.m128i_i64[0] != v44 );
              v46 = v42[1];
              *v42 = &unk_4EC808;
              if ( v46 )
              {
                v42[2] = 0;
                qfree(v46);
              }
              j__qfree((__int64)v42);
            }
            else
            {
              v43(*(_QWORD **)(a1 + 784));
            }
          }
          *(_QWORD *)(a1 + 784) = 0;
          if ( (n[0] & 2) != 0 )
            sub_670E0((_QWORD *)a1, a1 + 752, v40, v41);
          v47 = sub_7CD20((_QWORD *)v8);
          v48 = *(unsigned __int64 **)(a1 + 816);
          *(_DWORD *)(a1 + 792) = v47;
          *(_OWORD *)(a1 + 800) = 0;
          if ( !v48 )
            goto LABEL_184;
          v49 = *v48;
          if ( !*(_QWORD *)(a1 + 824) )
          {
            *v48 = *v48 & 3 | (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816));
            **(_QWORD **)(a1 + 816) &= ~1uLL;
            **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_64:
            v172 = sub_7D4F0((_QWORD *)v8);
            if ( v172 < 0 )
              return 0;
            i = *(_QWORD *)(a1 + 816);
            v169.m128i_i64[0] = a1 + 816;
            v174 = (__m128i *)&v181;
LABEL_66:
            while ( 2 )
            {
              if ( --v172 != -1 )
              {
                if ( (unsigned __int8)is_cvt64() )
                  v51 = (int)sub_7CD20((_QWORD *)v8);
                else
                  v51 = sub_7CD40(v8);
                if ( (unsigned __int8)is_cvt64() )
                  v52 = (int)sub_7CD20((_QWORD *)v8);
                else
                  v52 = sub_7CD40(v8);
                v182.m128i_i64[0] = v52;
                v53 = *(unsigned __int64 **)(a1 + 816);
                v181 = v51;
                v54 = v53;
                v178 = v174;
                if ( v53 )
                {
                  if ( *(_QWORD *)(a1 + 824) )
                  {
                    v180 = v53;
                    LOBYTE(v179) = 1;
                    *(_QWORD *)v192 = 0;
                    if ( i )
                    {
                      v176 = v53;
                      v175 = v53;
                      v55 = sub_885D0(
                              (unsigned __int64 *)v169.m128i_i64[0],
                              (unsigned __int64 *)v174,
                              (_QWORD *)i,
                              (unsigned __int64 *)&v180,
                              &v179,
                              (unsigned __int64 *)v192);
                      v54 = v175;
                      v53 = v176;
                      if ( v55 )
                      {
                        i = *(_QWORD *)v192;
                        if ( !*(_QWORD *)v192 )
                        {
                          v56 = sub_8A3E0((__m128i *)v169.m128i_i64[0], v180, (char)v179, &v178);
LABEL_77:
                          i = v56;
                        }
                        continue;
                      }
                    }
                    v103 = v171;
                    for ( i = *v53 & 0xFFFFFFFFFFFFFFFCLL; ; i = v164 )
                    {
                      if ( (*(_BYTE *)i & 2) != 0 )
                        goto LABEL_189;
                      v163 = *(_QWORD *)(i + 24);
                      if ( v51 >= v163 )
                      {
                        if ( v163 >= v51 )
                        {
                          if ( !i )
                          {
                            v54 = nullptr;
LABEL_189:
                            v56 = sub_8A3E0((__m128i *)v169.m128i_i64[0], v54, v103, &v178);
                            goto LABEL_77;
                          }
                          goto LABEL_66;
                        }
                        v164 = *(_QWORD *)(i + 16);
                        v103 = 0;
                      }
                      else
                      {
                        v164 = *(_QWORD *)(i + 8);
                        v103 = v171;
                      }
                      v54 = (unsigned __int64 *)i;
                    }
                  }
                }
                else
                {
                  v86 = qalloc();
                  v87 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v86, (__m128i)(unsigned __int64)v86);
                  if ( !v86 )
                  {
                    exception = __cxa_allocate_exception(8u);
                    *exception = (char *)&`vtable for'std::bad_alloc + 16;
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'std::bad_alloc,
                      (void (*)(void *))&std::bad_alloc::~bad_alloc);
                  }
                  v88 = 10;
                  v89 = (_DWORD *)v86;
                  while ( v88 )
                  {
                    *v89++ = 0;
                    --v88;
                  }
                  *(__m128i *)(v86 + 8) = v87;
                  *(_QWORD *)v86 = v86 & 0xFFFFFFFFFFFFFFFCLL | 2;
                  *(_QWORD *)(a1 + 816) = v86;
                  *(_QWORD *)v86 = v86 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v86 & 3LL;
                  *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                                (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                                (__m128i)*(unsigned __int64 *)(a1 + 816));
                  **(_QWORD **)(a1 + 816) &= ~1uLL;
                  **(_QWORD **)(a1 + 816) |= 2uLL;
                  v53 = *(unsigned __int64 **)(a1 + 816);
                }
                v175 = v53;
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
                v90 = 10;
                v91 = (_DWORD *)i;
                v92 = v175;
                while ( v90 )
                {
                  *v91++ = 0;
                  --v90;
                }
                si128 = _mm_load_si128((const __m128i *)&v181);
                *(_QWORD *)i = (unsigned __int64)v92 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(i + 24) = si128;
                v94 = _mm_loadl_epi64((const __m128i *)(a1 + 816));
                *(_QWORD *)i = (unsigned __int64)v92 & 0xFFFFFFFFFFFFFFFCLL | 1;
                *(__m128i *)(i + 8) = _mm_unpacklo_epi64(v94, v94);
                if ( v92 == *(unsigned __int64 **)(a1 + 816) )
                {
                  *v92 = i & 0xFFFFFFFFFFFFFFFCLL | *v92 & 3;
                  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 8LL) = i;
                  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 16LL) = i;
                  v96 = *(_QWORD *)i & 2LL;
                  *(_QWORD *)i &= ~1uLL;
                  *(_QWORD *)i = v96 | *(_QWORD *)(a1 + 816) & 0xFFFFFFFFFFFFFFFCLL;
                }
                else
                {
                  v92[1] = i;
                  v95 = *(_QWORD *)(a1 + 816);
                  if ( v92 == *(unsigned __int64 **)(v95 + 8) )
                    *(_QWORD *)(v95 + 8) = i;
                  sub_8A110(v169.m128i_i64[0], (__int64 *)i);
                }
                ++*(_QWORD *)(a1 + 824);
                continue;
              }
              break;
            }
            if ( *(_DWORD *)(v8 + 48) > 2u )
            {
              if ( (unsigned __int8)sub_7E8A0((__int64 *)(a1 + 832), (unsigned __int64 *)v8) )
                goto LABEL_170;
              return 0;
            }
            v162 = *(_QWORD *)(a1 + 848);
            *(_QWORD *)(a1 + 840) = 0;
            if ( v162 )
            {
              *(_QWORD *)(a1 + 856) = 0;
              qfree(v162);
              *(_QWORD *)(a1 + 848) = 0;
              *(_QWORD *)(a1 + 864) = 0;
            }
LABEL_170:
            v169.m128i_i64[0] = a1 + 872;
            sub_82C40((unsigned __int64 **)(a1 + 872));
            v97 = sub_7D4F0((_QWORD *)v8);
            if ( v97 < 0 )
              return 0;
            v98 = *(__int64 **)(a1 + 872);
            while ( 1 )
            {
              v70 = v97-- == 0;
              if ( v70 )
                break;
              sub_7D150((__int64)v192, (_QWORD *)v8);
              v98 = (__int64 *)sub_896E0((__m128i *)v169.m128i_i64[0], v98, (__int64)v192);
              if ( *(_QWORD *)v192 )
              {
                *(_QWORD *)&v192[8] = 0;
                qfree(*(__int64 *)v192);
              }
            }
            *(_DWORD *)(a1 + 888) = sub_7CD20((_QWORD *)v8);
            *(_DWORD *)(a1 + 892) = sub_7CD20((_QWORD *)v8);
            *(_DWORD *)(a1 + 896) = sub_7CD20((_QWORD *)v8);
            *(_DWORD *)(a1 + 900) = sub_7CD20((_QWORD *)v8);
            *(_DWORD *)(a1 + 904) = sub_7CD20((_QWORD *)v8);
            *(_DWORD *)(a1 + 908) = sub_7CD20((_QWORD *)v8);
            v104 = sub_7CD20((_QWORD *)v8);
            v105 = *(_QWORD *)(a1 + 920);
            *(_DWORD *)(a1 + 912) = v104;
            if ( v105 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 8LL))(v105);
            *(_QWORD *)(a1 + 920) = 0;
            if ( (n[0] & 4) != 0 )
            {
              v106 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 336LL))(*(_QWORD *)(a1 + 1504));
              *(_QWORD *)(a1 + 920) = v106;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v106 + 24LL))(v106, v8) )
                return 0;
            }
            v107 = *(_QWORD *)(a1 + 928);
            if ( v107 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 8LL))(v107);
            v108 = *(_QWORD *)(a1 + 936);
            *(_QWORD *)(a1 + 928) = 0;
            if ( v108 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 8LL))(v108);
            *(_QWORD *)(a1 + 936) = 0;
            if ( (n[0] & 8) != 0 )
            {
              v108 = *(_QWORD *)(a1 + 928);
              if ( !v108 )
              {
                v167 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 312LL))(
                         *(_QWORD *)(a1 + 1504),
                         a1);
                *(_QWORD *)(a1 + 928) = v167;
                v108 = v167;
              }
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v108 + 88LL))(v108, v8);
              if ( (n[0] & 0x10) != 0 )
              {
                v161 = sub_19FD50(*(_QWORD *)(a1 + 928));
                *(_QWORD *)(a1 + 936) = v161;
                v108 = v161;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v161 + 112LL))(v161, v8) )
                  return 0;
              }
            }
            if ( *(_DWORD *)(v8 + 48) <= 4u )
            {
              if ( *(_QWORD *)v8 >= *(_QWORD *)(v8 + 8) )
                sub_7A510(v108);
              v109 = unpack_dd();
              if ( *(_QWORD *)(v8 + 8) - *(_QWORD *)v8 < (unsigned __int64)v109 )
                return 0;
              if ( v109 )
                return 0;
              v110 = sub_7CD20((_QWORD *)v8);
              if ( *(_QWORD *)(v8 + 8) - *(_QWORD *)v8 < (unsigned __int64)v110
                || v110
                || (unsigned int)sub_7D4F0((_QWORD *)v8) )
              {
                return 0;
              }
              sub_7CD20((_QWORD *)v8);
            }
            if ( !(unsigned __int8)sub_7A640(v15, 0, 0x3B8u) || (unsigned __int8)sub_7D6B0(v8, (_QWORD *)(a1 + 952)) )
            {
              v11 = sub_7D6B0(v8, (_QWORD *)(a1 + 1000));
              if ( (_BYTE)v11
                && (!(unsigned __int8)sub_7A640(v15, 0, 0x418u) || (unsigned __int8)sub_7D6B0(v8, (_QWORD *)(a1 + 1048)))
                && (*(_DWORD *)(v8 + 48) > 5u
                 || !(unsigned __int8)sub_7A640(v15, 0, 0x448u)
                 || (unsigned __int8)sub_7D920((_QWORD *)v8)) )
              {
                LOBYTE(v174) = sub_7A640(v15, 0, 0x478u);
                if ( (_BYTE)v174 )
                {
                  v169.m128i_i64[0] = a1 + 1144;
                  sub_83E70((unsigned __int64 **)(a1 + 1144));
                  v172 = sub_7D4F0((_QWORD *)v8);
                  if ( v172 < 0 )
                    return 0;
                  v111 = *(_QWORD *)(a1 + 1144);
LABEL_216:
                  while ( 2 )
                  {
                    while ( 2 )
                    {
                      if ( --v172 == -1 )
                        goto LABEL_251;
                      v171 = sub_7CFC0(v8, 0);
                      v112 = sub_7CFC0(v8, 0);
                      v113 = *(unsigned __int64 **)(a1 + 1144);
                      v179 = (const __m128i *)v192;
                      *(_QWORD *)&v192[8] = v112;
                      *(_QWORD *)v192 = v171;
                      v114 = v113;
                      if ( v113 )
                      {
                        if ( *(_QWORD *)(a1 + 1152) )
                        {
                          v180 = v113;
                          LOBYTE(v178) = 1;
                          v181 = 0;
                          if ( v111 )
                          {
                            v176 = v113;
                            v175 = v113;
                            v115 = sub_885D0(
                                     (unsigned __int64 *)v169.m128i_i64[0],
                                     (unsigned __int64 *)v192,
                                     (_QWORD *)v111,
                                     (unsigned __int64 *)&v180,
                                     &v178,
                                     &v181);
                            v114 = v175;
                            v113 = v176;
                            if ( v115 )
                            {
                              v111 = v181;
                              if ( !v181 )
                              {
                                v116 = sub_8A520((__m128i *)v169.m128i_i64[0], v180, (char)v178, &v179);
LABEL_223:
                                v111 = v116;
                              }
                              continue;
                            }
                          }
                          v111 = *v113 & 0xFFFFFFFFFFFFFFFCLL;
                          v117 = (char)v174;
                          while ( 1 )
                          {
                            if ( (*(_BYTE *)v111 & 2) != 0 )
                              goto LABEL_230;
                            v128 = *(_QWORD *)(v111 + 24);
                            if ( v171 >= v128 )
                            {
                              if ( v128 >= v171 )
                              {
                                if ( !v111 )
                                {
                                  v114 = nullptr;
LABEL_230:
                                  v116 = sub_8A520((__m128i *)v169.m128i_i64[0], v114, v117, &v179);
                                  goto LABEL_223;
                                }
                                goto LABEL_216;
                              }
                              v129 = *(_QWORD *)(v111 + 16);
                              v117 = 0;
                            }
                            else
                            {
                              v129 = *(_QWORD *)(v111 + 8);
                              v117 = (char)v174;
                            }
                            v114 = (unsigned __int64 *)v111;
                            v111 = v129;
                          }
                        }
                      }
                      else
                      {
                        v118 = qalloc();
                        v119 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v118, (__m128i)(unsigned __int64)v118);
                        if ( !v118 )
                        {
                          v5 = __cxa_allocate_exception(8u);
                          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
                          __cxa_throw(
                            v5,
                            (struct type_info *)&`typeinfo for'std::bad_alloc,
                            (void (*)(void *))&std::bad_alloc::~bad_alloc);
                        }
                        v120 = 10;
                        v121 = (_DWORD *)v118;
                        while ( v120 )
                        {
                          *v121++ = 0;
                          --v120;
                        }
                        *(__m128i *)(v118 + 8) = v119;
                        *(_QWORD *)v118 = v118 & 0xFFFFFFFFFFFFFFFCLL | 2;
                        *(_QWORD *)(a1 + 1144) = v118;
                        *(_QWORD *)v118 = v118 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v118 & 3LL;
                        *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                                       (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                                       (__m128i)*(unsigned __int64 *)(a1 + 1144));
                        **(_QWORD **)(a1 + 1144) &= ~1uLL;
                        **(_QWORD **)(a1 + 1144) |= 2uLL;
                        v113 = *(unsigned __int64 **)(a1 + 1144);
                      }
                      break;
                    }
                    v171 = (unsigned __int64)v113;
                    v111 = qalloc();
                    if ( !v111 )
                    {
                      v6 = __cxa_allocate_exception(8u);
                      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
                      __cxa_throw(
                        v6,
                        (struct type_info *)&`typeinfo for'std::bad_alloc,
                        (void (*)(void *))&std::bad_alloc::~bad_alloc);
                    }
                    v122 = 10;
                    v123 = (_DWORD *)v111;
                    v124 = v171;
                    while ( v122 )
                    {
                      *v123++ = 0;
                      --v122;
                    }
                    v125 = _mm_load_si128((const __m128i *)v192);
                    *(_QWORD *)v111 = v124 & 0xFFFFFFFFFFFFFFFCLL;
                    *(__m128i *)(v111 + 24) = v125;
                    v126 = _mm_loadl_epi64((const __m128i *)(a1 + 1144));
                    *(_QWORD *)v111 = v124 & 0xFFFFFFFFFFFFFFFCLL | 1;
                    *(__m128i *)(v111 + 8) = _mm_unpacklo_epi64(v126, v126);
                    if ( v124 == *(_QWORD *)(a1 + 1144) )
                    {
                      *(_QWORD *)v124 = v111 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v124 & 3LL;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 8LL) = v111;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 16LL) = v111;
                      v130 = *(_QWORD *)v111 & 2LL;
                      *(_QWORD *)v111 &= ~1uLL;
                      *(_QWORD *)v111 = v130 | *(_QWORD *)(a1 + 1144) & 0xFFFFFFFFFFFFFFFCLL;
                    }
                    else
                    {
                      *(_QWORD *)(v124 + 8) = v111;
                      v127 = *(_QWORD *)(a1 + 1144);
                      if ( v124 == *(_QWORD *)(v127 + 8) )
                        *(_QWORD *)(v127 + 8) = v111;
                      sub_8A110(v169.m128i_i64[0], (__int64 *)v111);
                    }
                    ++*(_QWORD *)(a1 + 1152);
                    continue;
                  }
                }
LABEL_251:
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x488u)
                  && !(unsigned __int8)sub_7E080((__int64 *)(a1 + 1160), v8) )
                {
                  return 0;
                }
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x4A0u) )
                  *(_DWORD *)(a1 + 1184) = sub_7CD20((_QWORD *)v8) - 1;
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x4A8u) )
                {
                  if ( !(unsigned __int8)sub_7D9D0(v8, (__int64 *)(a1 + 1192)) )
                    return 0;
                  if ( *(_DWORD *)(v8 + 44) == 2 )
                  {
                    v155 = *(_QWORD *)(a1 + 1192);
                    if ( v155 )
                    {
                      *(_QWORD *)(a1 + 1200) = 0;
                      qfree(v155);
                      *(_QWORD *)(a1 + 1192) = 0;
                      *(_QWORD *)(a1 + 1208) = 0;
                    }
                  }
                }
                v131 = 0;
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x4C0u) )
                {
                  v131 = a1 + 1216;
                  if ( !(unsigned __int8)sub_82D50((_QWORD *)v8, (__int64 *)(a1 + 1216)) )
                    return 0;
                  v160 = *(__int64 **)(a1 + 1216);
                  v169.m128i_i64[0] = (__int64)&v160[*(_QWORD *)(a1 + 1224)];
                  while ( (__int64 *)v169.m128i_i64[0] != v160 )
                  {
                    v131 = 0;
                    *v160++ = sub_7CFC0(v8, 0);
                  }
                }
                if ( v173 )
                {
                  v156 = j__qalloc_or_throw(176, v131, v132, v133);
                  *(_QWORD *)(v156 + 8) = 0;
                  *(_QWORD *)(v156 + 96) = 0;
                  *(_BYTE *)(v156 + 32) = 0;
                  *(_QWORD *)v156 = off_4EBC98;
                  *(_QWORD *)(v156 + 48) = 0;
                  *(_QWORD *)(v156 + 36) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v156 + 72) = 0;
                  *(_QWORD *)(v156 + 120) = 0;
                  *(_DWORD *)(v156 + 144) = 0;
                  *(_QWORD *)(v156 + 152) = 0;
                  *(_OWORD *)(v156 + 16) = 0;
                  *(_OWORD *)(v156 + 56) = 0;
                  *(_OWORD *)(v156 + 80) = 0;
                  *(_OWORD *)(v156 + 104) = 0;
                  *(_OWORD *)(v156 + 128) = 0;
                  *(_OWORD *)(v156 + 160) = 0;
                  *(_QWORD *)(a1 + 1240) = v156;
                  if ( !(unsigned __int8)sub_7E9C0(v156, (_QWORD *)v8) )
                    return 0;
                  v159 = qalloc_or_throw(24, v8, v157, v158);
                  *(_QWORD *)v159 = 0;
                  *(_OWORD *)(v159 + 8) = 0;
                  *(_QWORD *)(a1 + 1248) = v159;
                  if ( !(unsigned __int8)sub_7DB20(v8, v159) )
                    return 0;
                }
                else
                {
                  v134 = *(_QWORD *)(a1 + 1240);
                  if ( v134 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v134 + 8LL))(v134);
                  v135 = *(__int64 **)(a1 + 1248);
                  *(_QWORD *)(a1 + 1240) = 0;
                  if ( v135 )
                  {
                    v136 = *v135;
                    if ( *v135 )
                    {
                      v135[1] = 0;
                      qfree(v136);
                    }
                    qfree((__int64)v135);
                  }
                  *(_QWORD *)(a1 + 1248) = 0;
                }
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x4E8u) )
                {
                  sub_2D7F40(a1 + 1256, v8);
                  if ( *(_DWORD *)(v8 + 44) == 2 )
                    sub_83D10(a1 + 1256);
                }
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x520u) )
                {
                  if ( !(unsigned __int8)sub_2D5590(a1 + 1312, v8, *(_QWORD *)(v8 + 8)) )
                    return 0;
                  if ( *(_DWORD *)(v8 + 44) == 2 )
                    sub_83F70((unsigned __int64 **)(a1 + 1312));
                }
                v137 = *(_QWORD *)(a1 + 1328);
                if ( v137 )
                {
                  sub_82E00(*(__int64 **)(a1 + 1328));
                  qfree(v137);
                }
                *(_QWORD *)(a1 + 1328) = 0;
                if ( (n[0] & 0x20) != 0 )
                  *(_QWORD *)(a1 + 1328) = sub_2D2D60(v8);
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x540u) )
                {
                  v138 = *(_QWORD *)(a1 + 1344);
                  if ( v138 )
                  {
                    sub_82FA0(*(__int64 **)(a1 + 1344));
                    qfree(v138);
                  }
                  *(_QWORD *)(a1 + 1344) = 0;
                  if ( (n[0] & 0x40) != 0 )
                  {
                    v151 = (__int64 *)sub_2D5B10(v8, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 32));
                    *(_QWORD *)(a1 + 1344) = v151;
                    v152 = (__int64)v151;
                    if ( *(_DWORD *)(v8 + 44) == 2 )
                    {
                      if ( v151 )
                      {
                        sub_82FA0(v151);
                        qfree(v152);
                      }
                      *(_QWORD *)(a1 + 1344) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x538u) )
                {
                  v141 = *(_QWORD *)(a1 + 1336);
                  if ( v141 )
                  {
                    sub_83120(*(__int64 **)(a1 + 1336));
                    qfree(v141);
                  }
                  *(_QWORD *)(a1 + 1336) = 0;
                  if ( (n[0] & 0x100) != 0 )
                  {
                    v153 = (__int64 *)sub_2C3020(
                                        v8,
                                        *(_QWORD *)(v8 + 8),
                                        *(_QWORD *)(v8 + 16),
                                        v139,
                                        v140,
                                        0,
                                        n[0],
                                        n[1],
                                        v169.m128i_i32[0],
                                        v169.m128i_i32[2],
                                        v170,
                                        v171,
                                        v172,
                                        (_DWORD)v174,
                                        (_DWORD)v175,
                                        (_DWORD)v176,
                                        v177,
                                        (_DWORD)v178,
                                        (_DWORD)v179,
                                        (_DWORD)v180,
                                        v181,
                                        v182.m128i_i32[0],
                                        v182.m128i_i8[8],
                                        v183,
                                        (char)src,
                                        v185,
                                        SBYTE8(v185),
                                        (_DWORD)v186,
                                        v187,
                                        DWORD2(v187),
                                        v188,
                                        v189,
                                        v190,
                                        v191,
                                        *(_DWORD *)v192,
                                        *(_DWORD *)&v192[8],
                                        *(_DWORD *)&v192[16],
                                        v193,
                                        (_DWORD)v194,
                                        v195,
                                        DWORD2(v195),
                                        (_DWORD)v196,
                                        v197,
                                        DWORD2(v197),
                                        v198);
                    *(_QWORD *)(a1 + 1336) = v153;
                    v154 = (__int64)v153;
                    if ( *(_DWORD *)(v8 + 44) == 2 )
                    {
                      if ( v153 )
                      {
                        sub_83120(v153);
                        qfree(v154);
                      }
                      *(_QWORD *)(a1 + 1336) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x548u) )
                  *(_QWORD *)(a1 + 1352) = sub_7CFC0(v8, 1u);
                sub_84080((unsigned __int64 **)(a1 + 1360));
                if ( (unsigned __int8)sub_7A640(v15, 0, 0x560u) )
                {
                  n[0] = a1 + 1376;
                  sub_84190((unsigned __int64 **)(a1 + 1376));
                  v142 = sub_7D4F0((_QWORD *)v8);
                  if ( v142 < 0 )
                    return 0;
                  v143 = *(unsigned __int64 **)(a1 + 1376);
                  while ( 1 )
                  {
                    v70 = v142-- == 0;
                    if ( v70 )
                      break;
                    v169.m128i_i64[0] = sub_7CFC0(v8, 0);
                    *(_QWORD *)v192 = 0;
                    sub_7D2C0((unsigned __int8 **)v8, (__int64)v192, v169.m128i_i64[0]);
                    v143 = sub_8AC30((__m128i *)n[0], v143, v169.m128i_i64[0]);
                    clear_tinfo_t();
                  }
                }
                n[0] = a1 + 1392;
                sub_84190((unsigned __int64 **)(a1 + 1392));
                v144 = sub_7D4F0((_QWORD *)v8);
                if ( v144 >= 0 )
                {
                  v145 = *(unsigned __int64 **)(a1 + 1392);
                  while ( 1 )
                  {
                    v70 = v144-- == 0;
                    if ( v70 )
                      break;
                    v169.m128i_i64[0] = sub_7CFC0(v8, 0);
                    *(_QWORD *)v192 = 0;
                    sub_7D2C0((unsigned __int8 **)v8, (__int64)v192, v169.m128i_i64[0]);
                    v145 = sub_8AC30((__m128i *)n[0], v145, v169.m128i_i64[0]);
                    clear_tinfo_t();
                  }
                  if ( *(_DWORD *)(v8 + 48) <= 1u )
                    goto LABEL_295;
                  if ( !(unsigned __int8)sub_82D50((_QWORD *)v8, (__int64 *)(a1 + 1408)) )
                    return 0;
                  if ( *(_QWORD *)(a1 + 1416) )
                  {
                    *(_QWORD *)(a1 + 1432) = sub_7CFC0(v8, 0);
                    v165 = *(__int64 **)(a1 + 1408);
                    v166 = &v165[*(_QWORD *)(a1 + 1416)];
                    while ( v166 != v165 )
                      *v165++ = sub_7D100(v8);
                  }
                  else
                  {
                    *(_QWORD *)(a1 + 1432) = -1;
                  }
                  if ( *(_DWORD *)(v8 + 48) > 0xBu )
                    sub_7F400(*(_QWORD *)(a1 + 944), v8, a1);
                  if ( *(_DWORD *)(v8 + 48) <= 3u )
LABEL_295:
                    v146 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1408LL);
                  else
                    v146 = sub_7CFC0(v8, 0);
                  *(_QWORD *)(a1 + 1440) = v146;
                  if ( (unsigned int)sub_7CD20((_QWORD *)v8) == -559038737 )
                  {
                    sub_321ED0(
                      a1,
                      1,
                      v147,
                      v148,
                      v149,
                      v150,
                      n[0],
                      n[1],
                      v169.m128i_i32[0],
                      v169.m128i_i64[1],
                      v170,
                      v171,
                      v172,
                      (_DWORD)v174,
                      (_DWORD)v175,
                      (_DWORD)v176,
                      v177,
                      (_DWORD)v178,
                      (_DWORD)v179,
                      (_DWORD)v180,
                      v181,
                      v182.m128i_i32[0],
                      v182.m128i_i64[1]);
                    return (unsigned int)v11;
                  }
                }
              }
            }
            return 0;
          }
          v99 = (__int64 *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
          v100 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v100 & 2) != 0 )
          {
LABEL_183:
            *v48 = (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFFCLL | *v48 & 3;
            *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816));
            **(_QWORD **)(a1 + 816) &= ~1uLL;
            **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_184:
            *(_QWORD *)(a1 + 824) = 0;
            goto LABEL_64;
          }
          v101 = (__int64 *)v99[1];
          if ( (*(_BYTE *)v101 & 2) != 0 )
          {
            v102 = (__int64 *)v99[2];
            if ( (*(_BYTE *)v102 & 2) != 0 )
              goto LABEL_186;
          }
          else
          {
            sub_7ACC0(v101);
            v102 = (__int64 *)v99[2];
            if ( (*(_BYTE *)v102 & 2) != 0 )
              goto LABEL_179;
          }
          sub_7ACC0(v102);
LABEL_179:
          v100 = *v99;
          if ( (*v99 & 2) != 0 )
          {
LABEL_180:
            if ( v49 > 3 )
              qfree(v49 & 0xFFFFFFFFFFFFFFFCLL);
            v48 = *(unsigned __int64 **)(a1 + 816);
            goto LABEL_183;
          }
LABEL_186:
          *v99 = v100 | 2;
          goto LABEL_180;
        }
        v71 = sub_7CEC0((_QWORD *)a2);
        v72 = v71 - 1;
        if ( v71 )
        {
          v73 = (_QWORD *)get_func();
          *(_QWORD *)(a1 + 8) = v73;
          if ( !v73 || *v73 != v72 )
            return 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        if ( !(unsigned __int8)sub_7DB20(a2, a1 + 16) )
          return 0;
        v74 = *(_QWORD **)(a1 + 8);
        if ( v74 )
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
            v75 = sub_7CEC0((_QWORD *)a2);
            v76 = *(_QWORD **)(a1 + 8);
            v77 = v75 - 1;
            *(_QWORD *)(a1 + 40) = v77;
            if ( v76 && v77 != *v76 )
              return 0;
            *(_QWORD *)(a2 + 32) = v77;
            goto LABEL_16;
          }
          v74 = *(_QWORD **)(a1 + 16);
        }
        if ( a3 != *v74 )
          return 0;
        goto LABEL_123;
      }
LABEL_85:
      if ( v15 != 3 || v16 != 2 )
        return 0;
      *(_DWORD *)(a2 + 40) = 3;
      goto LABEL_8;
    }
LABEL_113:
    *(_DWORD *)(a2 + 40) = 4;
LABEL_114:
    v15 = 4;
    goto LABEL_8;
  }
  if ( v14 <= 5 )
    goto LABEL_111;
LABEL_89:
  if ( v16 != 1 )
  {
    v15 = v16;
    goto LABEL_8;
  }
  *(_QWORD *)(a2 + 32) = -1;
  *(_DWORD *)a1 = sub_7CD20((_QWORD *)a2) & 0xEFFFFFFF;
  sub_7D150((__int64)v192, (_QWORD *)a2);
  v57 = *(_QWORD *)(a1 + 408);
  v58 = *(_QWORD *)v192;
  memset(v192, 0, sizeof(v192));
  v59 = _mm_loadu_si128((const __m128i *)&v192[8]);
  if ( v57 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    *(__m128i *)n = v59;
    qfree(v57);
    v60 = _mm_load_si128((const __m128i *)n);
    v61 = *(_QWORD *)v192;
    *(_QWORD *)(a1 + 408) = v58;
    *(__m128i *)(a1 + 416) = v60;
    if ( v61 )
    {
      *(_QWORD *)&v192[8] = 0;
      qfree(v61);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 408) = v58;
    *(__m128i *)(a1 + 416) = v59;
  }
  v62 = sub_7D4F0((_QWORD *)a2);
  if ( v62 < 0 )
    return 0;
  v63 = v62;
  v64 = *(_QWORD *)(a1 + 440);
  if ( v63 != v64 )
  {
    v181 = 0;
    v183 = 1;
    v182 = _mm_load_si128((const __m128i *)&xmmword_424800);
    src = nullptr;
    v186 = nullptr;
    v188 = 0;
    v189 = 0xFFFFFFFF00000000LL;
    v190 = 0;
    v185 = 0;
    v187 = 0;
    if ( v63 < v64 )
    {
      v79 = v63;
      v80 = v64;
      v81 = 104 * v63;
      do
      {
        ++v79;
        v82 = (_QWORD *)(v81 + *(_QWORD *)(a1 + 432));
        v81 += 104;
        sub_83E20(v82);
      }
      while ( v79 < v80 );
      *(_QWORD *)(a1 + 440) = v63;
    }
    else
    {
      v65 = *(_QWORD *)(a1 + 432);
      if ( (unsigned __int64)&v181 < v65 || (unsigned __int64)&v181 >= v65 + 104LL * *(_QWORD *)(a1 + 448) )
      {
        sub_88870((__int64 *)(a1 + 432), v63, (__int64)&v181);
      }
      else
      {
        v66 = &v181;
        *(_DWORD *)v192 = 0;
        copy_argloc();
        v194 = nullptr;
        v195 = 0;
        *(_QWORD *)&v192[16] = v182.m128i_i64[1];
        v193 = v183;
        if ( (_QWORD)v185 )
        {
          n[0] = v185;
          v83 = (void *)qalloc_or_throw(v185, (__int64)&v181, v185, v67);
          v66 = (unsigned __int64 *)src;
          v194 = v83;
          *((_QWORD *)&v195 + 1) = n[0];
          memcpy(v83, src, n[0]);
          *(_QWORD *)&v195 = n[0];
        }
        v196 = nullptr;
        v197 = 0;
        if ( (_QWORD)v187 )
        {
          n[0] = v187;
          v196 = (void *)qalloc_or_throw(v187, (__int64)v66, v187, v67);
          *((_QWORD *)&v197 + 1) = n[0];
          memcpy(v196, v186, n[0]);
          *(_QWORD *)&v197 = n[0];
        }
        v198 = 0;
        copy_tinfo_t();
        v199 = v189;
        v200 = v190;
        sub_88870((__int64 *)(a1 + 432), v63, (__int64)v192);
        sub_83E20(v192);
      }
    }
    sub_83E20(&v181);
  }
  v11 = sub_7D4F0((_QWORD *)v8);
  if ( v11 < 0 )
    return 0;
  while ( 1 )
  {
    v70 = v11-- == 0;
    if ( v70 )
      break;
    v69 = sub_67FD0(a1, -1, 0, v68);
    if ( !(unsigned __int8)sub_8BB70(v69, v8, a1) )
      return 0;
  }
  LOBYTE(v11) = (unsigned int)sub_330F20(a1, 1) == -33;
  return (unsigned int)v11;
}
