void __fastcall sub_BBE190(__int64 a1, __int64 *a2, unsigned int **a3, __int64 *a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  char **v6; // rbp
  __int64 v7; // rdx
  __m128i *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  unsigned int *v13; // r12
  unsigned int *v14; // r13
  unsigned int *v15; // r14
  unsigned int *v16; // rcx
  int v17; // edx
  bool v18; // zf
  unsigned int **v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int **v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ecx
  size_t v28; // rsi
  __int64 v29; // rax
  _DWORD *v30; // rdx
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // rsi
  int v34; // eax
  unsigned int ***v35; // rsi
  __int64 v36; // rax
  unsigned int **v37; // rcx
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  unsigned int v40; // r8d
  size_t v41; // rsi
  _DWORD *v42; // rax
  __int64 v43; // rsi
  unsigned int v44; // eax
  __int64 v45; // r14
  __int64 v46; // r13
  int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 *v50; // r14
  __int64 v51; // rsi
  _QWORD *v52; // r13
  _QWORD *v53; // rbp
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  int v57; // r12d
  __int64 v58; // rdi
  std::ostream *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  void (__fastcall ***v62)(void *, char *); // rbx
  __int64 v63; // rax
  int v64; // r12d
  __int64 v65; // rdi
  std::ostream *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdi
  int v70; // [rsp+0h] [rbp-3A8h]
  __int64 *v71; // [rsp+8h] [rbp-3A0h]
  __int64 v74; // [rsp+20h] [rbp-388h]
  _QWORD *v75; // [rsp+28h] [rbp-380h]
  __int64 *v76; // [rsp+30h] [rbp-378h]
  __int64 v77; // [rsp+40h] [rbp-368h] BYREF
  __int64 v78; // [rsp+48h] [rbp-360h] BYREF
  __m128i v79; // [rsp+50h] [rbp-358h] BYREF
  int v80; // [rsp+60h] [rbp-348h]
  int v81; // [rsp+68h] [rbp-340h]
  __int64 v82; // [rsp+70h] [rbp-338h] BYREF
  int v83; // [rsp+78h] [rbp-330h]
  int v84; // [rsp+80h] [rbp-328h]
  int v85; // [rsp+88h] [rbp-320h]
  __int64 v86; // [rsp+90h] [rbp-318h]
  __int64 v87; // [rsp+98h] [rbp-310h]
  __m128i si128; // [rsp+A0h] [rbp-308h]
  int v89; // [rsp+B0h] [rbp-2F8h]
  __int64 v90; // [rsp+B8h] [rbp-2F0h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-2E8h]
  __int64 v92; // [rsp+C8h] [rbp-2E0h]
  __int64 v93; // [rsp+D0h] [rbp-2D8h]
  void *v94; // [rsp+D8h] [rbp-2D0h] BYREF
  __int64 v95; // [rsp+E0h] [rbp-2C8h]
  __int64 v96; // [rsp+E8h] [rbp-2C0h] BYREF
  int v97; // [rsp+F0h] [rbp-2B8h]
  void *v98; // [rsp+F8h] [rbp-2B0h]
  __int64 v99; // [rsp+100h] [rbp-2A8h]
  char v100[16]; // [rsp+108h] [rbp-2A0h] BYREF
  __int128 v101; // [rsp+118h] [rbp-290h]
  __int64 v102; // [rsp+128h] [rbp-280h]
  char v103; // [rsp+130h] [rbp-278h]
  __int64 v104; // [rsp+134h] [rbp-274h]
  __int16 v105; // [rsp+13Ch] [rbp-26Ch]
  __int64 v106; // [rsp+140h] [rbp-268h]
  __int64 v107; // [rsp+148h] [rbp-260h]
  int v108; // [rsp+150h] [rbp-258h]
  char v109; // [rsp+154h] [rbp-254h]
  int v110; // [rsp+158h] [rbp-250h]
  __int64 v111; // [rsp+160h] [rbp-248h]
  _QWORD v112[8]; // [rsp+168h] [rbp-240h] BYREF
  __int128 v113; // [rsp+1A8h] [rbp-200h]
  __int64 v114; // [rsp+1B8h] [rbp-1F0h]
  __int64 v115; // [rsp+1C0h] [rbp-1E8h]
  __int64 v116; // [rsp+1C8h] [rbp-1E0h]
  __int64 v117; // [rsp+1D0h] [rbp-1D8h]
  __int64 v118; // [rsp+1D8h] [rbp-1D0h]
  __int64 v119; // [rsp+1E0h] [rbp-1C8h]
  __int64 v120; // [rsp+1E8h] [rbp-1C0h]
  __int64 v121; // [rsp+1F0h] [rbp-1B8h]
  __int16 v122; // [rsp+1F8h] [rbp-1B0h]
  char v123; // [rsp+1FAh] [rbp-1AEh]
  __int16 v124; // [rsp+1FCh] [rbp-1ACh]
  int v125; // [rsp+200h] [rbp-1A8h]
  __int16 v126; // [rsp+204h] [rbp-1A4h]
  __int64 v127; // [rsp+208h] [rbp-1A0h]
  int v128; // [rsp+210h] [rbp-198h]
  char v129; // [rsp+214h] [rbp-194h]
  _QWORD v130[2]; // [rsp+218h] [rbp-190h] BYREF
  int v131; // [rsp+228h] [rbp-180h]
  int v132; // [rsp+22Ch] [rbp-17Ch] BYREF
  __int64 v133; // [rsp+230h] [rbp-178h]
  int v134; // [rsp+238h] [rbp-170h] BYREF
  char v135; // [rsp+23Ch] [rbp-16Ch]
  __int64 v136; // [rsp+240h] [rbp-168h]
  __int16 v137; // [rsp+248h] [rbp-160h]
  int v138; // [rsp+24Ch] [rbp-15Ch]
  char v139; // [rsp+250h] [rbp-158h]
  int v140; // [rsp+254h] [rbp-154h]
  __int128 v141; // [rsp+258h] [rbp-150h]
  __m128i v142; // [rsp+268h] [rbp-140h]
  int v143; // [rsp+278h] [rbp-130h]
  char v144; // [rsp+27Ch] [rbp-12Ch]
  int v145; // [rsp+280h] [rbp-128h]
  __m128i v146; // [rsp+288h] [rbp-120h]
  char v147; // [rsp+298h] [rbp-110h]
  __int64 v148; // [rsp+29Ch] [rbp-10Ch]
  char v149; // [rsp+2A4h] [rbp-104h]
  __int64 v150; // [rsp+2A8h] [rbp-100h]
  __int16 v151; // [rsp+2B0h] [rbp-F8h]
  __int64 v152; // [rsp+2B4h] [rbp-F4h]
  __int64 v153; // [rsp+2BCh] [rbp-ECh]
  char v154; // [rsp+2C4h] [rbp-E4h]
  __int64 v155; // [rsp+2C8h] [rbp-E0h]
  __int64 v156; // [rsp+2D0h] [rbp-D8h]
  char v157; // [rsp+2D8h] [rbp-D0h]
  __int128 v158; // [rsp+2E0h] [rbp-C8h]
  int v159; // [rsp+2F0h] [rbp-B8h]
  char v160; // [rsp+2F4h] [rbp-B4h]
  __int64 v161; // [rsp+2F8h] [rbp-B0h]
  __int64 v162; // [rsp+300h] [rbp-A8h]
  __m128i v163; // [rsp+308h] [rbp-A0h]
  int v164; // [rsp+318h] [rbp-90h]
  __int64 v165; // [rsp+320h] [rbp-88h]
  int v166; // [rsp+328h] [rbp-80h]
  __int64 v167; // [rsp+330h] [rbp-78h]
  int v168; // [rsp+338h] [rbp-70h]
  __int16 v169; // [rsp+33Ch] [rbp-6Ch]
  int v170; // [rsp+340h] [rbp-68h]
  __int64 v171; // [rsp+344h] [rbp-64h]
  char v172[72]; // [rsp+360h] [rbp-48h] BYREF

  v82 = 0x100000001LL;
  v77 = 0;
  v78 = 0;
  v79.m128i_i64[0] = 0;
  v86 = 0x1FFFFFFFFLL;
  sub_15B6DB0(&v82, &v79);
  sub_18572D0(&v79);
  HIWORD(v86) = 0;
  v87 = 0;
  LOWORD(v89) = 1;
  BYTE2(v89) = 1;
  v71 = &v78;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
  sub_15B7800(&v82, &v78);
  sub_18572D0(&v78);
  v79.m128i_i64[0] = 0;
  v91 = 0x3FB999999999999ALL;
  v90 = 1;
  v92 = 0x7D00000000ALL;
  v93 = 0x3FE999999999999ALL;
  sub_15B81B0(&v90, &v79);
  sub_18572D0(&v79);
  v79.m128i_i64[0] = 0;
  v76 = &v96;
  v94 = &v96;
  v10 = (__m128i *)operator new(0x16u);
  v94 = v10;
  *v10 = _mm_load_si128((const __m128i *)&xmmword_18B6520);
  strcpy(&v10->m128i_i8[13], "eration)");
  v75 = v100;
  v98 = v100;
  v96 = 21;
  v102 = 0x200000000LL;
  v95 = 21;
  v104 = 0xFFFFFFFFLL;
  v106 = 0x1000000FFFFFFFFLL;
  strcpy((char *)v100, "cost");
  v107 = 0x100000001LL;
  v99 = 4;
  v103 = 0;
  v105 = 257;
  v108 = 1000;
  v109 = 0;
  v110 = 10;
  v111 = 0;
  v101 = xmmword_18B64B0;
  sub_15AFF30(&v94, &v79);
  sub_18572D0(&v79);
  v112[0] = 0x600000000LL;
  v112[1] = 0x3E800000000LL;
  v112[2] = 0x200000001LL;
  v114 = 0x200000001LL;
  v112[3] = 0x8000000101LL;
  v116 = 0xFFFFFFFFLL;
  v112[4] = 0x100000010LL;
  v119 = 0x20000000101LL;
  v112[6] = 0xFFFFFC1800000000LL;
  v120 = 0x600000100LL;
  v79.m128i_i64[0] = 0;
  v112[5] = 0;
  v112[7] = 1000;
  v115 = 0x10000;
  v117 = 0;
  v118 = 1;
  v121 = 0x40000000001LL;
  v122 = 257;
  v123 = 1;
  v113 = xmmword_18B64C0;
  sub_15B26B0(v112, &v79);
  sub_18572D0(&v79);
  v127 = 0x1000100000001LL;
  v130[0] = 0x10000000001LL;
  v124 = 256;
  v125 = 3;
  v126 = 256;
  v128 = 10;
  v129 = 0;
  v79.m128i_i64[0] = 0;
  v130[1] = 0x100017FFFFFFFLL;
  v131 = 0;
  sub_15B7350(v130, &v79);
  sub_18572D0(&v79);
  v79.m128i_i64[0] = 0;
  v132 = 0;
  v133 = 0x13FFFFFFFLL;
  sub_15B3AA0(&v132, &v79);
  sub_18572D0(&v79);
  v79.m128i_i64[0] = 0;
  v134 = 1000;
  v135 = 1;
  sub_15B6C70(&v134, &v79);
  sub_18572D0(&v79);
  v148 = 0x10100000003E8LL;
  v141 = xmmword_18B64D0;
  v153 = 0x2000000000LL;
  v142 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
  v155 = 0x6400000001LL;
  v146 = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
  v151 = 256;
  v156 = 0x3FF199999999999ALL;
  v136 = 1;
  v137 = 257;
  v138 = 2;
  v139 = 0;
  v140 = 0;
  v143 = 100;
  v144 = 1;
  v145 = -1;
  v147 = 1;
  v149 = 0;
  v150 = 0;
  v152 = 1;
  v154 = 0;
  v157 = 1;
  v159 = 0;
  v160 = 0;
  v158 = xmmword_18B6500;
  v161 = 0x138800000064LL;
  v162 = 0x3FF199999999999ALL;
  v11 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
  v165 = 0x3FF0000000000000LL;
  v164 = 6;
  v166 = 0;
  v168 = 0x1000000;
  v167 = 0;
  v169 = 0;
  v170 = 0;
  v171 = 0x100000000000100LL;
  v163 = v11;
  sub_180C5A0(&v172, "auto");
  sub_15B65B0(&v82, &v77);
  sub_18572D0(&v77);
  v12 = *(_QWORD *)(a1 + 24);
  BYTE1(v132) = 0;
  v74 = v12;
  v145 = 100;
  v79.m128i_i64[0] = 0;
  sub_8E4C30(&v78, v12, &v82, &v79);
  sub_18572D0(&v79);
  v13 = *a3;
  if ( *a3 )
  {
    v14 = &v13[*(v13 - 1)];
    if ( v13 != v14 )
    {
      v15 = *a3;
      v13 = nullptr;
      while ( 1 )
      {
        v24 = *v15;
        v25 = *(_QWORD *)(a1 + 16);
        if ( dword_1C7ED94 == *v15 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(v25 + 104) + 856LL);
          if ( v26 )
            goto LABEL_16;
        }
        else if ( dword_1C7ED90 == v24 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(v25 + 104) + 864LL);
          if ( v26 )
            goto LABEL_16;
        }
        else
        {
          v16 = *(unsigned int **)(*(_QWORD *)(v25 + 8840) + 8LL * (v24 >> 1));
          if ( (v24 & 1) != 0 )
          {
            v26 = sub_15E1A70(*(_QWORD *)(v25 + 104));
            if ( v26 )
            {
LABEL_16:
              v17 = *(_DWORD *)(v26 + 8) + 1;
              *(_DWORD *)(v26 + 8) = v17;
              if ( v13 )
              {
                v18 = v13[2]-- == 1;
                if ( !v18 )
                {
                  v17 = *(_DWORD *)(v26 + 8);
                  v13 = (unsigned int *)v26;
                  goto LABEL_10;
                }
                a3 = (unsigned int **)v26;
                sub_15D7BC0(v74, v13);
                v13 = (unsigned int *)a3;
LABEL_64:
                v17 = v13[2];
              }
              else
              {
                v13 = (unsigned int *)v26;
              }
              goto LABEL_10;
            }
          }
          else if ( v16 )
          {
            v17 = v16[2] + 1;
            v16[2] = v17;
            if ( v13 )
            {
              v18 = v13[2]-- == 1;
              if ( !v18 )
              {
                v17 = v16[2];
                v13 = v16;
                goto LABEL_10;
              }
              a3 = (unsigned int **)v16;
              sub_15D7BC0(v74, v13);
              v13 = (unsigned int *)a3;
              goto LABEL_64;
            }
            v13 = v16;
LABEL_10:
            v13[2] = v17 + 1;
            v19 = (unsigned int **)a4[1];
            if ( !v19 )
              goto LABEL_59;
            goto LABEL_11;
          }
        }
        if ( v13 )
        {
          v18 = v13[2]-- == 1;
          if ( v18 )
            sub_15D7BC0(v74, v13);
        }
        v19 = (unsigned int **)a4[1];
        v13 = nullptr;
        if ( !v19 )
        {
LABEL_59:
          v54 = (_QWORD *)sub_186B270(0x18u);
          v19 = (unsigned int **)(v54 + 1);
          *v54 = 2;
          v22 = 1;
          a4[1] = (__int64)v19;
          v23 = v19;
          goto LABEL_13;
        }
LABEL_11:
        v20 = *((_DWORD *)v19 - 1);
        if ( v20 == *((_DWORD *)v19 - 2) )
        {
          v27 = (3 * v20 + 1) >> 1;
          v28 = 8 * v27 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v28 || v20 >= v27 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_154526(v79.m128i_i64, "Overflow encountered when expanding vector", v5);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v79);
            sub_233E40((__int64)&v79);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(a3) = (3 * v20 + 1) >> 1;
          v29 = sub_186B300(v19 - 1, v28);
          v30 = (_DWORD *)(v29 + 8);
          ++v15;
          a4[1] = v29 + 8;
          *(_DWORD *)v29 = (_DWORD)a3;
          LODWORD(v29) = *(_DWORD *)(v29 + 4);
          *(_QWORD *)&v30[2 * (unsigned int)v29] = v13;
          *(v30 - 1) = v29 + 1;
          if ( v14 == v15 )
            goto LABEL_22;
        }
        else
        {
          v21 = v20;
          v22 = v20 + 1;
          v23 = &v19[v21];
LABEL_13:
          ++v15;
          *v23 = v13;
          *((_DWORD *)v19 - 1) = v22;
          if ( v14 == v15 )
            goto LABEL_22;
        }
      }
    }
    v13 = nullptr;
  }
