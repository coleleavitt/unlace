__int64 __fastcall sub_148C60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *exception; // rdi
  __int64 *v8; // rdi
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r15
  bool v13; // zf
  __int64 *v14; // rsi
  __int64 v15; // r8
  int v16; // r9d
  __int64 (__fastcall *v17)(__int64); // rcx
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r12
  unsigned __int64 v22; // rcx
  __int64 **v23; // r13
  unsigned __int64 *v24; // r13
  unsigned __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 (__fastcall *v27)(__int64); // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 *v31; // r13
  __int64 v32; // rax
  __int64 (__fastcall *v33)(__int64); // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdi
  __int64 *v41; // rax
  __int64 *v42; // r13
  int v43; // edx
  int v44; // r13d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 *v49; // rax
  int v50; // eax
  unsigned int v51; // r13d
  __int64 v52; // rax
  char v53; // bl
  int v55; // eax
  __int64 (__fastcall *v56)(__int64, int); // rax
  int v57; // eax
  __int64 (__fastcall *v58)(__int64, int, int); // rax
  int v59; // eax
  unsigned __int64 v60; // r13
  void *v61; // rbx
  __m128i si128; // xmm0
  __int64 v63; // r13
  _QWORD *v64; // r13
  __int64 v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // r8
  unsigned __int64 v70; // rax
  __int64 v71; // rcx
  const char *v72; // rsi
  int v73; // r8d
  int v74; // r9d
  const char *v75; // rcx
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // r9d
  __int64 *v81; // rsi
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdi
  void (*v85)(); // rax
  __int64 *v86; // rax
  unsigned __int64 *v87; // r12
  __int64 *v88; // rdi
  __int64 v89; // rsi
  __int64 *v90; // rdx
  __int64 *i; // rax
  __int64 *v92; // rcx
  __int64 *v93; // rax
  __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  __int64 v96; // rax
  unsigned __int64 v97; // rax
  int v98; // edx
  char v99; // cl
  _DWORD *v100; // rsi
  bool v101; // cc
  _BYTE *v102; // rsi
  char v103; // dl
  __int64 v104; // rax
  __m128i v105; // xmm1
  unsigned __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rax
  int v109; // eax
  unsigned __int64 v110; // rdx
  unsigned __int64 v111; // r15
  unsigned __int64 v112; // rax
  _QWORD *v113; // rbx
  _QWORD *v114; // rdi
  _QWORD *v115; // rdi
  __int64 *v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  unsigned __int64 *v119; // rax
  __int64 v120; // [rsp-8h] [rbp-1A8h]
  __int64 **v121; // [rsp+0h] [rbp-1A0h]
  __int64 *v122; // [rsp+18h] [rbp-188h]
  __int64 v123; // [rsp+20h] [rbp-180h]
  _DWORD *v124; // [rsp+20h] [rbp-180h]
  __int64 v125; // [rsp+20h] [rbp-180h]
  __int64 v126; // [rsp+28h] [rbp-178h]
  unsigned __int64 v127; // [rsp+28h] [rbp-178h]
  __int64 v128; // [rsp+28h] [rbp-178h]
  size_t n[2]; // [rsp+30h] [rbp-170h] BYREF
  __int64 v130; // [rsp+40h] [rbp-160h]
  _QWORD *v131; // [rsp+48h] [rbp-158h]
  __int64 *v132; // [rsp+50h] [rbp-150h]
  __int64 *v133; // [rsp+58h] [rbp-148h]
  unsigned int v134; // [rsp+60h] [rbp-140h] BYREF
  int v135; // [rsp+64h] [rbp-13Ch] BYREF
  int *v136; // [rsp+68h] [rbp-138h] BYREF
  unsigned __int64 *v137; // [rsp+70h] [rbp-130h] BYREF
  __int128 v138; // [rsp+78h] [rbp-128h]
  __int64 v139; // [rsp+90h] [rbp-110h] BYREF
  __int128 v140; // [rsp+98h] [rbp-108h]
  int v141; // [rsp+A8h] [rbp-F8h]
  __int64 v142[2]; // [rsp+B0h] [rbp-F0h] BYREF
  __int64 v143; // [rsp+C0h] [rbp-E0h] BYREF
  __int128 v144; // [rsp+C8h] [rbp-D8h]
  __int64 v145[2]; // [rsp+E0h] [rbp-C0h] BYREF
  void *v146; // [rsp+F0h] [rbp-B0h] BYREF
  __m128i v147; // [rsp+F8h] [rbp-A8h]
  __int64 v148; // [rsp+110h] [rbp-90h] BYREF
  __int64 v149; // [rsp+118h] [rbp-88h]
  __int64 v150; // [rsp+120h] [rbp-80h] BYREF
  __m128i v151; // [rsp+128h] [rbp-78h] BYREF
  __int64 v152; // [rsp+140h] [rbp-60h] BYREF
  __int128 v153; // [rsp+148h] [rbp-58h] BYREF
  __int128 v154; // [rsp+158h] [rbp-48h]
  unsigned __int64 v155; // [rsp+168h] [rbp-38h]

  v155 = __readfsqword(0x28u);
  v8 = (__int64 *)a1[5];
  v134 = 0;
  sub_143B70(v8, nullptr, (unsigned __int64)&v134, a4, a5, a6);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1[5] + 936) + 24LL))(*(_QWORD *)(a1[5] + 936));
  v9 = a1[5];
  v142[0] = 0;
  v142[1] = 0;
  v10 = *(_QWORD *)(v9 + 128);
  v11 = *(_QWORD *)(v9 + 1440);
  v143 = 0;
  v144 = 0;
  v12 = v10;
  if ( v10 + v11 - 1 >= v11 )
  {
    v143 = qvector_reserve(&v143, 0, 1, 16);
    *(__m128i *)(v143 + 16 * v144) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v12);
    v9 = a1[5];
    *(_QWORD *)&v144 = v144 + 1;
  }
  v13 = *(_BYTE *)(v9 + 320) == 0;
  v145[0] = 0;
  v145[1] = 0;
  v146 = nullptr;
  v147 = 0;
  if ( !v13 )
    sub_138B00(v9, (__int64)v145, nullptr, (__int64 *)(v9 + 328), -1, 0);
  v139 = 0;
  v141 = 0;
  v140 = 0;
  v130 = sub_110320((__int64)a1, 0);
  if ( !v130 )
  {
    if ( !under_debugger )
      sub_3835A0(50446);
    BUG();
  }
  v14 = &v152;
  ++*(_DWORD *)(v130 + 24);
  LODWORD(v154) = 0;
  v152 = 0;
  v153 = 0;
  nullsub_40();
  sub_66680(&v152);
  for ( LODWORD(v131) = 1; ; LODWORD(v131) = (_DWORD)v131 + 1 )
  {
    v17 = sub_1014E0;
    v18 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v18 != sub_1014E0 )
      break;
    v19 = a1[5];
    v20 = v19;
    if ( (int)v131 >= *(_DWORD *)(v19 + 64) )
      goto LABEL_78;
