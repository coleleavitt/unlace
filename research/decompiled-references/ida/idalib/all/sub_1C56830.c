char __fastcall sub_1C56830(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 v6; // r15
  __int64 v7; // r13
  unsigned int v10; // eax
  __int64 p_src; // rsi
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned __int64 v14; // rbp
  char result; // al
  unsigned __int8 *v16; // rbp
  unsigned __int8 *v17; // rdx
  __int64 v18; // rax
  unsigned __int8 *v19; // rbp
  unsigned __int8 *v20; // rdx
  __int64 v21; // rax
  unsigned __int8 *v22; // rbp
  _BYTE *v23; // r15
  signed __int64 v24; // r12
  _QWORD *v25; // rax
  unsigned __int8 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  _BYTE *v29; // rsi
  __int64 v30; // rax
  void **v31; // r12
  unsigned __int8 *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  unsigned __int8 *v42; // rbp
  _BYTE *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // r13
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbp
  __int64 v62; // r8
  __int64 v63; // r9
  void *v64; // rax
  _QWORD *v65; // rax
  char v66; // r13
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rbx
  unsigned __int8 *v69; // rbp
  __int64 v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rbp
  __int64 v77; // r8
  __int64 v78; // r9
  void *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r15
  unsigned __int8 *v83; // rbp
  _BYTE *v84; // rdx
  __int64 v85; // rax
  size_t v86; // rdx
  __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // rdx
  int v94; // eax
  unsigned __int8 *v95; // rax
  __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rdx
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // r13
  __int64 v105; // rdx
  __int64 v106; // r13
  void *v107; // rdi
  __int64 v108; // rax
  __int64 v109; // r13
  __int64 v110; // r15
  __int64 v111; // r13
  void *v112; // rdi
  __int64 v113; // rax
  __int64 v114; // r15
  __int64 v115; // rdx
  __int64 v116; // r15
  void *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  void *v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  void *v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r13
  void *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // r15
  __int64 v134; // rdx
  __int64 v135; // r15
  void *v136; // rdi
  __int64 v137; // [rsp+8h] [rbp-110h]
  __int64 v138; // [rsp+8h] [rbp-110h]
  __int64 v139; // [rsp+8h] [rbp-110h]
  __int64 v140; // [rsp+8h] [rbp-110h]
  __int64 v141; // [rsp+8h] [rbp-110h]
  __int64 v142; // [rsp+8h] [rbp-110h]
  __int64 v143; // [rsp+8h] [rbp-110h]
  __int64 v144; // [rsp+10h] [rbp-108h]
  __int64 v145; // [rsp+10h] [rbp-108h]
  __int64 v146; // [rsp+18h] [rbp-100h]
  __int64 v147; // [rsp+28h] [rbp-F0h] BYREF
  void *src; // [rsp+30h] [rbp-E8h] BYREF
  size_t n; // [rsp+38h] [rbp-E0h]
  _QWORD v150[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v151[2]; // [rsp+50h] [rbp-C8h] BYREF
  void *v152; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v153; // [rsp+70h] [rbp-A8h]
  __int64 v154; // [rsp+78h] [rbp-A0h]
  char v155; // [rsp+C8h] [rbp-50h]
  unsigned int v156; // [rsp+D0h] [rbp-48h]
  char v157; // [rsp+D4h] [rbp-44h]

  v6 = 0;
  v7 = (unsigned __int8)a4;
  if ( ((*(_BYTE *)(a2 + 1) >> 3) & 7) == 1 || (v6 = 1, sub_BFF660((_WORD *)a2, a2, a3, a4, a5)) )
  {
LABEL_2:
    v10 = sub_EEB7E0(a2, a2, a6);
    p_src = a1 + 8;
    sub_168B9F0((__int64)v151, (__int64 *)(a1 + 8), v10, 0xC22u, 0);
    if ( v155 )
    {
      v16 = v153;
      if ( !v153 )
      {
        v91 = v154;
        v92 = *(_DWORD *)(v154 + 14976);
        if ( v92 )
        {
          v118 = (unsigned int)(v92 - 1);
          *(_DWORD *)(v154 + 14976) = v118;
          v16 = *(unsigned __int8 **)(v91 + 8 * v118 + 14848);
          v119 = *((unsigned int *)v16 + 134);
          *v16 = 0;
          v120 = *((_QWORD *)v16 + 66);
          *((_DWORD *)v16 + 106) = 0;
          v121 = v120 + (v119 << 6);
          while ( v120 != v121 )
          {
            while ( 1 )
            {
              v121 -= 64;
              v122 = *(void **)(v121 + 24);
              if ( v122 == (void *)(v121 + 40) )
                break;
              v144 = v121;
              v140 = v120;
              operator delete(v122);
              v120 = v140;
              v121 = v144;
              if ( v140 == v144 )
                goto LABEL_108;
            }
          }
LABEL_108:
          *((_DWORD *)v16 + 134) = 0;
        }
        else
        {
          v16 = (unsigned __int8 *)operator new(0x3A0u);
          *v16 = 0;
          *((_QWORD *)v16 + 12) = v16 + 112;
          *((_QWORD *)v16 + 16) = v16 + 144;
          *((_QWORD *)v16 + 20) = v16 + 176;
          *((_QWORD *)v16 + 24) = v16 + 208;
          *((_QWORD *)v16 + 28) = v16 + 240;
          *((_QWORD *)v16 + 32) = v16 + 272;
          *((_QWORD *)v16 + 36) = v16 + 304;
          *((_QWORD *)v16 + 40) = v16 + 336;
          *((_QWORD *)v16 + 44) = v16 + 368;
          *((_QWORD *)v16 + 48) = v16 + 400;
          *((_QWORD *)v16 + 52) = v16 + 432;
          *((_QWORD *)v16 + 13) = 0;
          v16[112] = 0;
          *((_QWORD *)v16 + 17) = 0;
          v16[144] = 0;
          *((_QWORD *)v16 + 21) = 0;
          v16[176] = 0;
          *((_QWORD *)v16 + 25) = 0;
          v16[208] = 0;
          *((_QWORD *)v16 + 29) = 0;
          v16[240] = 0;
          *((_QWORD *)v16 + 33) = 0;
          v16[272] = 0;
          *((_QWORD *)v16 + 37) = 0;
          v16[304] = 0;
          *((_QWORD *)v16 + 41) = 0;
          v16[336] = 0;
          *((_QWORD *)v16 + 45) = 0;
          v16[368] = 0;
          *((_QWORD *)v16 + 49) = 0;
          v16[400] = 0;
          *((_QWORD *)v16 + 53) = 0x800000000LL;
          *((_QWORD *)v16 + 66) = v16 + 544;
          *((_QWORD *)v16 + 67) = 0x600000000LL;
        }
        v153 = v16;
      }
      v16[*v16 + 1] = 2;
      v17 = v153;
      v18 = *v153;
      *v153 = v18 + 1;
      *(_QWORD *)&v17[8 * v18 + 16] = v6;
    }
    else
    {
      if ( !v157 )
      {
LABEL_4:
        v12 = sub_EEC8C0(a2, p_src, a6);
        v13 = v12;
        v14 = HIDWORD(v12);
        goto LABEL_5;
      }
      v36 = sub_168B9E0(v151);
      v39 = v152;
      if ( v152 )
        v39 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v152 + 32LL))(v152);
      p_src = (__int64)&src;
      src = v39;
      v40 = sub_1587BC0(v36, (__int64 *)&src, v34, v35, v37, v38);
      v41 = *v40 + 32LL * v156;
      v42 = *(unsigned __int8 **)(v41 + 8);
      if ( !v42 )
      {
        v99 = *(_QWORD *)(v41 + 16);
        v100 = *(_DWORD *)(v99 + 14976);
        if ( v100 )
        {
          v123 = (unsigned int)(v100 - 1);
          *(_DWORD *)(v99 + 14976) = v123;
          v42 = *(unsigned __int8 **)(v99 + 8 * v123 + 14848);
          v124 = *((unsigned int *)v42 + 134);
          *v42 = 0;
          p_src = *((_QWORD *)v42 + 66);
          *((_DWORD *)v42 + 106) = 0;
          v125 = p_src + (v124 << 6);
          while ( p_src != v125 )
          {
            while ( 1 )
            {
              v125 -= 64;
              v126 = *(void **)(v125 + 24);
              if ( v126 == (void *)(v125 + 40) )
                break;
              v146 = v125;
              v141 = v41;
              operator delete(v126);
              v125 = v146;
              v41 = v141;
              if ( p_src == v146 )
                goto LABEL_113;
            }
          }
LABEL_113:
          *((_DWORD *)v42 + 134) = 0;
        }
        else
        {
          v137 = v41;
          v42 = (unsigned __int8 *)operator new(0x3A0u);
          *v42 = 0;
          *((_QWORD *)v42 + 12) = v42 + 112;
          *((_QWORD *)v42 + 16) = v42 + 144;
          *((_QWORD *)v42 + 20) = v42 + 176;
          *((_QWORD *)v42 + 24) = v42 + 208;
          *((_QWORD *)v42 + 28) = v42 + 240;
          *((_QWORD *)v42 + 32) = v42 + 272;
          *((_QWORD *)v42 + 36) = v42 + 304;
          *((_QWORD *)v42 + 40) = v42 + 336;
          *((_QWORD *)v42 + 44) = v42 + 368;
          *((_QWORD *)v42 + 48) = v42 + 400;
          *((_QWORD *)v42 + 52) = v42 + 432;
          *((_QWORD *)v42 + 13) = 0;
          v42[112] = 0;
          *((_QWORD *)v42 + 17) = 0;
          v42[144] = 0;
          *((_QWORD *)v42 + 21) = 0;
          v42[176] = 0;
          *((_QWORD *)v42 + 25) = 0;
          v42[208] = 0;
          *((_QWORD *)v42 + 29) = 0;
          v42[240] = 0;
          *((_QWORD *)v42 + 33) = 0;
          v42[272] = 0;
          *((_QWORD *)v42 + 37) = 0;
          v42[304] = 0;
          *((_QWORD *)v42 + 41) = 0;
          v42[336] = 0;
          *((_QWORD *)v42 + 45) = 0;
          v42[368] = 0;
          *((_QWORD *)v42 + 49) = 0;
          v42[400] = 0;
          *((_QWORD *)v42 + 53) = 0x800000000LL;
          v41 = v137;
          *((_QWORD *)v42 + 66) = v42 + 544;
          *((_QWORD *)v42 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v41 + 8) = v42;
      }
      v42[*v42 + 1] = 2;
      v43 = *(_BYTE **)(v41 + 8);
      v44 = (unsigned __int8)*v43;
      *v43 = v44 + 1;
      *(_QWORD *)&v43[8 * v44 + 16] = v6;
    }
    if ( v155 )
    {
      v19 = v153;
      if ( !v153 )
      {
        v89 = v154;
        v90 = *(_DWORD *)(v154 + 14976);
        if ( v90 )
        {
          v113 = (unsigned int)(v90 - 1);
          *(_DWORD *)(v154 + 14976) = v113;
          v19 = *(unsigned __int8 **)(v89 + 8 * v113 + 14848);
          v114 = *((unsigned int *)v19 + 134);
          *v19 = 0;
          v115 = *((_QWORD *)v19 + 66);
          *((_DWORD *)v19 + 106) = 0;
          v116 = v115 + (v114 << 6);
          while ( v115 != v116 )
          {
            while ( 1 )
            {
              v116 -= 64;
              v117 = *(void **)(v116 + 24);
              if ( v117 == (void *)(v116 + 40) )
                break;
              v139 = v115;
              operator delete(v117);
              v115 = v139;
              if ( v139 == v116 )
                goto LABEL_103;
            }
          }
LABEL_103:
          *((_DWORD *)v19 + 134) = 0;
        }
        else
        {
          v19 = (unsigned __int8 *)operator new(0x3A0u);
          *v19 = 0;
          *((_QWORD *)v19 + 12) = v19 + 112;
          *((_QWORD *)v19 + 16) = v19 + 144;
          *((_QWORD *)v19 + 20) = v19 + 176;
          *((_QWORD *)v19 + 24) = v19 + 208;
          *((_QWORD *)v19 + 28) = v19 + 240;
          *((_QWORD *)v19 + 32) = v19 + 272;
          *((_QWORD *)v19 + 36) = v19 + 304;
          *((_QWORD *)v19 + 40) = v19 + 336;
          *((_QWORD *)v19 + 44) = v19 + 368;
          *((_QWORD *)v19 + 48) = v19 + 400;
          *((_QWORD *)v19 + 52) = v19 + 432;
          *((_QWORD *)v19 + 13) = 0;
          v19[112] = 0;
          *((_QWORD *)v19 + 17) = 0;
          v19[144] = 0;
          *((_QWORD *)v19 + 21) = 0;
          v19[176] = 0;
          *((_QWORD *)v19 + 25) = 0;
          v19[208] = 0;
          *((_QWORD *)v19 + 29) = 0;
          v19[240] = 0;
          *((_QWORD *)v19 + 33) = 0;
          v19[272] = 0;
          *((_QWORD *)v19 + 37) = 0;
          v19[304] = 0;
          *((_QWORD *)v19 + 41) = 0;
          v19[336] = 0;
          *((_QWORD *)v19 + 45) = 0;
          v19[368] = 0;
          *((_QWORD *)v19 + 49) = 0;
          v19[400] = 0;
          *((_QWORD *)v19 + 53) = 0x800000000LL;
          *((_QWORD *)v19 + 66) = v19 + 544;
          *((_QWORD *)v19 + 67) = 0x600000000LL;
        }
        v153 = v19;
      }
      v19[*v19 + 1] = 2;
      v20 = v153;
      v21 = *v153;
      *v153 = v21 + 1;
      *(_QWORD *)&v20[8 * v21 + 16] = v7;
    }
    else
    {
      if ( !v157 )
        goto LABEL_4;
      v76 = sub_168B9E0(v151);
      v79 = v152;
      if ( v152 )
        v79 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v152 + 32LL))(v152);
      src = v79;
      v80 = sub_1587BC0(v76, (__int64 *)&src, v74, v75, v77, v78);
      v81 = (unsigned __int8)v7;
      v82 = *v80 + 32LL * v156;
      v83 = *(unsigned __int8 **)(v82 + 8);
      if ( !v83 )
      {
        v101 = *(_QWORD *)(v82 + 16);
        v102 = *(_DWORD *)(v101 + 14976);
        if ( v102 )
        {
          v127 = (unsigned int)(v102 - 1);
          *(_DWORD *)(v101 + 14976) = v127;
          v83 = *(unsigned __int8 **)(v101 + 8 * v127 + 14848);
          v128 = *((unsigned int *)v83 + 134);
          *v83 = 0;
          v129 = *((_QWORD *)v83 + 66);
          *((_DWORD *)v83 + 106) = 0;
          v130 = v129 + (v128 << 6);
          while ( v129 != v130 )
          {
            while ( 1 )
            {
              v130 -= 64;
              v131 = *(void **)(v130 + 24);
              if ( v131 == (void *)(v130 + 40) )
                break;
              v145 = v129;
              v142 = v81;
              operator delete(v131);
              v129 = v145;
              v81 = v142;
              if ( v145 == v130 )
                goto LABEL_118;
            }
          }
LABEL_118:
          *((_DWORD *)v83 + 134) = 0;
        }
        else
        {
          v83 = (unsigned __int8 *)operator new(0x3A0u);
          *v83 = 0;
          *((_QWORD *)v83 + 12) = v83 + 112;
          *((_QWORD *)v83 + 16) = v83 + 144;
          *((_QWORD *)v83 + 20) = v83 + 176;
          *((_QWORD *)v83 + 24) = v83 + 208;
          *((_QWORD *)v83 + 28) = v83 + 240;
          *((_QWORD *)v83 + 32) = v83 + 272;
          *((_QWORD *)v83 + 36) = v83 + 304;
          *((_QWORD *)v83 + 40) = v83 + 336;
          *((_QWORD *)v83 + 44) = v83 + 368;
          *((_QWORD *)v83 + 48) = v83 + 400;
          *((_QWORD *)v83 + 52) = v83 + 432;
          *((_QWORD *)v83 + 13) = 0;
          v83[112] = 0;
          *((_QWORD *)v83 + 17) = 0;
          v83[144] = 0;
          *((_QWORD *)v83 + 21) = 0;
          v83[176] = 0;
          *((_QWORD *)v83 + 25) = 0;
          v83[208] = 0;
          *((_QWORD *)v83 + 29) = 0;
          v83[240] = 0;
          *((_QWORD *)v83 + 33) = 0;
          v83[272] = 0;
          *((_QWORD *)v83 + 37) = 0;
          v83[304] = 0;
          *((_QWORD *)v83 + 41) = 0;
          v83[336] = 0;
          *((_QWORD *)v83 + 45) = 0;
          v83[368] = 0;
          *((_QWORD *)v83 + 49) = 0;
          v83[400] = 0;
          *((_QWORD *)v83 + 53) = 0x800000000LL;
          v81 = (unsigned __int8)v7;
          *((_QWORD *)v83 + 66) = v83 + 544;
          *((_QWORD *)v83 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v82 + 8) = v83;
      }
      v83[*v83 + 1] = 2;
      v84 = *(_BYTE **)(v82 + 8);
      v85 = (unsigned __int8)*v84;
      p_src = (unsigned int)(v85 + 1);
      *v84 = v85 + 1;
      *(_QWORD *)&v84[8 * v85 + 16] = v81;
    }
    if ( !v155 )
    {
      if ( !v157 )
        goto LABEL_4;
      v61 = sub_168B9E0(v151);
      v64 = v152;
      if ( v152 )
        v64 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v152 + 32LL))(v152);
      src = v64;
      v65 = sub_1587BC0(v61, (__int64 *)&src, v59, v60, v62, v63);
      v29 = *(_BYTE **)(a3 + 104);
      sub_AEC220((unsigned __int8 **)(*v65 + 32LL * v156 + 8), v29, *(_QWORD *)(a3 + 112));
