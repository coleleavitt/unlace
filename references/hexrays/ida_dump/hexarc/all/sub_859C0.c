__int64 __fastcall sub_859C0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
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
  __int64 v34; // r12
  __int64 *v35; // r12
  __int64 v36; // r12
  __int64 v37; // r14
  unsigned __int64 *v38; // rsi
  __int64 *v39; // r14
  __int64 (__fastcall *v40)(_QWORD *); // rax
  __int64 *v41; // r12
  __int64 *v42; // rdi
  __int64 v43; // rdi
  int v44; // eax
  unsigned __int64 *v45; // r10
  unsigned __int64 v46; // r12
  _DWORD *v47; // rdi
  unsigned __int64 i; // r12
  unsigned __int64 v49; // r14
  __int64 v50; // rax
  unsigned __int64 *v51; // r10
  unsigned __int64 *v52; // r11
  char v53; // al
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // r12
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __int64 v59; // rdi
  int v60; // eax
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  bool v65; // cf
  __int64 v66; // rax
  __int64 v67; // r15
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rdx
  __int64 v72; // rax
  _QWORD *v73; // rax
  unsigned __int64 v74; // r14
  unsigned __int64 v75; // r15
  __int64 v76; // r13
  _QWORD *v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rdi
  __int64 v80; // rdx
  __m128i v81; // xmm0
  __int64 v82; // rcx
  _DWORD *v83; // rdi
  __int64 v84; // rcx
  unsigned __int64 *v85; // r10
  __m128i si128; // xmm0
  __m128i v87; // xmm0
  __int64 v88; // rax
  __int64 v89; // rdx
  int v90; // r12d
  __int64 *v91; // r14
  __int64 *v92; // r14
  __int64 v93; // rax
  __int64 *v94; // rdi
  __int64 *v95; // rdi
  char v96; // al
  int v97; // eax
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rdi
  int v102; // eax
  int v103; // eax
  unsigned __int64 v104; // r14
  __int64 v105; // rax
  unsigned __int64 *v106; // r10
  unsigned __int64 *v107; // r11
  char v108; // al
  __int64 v109; // rax
  char v110; // al
  __int64 v111; // rdx
  __m128i v112; // xmm0
  __int64 v113; // rcx
  _DWORD *v114; // rdi
  __int64 v115; // rcx
  _DWORD *v116; // rdi
  unsigned __int64 v117; // r10
  __m128i v118; // xmm0
  __m128i v119; // xmm0
  __int64 v120; // rax
  unsigned __int64 v121; // rdx
  unsigned __int64 v122; // rdx
  __int64 v123; // rdx
  __int64 v124; // rdi
  __int64 *v125; // r14
  __int64 v126; // rdi
  __int64 v127; // r14
  __int64 v128; // r14
  int v129; // ecx
  int v130; // r8d
  __int64 v131; // r14
  int v132; // r13d
  unsigned __int64 *v133; // r14
  int v134; // r13d
  unsigned __int64 *v135; // r14
  __int64 v136; // rax
  int v137; // edx
  int v138; // ecx
  int v139; // r8d
  int v140; // r9d
  __int64 *v141; // rax
  __int64 *v142; // r14
  __int64 *v143; // rax
  __int64 *v144; // r14
  __int64 v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 *v148; // r14
  __int64 v149; // rax
  __int64 v150; // rdi
  unsigned __int64 v151; // rdx
  unsigned __int64 v152; // rdx
  __int64 *v153; // r13
  __int64 *v154; // r14
  __int64 v155; // rax
  size_t n[2]; // [rsp+0h] [rbp-188h] BYREF
  __m128i v157; // [rsp+10h] [rbp-178h] BYREF
  __int64 v158; // [rsp+20h] [rbp-168h]
  unsigned __int64 v159; // [rsp+28h] [rbp-160h]
  int v160; // [rsp+30h] [rbp-158h]
  char v161; // [rsp+37h] [rbp-151h]
  __m128i *v162; // [rsp+38h] [rbp-150h]
  unsigned __int64 *v163; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v164; // [rsp+48h] [rbp-140h]
  int v165; // [rsp+50h] [rbp-138h]
  const __m128i *v166; // [rsp+58h] [rbp-130h] BYREF
  const __m128i *v167; // [rsp+60h] [rbp-128h] BYREF
  unsigned __int64 *v168; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v169; // [rsp+70h] [rbp-118h] BYREF
  __m128i v170; // [rsp+78h] [rbp-110h]
  __int64 v171; // [rsp+88h] [rbp-100h]
  void *src; // [rsp+90h] [rbp-F8h]
  __int128 v173; // [rsp+98h] [rbp-F0h]
  void *v174; // [rsp+A8h] [rbp-E0h]
  __int128 v175; // [rsp+B0h] [rbp-D8h]
  __int64 v176; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v177; // [rsp+C8h] [rbp-C0h]
  __int64 v178; // [rsp+D0h] [rbp-B8h]
  int v179; // [rsp+D8h] [rbp-B0h]
  _BYTE v180[24]; // [rsp+E0h] [rbp-A8h] BYREF
  int v181; // [rsp+F8h] [rbp-90h]
  void *v182; // [rsp+100h] [rbp-88h]
  __int128 v183; // [rsp+108h] [rbp-80h]
  void *v184; // [rsp+118h] [rbp-70h]
  __int128 v185; // [rsp+120h] [rbp-68h]
  __int64 v186[11]; // [rsp+130h] [rbp-58h] BYREF

  v186[3] = __readfsqword(0x28u);
  v10 = sub_767A0((_QWORD *)a2);
  *(_DWORD *)(a2 + 48) = v10;
  if ( (unsigned int)(v10 - 1) > 0xC )
    return 0;
  v13 = sub_767A0((_QWORD *)a2);
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
        LODWORD(n[0]) = sub_767A0((_QWORD *)a2);
        v17 = sub_767A0((_QWORD *)a2);
        *(_DWORD *)a1 = v17 & 0xEFFFFFFF;
        v18 = v17 & 4;
        if ( (v17 & 4) != 0 )
          return 0;
        *(_DWORD *)(a1 + 4) = sub_767A0((_QWORD *)a2);
        if ( *(_DWORD *)(a2 + 48) > 3u )
        {
          if ( *(_DWORD *)(a2 + 40) == 4 )
          {
            a3 = sub_76940((_QWORD *)a2);
          }
          else if ( a3 == -1 )
          {
            return 0;
          }
          *(_QWORD *)(a2 + 32) = a3;
          *(_QWORD *)(a1 + 40) = a3;
          if ( SLOBYTE(n[0]) < 0 )
          {
            if ( !(unsigned __int8)sub_775A0((_QWORD *)a2, (__int64 *)(a1 + 16)) || !*(_QWORD *)(a1 + 24) )
              return 0;
            v73 = *(_QWORD **)(a1 + 8);
            if ( !v73 )
              v73 = *(_QWORD **)(a1 + 16);
            if ( *(_QWORD *)(a1 + 40) != *v73 )
              return 0;
          }
          else
          {
            func = (_QWORD *)get_func(a3);
            *(_QWORD *)(a1 + 8) = func;
            if ( !func
              || *func != *(_QWORD *)(a1 + 40)
              || *(_DWORD *)(a2 + 48) > 4u && !(unsigned __int8)sub_775A0((_QWORD *)a2, (__int64 *)(a1 + 16)) )
            {
              return 0;
            }
          }
LABEL_16:
          *(_QWORD *)(a1 + 48) = sub_76A40(a2, 1u);
          *(_QWORD *)(a1 + 56) = sub_76A40(a2, 1u);
          *(_DWORD *)(a1 + 68) = sub_767A0((_QWORD *)a2) - 1;
          *(_DWORD *)(a1 + 72) = sub_77810((unsigned __int8 **)a2);
          *(_QWORD *)(a1 + 80) = sub_76AA0(a2, 0);
          *(_QWORD *)(a1 + 88) = sub_76AA0(a2, 0);
          *(_QWORD *)(a1 + 96) = sub_76AA0(a2, 0);
          *(_QWORD *)(a1 + 104) = sub_76AA0(a2, 0);
          *(_DWORD *)(a1 + 112) = sub_767A0((_QWORD *)a2);
          *(_DWORD *)(a1 + 116) = sub_767A0((_QWORD *)a2);
          *(_DWORD *)(a1 + 120) = sub_767A0((_QWORD *)a2);
          *(_QWORD *)(a1 + 128) = sub_76AA0(a2, 0);
          *(_QWORD *)(a1 + 136) = sub_76AA0(a2, 0);
          *(_QWORD *)(a1 + 144) = sub_76AA0(a2, 0);
          v20 = sub_76AA0(a2, 0);
          *(_QWORD *)(a1 + 152) = v20;
          v21 = v20;
          v22 = sub_1C8060(a1);
          sub_1C80B0(a1, v22, v21);
          *(_QWORD *)(a1 + 160) = sub_76A40(a2, 1u);
          *(_QWORD *)(a1 + 168) = sub_76AA0(a2, 0);
          *(_QWORD *)(a1 + 176) = sub_76AA0(a2, 0);
          v23 = *(_DWORD *)(a2 + 48);
          if ( v23 > 8 )
          {
            if ( !(unsigned __int8)sub_78B10((__int64 *)(a1 + 1448), (char **)a2) )
              return 0;
            v23 = *(_DWORD *)(a2 + 48);
          }
          if ( v23 <= 6 )
            goto LABEL_18;
          if ( !(unsigned __int8)sub_78D00((__int64 *)(a1 + 1472), (_QWORD *)a2) )
            return 0;
          if ( *(_DWORD *)(a2 + 48) <= 9u )
          {
LABEL_18:
            *(_OWORD *)v180 = 0;
            if ( !(unsigned __int8)sub_77A50((__int64 *)v180, a2) || !(unsigned __int8)sub_77A50((__int64 *)v180, a2) )
              return 0;
          }
          if ( !(unsigned __int8)sub_77B00((__int64 *)(a1 + 184), (__int64 *)a2)
            || !(unsigned __int8)sub_77B00((__int64 *)(a1 + 208), (__int64 *)a2)
            || !(unsigned __int8)sub_77B00((__int64 *)(a1 + 232), (__int64 *)a2)
            || !(unsigned __int8)sub_78320((__int64 *)(a1 + 256), (__int64 *)a2)
            || !(unsigned __int8)sub_780E0((__int64 *)(a1 + 296), (unsigned __int64 *)a2) )
          {
            return 0;
          }
          *(_DWORD *)(a1 + 312) = sub_767A0((_QWORD *)a2);
          *(_DWORD *)(a1 + 316) = sub_767A0((_QWORD *)a2);
          v24 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 320) = n[0];
          *(_BYTE *)(a1 + 320) &= 1u;
          sub_76D40((unsigned __int8 **)a2, a1 + 328, v24);
          if ( (*(_BYTE *)a1 & 0x20) != 0 )
          {
            sub_76150((_QWORD *)a2, (__int64 *)(a1 + 336));
            if ( !(unsigned __int8)sub_78320((__int64 *)(a1 + 360), (__int64 *)a2) )
              return 0;
          }
          else
          {
            v78 = *(_QWORD *)(a1 + 336);
            if ( v78 )
            {
              *(_QWORD *)(a1 + 344) = 0;
              qfree(v78);
              *(_QWORD *)(a1 + 336) = 0;
              *(_QWORD *)(a1 + 352) = 0;
            }
            v79 = *(_QWORD *)(a1 + 376);
            *(_QWORD *)(a1 + 368) = 0;
            if ( v79 )
            {
              *(_QWORD *)(a1 + 384) = 0;
              qfree(v79);
              *(_QWORD *)(a1 + 376) = 0;
              *(_QWORD *)(a1 + 392) = 0;
            }
          }
          *(_DWORD *)(a1 + 400) = sub_767A0((_QWORD *)a2);
          if ( *(_DWORD *)(a2 + 48) <= 3u )
            sub_76940((_QWORD *)a2);
          sub_76BD0((__int64)v180, (_QWORD *)a2);
          v25 = *(_QWORD *)(a1 + 408);
          v26 = *(_QWORD *)v180;
          v27 = _mm_loadu_si128((const __m128i *)&v180[8]);
          memset(v180, 0, sizeof(v180));
          if ( v25 )
          {
            v157 = v27;
            *(_QWORD *)(a1 + 416) = 0;
            qfree(v25);
            v27 = _mm_load_si128(&v157);
          }
          v28 = *(_QWORD *)v180;
          *(_QWORD *)(a1 + 408) = v26;
          *(__m128i *)(a1 + 416) = v27;
          if ( v28 )
          {
            *(_QWORD *)&v180[8] = 0;
            qfree(v28);
          }
          if ( !(unsigned __int8)sub_82380((_QWORD *)a2, (_QWORD *)(a1 + 432)) )
            return 0;
          v29 = *(_QWORD *)(a1 + 432);
          for ( v157.m128i_i64[0] = v29 + 104LL * *(_QWORD *)(a1 + 440); v157.m128i_i64[0] != v29; v29 += 104 )
            sub_778A0(v29, (unsigned __int8 **)a2);
          if ( !(unsigned __int8)sub_76FB0((_QWORD *)a2, (__int64 *)(a1 + 456)) )
            return 0;
          *(_DWORD *)(a1 + 480) = sub_767A0((_QWORD *)a2) - 1;
          *(_QWORD *)(a1 + 488) = sub_76A40(a2, 1u);
          sub_76BD0((__int64)v180, (_QWORD *)a2);
          v30 = *(_QWORD *)(a1 + 496);
          v31 = *(_QWORD *)v180;
          v32 = _mm_loadu_si128((const __m128i *)&v180[8]);
          memset(v180, 0, sizeof(v180));
          if ( v30 )
          {
            v157 = v32;
            *(_QWORD *)(a1 + 504) = 0;
            qfree(v30);
            v32 = _mm_load_si128(&v157);
          }
          v33 = *(_QWORD *)v180;
          *(_QWORD *)(a1 + 496) = v31;
          *(__m128i *)(a1 + 504) = v32;
          if ( v33 )
          {
            *(_QWORD *)&v180[8] = 0;
            qfree(v33);
          }
          *(_DWORD *)(a1 + 64) = sub_767A0((_QWORD *)a2);
          *(_QWORD *)(a1 + 520) = 0;
          v161 = 0;
          while ( *(_DWORD *)(a1 + 64) > v18 )
          {
            v34 = j__qalloc_or_throw(528);
            sub_3294C0(v34, *(_QWORD *)(a1 + 1496));
            *(_DWORD *)(v34 + 72) = v18;
            sub_61660(a1, v34, 0);
            if ( !(unsigned __int8)sub_854B0(v34, a2, a1) )
              return 0;
            ++v18;
            v161 |= (*(_BYTE *)(v34 + 24) & 8) != 0;
          }
          sub_61800(a1);
          sub_1CDED0(a1);
          v35 = (__int64 *)(a1 + 536);
          do
          {
            if ( !(unsigned __int8)sub_77A50(v35, a2) )
              return 0;
            v35 += 4;
          }
          while ( (__int64 *)(a1 + 728) != v35 );
          sub_1A8670(a1);
          LOBYTE(v159) = sub_7C340((_QWORD *)a2, (__int64 *)(a1 + 728));
          if ( !(_BYTE)v159 )
            return 0;
          v36 = *(_QWORD *)(a1 + 728);
          v37 = v36 + 40LL * *(_QWORD *)(a1 + 736);
          while ( v36 != v37 )
          {
            sub_78670(v36, (_QWORD *)a2);
            v36 += 40;
          }
          v38 = (unsigned __int64 *)(a1 + 752);
          sub_76CC0(a2, (_BYTE *)(a1 + 752), 32);
          v39 = *(__int64 **)(a1 + 784);
          if ( v39 )
          {
            v40 = *(__int64 (__fastcall **)(_QWORD *))(*v39 + 8);
            if ( v40 == sub_609B0 )
            {
              v41 = v39 + 27;
              *v39 = (__int64)off_4B8590;
              v157.m128i_i64[0] = (__int64)(v39 + 3);
              do
              {
                v42 = v41;
                v41 -= 4;
                sub_60700(v42);
              }
              while ( (__int64 *)v157.m128i_i64[0] != v41 );
              v43 = v39[1];
              *v39 = (__int64)&unk_4B8648;
              if ( v43 )
              {
                v39[2] = 0;
                qfree(v43);
              }
              j__qfree(v39);
            }
            else
            {
              v40(*(_QWORD **)(a1 + 784));
            }
          }
          *(_QWORD *)(a1 + 784) = 0;
          if ( (n[0] & 2) != 0 )
            sub_60B60((_QWORD *)a1);
          v44 = sub_767A0((_QWORD *)a2);
          v45 = *(unsigned __int64 **)(a1 + 816);
          *(_DWORD *)(a1 + 792) = v44;
          *(_OWORD *)(a1 + 800) = 0;
          if ( !v45 )
            goto LABEL_184;
          v46 = *v45;
          if ( !*(_QWORD *)(a1 + 824) )
          {
            *v45 = *v45 & 3 | (unsigned __int64)v45 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816));
            **(_QWORD **)(a1 + 816) &= ~1uLL;
            **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_64:
            v47 = (_DWORD *)a2;
            v160 = sub_76F70((_QWORD *)a2);
            if ( v160 < 0 )
              return 0;
            i = *(_QWORD *)(a1 + 816);
            v157.m128i_i64[0] = a1 + 816;
            v162 = (__m128i *)&v169;