LABEL_9:
    v21 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8LL * (int)v131);
    v123 = (int)v131;
    v22 = v130;
    v126 = 24LL * (int)v131;
    v23 = *(__int64 ***)v130;
    v150 = 0;
    v148 = 0;
    v24 = (unsigned __int64 *)&v23[(unsigned __int64)v126 / 8];
    v151 = 0;
    v149 = 0;
    v25 = *v24;
    if ( *v24 && v24[1] )
    {
      v26 = *(_QWORD **)(v25 + 8);
      v132 = &v148;
      if ( (_QWORD *)v25 != v26 )
      {
LABEL_12:
        while ( 1 )
        {
          v101 = v26[4] <= 1u;
          v133 = v26 + 3;
          if ( v101 )
            break;
LABEL_13:
          if ( (*v26 & 2) != 0 )
          {
LABEL_16:
            if ( (_QWORD *)*v24 == v26 )
              goto LABEL_17;
          }
          else
          {
            v20 = v26[2];
            if ( (*(_BYTE *)v20 & 2) == 0 )
            {
              do
              {
                v26 = (_QWORD *)v20;
                v20 = *(_QWORD *)(v20 + 8);
              }
              while ( (*(_BYTE *)v20 & 2) == 0 );
              goto LABEL_16;
            }
            v41 = (__int64 *)(*v26 & 0xFFFFFFFFFFFFFFFCLL);
            v20 = *v41;
            if ( (*v41 & 2) == 0 )
            {
              while ( (_QWORD *)v41[2] == v26 )
              {
                v26 = v41;
                v22 = v20 & 0xFFFFFFFFFFFFFFFCLL;
                v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v20 & 2) != 0 )
                {
                  v26 = (_QWORD *)v22;
                  if ( *v24 != v22 )
                    goto LABEL_12;
                  goto LABEL_17;
                }
                v41 = (__int64 *)v22;
              }
            }
            v26 = v41;
            if ( (__int64 *)*v24 == v41 )
              goto LABEL_17;
          }
        }
        v152 = 0;
        v153 = 0u;
        v154 = 0;
        sub_1037A0((__int64)(v26 + 3), v19, (__int64)&v152);
        sub_64100(&v152, (__int64 *)(v21 + 240));
        n[0] = (size_t)&v153 + 8;
        sub_318480((char *)&v153 + 8, v21 + 256);
        if ( (unsigned __int8)sub_64280(&v152) && !(_QWORD)v154 )
          goto LABEL_40;
        if ( v133[1] != 1 )
        {
LABEL_52:
          sub_63C80(v132, &v152);
          sub_317070(&v150, n[0]);
          if ( *((_QWORD *)&v153 + 1) )
          {
            *(_QWORD *)&v154 = 0;
            qfree(*((_QWORD *)&v153 + 1));
          }
          goto LABEL_42;
        }
        if ( *(_DWORD *)*v133 == (_DWORD)v131 )
        {
          if ( (unsigned __int8)sub_138DD0(v21, v24, (__int64)v133) )
            goto LABEL_52;
        }
        else
        {
          v32 = *a1;
          LODWORD(v133) = *(_DWORD *)*v133;
          v33 = *(__int64 (__fastcall **)(__int64))(v32 + 88);
          if ( v33 == sub_133C50 )
          {
            v34 = (*(__int64 (__fastcall **)(__int64 *))(v32 + 56))(a1);
            v38 = (unsigned int)v133;
            v39 = v34 - 1;
          }
          else
          {
            v39 = v33((__int64)a1);
            v38 = (unsigned int)v133;
          }
          if ( (_DWORD)v38 == v39 )
          {
            v40 = a1[5];
            if ( (*(_BYTE *)(v40 + 1) & 0x40) != 0 )
            {
LABEL_49:
              if ( *(_BYTE *)(v40 + 320) )
                v133 = v145;
              else
                v133 = (__int64 *)(sub_1D4BB0(v40) + 160);
              sub_64040(&v152, v133, v38, v35, v36, v37);
              sub_318020(n[0], v133 + 2);
              goto LABEL_52;
            }
            v133 = *(__int64 **)(v40 + 1504);
            sub_64100(&v152, v133 + 23);
            sub_318480(n[0], v133 + 25);
            if ( !(unsigned __int8)sub_64280(&v152) || (_QWORD)v154 )
            {
              v40 = a1[5];
              goto LABEL_49;
            }
          }
        }