LABEL_44:
      v66 = v155;
      v67 = sub_EEC8C0(a2, (__int64)v29, a6);
      v13 = v67;
      v68 = HIDWORD(v67);
      LODWORD(v14) = HIDWORD(v67);
      if ( v66 )
      {
        v69 = v153;
        if ( v153 )
        {
          v70 = *((unsigned int *)v153 + 106);
          v71 = *((unsigned int *)v153 + 107);
          v72 = v70 + 1;
        }
        else
        {
          v93 = v154;
          v94 = *(_DWORD *)(v154 + 14976);
          if ( v94 )
          {
            v108 = (unsigned int)(v94 - 1);
            *(_DWORD *)(v154 + 14976) = v108;
            v69 = *(unsigned __int8 **)(v93 + 8 * v108 + 14848);
            v109 = *((unsigned int *)v69 + 134);
            *v69 = 0;
            v110 = *((_QWORD *)v69 + 66);
            *((_DWORD *)v69 + 106) = 0;
            v111 = v110 + (v109 << 6);
            if ( v110 == v111 )
            {
              v72 = 1;
              v70 = 0;
            }
            else
            {
              do
              {
                while ( 1 )
                {
                  v111 -= 64;
                  v112 = *(void **)(v111 + 24);
                  if ( v112 == (void *)(v111 + 40) )
                    break;
                  operator delete(v112);
                  if ( v110 == v111 )
                    goto LABEL_95;
                }
              }
              while ( v110 != v111 );
LABEL_95:
              v70 = *((unsigned int *)v69 + 106);
              v72 = v70 + 1;
            }
            *((_DWORD *)v69 + 134) = 0;
            v71 = *((unsigned int *)v69 + 107);
          }
          else
          {
            v95 = (unsigned __int8 *)operator new(0x3A0u);
            v71 = 8;
            v72 = 1;
            v69 = v95;
            *v95 = 0;
            *((_QWORD *)v95 + 12) = v95 + 112;
            *((_QWORD *)v95 + 16) = v95 + 144;
            *((_QWORD *)v95 + 20) = v95 + 176;
            *((_QWORD *)v95 + 24) = v95 + 208;
            *((_QWORD *)v95 + 28) = v95 + 240;
            *((_QWORD *)v95 + 32) = v95 + 272;
            *((_QWORD *)v95 + 36) = v95 + 304;
            *((_QWORD *)v95 + 40) = v95 + 336;
            *((_QWORD *)v95 + 44) = v95 + 368;
            *((_QWORD *)v95 + 48) = v95 + 400;
            *((_QWORD *)v95 + 52) = v95 + 432;
            *((_QWORD *)v95 + 13) = 0;
            v95[112] = 0;
            *((_QWORD *)v95 + 17) = 0;
            v95[144] = 0;
            *((_QWORD *)v95 + 21) = 0;
            v95[176] = 0;
            *((_QWORD *)v95 + 25) = 0;
            v95[208] = 0;
            *((_QWORD *)v95 + 29) = 0;
            v95[240] = 0;
            *((_QWORD *)v95 + 33) = 0;
            v95[272] = 0;
            *((_QWORD *)v95 + 37) = 0;
            v95[304] = 0;
            *((_QWORD *)v95 + 41) = 0;
            v95[336] = 0;
            *((_QWORD *)v95 + 45) = 0;
            v95[368] = 0;
            *((_QWORD *)v95 + 49) = 0;
            v95[400] = 0;
            *((_QWORD *)v95 + 53) = 0x800000000LL;
            *((_QWORD *)v95 + 66) = v95 + 544;
            *((_QWORD *)v95 + 67) = 0x600000000LL;
            v70 = 0;
          }
          v153 = v69;
        }
        src = (void *)__PAIR64__(v68, v13);
        LOBYTE(n) = 1;
        if ( v72 > v71 )
        {
          sub_2237220(v69 + 416, v69 + 432, v72, 12);
          v70 = *((unsigned int *)v69 + 106);
        }
        v73 = *((_QWORD *)v69 + 52) + 12 * v70;
        *(_QWORD *)v73 = src;
        *(_DWORD *)(v73 + 8) = n;
        ++*((_DWORD *)v69 + 106);
        goto LABEL_6;
      }