LABEL_22:
  v31 = *a2;
  if ( *a2 )
  {
    v32 = v31 + 16LL * *(unsigned int *)(v31 - 4);
    if ( v32 != v31 )
    {
      while ( 1 )
      {
        v36 = sub_15E1B70(*(_QWORD *)(a1 + 24));
        v37 = (unsigned int **)v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        v38 = (_QWORD *)a4[1];
        if ( !v38 )
          break;
        v39 = *((_DWORD *)v38 - 1);
        if ( v39 == *((_DWORD *)v38 - 2) )
        {
          v40 = (3 * v39 + 1) >> 1;
          v41 = 8 * v40 + 8;
          if ( 8 * v39 + 8 >= (unsigned int)v41 || v39 >= v40 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_154526(v79.m128i_i64, "Overflow encountered when expanding vector", v7);
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, &v79);
            sub_233E40((__int64)&v79);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(a2) = (3 * v39 + 1) >> 1;
          a3 = v37;
          v42 = (_DWORD *)sub_186B300(v38 - 1, v41);
          v43 = (unsigned int)v42[1];
          v38 = v42 + 2;
          v31 += 16;
          a4[1] = (__int64)(v42 + 2);
          *v42 = (_DWORD)a2;
          *(_QWORD *)&v42[2 * v43 + 2] = a3;
          v42[1] = v43 + 1;
          if ( v32 == v31 )
            goto LABEL_34;
        }
        else
        {
          v33 = v39;
          v34 = v39 + 1;
          v35 = (unsigned int ***)&v38[v33];
LABEL_26:
          v31 += 16;
          *v35 = v37;
          *((_DWORD *)v38 - 1) = v34;
          if ( v32 == v31 )
            goto LABEL_34;
        }
      }
      a3 = (unsigned int **)v36;
      v55 = (_QWORD *)sub_186B270(0x18u);
      v38 = v55 + 1;
      *v55 = 2;
      v37 = a3;
      v34 = 1;
      a4[1] = (__int64)v38;
      v35 = (unsigned int ***)v38;
      goto LABEL_26;
    }
  }
  v38 = (_QWORD *)a4[1];
  if ( v38 )
  {
LABEL_34:
    v44 = 0;
    if ( *((_DWORD *)v38 - 1) )
    {
      while ( 1 )
      {
        LODWORD(a3) = v44;
        v45 = v44;
        sub_BBC830(&v79, a1, v38[v45]);
        v46 = v79.m128i_i64[0];
        v47 = (int)a3;
        if ( v13 )
        {
          v48 = v79.m128i_i64[1];
          v18 = v13[2]-- == 1;
          if ( v18 )
          {
            sub_15D7BC0(v48, v13);
            v47 = (int)a3;
          }
        }
        v38 = (_QWORD *)a4[1];
        v49 = *a4;
        v50 = &v38[v45];
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
        v51 = *v50;
        if ( *v50 )
        {
          v18 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v18 )
          {
            LODWORD(a3) = v47;
            sub_15D7BC0(v49, v51);
            v47 = (int)a3;
            v38 = (_QWORD *)a4[1];
          }
        }
        *v50 = v46;
        v44 = v47 + 1;
        if ( !v38 )
          break;
        v13 = (unsigned int *)v46;
        if ( v44 >= *((_DWORD *)v38 - 1) )
          goto LABEL_45;
      }
    }
    else
    {
LABEL_45:
      v52 = v38;
      v53 = &v38[*((unsigned int *)v38 - 1)];
      if ( v53 != v38 )
      {
        do
        {
          sub_8E3610(&v78);
          ++v52;
        }
        while ( v53 != v52 );
      }
      v46 = (__int64)v13;
    }
  }
  else
  {
    v46 = (__int64)v13;
  }
  if ( (unsigned int)sub_8E3730(&v78) == 1 )
  {
    v79.m128i_i64[0] = 0;
    sub_8E3780(&v78);
    sub_180B130(&v78);
    if ( (unsigned __int8)sub_186A530(*(double *)v11.m128i_i64) )
    {
      sub_186A4C0(*(double *)v11.m128i_i64);
      v63 = sub_180B150(&v78, &v79);
      v64 = sub_17F35B0(v63, 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      v65 = sub_160C420(
              v64,
              v70,
              (int)&v78,
              (int)a3,
              (__int64)a2,
              v74,
              (int)v100,
              (int)&v96,
              (int)&v94,
              v77,
              v78,
              v79.m128i_i32[0],
              v79.m128i_i32[2],
              v80,
              v81,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87,
              si128.m128i_i32[0],
              si128.m128i_i32[2],
              v89,
              v90,
              v91,
              v92,
              v93,
              (int)v94,
              v95,
              v96,
              v97,
              (int)v98,
              v99,
              v100[0]);
      std::operator<<<std::char_traits<char>>();
      v66 = (std::ostream *)sub_180B150(v65, "\n");
      v67 = sub_13525A0(v66, v79.m128i_i32[0]);
      std::operator<<<std::char_traits<char>>();
      v68 = sub_180B150(v67, "\n");
      v69 = sub_8E38F0(&v78, v68);
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v69, "\n");
    }
    else
    {
      v56 = sub_180B150(&v78, &v79);
      v57 = sub_17F35B0(v56, 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      v58 = sub_160C420(
              v57,
              v70,
              (int)&v78,
              (int)a3,
              (__int64)a2,
              v74,
              (int)v100,
              (int)&v96,
              (int)&v94,
              v77,
              v78,
              v79.m128i_i32[0],
              v79.m128i_i32[2],
              v80,
              v81,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87,
              si128.m128i_i32[0],
              si128.m128i_i32[2],
              v89,
              v90,
              v91,
              v92,
              v93,
              (int)v94,
              v95,
              v96,
              v97,
              (int)v98,
              v99,
              v100[0]);
      std::operator<<<std::char_traits<char>>();
      v59 = (std::ostream *)sub_180B150(v58, "\n");
      v60 = sub_13525A0(v59, v79.m128i_i32[0]);
      std::operator<<<std::char_traits<char>>();
      v61 = sub_180B150(v60, "\n");
      sub_8E38F0(v71, v61);
      std::operator<<<std::char_traits<char>>();
    }
    v62 = (void (__fastcall ***)(void *, char *))v79.m128i_i64[0];
    if ( v79.m128i_i64[0] )
    {
      v18 = (*(_DWORD *)(v79.m128i_i64[0] + 16))-- == 1;
      if ( v18 )
      {
        (**v62)(v62, "\n");
        sub_186B220(v62);
      }
    }
  }
  sub_8E4B60(v71);
  sub_BB0560(v46, v74);
  if ( v98 != v75 )
    operator delete(v98, v100[0] + 1LL);
  if ( v94 != v76 )
    operator delete(v94, v96 + 1);
}