LABEL_40:
        if ( *((_QWORD *)&v153 + 1) )
        {
          *(_QWORD *)&v154 = 0;
          qfree(*((_QWORD *)&v153 + 1));
        }
LABEL_42:
        qfree(v152);
        v19 = a1[5];
        goto LABEL_13;
      }
LABEL_17:
      if ( (*(_BYTE *)(v19 + 1) & 0x10) == 0 )
      {
LABEL_63:
        sub_64040(v132, v142, v20, v22, v15, v16);
        sub_318020(&v150, &v143);
        goto LABEL_64;
      }
    }
    else
    {
      v132 = &v148;
      if ( (*(_BYTE *)(v19 + 1) & 0x10) == 0 )
        goto LABEL_63;
    }
    v27 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
    if ( v27 == sub_1014E0 )
      v28 = *(_DWORD *)(v19 + 64);
    else
      v28 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))v27)(a1, v19, v20);
    v29 = (unsigned int)v131;
    if ( v28 - 2 != (_DWORD)v131
      || ((v20 = (__int64)sub_133D30, v56 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96), v56 != sub_133D30)
        ? (v57 = v56((__int64)a1, (int)v131))
        : (v29 = v123, v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8 * v123) + 376LL)),
          v57 != 1
       || ((v20 = (__int64)sub_133D70, v58 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112), v58 != sub_133D70)
         ? (v59 = v58((__int64)a1, (int)v131, 0))
         : (v59 = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528) + 8 * v123) + 368LL)),
           v29 = (unsigned int)((_DWORD)v131 + 1),
           LODWORD(v133) = v29,
           (_DWORD)v29 != v59)) )
    {
      if ( !(_QWORD)v140 )
        sub_1103B0((__int64)a1, (__int64)&v139, 32);
      v133 = (__int64 *)(v139 + v126);
      v30 = *(__int64 **)(v139 + v126);
      if ( v30 )
      {
        v29 = (__int64)v133;
        if ( v133[1] )
        {
          v31 = (__int64 *)v30[1];
          if ( v30 != v31 )
          {
            n[0] = (size_t)v142;
            do
            {
              v20 = (__int64)(v31 + 3);
              if ( !v31[4] )
              {
                sub_104D40((__int64)&v152, a1[5], v20);
                sub_63C80(v132, &v152);
                sub_317070(&v150, (char *)&v153 + 8);
                if ( *((_QWORD *)&v153 + 1) )
                {
                  *(_QWORD *)&v154 = 0;
                  qfree(*((_QWORD *)&v153 + 1));
                }
                qfree(v152);
              }
              if ( (*v31 & 2) == 0 )
              {
                v20 = v31[2];
                if ( (*(_BYTE *)v20 & 2) != 0 )
                {
                  v49 = (__int64 *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
                  v20 = *v49;
                  if ( (*v49 & 2) == 0 )
                  {
                    while ( (__int64 *)v49[2] == v31 )
                    {
                      v31 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                      v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v20 & 2) != 0 )
                        goto LABEL_34;
                      v29 = (__int64)v49;
                      v49 = v31;
                      v31 = (__int64 *)v29;
                    }
                  }
                  v31 = v49;
                }
                else
                {
                  do
                  {
                    v31 = (__int64 *)v20;
                    v20 = *(_QWORD *)(v20 + 8);
                  }
                  while ( (*(_BYTE *)v20 & 2) == 0 );
                }
              }
LABEL_34:
              ;
            }
            while ( (__int64 *)*v133 != v31 );
          }
        }
      }
      goto LABEL_64;
    }
    if ( (*(_BYTE *)(a1[5] + 5) & 0x10) != 0 )
    {
      if ( !v147.m128i_i64[0] )
      {
        v60 = *(_QWORD *)(v21 + 224);
        v61 = nullptr;
        if ( v60 )
        {
          n[0] = 16 * v60;
          v61 = (void *)qalloc_or_throw(16 * v60);
          memcpy(v61, *(const void **)(v21 + 216), n[0]);
        }
        si128 = _mm_unpacklo_epi64((__m128i)v60, (__m128i)v60);
        if ( v146 )
        {
          *(__m128i *)n = si128;
          v147.m128i_i64[0] = 0;
          qfree(v146);
          si128 = _mm_load_si128((const __m128i *)n);
        }
        v146 = v61;
        v147 = si128;
      }
      sub_64040(v142, v145, v20, v29, v15, v16);
      sub_318020(&v143, &v146);
    }
    sub_63C80(v132, v142);
    n[0] = (size_t)&v150;
    sub_317070(&v150, &v143);
    v42 = (__int64 *)a1[5];
    if ( *(_QWORD *)(v21 + 56) )
    {
      v63 = *(_QWORD *)(v42[66] + 8LL * (int)v133);
      v133 = (__int64 *)(v63 + 160);
      if ( !(unsigned __int8)sub_64280((_QWORD *)(v63 + 160)) || *(_QWORD *)(v63 + 184) )
      {
        v64 = (_QWORD *)sub_128B90(v21, v133, *(_QWORD *)(v21 + 56), 0, nullptr, 0, 0x101u);
        v20 = v120;
        if ( v64 )
        {
          if ( *((_BYTE *)v64 + 32) == 10 && (v65 = v64[5], *(_BYTE *)v65 == 5) )
          {
            v133 = v64 + 4;
LABEL_122:
            v66 = *(_QWORD **)(v21 + 64);
            v67 = *(_QWORD *)(*(_QWORD *)(v65 + 8) + 8LL);
            v68 = v66[16];
            if ( v67 < v68 )
            {
              v69 = v68 - v67;
              v70 = *(_QWORD *)(*(_QWORD *)(v66[187] + 24LL) + 16LL) & (v66[180] + v67);
              v154 = 0;
              v71 = v70;
              v127 = v70;
              v152 = 0;
              v153 = 0u;
              if ( v69 + v70 - 1 >= v70 )
              {
                v125 = v69;
                v118 = qvector_reserve((char *)&v153 + 8, 0, 1, 16);
                v71 = v127;
                *((_QWORD *)&v153 + 1) = v118;
                v69 = v125;
                v66 = (_QWORD *)(16 * v154);
                v119 = (unsigned __int64 *)(16 * v154 + v118);
                *v119 = v127;
                v119[1] = v125;
                *(_QWORD *)&v154 = v154 + 1;
              }
              sub_64040(v132, &v152, (__int64)v66, v71, v69, v16);
              sub_318020(n[0], (char *)&v153 + 8);
              sub_93580(&v152);
            }
            v137 = nullptr;
            v138 = 0;
            sub_1B20A0(v133[1], &v137, 4);
            v152 = 0;
            v72 = s1;
            v153 = 0;
            if ( (_QWORD)v138 )
              v72 = (const char *)v137;
            tag_remove(&v152, v72, 0);
            v75 = s1;
            if ( (_QWORD)v153 )
              LODWORD(v75) = v152;
            sub_331510(*(_QWORD *)(v21 + 64), v64[3], 47, (_DWORD)v75, v73, v74);
            if ( v152 )
            {
              *(_QWORD *)&v153 = 0;
              qfree(v152);
            }
            if ( v137 )
            {
              *(_QWORD *)&v138 = 0;
              qfree(v137);
            }
          }
          else if ( *((_BYTE *)v64 + 48) == 10 )
          {
            v65 = v64[7];
            if ( *(_BYTE *)v65 == 5 )
            {
              v133 = v64 + 6;
              goto LABEL_122;
            }
          }
        }
      }
LABEL_64:
      v42 = (__int64 *)a1[5];
    }
    sub_64040(v132, v42 + 32, v20, v29, v15, v16);
    v14 = v42 + 34;
    sub_318020(&v150, v42 + 34);
    if ( (unsigned __int8)sub_64280(v132) && !v151.m128i_i64[0] )
    {
      v47 = v150;
    }
    else
    {
      v14 = *(__int64 **)(a1[5] + 1504);
      v43 = sub_A4E10(v21, (__int64)v14, *(unsigned int **)(v21 + 56), v132);
      v44 = v43;
      if ( v43 )
      {
        v55 = *(_DWORD *)(v21 + 24);
        v14 = (__int64 *)"global dead elimination result, total dead: %d";
        BYTE1(v55) &= ~2u;
        LOBYTE(v55) = v55 | 0x80;
        *(_DWORD *)(v21 + 24) = v55;
        sub_A1F60(v21, (__int64)"global dead elimination result, total dead: %d", v43);
      }
      v45 = *(_QWORD *)(v21 + 80);
      v134 += v44;
      *(_QWORD *)(v21 + 80) = v148;
      v148 = v45;
      v46 = *(_QWORD *)(v21 + 88);
      *(_QWORD *)(v21 + 88) = v149;
      v149 = v46;
      v47 = *(_QWORD *)(v21 + 96);
      v48 = *(_QWORD *)(v21 + 112);
      *(_QWORD *)(v21 + 96) = v150;
      *(__m128i *)(v21 + 104) = _mm_loadu_si128(&v151);
      v150 = v47;
      v151.m128i_i64[1] = v48;
    }
    if ( v47 )
    {
      v151.m128i_i64[0] = 0;
      qfree(v47);
    }
    qfree(v148);
  }
  v50 = ((__int64 (__fastcall *)(__int64 *, __int64 *))v18)(a1, v14);
  v19 = a1[5];
  v20 = v19;
  if ( (int)v131 < v50 )
    goto LABEL_9;