LABEL_5:
      if ( v157 )
      {
        v47 = sub_168B9E0(v151);
        v50 = (__int64)v152;
        if ( v152 )
          v50 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v152 + 32LL))(v152);
        v147 = v50;
        v51 = sub_1587BC0(v47, &v147, v45, v46, v48, v49);
        v52 = *v51 + 32LL * v156;
        v53 = *(_QWORD *)(v52 + 8);
        v54 = v52;
        if ( v53 )
        {
          v55 = *(unsigned int *)(v53 + 424);
          v56 = *(unsigned int *)(v53 + 428);
          v57 = v55 + 1;
        }
        else
        {
          v96 = *(_QWORD *)(v52 + 16);
          v97 = *(_DWORD *)(v96 + 14976);
          if ( v97 )
          {
            v132 = (unsigned int)(v97 - 1);
            *(_DWORD *)(v96 + 14976) = v132;
            v53 = *(_QWORD *)(v96 + 8 * v132 + 14848);
            v133 = *(unsigned int *)(v53 + 536);
            *(_BYTE *)v53 = 0;
            v134 = *(_QWORD *)(v53 + 528);
            *(_DWORD *)(v53 + 424) = 0;
            v135 = v134 + (v133 << 6);
            while ( v134 != v135 )
            {
              while ( 1 )
              {
                v135 -= 64;
                v136 = *(void **)(v135 + 24);
                if ( v136 == (void *)(v135 + 40) )
                  break;
                v143 = v134;
                operator delete(v136);
                v134 = v143;
                if ( v143 == v135 )
                  goto LABEL_123;
              }
            }
LABEL_123:
            v55 = *(unsigned int *)(v53 + 424);
            v56 = *(unsigned int *)(v53 + 428);
            *(_DWORD *)(v53 + 536) = 0;
            v57 = v55 + 1;
          }
          else
          {
            v98 = operator new(0x3A0u);
            v56 = 8;
            v57 = 1;
            v53 = v98;
            *(_BYTE *)v98 = 0;
            *(_QWORD *)(v98 + 96) = v98 + 112;
            *(_QWORD *)(v98 + 128) = v98 + 144;
            *(_QWORD *)(v98 + 160) = v98 + 176;
            *(_QWORD *)(v98 + 192) = v98 + 208;
            *(_QWORD *)(v98 + 224) = v98 + 240;
            *(_QWORD *)(v98 + 256) = v98 + 272;
            *(_QWORD *)(v98 + 288) = v98 + 304;
            *(_QWORD *)(v98 + 320) = v98 + 336;
            *(_QWORD *)(v98 + 352) = v98 + 368;
            *(_QWORD *)(v98 + 384) = v98 + 400;
            *(_QWORD *)(v98 + 416) = v98 + 432;
            *(_QWORD *)(v98 + 104) = 0;
            *(_BYTE *)(v98 + 112) = 0;
            *(_QWORD *)(v98 + 136) = 0;
            *(_BYTE *)(v98 + 144) = 0;
            *(_QWORD *)(v98 + 168) = 0;
            *(_BYTE *)(v98 + 176) = 0;
            *(_QWORD *)(v98 + 200) = 0;
            *(_BYTE *)(v98 + 208) = 0;
            *(_QWORD *)(v98 + 232) = 0;
            *(_BYTE *)(v98 + 240) = 0;
            *(_QWORD *)(v98 + 264) = 0;
            *(_BYTE *)(v98 + 272) = 0;
            *(_QWORD *)(v98 + 296) = 0;
            *(_BYTE *)(v98 + 304) = 0;
            *(_QWORD *)(v98 + 328) = 0;
            *(_BYTE *)(v98 + 336) = 0;
            *(_QWORD *)(v98 + 360) = 0;
            *(_BYTE *)(v98 + 368) = 0;
            *(_QWORD *)(v98 + 392) = 0;
            *(_BYTE *)(v98 + 400) = 0;
            *(_QWORD *)(v98 + 424) = 0x800000000LL;
            *(_QWORD *)(v98 + 528) = v98 + 544;
            *(_QWORD *)(v98 + 536) = 0x600000000LL;
            v55 = 0;
          }
          *(_QWORD *)(v54 + 8) = v53;
        }
        src = (void *)__PAIR64__(v14, v13);
        LOBYTE(n) = 1;
        if ( v57 > v56 )
        {
          sub_2237220(v53 + 416, v53 + 432, v57, 12);
          v55 = *(unsigned int *)(v53 + 424);
        }
        v58 = *(_QWORD *)(v53 + 416) + 12 * v55;
        *(_QWORD *)v58 = src;
        *(_DWORD *)(v58 + 8) = n;
        ++*(_DWORD *)(v53 + 424);
      }