LABEL_66:
            while ( 2 )
            {
              if ( --v160 != -1 )
              {
                if ( (unsigned __int8)is_cvt64(v47, v38) )
                  v49 = (int)sub_767A0((_QWORD *)a2);
                else
                  v49 = sub_767C0(a2);
                if ( (unsigned __int8)is_cvt64(a2, v38) )
                  v50 = (int)sub_767A0((_QWORD *)a2);
                else
                  v50 = sub_767C0(a2);
                v170.m128i_i64[0] = v50;
                v51 = *(unsigned __int64 **)(a1 + 816);
                v169 = v49;
                v52 = v51;
                v166 = v162;
                if ( v51 )
                {
                  if ( *(_QWORD *)(a1 + 824) )
                  {
                    v47 = nullptr;
                    v168 = v51;
                    LOBYTE(v167) = 1;
                    *(_QWORD *)v180 = 0;
                    if ( i )
                    {
                      v38 = (unsigned __int64 *)v162;
                      v47 = (_DWORD *)v157.m128i_i64[0];
                      v164 = v51;
                      v163 = v51;
                      v53 = sub_81F10(
                              (unsigned __int64 *)v157.m128i_i64[0],
                              (unsigned __int64 *)v162,
                              (_QWORD *)i,
                              (unsigned __int64 *)&v168,
                              &v167,
                              (unsigned __int64 *)v180);
                      v52 = v163;
                      v51 = v164;
                      if ( v53 )
                      {
                        i = *(_QWORD *)v180;
                        if ( !*(_QWORD *)v180 )
                        {
                          v38 = v168;
                          v47 = (_DWORD *)v157.m128i_i64[0];
                          v54 = sub_83D20((__m128i *)v157.m128i_i64[0], v168, (char)v167, &v166);
LABEL_77:
                          i = v54;
                        }
                        continue;
                      }
                    }
                    v96 = v159;
                    for ( i = *v51 & 0xFFFFFFFFFFFFFFFCLL; ; i = v152 )
                    {
                      if ( (*(_BYTE *)i & 2) != 0 )
                        goto LABEL_189;
                      v151 = *(_QWORD *)(i + 24);
                      if ( v49 >= v151 )
                      {
                        if ( v151 >= v49 )
                        {
                          if ( !i )
                          {
                            v52 = nullptr;
LABEL_189:
                            v47 = (_DWORD *)v157.m128i_i64[0];
                            v38 = v52;
                            v54 = sub_83D20((__m128i *)v157.m128i_i64[0], v52, v96, &v166);
                            goto LABEL_77;
                          }
                          goto LABEL_66;
                        }
                        v152 = *(_QWORD *)(i + 16);
                        v96 = 0;
                      }
                      else
                      {
                        v152 = *(_QWORD *)(i + 8);
                        v96 = v159;
                      }
                      v52 = (unsigned __int64 *)i;
                    }
                  }
                }
                else
                {
                  v80 = qalloc(40);
                  v81 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v80, (__m128i)(unsigned __int64)v80);
                  if ( !v80 )
                  {
                    exception = __cxa_allocate_exception(8u);
                    *exception = (char *)&`vtable for'std::bad_alloc + 16;
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'std::bad_alloc,
                      (void (*)(void *))&std::bad_alloc::~bad_alloc);
                  }
                  v82 = 10;
                  v83 = (_DWORD *)v80;
                  while ( v82 )
                  {
                    *v83++ = 0;
                    --v82;
                  }
                  *(__m128i *)(v80 + 8) = v81;
                  *(_QWORD *)v80 = v80 & 0xFFFFFFFFFFFFFFFCLL | 2;
                  *(_QWORD *)(a1 + 816) = v80;
                  *(_QWORD *)v80 = v80 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v80 & 3LL;
                  *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                                (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                                (__m128i)*(unsigned __int64 *)(a1 + 816));
                  **(_QWORD **)(a1 + 816) &= ~1uLL;
                  **(_QWORD **)(a1 + 816) |= 2uLL;
                  v51 = *(unsigned __int64 **)(a1 + 816);
                }
                v163 = v51;
                i = qalloc(40);
                if ( !i )
                {
                  v4 = __cxa_allocate_exception(8u);
                  *v4 = (char *)&`vtable for'std::bad_alloc + 16;
                  __cxa_throw(
                    v4,
                    (struct type_info *)&`typeinfo for'std::bad_alloc,
                    (void (*)(void *))&std::bad_alloc::~bad_alloc);
                }
                v84 = 10;
                v47 = (_DWORD *)i;
                v85 = v163;
                while ( v84 )
                {
                  *v47++ = 0;
                  --v84;
                }
                si128 = _mm_load_si128((const __m128i *)&v169);
                *(_QWORD *)i = (unsigned __int64)v85 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(i + 24) = si128;
                v87 = _mm_loadl_epi64((const __m128i *)(a1 + 816));
                *(_QWORD *)i = (unsigned __int64)v85 & 0xFFFFFFFFFFFFFFFCLL | 1;
                *(__m128i *)(i + 8) = _mm_unpacklo_epi64(v87, v87);
                if ( v85 == *(unsigned __int64 **)(a1 + 816) )
                {
                  *v85 = i & 0xFFFFFFFFFFFFFFFCLL | *v85 & 3;
                  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 8LL) = i;
                  *(_QWORD *)(*(_QWORD *)(a1 + 816) + 16LL) = i;
                  v89 = *(_QWORD *)i & 2LL;
                  *(_QWORD *)i &= ~1uLL;
                  *(_QWORD *)i = v89 | *(_QWORD *)(a1 + 816) & 0xFFFFFFFFFFFFFFFCLL;
                }
                else
                {
                  v85[1] = i;
                  v88 = *(_QWORD *)(a1 + 816);
                  if ( v85 == *(unsigned __int64 **)(v88 + 8) )
                    *(_QWORD *)(v88 + 8) = i;
                  v47 = (_DWORD *)v157.m128i_i64[0];
                  v38 = (unsigned __int64 *)i;
                  sub_83A50(v157.m128i_i64[0], (__int64 *)i);
                }
                ++*(_QWORD *)(a1 + 824);
                continue;
              }
              break;
            }
            if ( *(_DWORD *)(a2 + 48) > 2u )
            {
              if ( (unsigned __int8)sub_78320((__int64 *)(a1 + 832), (__int64 *)a2) )
                goto LABEL_170;
              return 0;
            }
            v150 = *(_QWORD *)(a1 + 848);
            *(_QWORD *)(a1 + 840) = 0;
            if ( v150 )
            {
              *(_QWORD *)(a1 + 856) = 0;
              qfree(v150);
              *(_QWORD *)(a1 + 848) = 0;
              *(_QWORD *)(a1 + 864) = 0;
            }
LABEL_170:
            v157.m128i_i64[0] = a1 + 872;
            sub_7C580((unsigned __int64 **)(a1 + 872));
            v90 = sub_76F70((_QWORD *)a2);
            if ( v90 < 0 )
              return 0;
            v91 = *(__int64 **)(a1 + 872);
            while ( 1 )
            {
              v65 = v90-- == 0;
              if ( v65 )
                break;
              sub_76BD0((__int64)v180, (_QWORD *)a2);
              v91 = (__int64 *)sub_83020((__m128i *)v157.m128i_i64[0], v91, (__int64)v180);
              if ( *(_QWORD *)v180 )
              {
                *(_QWORD *)&v180[8] = 0;
                qfree(*(_QWORD *)v180);
              }
            }
            *(_DWORD *)(a1 + 888) = sub_767A0((_QWORD *)a2);
            *(_DWORD *)(a1 + 892) = sub_767A0((_QWORD *)a2);
            *(_DWORD *)(a1 + 896) = sub_767A0((_QWORD *)a2);
            *(_DWORD *)(a1 + 900) = sub_767A0((_QWORD *)a2);
            *(_DWORD *)(a1 + 904) = sub_767A0((_QWORD *)a2);
            *(_DWORD *)(a1 + 908) = sub_767A0((_QWORD *)a2);
            v97 = sub_767A0((_QWORD *)a2);
            v98 = *(_QWORD *)(a1 + 920);
            *(_DWORD *)(a1 + 912) = v97;
            if ( v98 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 8LL))(v98);
            *(_QWORD *)(a1 + 920) = 0;
            if ( (n[0] & 4) != 0 )
            {
              v99 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1504) + 336LL))(*(_QWORD *)(a1 + 1504));
              *(_QWORD *)(a1 + 920) = v99;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v99 + 24LL))(v99, a2) )
                return 0;
            }
            v100 = *(_QWORD *)(a1 + 928);
            if ( v100 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 8LL))(v100);
            v101 = *(_QWORD *)(a1 + 936);
            *(_QWORD *)(a1 + 928) = 0;
            if ( v101 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 8LL))(v101);
            *(_QWORD *)(a1 + 936) = 0;
            if ( (n[0] & 8) != 0 )
            {
              v101 = *(_QWORD *)(a1 + 928);
              if ( !v101 )
              {
                v155 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1504) + 312LL))(
                         *(_QWORD *)(a1 + 1504),
                         a1);
                *(_QWORD *)(a1 + 928) = v155;
                v101 = v155;
              }
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v101 + 88LL))(v101, a2);
              if ( (n[0] & 0x10) != 0 )
              {
                v149 = sub_199550(*(_QWORD *)(a1 + 928));
                *(_QWORD *)(a1 + 936) = v149;
                v101 = v149;
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v149 + 112LL))(v149, a2) )
                  return 0;
              }
            }
            if ( *(_DWORD *)(a2 + 48) <= 4u )
            {
              if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
                sub_73F90(v101);
              v102 = unpack_dd(a2);
              if ( *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 < (unsigned __int64)v102 )
                return 0;
              if ( v102 )
                return 0;
              v103 = sub_767A0((_QWORD *)a2);
              if ( *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 < (unsigned __int64)v103
                || v103
                || (unsigned int)sub_76F70((_QWORD *)a2) )
              {
                return 0;
              }
              sub_767A0((_QWORD *)a2);
            }
            if ( !(unsigned __int8)sub_740C0(v15, 0, 0x3B8u) || (unsigned __int8)sub_77130(a2, a1 + 952) )
            {
              v11 = sub_77130(a2, a1 + 1000);
              if ( (_BYTE)v11
                && (!(unsigned __int8)sub_740C0(v15, 0, 0x418u) || (unsigned __int8)sub_77130(a2, a1 + 1048))
                && (*(_DWORD *)(a2 + 48) > 5u
                 || !(unsigned __int8)sub_740C0(v15, 0, 0x448u)
                 || (unsigned __int8)sub_773A0((_QWORD *)a2)) )
              {
                LOBYTE(v162) = sub_740C0(v15, 0, 0x478u);
                if ( (_BYTE)v162 )
                {
                  v157.m128i_i64[0] = a1 + 1144;
                  sub_7D7B0((unsigned __int64 **)(a1 + 1144));
                  v160 = sub_76F70((_QWORD *)a2);
                  if ( v160 < 0 )
                    return 0;
                  v104 = *(_QWORD *)(a1 + 1144);
LABEL_216:
                  while ( 2 )
                  {
                    while ( 2 )
                    {
                      if ( --v160 == -1 )
                        goto LABEL_251;
                      v159 = sub_76A40(a2, 0);
                      v105 = sub_76A40(a2, 0);
                      v106 = *(unsigned __int64 **)(a1 + 1144);
                      v167 = (const __m128i *)v180;
                      *(_QWORD *)&v180[8] = v105;
                      *(_QWORD *)v180 = v159;
                      v107 = v106;
                      if ( v106 )
                      {
                        if ( *(_QWORD *)(a1 + 1152) )
                        {
                          v168 = v106;
                          LOBYTE(v166) = 1;
                          v169 = 0;
                          if ( v104 )
                          {
                            v164 = v106;
                            v163 = v106;
                            v108 = sub_81F10(
                                     (unsigned __int64 *)v157.m128i_i64[0],
                                     (unsigned __int64 *)v180,
                                     (_QWORD *)v104,
                                     (unsigned __int64 *)&v168,
                                     &v166,
                                     &v169);
                            v107 = v163;
                            v106 = v164;
                            if ( v108 )
                            {
                              v104 = v169;
                              if ( !v169 )
                              {
                                v109 = sub_83E60((__m128i *)v157.m128i_i64[0], v168, (char)v166, &v167);
LABEL_223:
                                v104 = v109;
                              }
                              continue;
                            }
                          }
                          v104 = *v106 & 0xFFFFFFFFFFFFFFFCLL;
                          v110 = (char)v162;
                          while ( 1 )
                          {
                            if ( (*(_BYTE *)v104 & 2) != 0 )
                              goto LABEL_230;
                            v121 = *(_QWORD *)(v104 + 24);
                            if ( v159 >= v121 )
                            {
                              if ( v121 >= v159 )
                              {
                                if ( !v104 )
                                {
                                  v107 = nullptr;
LABEL_230:
                                  v109 = sub_83E60((__m128i *)v157.m128i_i64[0], v107, v110, &v167);
                                  goto LABEL_223;
                                }
                                goto LABEL_216;
                              }
                              v122 = *(_QWORD *)(v104 + 16);
                              v110 = 0;
                            }
                            else
                            {
                              v122 = *(_QWORD *)(v104 + 8);
                              v110 = (char)v162;
                            }
                            v107 = (unsigned __int64 *)v104;
                            v104 = v122;
                          }
                        }
                      }
                      else
                      {
                        v111 = qalloc(40);
                        v112 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v111, (__m128i)(unsigned __int64)v111);
                        if ( !v111 )
                        {
                          v5 = __cxa_allocate_exception(8u);
                          *v5 = (char *)&`vtable for'std::bad_alloc + 16;
                          __cxa_throw(
                            v5,
                            (struct type_info *)&`typeinfo for'std::bad_alloc,
                            (void (*)(void *))&std::bad_alloc::~bad_alloc);
                        }
                        v113 = 10;
                        v114 = (_DWORD *)v111;
                        while ( v113 )
                        {
                          *v114++ = 0;
                          --v113;
                        }
                        *(__m128i *)(v111 + 8) = v112;
                        *(_QWORD *)v111 = v111 & 0xFFFFFFFFFFFFFFFCLL | 2;
                        *(_QWORD *)(a1 + 1144) = v111;
                        *(_QWORD *)v111 = v111 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v111 & 3LL;
                        *(__m128i *)(*(_QWORD *)(a1 + 1144) + 8LL) = _mm_unpacklo_epi64(
                                                                       (__m128i)*(unsigned __int64 *)(a1 + 1144),
                                                                       (__m128i)*(unsigned __int64 *)(a1 + 1144));
                        **(_QWORD **)(a1 + 1144) &= ~1uLL;
                        **(_QWORD **)(a1 + 1144) |= 2uLL;
                        v106 = *(unsigned __int64 **)(a1 + 1144);
                      }
                      break;
                    }
                    v159 = (unsigned __int64)v106;
                    v104 = qalloc(40);
                    if ( !v104 )
                    {
                      v6 = __cxa_allocate_exception(8u);
                      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
                      __cxa_throw(
                        v6,
                        (struct type_info *)&`typeinfo for'std::bad_alloc,
                        (void (*)(void *))&std::bad_alloc::~bad_alloc);
                    }
                    v115 = 10;
                    v116 = (_DWORD *)v104;
                    v117 = v159;
                    while ( v115 )
                    {
                      *v116++ = 0;
                      --v115;
                    }
                    v118 = _mm_load_si128((const __m128i *)v180);
                    *(_QWORD *)v104 = v117 & 0xFFFFFFFFFFFFFFFCLL;
                    *(__m128i *)(v104 + 24) = v118;
                    v119 = _mm_loadl_epi64((const __m128i *)(a1 + 1144));
                    *(_QWORD *)v104 = v117 & 0xFFFFFFFFFFFFFFFCLL | 1;
                    *(__m128i *)(v104 + 8) = _mm_unpacklo_epi64(v119, v119);
                    if ( v117 == *(_QWORD *)(a1 + 1144) )
                    {
                      *(_QWORD *)v117 = v104 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v117 & 3LL;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 8LL) = v104;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1144) + 16LL) = v104;
                      v123 = *(_QWORD *)v104 & 2LL;
                      *(_QWORD *)v104 &= ~1uLL;
                      *(_QWORD *)v104 = v123 | *(_QWORD *)(a1 + 1144) & 0xFFFFFFFFFFFFFFFCLL;
                    }
                    else
                    {
                      *(_QWORD *)(v117 + 8) = v104;
                      v120 = *(_QWORD *)(a1 + 1144);
                      if ( v117 == *(_QWORD *)(v120 + 8) )
                        *(_QWORD *)(v120 + 8) = v104;
                      sub_83A50(v157.m128i_i64[0], (__int64 *)v104);
                    }
                    ++*(_QWORD *)(a1 + 1152);
                    continue;
                  }
                }