LABEL_78:
  v51 = v134;
  if ( v134 )
  {
    if ( (*(_BYTE *)(v19 + 1) & 0x10) != 0 )
    {
      sub_18FD40(v19, v19, v20, (_DWORD)v17, v15, v16);
      v20 = a1[5];
    }
    v52 = *(_QWORD *)(v20 + 784);
    if ( v52 )
    {
      *(_DWORD *)(v52 + 48) = 63;
      v20 = a1[5];
    }
  }
  v53 = *(_BYTE *)(v20 + 320);
  if ( v53 )
  {
    if ( (*(_BYTE *)(v20 + 1) & 0x40) != 0 )
    {
      v76 = get_tinfo_property(*(_QWORD *)(v20 + 328), 20) & 0xFFFFFFF0;
      if ( v76 != 64 && v76 != 208 )
      {
        v81 = (__int64 *)a1[5];
        v148 = 0;
        v150 = 0;
        v149 = 0;
        v132 = &v148;
        v151 = 0;
        sub_1347E0(&v148, (__int64)v81, v77, v78, v79, v80);
        v84 = *(_QWORD *)(a1[5] + 1504);
        v85 = *(void (**)())(*(_QWORD *)v84 + 120LL);
        if ( v85 != nullsub_74 )
        {
          v81 = v132;
          ((void (__fastcall *)(__int64, __int64 *))v85)(v84, v132);
        }
        v121 = *(__int64 ***)v130;
        v86 = **(__int64 ***)v130;
        if ( !v86 )
          goto LABEL_141;
        if ( !v121[1] )
          goto LABEL_141;
        v122 = (__int64 *)v86[1];
        if ( v86 == v122 )
          goto LABEL_141;
        v128 = 0;
        v87 = nullptr;
        while ( 1 )
        {
          v88 = v122 + 3;
          v13 = v122[4] == 0;
          v131 = v122 + 3;
          if ( !v13 )
            break;
LABEL_148:
          if ( (*v122 & 2) == 0 )
          {
            v90 = (__int64 *)v122[2];
            if ( (*(_BYTE *)v90 & 2) != 0 )
            {
              v93 = (__int64 *)(*v122 & 0xFFFFFFFFFFFFFFFCLL);
              v94 = *v93;
              if ( (*v93 & 2) == 0 )
              {
                v81 = v122;
                while ( (__int64 *)v93[2] == v81 )
                {
                  v81 = v93;
                  v95 = v94 & 0xFFFFFFFFFFFFFFFCLL;
                  v94 = *(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v94 & 2) != 0 )
                  {
                    v122 = (__int64 *)v95;
                    goto LABEL_153;
                  }
                  v93 = (__int64 *)v95;
                }
              }
              v122 = v93;
            }
            else
            {
              for ( i = (__int64 *)v90[1]; (*(_BYTE *)i & 2) == 0; i = (__int64 *)i[1] )
                v90 = i;
              v122 = v90;
            }
          }
LABEL_153:
          v92 = v122;
          if ( v122 == *v121 )
          {
            if ( v87 )
            {
              if ( !v128 )
              {
                sub_93580(v132);
LABEL_157:
                qfree(v87);
                goto LABEL_85;
              }
              v106 = v87[1];
              while ( v87 != (unsigned __int64 *)v106 )
              {
                v107 = a1[5];
                v108 = *(unsigned int *)(v106 + 24);
                if ( (unsigned int)v108 >= *(_DWORD *)(v107 + 64) )
                  sub_1340F0(v88, v81, v107, v92, v82, v83);
                v88 = *(__int64 **)(*(_QWORD *)(v107 + 528) + 8 * v108);
                v81 = (__int64 *)v88[6];
                v109 = sub_A4790((__int64)v88, (int *)v81, (__int64 *)(v106 + 32));
                v134 += v109;
                v51 = v134;
                if ( (*(_QWORD *)v106 & 2) == 0 )
                {
                  v110 = *(_QWORD *)(v106 + 16);
                  if ( (*(_BYTE *)v110 & 2) != 0 )
                  {
                    v116 = (__int64 *)(*(_QWORD *)v106 & 0xFFFFFFFFFFFFFFFCLL);
                    v117 = *v116;
                    if ( (*v116 & 2) != 0 || v116[2] != v106 )
                    {
LABEL_202:
                      v106 = (unsigned __int64)v116;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v106 = v117 & 0xFFFFFFFFFFFFFFFCLL;
                        v117 = *(_QWORD *)(v117 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v117 & 2) != 0 )
                          break;
                        v92 = v116;
                        v116 = (__int64 *)v106;
                        if ( *(__int64 **)(v106 + 16) != v92 )
                          goto LABEL_202;
                      }
                    }
                  }
                  else
                  {
                    do
                    {
                      v106 = v110;
                      v110 = *(_QWORD *)(v110 + 8);
                    }
                    while ( (*(_BYTE *)v110 & 2) == 0 );
                  }
                }
              }
              sub_93580(v132);
              v111 = *v87;
              v112 = *v87 & 0xFFFFFFFFFFFFFFFCLL;
              v113 = (_QWORD *)v112;
              if ( (*(_BYTE *)v112 & 2) != 0 )
                goto LABEL_157;
              v114 = *(_QWORD **)(v112 + 8);
              if ( (*(_BYTE *)v114 & 2) != 0 )
              {
                v115 = *(_QWORD **)(v112 + 16);
                if ( (*(_BYTE *)v115 & 2) != 0 )
                {
LABEL_212:
                  sub_93580(v113 + 4);
                  *v113 |= 2uLL;
LABEL_199:
                  if ( v111 > 3 )
                    qfree(v113);
                  goto LABEL_157;
                }
              }
              else
              {
                sub_136B60(v114);
                v115 = (_QWORD *)v113[2];
                if ( (*(_BYTE *)v115 & 2) != 0 )
                  goto LABEL_198;
              }
              sub_136B60(v115);
LABEL_198:
              if ( (*(_BYTE *)v113 & 2) != 0 )
                goto LABEL_199;
              goto LABEL_212;
            }
LABEL_141:
            sub_93580(v132);
            goto LABEL_85;
          }
        }
        v89 = a1[5];
        v152 = 0;
        v153 = 0u;
        v154 = 0;
        sub_1037A0((__int64)v88, v89, (__int64)&v152);
        v81 = &v152;
        if ( (unsigned __int8)sub_64180(v132, &v152)
          || (v81 = (__int64 *)&v153 + 1, n[0] = (size_t)&v153 + 8,
                                          (unsigned __int8)sub_318830(&v150, (char *)&v153 + 8))
          || (v96 = 0, LODWORD(v133) = 0, !v131[1]) )
        {
LABEL_147:
          v88 = &v152;
          sub_93580(&v152);
          goto LABEL_148;
        }
        while ( 1 )
        {
          v98 = *(_DWORD *)(*v131 + 4 * v96);
          v135 = v98;
          v136 = &v135;
          if ( v87 )
          {
            if ( v128 )
            {
              v97 = *v87 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (*(_BYTE *)v97 & 2) != 0 )
              {
                v97 = (unsigned __int64)v87;
                v103 = 1;
              }
              else
              {
                v99 = v53;
                v100 = (_DWORD *)(v97 + 24);
                v101 = v98 <= *(_DWORD *)(v97 + 24);
                if ( v98 < *(_DWORD *)(v97 + 24) )
                {
LABEL_174:
                  v102 = *(_BYTE **)(v97 + 8);
                  v99 = v53;
                  goto LABEL_175;
                }
                while ( !v101 )
                {
                  v102 = *(_BYTE **)(v97 + 16);
                  v99 = 0;
LABEL_175:
                  if ( (*v102 & 2) != 0 )
                    goto LABEL_182;
                  v97 = (unsigned __int64)v102;
                  v100 = v102 + 24;
                  v101 = v98 <= *v100;
                  if ( v98 < *v100 )
                    goto LABEL_174;
                }
                v124 = v100;
                if ( v97 )
                  goto LABEL_169;
LABEL_182:
                v103 = v99;
              }
              v137 = v87;
              *(_QWORD *)&v138 = v128;
              v97 = sub_148A30((__m128i *)&v137, (unsigned __int64 *)v97, v103, &v136);
              goto LABEL_168;
            }
          }
          else
          {
            v104 = qalloc(72);
            v87 = (unsigned __int64 *)v104;
            v105 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v104, (__m128i)(unsigned __int64)v104);
            if ( !v104 )
            {
              exception = __cxa_allocate_exception(8u);
              *exception = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                exception,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            *(_QWORD *)(v104 + 64) = 0;
            *(_OWORD *)(v104 + 16) = 0;
            *(_OWORD *)(v104 + 32) = 0;
            *(_OWORD *)(v104 + 48) = 0;
            *(__m128i *)(v104 + 8) = v105;
            *(_QWORD *)v104 = v104 & 0xFFFFFFFFFFFFFFFCLL | 2;
          }
          v137 = v87;
          *(_QWORD *)&v138 = v128;
          v97 = sub_148A30((__m128i *)&v137, v87, 1, &v136);
LABEL_168:
          v87 = v137;
          v128 = v138;
          v124 = (_DWORD *)(v97 + 24);
LABEL_169:
          sub_63C80((__int64 *)(v97 + 32), &v152);
          v81 = (__int64 *)n[0];
          sub_317070(v124 + 6, n[0]);
          LODWORD(v133) = (_DWORD)v133 + 1;
          v96 = (int)v133;
          if ( (unsigned __int64)(int)v133 >= v131[1] )
            goto LABEL_147;
        }
      }
    }
  }
LABEL_85:
  sub_104850(v130);
  sub_66680(&v139);
  if ( v146 )
  {
    v147.m128i_i64[0] = 0;
    qfree(v146);
  }
  qfree(v145[0]);
  if ( v143 )
  {
    *(_QWORD *)&v144 = 0;
    qfree(v143);
  }
  qfree(v142[0]);
  return v51;
}