LABEL_6:
      sub_15F7200(v151);
      return 1;
    }
    v22 = v153;
    v23 = *(_BYTE **)(a3 + 104);
    v24 = *(_QWORD *)(a3 + 112);
    if ( !v153 )
    {
      v87 = v154;
      v88 = *(_DWORD *)(v154 + 14976);
      if ( v88 )
      {
        v103 = (unsigned int)(v88 - 1);
        *(_DWORD *)(v154 + 14976) = v103;
        v22 = *(unsigned __int8 **)(v87 + 8 * v103 + 14848);
        v104 = *((unsigned int *)v22 + 134);
        *v22 = 0;
        v105 = *((_QWORD *)v22 + 66);
        *((_DWORD *)v22 + 106) = 0;
        v106 = v105 + (v104 << 6);
        while ( v105 != v106 )
        {
          while ( 1 )
          {
            v106 -= 64;
            v107 = *(void **)(v106 + 24);
            if ( v107 == (void *)(v106 + 40) )
              break;
            v138 = v105;
            operator delete(v107);
            v105 = v138;
            if ( v138 == v106 )
              goto LABEL_91;
          }
        }
LABEL_91:
        *((_DWORD *)v22 + 134) = 0;
      }
      else
      {
        v22 = (unsigned __int8 *)operator new(0x3A0u);
        *v22 = 0;
        *((_QWORD *)v22 + 12) = v22 + 112;
        *((_QWORD *)v22 + 16) = v22 + 144;
        *((_QWORD *)v22 + 20) = v22 + 176;
        *((_QWORD *)v22 + 24) = v22 + 208;
        *((_QWORD *)v22 + 28) = v22 + 240;
        *((_QWORD *)v22 + 32) = v22 + 272;
        *((_QWORD *)v22 + 36) = v22 + 304;
        *((_QWORD *)v22 + 40) = v22 + 336;
        *((_QWORD *)v22 + 44) = v22 + 368;
        *((_QWORD *)v22 + 48) = v22 + 400;
        *((_QWORD *)v22 + 52) = v22 + 432;
        *((_QWORD *)v22 + 13) = 0;
        v22[112] = 0;
        *((_QWORD *)v22 + 17) = 0;
        v22[144] = 0;
        *((_QWORD *)v22 + 21) = 0;
        v22[176] = 0;
        *((_QWORD *)v22 + 25) = 0;
        v22[208] = 0;
        *((_QWORD *)v22 + 29) = 0;
        v22[240] = 0;
        *((_QWORD *)v22 + 33) = 0;
        v22[272] = 0;
        *((_QWORD *)v22 + 37) = 0;
        v22[304] = 0;
        *((_QWORD *)v22 + 41) = 0;
        v22[336] = 0;
        *((_QWORD *)v22 + 45) = 0;
        v22[368] = 0;
        *((_QWORD *)v22 + 49) = 0;
        v22[400] = 0;
        *((_QWORD *)v22 + 53) = 0x800000000LL;
        *((_QWORD *)v22 + 66) = v22 + 544;
        *((_QWORD *)v22 + 67) = 0x600000000LL;
      }
      v153 = v22;
    }
    v22[*v22 + 1] = 0;
    src = v150;
    if ( &v23[v24] && !v23 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v24 > 0xF )
    {
      if ( v24 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v25 = (_QWORD *)operator new(v24 + 1);
      v150[0] = v24;
      src = v25;
    }
    else
    {
      if ( v24 == 1 )
      {
        LOBYTE(v150[0]) = *v23;
        v25 = v150;
        goto LABEL_23;
      }
      v25 = v150;
      if ( !v24 )
      {
LABEL_23:
        n = v24;
        *((_BYTE *)v25 + v24) = 0;
        v26 = v153;
        v27 = *v153;
        *v153 = v27 + 1;
        v28 = (unsigned __int8)v27;
        v29 = src;
        v30 = 32 * (v27 + 3);
        v31 = (void **)&v26[v30];
        v32 = *(unsigned __int8 **)&v26[v30];
        if ( src == v150 )
        {
          v86 = n;
          if ( n )
          {
            if ( n == 1 )
              *v32 = v150[0];
            else
              memcpy(v32, src, n);
            v86 = n;
            v32 = (unsigned __int8 *)*v31;
          }
          v31[1] = (void *)v86;
          v32[v86] = 0;
          v32 = (unsigned __int8 *)src;
          goto LABEL_27;
        }
        if ( v32 == &v26[v30 + 16] )
        {
          *v31 = src;
          v31[1] = (void *)n;
          v31[2] = (void *)v150[0];
        }
        else
        {
          v33 = *(_QWORD *)&v26[32 * v28 + 112];
          *v31 = src;
          v31[1] = (void *)n;
          v31[2] = (void *)v150[0];
          if ( v32 )
          {
            src = v32;
            v150[0] = v33;
            goto LABEL_27;
          }
        }
        v32 = (unsigned __int8 *)v150;
        src = v150;
LABEL_27:
        n = 0;
        *v32 = 0;
        if ( src != v150 )
          operator delete(src);
        goto LABEL_44;
      }
    }
    memcpy(v25, v23, v24);
    v25 = src;
    goto LABEL_23;
  }
  result = sub_BFF9B0(a2, a2);
  if ( result )
  {
    v6 = 2;
    goto LABEL_2;
  }
  return result;
}