LABEL_251:
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x488u)
                  && !(unsigned __int8)sub_77B00((__int64 *)(a1 + 1160), (__int64 *)a2) )
                {
                  return 0;
                }
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x4A0u) )
                  *(_DWORD *)(a1 + 1184) = sub_767A0((_QWORD *)a2) - 1;
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x4A8u) )
                {
                  if ( !(unsigned __int8)sub_77450(a2, (__int64 *)(a1 + 1192)) )
                    return 0;
                  if ( *(_DWORD *)(a2 + 44) == 2 )
                  {
                    v145 = *(_QWORD *)(a1 + 1192);
                    if ( v145 )
                    {
                      *(_QWORD *)(a1 + 1200) = 0;
                      qfree(v145);
                      *(_QWORD *)(a1 + 1192) = 0;
                      *(_QWORD *)(a1 + 1208) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x4C0u) )
                {
                  if ( !(unsigned __int8)sub_7C690((_QWORD *)a2, (__int64 *)(a1 + 1216)) )
                    return 0;
                  v148 = *(__int64 **)(a1 + 1216);
                  v157.m128i_i64[0] = (__int64)&v148[*(_QWORD *)(a1 + 1224)];
                  while ( (__int64 *)v157.m128i_i64[0] != v148 )
                    *v148++ = sub_76A40(a2, 0);
                }
                if ( v161 )
                {
                  v146 = j__qalloc_or_throw(176);
                  *(_QWORD *)(v146 + 8) = 0;
                  *(_QWORD *)(v146 + 96) = 0;
                  *(_BYTE *)(v146 + 32) = 0;
                  *(_QWORD *)v146 = off_4B7AD8;
                  *(_QWORD *)(v146 + 48) = 0;
                  *(_QWORD *)(v146 + 36) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v146 + 72) = 0;
                  *(_QWORD *)(v146 + 120) = 0;
                  *(_DWORD *)(v146 + 144) = 0;
                  *(_QWORD *)(v146 + 152) = 0;
                  *(_OWORD *)(v146 + 16) = 0;
                  *(_OWORD *)(v146 + 56) = 0;
                  *(_OWORD *)(v146 + 80) = 0;
                  *(_OWORD *)(v146 + 104) = 0;
                  *(_OWORD *)(v146 + 128) = 0;
                  *(_OWORD *)(v146 + 160) = 0;
                  *(_QWORD *)(a1 + 1240) = v146;
                  if ( !(unsigned __int8)sub_78440(v146, (_QWORD *)a2) )
                    return 0;
                  v147 = qalloc_or_throw(24);
                  *(_QWORD *)v147 = 0;
                  *(_OWORD *)(v147 + 8) = 0;
                  *(_QWORD *)(a1 + 1248) = v147;
                  if ( !(unsigned __int8)sub_775A0((_QWORD *)a2, (__int64 *)v147) )
                    return 0;
                }
                else
                {
                  v124 = *(_QWORD *)(a1 + 1240);
                  if ( v124 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v124 + 8LL))(v124);
                  v125 = *(__int64 **)(a1 + 1248);
                  *(_QWORD *)(a1 + 1240) = 0;
                  if ( v125 )
                  {
                    v126 = *v125;
                    if ( *v125 )
                    {
                      v125[1] = 0;
                      qfree(v126);
                    }
                    qfree(v125);
                  }
                  *(_QWORD *)(a1 + 1248) = 0;
                }
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x4E8u) )
                {
                  sub_2D0BC0(a1 + 1256, a2);
                  if ( *(_DWORD *)(a2 + 44) == 2 )
                    sub_7D650((unsigned __int64 **)(a1 + 1256));
                }
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x520u) )
                {
                  if ( !(unsigned __int8)sub_2CE210(a1 + 1312, a2, *(_QWORD *)(a2 + 8)) )
                    return 0;
                  if ( *(_DWORD *)(a2 + 44) == 2 )
                    sub_7D8B0((unsigned __int64 **)(a1 + 1312));
                }
                v127 = *(_QWORD *)(a1 + 1328);
                if ( v127 )
                {
                  sub_7C740(*(__int64 **)(a1 + 1328));
                  qfree(v127);
                }
                *(_QWORD *)(a1 + 1328) = 0;
                if ( (n[0] & 0x20) != 0 )
                  *(_QWORD *)(a1 + 1328) = sub_2CB9E0(a2);
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x540u) )
                {
                  v128 = *(_QWORD *)(a1 + 1344);
                  if ( v128 )
                  {
                    sub_7C8E0(*(__int64 **)(a1 + 1344));
                    qfree(v128);
                  }
                  *(_QWORD *)(a1 + 1344) = 0;
                  if ( (n[0] & 0x40) != 0 )
                  {
                    v141 = (__int64 *)sub_2CE790(a2, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 32));
                    *(_QWORD *)(a1 + 1344) = v141;
                    v142 = v141;
                    if ( *(_DWORD *)(a2 + 44) == 2 )
                    {
                      if ( v141 )
                      {
                        sub_7C8E0(v141);
                        qfree(v142);
                      }
                      *(_QWORD *)(a1 + 1344) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x538u) )
                {
                  v131 = *(_QWORD *)(a1 + 1336);
                  if ( v131 )
                  {
                    sub_7CA60(*(__int64 **)(a1 + 1336));
                    qfree(v131);
                  }
                  *(_QWORD *)(a1 + 1336) = 0;
                  if ( (n[0] & 0x100) != 0 )
                  {
                    v143 = (__int64 *)sub_2BBCA0(
                                        a2,
                                        *(_QWORD *)(a2 + 8),
                                        *(_QWORD *)(a2 + 16),
                                        v129,
                                        v130,
                                        0,
                                        n[0],
                                        n[1],
                                        v157.m128i_i32[0],
                                        v157.m128i_i32[2],
                                        v158,
                                        v159,
                                        v160,
                                        (_DWORD)v162,
                                        (_DWORD)v163,
                                        (_DWORD)v164,
                                        v165,
                                        (_DWORD)v166,
                                        (_DWORD)v167,
                                        (_DWORD)v168,
                                        v169,
                                        v170.m128i_i32[0],
                                        v170.m128i_i8[8],
                                        v171,
                                        (char)src,
                                        v173,
                                        SBYTE8(v173),
                                        (_DWORD)v174,
                                        v175,
                                        DWORD2(v175),
                                        v176,
                                        v177,
                                        v178,
                                        v179,
                                        *(_DWORD *)v180,
                                        *(_DWORD *)&v180[8],
                                        *(_DWORD *)&v180[16],
                                        v181,
                                        (_DWORD)v182,
                                        v183,
                                        DWORD2(v183),
                                        (_DWORD)v184,
                                        v185,
                                        DWORD2(v185),
                                        v186[0]);
                    *(_QWORD *)(a1 + 1336) = v143;
                    v144 = v143;
                    if ( *(_DWORD *)(a2 + 44) == 2 )
                    {
                      if ( v143 )
                      {
                        sub_7CA60(v143);
                        qfree(v144);
                      }
                      *(_QWORD *)(a1 + 1336) = 0;
                    }
                  }
                }
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x548u) )
                  *(_QWORD *)(a1 + 1352) = sub_76A40(a2, 1u);
                sub_7D9C0((unsigned __int64 **)(a1 + 1360));
                if ( (unsigned __int8)sub_740C0(v15, 0, 0x560u) )
                {
                  n[0] = a1 + 1376;
                  sub_7DAD0((unsigned __int64 **)(a1 + 1376));
                  v132 = sub_76F70((_QWORD *)a2);
                  if ( v132 < 0 )
                    return 0;
                  v133 = *(unsigned __int64 **)(a1 + 1376);
                  while ( 1 )
                  {
                    v65 = v132-- == 0;
                    if ( v65 )
                      break;
                    v157.m128i_i64[0] = sub_76A40(a2, 0);
                    *(_QWORD *)v180 = 0;
                    sub_76D40((unsigned __int8 **)a2, (__int64)v180, v157.m128i_i64[0]);
                    v133 = sub_84570((__m128i *)n[0], v133, v157.m128i_u64[0], (__int64)v180);
                    clear_tinfo_t(v180);
                  }
                }
                n[0] = a1 + 1392;
                sub_7DAD0((unsigned __int64 **)(a1 + 1392));
                v134 = sub_76F70((_QWORD *)a2);
                if ( v134 >= 0 )
                {
                  v135 = *(unsigned __int64 **)(a1 + 1392);
                  while ( 1 )
                  {
                    v65 = v134-- == 0;
                    if ( v65 )
                      break;
                    v157.m128i_i64[0] = sub_76A40(a2, 0);
                    *(_QWORD *)v180 = 0;
                    sub_76D40((unsigned __int8 **)a2, (__int64)v180, v157.m128i_i64[0]);
                    v135 = sub_84570((__m128i *)n[0], v135, v157.m128i_u64[0], (__int64)v180);
                    clear_tinfo_t(v180);
                  }
                  if ( *(_DWORD *)(a2 + 48) <= 1u )
                    goto LABEL_295;
                  if ( !(unsigned __int8)sub_7C690((_QWORD *)a2, (__int64 *)(a1 + 1408)) )
                    return 0;
                  if ( *(_QWORD *)(a1 + 1416) )
                  {
                    *(_QWORD *)(a1 + 1432) = sub_76A40(a2, 0);
                    v153 = *(__int64 **)(a1 + 1408);
                    v154 = &v153[*(_QWORD *)(a1 + 1416)];
                    while ( v154 != v153 )
                      *v153++ = sub_76B80(a2);
                  }
                  else
                  {
                    *(_QWORD *)(a1 + 1432) = -1;
                  }
                  if ( *(_DWORD *)(a2 + 48) > 0xBu )
                    sub_78E00(*(_QWORD *)(a1 + 944), a2, a1);
                  if ( *(_DWORD *)(a2 + 48) <= 3u )
LABEL_295:
                    v136 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 1408LL);
                  else
                    v136 = sub_76A40(a2, 0);
                  *(_QWORD *)(a1 + 1440) = v136;
                  if ( (unsigned int)sub_767A0((_QWORD *)a2) == -559038737 )
                  {
                    sub_31AB50(
                      a1,
                      1,
                      v137,
                      v138,
                      v139,
                      v140,
                      n[0],
                      n[1],
                      v157.m128i_i32[0],
                      v157.m128i_i64[1],
                      v158,
                      v159,
                      v160,
                      (_DWORD)v162,
                      (_DWORD)v163,
                      (_DWORD)v164,
                      v165,
                      (_DWORD)v166,
                      (_DWORD)v167,
                      (_DWORD)v168,
                      v169,
                      v170.m128i_i32[0],
                      v170.m128i_i64[1]);
                    return (unsigned int)v11;
                  }
                }
              }
            }
            return 0;
          }
          v92 = (__int64 *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
          v93 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v93 & 2) != 0 )
          {
LABEL_183:
            *v45 = (unsigned __int64)v45 & 0xFFFFFFFFFFFFFFFCLL | *v45 & 3;
            *(__m128i *)(*(_QWORD *)(a1 + 816) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816),
                                                          (__m128i)*(unsigned __int64 *)(a1 + 816));
            **(_QWORD **)(a1 + 816) &= ~1uLL;
            **(_QWORD **)(a1 + 816) |= 2uLL;
LABEL_184:
            *(_QWORD *)(a1 + 824) = 0;
            goto LABEL_64;
          }
          v94 = (__int64 *)v92[1];
          if ( (*(_BYTE *)v94 & 2) != 0 )
          {
            v95 = (__int64 *)v92[2];
            if ( (*(_BYTE *)v95 & 2) != 0 )
              goto LABEL_186;
          }
          else
          {
            sub_74740(v94);
            v95 = (__int64 *)v92[2];
            if ( (*(_BYTE *)v95 & 2) != 0 )
              goto LABEL_179;
          }
          sub_74740(v95);
LABEL_179:
          v93 = *v92;
          if ( (*v92 & 2) != 0 )
          {
LABEL_180:
            if ( v46 > 3 )
              qfree(v46 & 0xFFFFFFFFFFFFFFFCLL);
            v45 = *(unsigned __int64 **)(a1 + 816);
            goto LABEL_183;
          }
LABEL_186:
          *v92 = v93 | 2;
          goto LABEL_180;
        }
        v66 = sub_76940((_QWORD *)a2);
        v67 = v66 - 1;
        if ( v66 )
        {
          v68 = (_QWORD *)get_func(v66 - 1);
          *(_QWORD *)(a1 + 8) = v68;
          if ( !v68 || *v68 != v67 )
            return 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        if ( !(unsigned __int8)sub_775A0((_QWORD *)a2, (__int64 *)(a1 + 16)) )
          return 0;
        v69 = *(_QWORD **)(a1 + 8);
        if ( v69 )
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
            v70 = sub_76940((_QWORD *)a2);
            v71 = *(_QWORD **)(a1 + 8);
            v72 = v70 - 1;
            *(_QWORD *)(a1 + 40) = v72;
            if ( v71 && v72 != *v71 )
              return 0;
            *(_QWORD *)(a2 + 32) = v72;
            goto LABEL_16;
          }
          v69 = *(_QWORD **)(a1 + 16);
        }
        if ( a3 != *v69 )
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
  *(_DWORD *)a1 = sub_767A0((_QWORD *)a2) & 0xEFFFFFFF;
  sub_76BD0((__int64)v180, (_QWORD *)a2);
  v55 = *(_QWORD *)(a1 + 408);
  v56 = *(_QWORD *)v180;
  memset(v180, 0, sizeof(v180));
  v57 = _mm_loadu_si128((const __m128i *)&v180[8]);
  if ( v55 )
  {
    *(_QWORD *)(a1 + 416) = 0;
    *(__m128i *)n = v57;
    qfree(v55);
    v58 = _mm_load_si128((const __m128i *)n);
    v59 = *(_QWORD *)v180;
    *(_QWORD *)(a1 + 408) = v56;
    *(__m128i *)(a1 + 416) = v58;
    if ( v59 )
    {
      *(_QWORD *)&v180[8] = 0;
      qfree(v59);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 408) = v56;
    *(__m128i *)(a1 + 416) = v57;
  }
  v60 = sub_76F70((_QWORD *)a2);
  if ( v60 < 0 )
    return 0;
  v61 = v60;
  v62 = *(_QWORD *)(a1 + 440);
  if ( v61 != v62 )
  {
    v169 = 0;
    v171 = 1;
    v170 = _mm_load_si128((const __m128i *)&xmmword_3FA120);
    src = nullptr;
    v174 = nullptr;
    v176 = 0;
    v177 = 0xFFFFFFFF00000000LL;
    v178 = 0;
    v173 = 0;
    v175 = 0;
    if ( v61 < v62 )
    {
      v74 = v61;
      v75 = v62;
      v76 = 104 * v61;
      do
      {
        ++v74;
        v77 = (_QWORD *)(v76 + *(_QWORD *)(a1 + 432));
        v76 += 104;
        sub_7D760(v77);
      }
      while ( v74 < v75 );
      *(_QWORD *)(a1 + 440) = v61;
    }
    else
    {
      v63 = *(_QWORD *)(a1 + 432);
      if ( (unsigned __int64)&v169 < v63 || (unsigned __int64)&v169 >= v63 + 104LL * *(_QWORD *)(a1 + 448) )
      {
        sub_821B0((_QWORD *)(a1 + 432), v61, (__int64)&v169);
      }
      else
      {
        *(_DWORD *)v180 = 0;
        copy_argloc(v180, &v169);
        v182 = nullptr;
        v183 = 0;
        *(_QWORD *)&v180[16] = v170.m128i_i64[1];
        v181 = v171;
        if ( (_QWORD)v173 )
        {
          n[0] = v173;
          v182 = (void *)qalloc_or_throw(v173);
          *((_QWORD *)&v183 + 1) = n[0];
          memcpy(v182, src, n[0]);
          *(_QWORD *)&v183 = n[0];
        }
        v184 = nullptr;
        v185 = 0;
        if ( (_QWORD)v175 )
        {
          n[0] = v175;
          v184 = (void *)qalloc_or_throw(v175);
          *((_QWORD *)&v185 + 1) = n[0];
          memcpy(v184, v174, n[0]);
          *(_QWORD *)&v185 = n[0];
        }
        v186[0] = 0;
        copy_tinfo_t(v186, &v176);
        v186[1] = v177;
        v186[2] = v178;
        sub_821B0((_QWORD *)(a1 + 432), v61, (__int64)v180);
        sub_7D760(v180);
      }
    }
    sub_7D760(&v169);
  }
  v11 = sub_76F70((_QWORD *)a2);
  if ( v11 < 0 )
    return 0;
  while ( 1 )
  {
    v65 = v11-- == 0;
    if ( v65 )
      break;
    v64 = sub_61A50(a1, -1, 0);
    if ( !(unsigned __int8)sub_854B0(v64, a2, a1) )
      return 0;
  }
  LOBYTE(v11) = (unsigned int)sub_3298C0(a1, 1) == -33;
  return (unsigned int)v11;
}
