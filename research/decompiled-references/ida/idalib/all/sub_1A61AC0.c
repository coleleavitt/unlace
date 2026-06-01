__int64 __fastcall sub_1A61AC0(__int64 a1)
{
  const char *v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int *v4; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 *v15; // rbx
  signed __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 *v20; // rbp
  unsigned __int64 v21; // rdx
  bool v22; // zf
  int v23; // eax
  _BYTE *v24; // rax
  __int64 *v25; // r9
  _BYTE *v26; // r14
  __int64 v27; // r15
  __int64 *v28; // r13
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE *v32; // rsi
  __int64 *v33; // rax
  size_t v34; // rbx
  unsigned __int64 v35; // rdx
  __int64 v36; // rbp
  unsigned __int64 v37; // rdi
  __int64 *v38; // rdi
  unsigned int v39; // edi
  __int64 v40; // rax
  unsigned int v41; // esi
  bool v42; // cl
  unsigned int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // r13
  void *v48; // rdi
  _QWORD *v49; // r14
  _QWORD *v50; // rbp
  _QWORD *v51; // rdi
  _QWORD *v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rdi
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  char v58; // al
  __int64 v59; // rcx
  __int64 v60; // rbp
  unsigned __int64 *v61; // r13
  unsigned __int64 v62; // r12
  unsigned __int64 v63; // rax
  _QWORD *v64; // r14
  _QWORD *v65; // rbp
  _QWORD *v66; // rdi
  void *v67; // rdi
  void **v68; // rbp
  void **v69; // r14
  __int64 v70; // rax
  __int64 v71; // r12
  __int64 v72; // r13
  __int64 v73; // r12
  void *v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rsi
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rcx
  unsigned __int64 *v82; // rbp
  unsigned __int64 v83; // r13
  unsigned __int64 v84; // rax
  _QWORD *v85; // r14
  _QWORD *v86; // r12
  _QWORD *v87; // rdi
  void *v88; // rdi
  void **v89; // r12
  void **v90; // r14
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // r13
  __int64 v94; // rbp
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 *v98; // r9
  __m128i v99; // rax
  unsigned int *v100; // rsi
  size_t v101; // rbp
  void *v102; // rdx
  __int64 *v103; // rbp
  __int64 *v104; // rbx
  __int64 v105; // r12
  __int64 v106; // r13
  _QWORD *v107; // r14
  _QWORD *v108; // rdx
  unsigned __int64 v109; // r14
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  __int64 v112; // r14
  __int64 v113; // rbx
  unsigned int v114; // eax
  unsigned int v115; // edx
  __int64 v116; // rdx
  unsigned __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  _QWORD *v120; // r14
  unsigned __int64 *v121; // rdi
  unsigned __int64 *v122; // r13
  unsigned __int64 *v123; // r12
  unsigned __int64 v124; // rbp
  unsigned __int64 v125; // rax
  _QWORD *v126; // r15
  _QWORD *v127; // rbx
  _QWORD *v128; // rdi
  void *v129; // rdi
  void **v130; // rbx
  void **v131; // r15
  _QWORD *v132; // rdi
  __int64 result; // rax
  __int64 v134; // rdx
  __int64 v135; // [rsp+8h] [rbp-1D0h]
  _QWORD *v136; // [rsp+8h] [rbp-1D0h]
  __m128i v137; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 *v138; // [rsp+20h] [rbp-1B8h]
  __int64 *v139; // [rsp+28h] [rbp-1B0h]
  __int64 v140; // [rsp+30h] [rbp-1A8h]
  __int64 *v141; // [rsp+38h] [rbp-1A0h]
  void **v142; // [rsp+40h] [rbp-198h]
  unsigned __int64 v143; // [rsp+48h] [rbp-190h]
  const char *v144; // [rsp+50h] [rbp-188h]
  __int64 v145; // [rsp+58h] [rbp-180h]
  __int64 v146; // [rsp+60h] [rbp-178h]
  __int64 v147; // [rsp+68h] [rbp-170h]
  const char *v148; // [rsp+70h] [rbp-168h]
  unsigned int v149; // [rsp+7Ch] [rbp-15Ch]
  __int64 v150; // [rsp+80h] [rbp-158h]
  __int64 v151; // [rsp+88h] [rbp-150h]
  __m128i v152; // [rsp+90h] [rbp-148h] BYREF
  void *s2[2]; // [rsp+A0h] [rbp-138h] BYREF
  _BYTE v154[16]; // [rsp+B0h] [rbp-128h] BYREF
  void *v155[2]; // [rsp+C0h] [rbp-118h] BYREF
  _BYTE v156[16]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v157; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v158; // [rsp+E8h] [rbp-F0h]
  void *ptr; // [rsp+F0h] [rbp-E8h]
  __int64 v160; // [rsp+F8h] [rbp-E0h]
  char v161; // [rsp+100h] [rbp-D8h] BYREF
  unsigned int v162; // [rsp+108h] [rbp-D0h]
  unsigned int v163; // [rsp+10Ch] [rbp-CCh]
  int v164; // [rsp+110h] [rbp-C8h]
  unsigned __int64 v165; // [rsp+114h] [rbp-C4h]
  char v166; // [rsp+11Ch] [rbp-BCh]
  char v167; // [rsp+11Dh] [rbp-BBh]
  void *v168[2]; // [rsp+120h] [rbp-B8h]
  char *v169; // [rsp+130h] [rbp-A8h]
  __int64 (__fastcall **v170)(); // [rsp+140h] [rbp-98h] BYREF
  int v171; // [rsp+148h] [rbp-90h]
  __int128 v172; // [rsp+150h] [rbp-88h]
  void *dest; // [rsp+160h] [rbp-78h]
  char v174; // [rsp+168h] [rbp-70h]
  int v175; // [rsp+16Ch] [rbp-6Ch]
  void **v176; // [rsp+170h] [rbp-68h]

  v1 = (const char *)(a1 + 848);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 896);
  v140 = a1;
  v4 = *(unsigned int **)(v2 + 16);
  v150 = a1 + 848;
  v149 = *v4;
  v5 = *(_QWORD *)(a1 + 888);
  v151 = v5 + 88 * v3;
  v6 = v5 + 16;
  if ( v151 == v5 )
    goto LABEL_204;
  while ( 1 )
  {
    v7 = v150;
    v148 = (const char *)std::_Rb_tree_decrement(v150);
    v8 = *(_QWORD *)(*(_QWORD *)(v140 + 864) + 40LL);
    v144 = *(const char **)(v140 + 864);
    v135 = v8;
    v9 = std::_Rb_tree_decrement(v7);
    v147 = *(_QWORD *)(v9 + 40) + 24LL * *(unsigned int *)(v9 + 48);
    if ( v147 != v8 )
    {
      while ( 1 )
      {
        v146 = 0;
        v12 = *(_QWORD *)(v135 + 8);
        v13 = *(_QWORD *)v135;
        v14 = *(_QWORD *)(v12 + 8);
        v143 = *(_QWORD *)v135;
        if ( ((v14 >> 1) & 3) != 2 )
          break;
        v76 = *(_QWORD *)(v12 + 16);
        v146 = v76;
        if ( !v76 )
          break;
        v77 = sub_F63270(v76, (__int64)v1, v12, v13, v10, v11);
        if ( !v77 )
          break;
        v78 = v77[5];
        v79 = *(_QWORD *)(v6 - 16) & 7LL;
        if ( (v78 & 7) != 0 )
        {
          v80 = 0;
          if ( (_DWORD)v79 )
            goto LABEL_82;
        }
        else
        {
          v80 = v78 & 0xFFFFFFFFFFFFFFF8LL;
          v81 = 0;
          if ( (_DWORD)v79 )
            goto LABEL_106;
        }
        v81 = *(_QWORD *)(v6 - 16) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_106:
        if ( v81 != v80 )
          break;
LABEL_82:
        v1 = v144;
        v135 += 24;
        if ( v135 == *((_QWORD *)v144 + 5) + 24LL * *((unsigned int *)v144 + 12) && v144 != v148 )
        {
          v144 = (const char *)std::_Rb_tree_increment(v144, v144);
          v135 = *((_QWORD *)v144 + 5);
        }
        if ( v147 == v135 )
          goto LABEL_84;
      }
      v157 = *(_QWORD *)(v6 - 16);
      v158 = *(_QWORD *)(v6 - 8);
      v142 = (void **)&v157;
      ptr = &v161;
      v160 = 0x100000000LL;
      if ( *(_DWORD *)(v6 + 8) )
        sub_1747DA0(v142 + 2, (char **)v6);
      v15 = nullptr;
      v162 = *(_DWORD *)(v6 + 24);
      v163 = *(_DWORD *)(v6 + 28);
      v164 = *(_DWORD *)(v6 + 32);
      v165 = *(_QWORD *)(v6 + 36);
      v166 = *(_BYTE *)(v6 + 44);
      v167 = *(_BYTE *)(v6 + 45);
      v16 = *(_QWORD *)(v6 + 56) - *(_QWORD *)(v6 + 48);
      v168[0] = nullptr;
      v168[1] = nullptr;
      v169 = nullptr;
      v17 = 0xAAAAAAAAAAAAAAABLL * (v16 >> 3);
      if ( v17 )
      {
        if ( v17 > 0xAAAAAAAAAAAAAAALL )
          std::__throw_bad_alloc();
        v15 = (unsigned __int64 *)operator new(v16);
      }
      v137.m128i_i64[0] = (__int64)v15;
      v18 = _mm_loadl_epi64(&v137);
      v169 = (char *)v15 + v16;
      v19 = _mm_unpacklo_epi64(v18, v18);
      *(__m128i *)v168 = v19;
      v20 = *(__int64 **)(v6 + 48);
      v141 = *(__int64 **)(v6 + 56);
      if ( v141 != v20 )
      {
        v145 = v6;
        do
        {
          v19.m128i_i64[0] = 0;
          *(_OWORD *)v15 = 0;
          v21 = v20[1];
          v22 = *v20 == 0;
          *((_DWORD *)v15 + 4) = *((_DWORD *)v20 + 4);
          v15[1] = v21;
          if ( !v22 )
          {
            v23 = *(_DWORD *)(v21 + 14976);
            if ( v23 )
            {
              v70 = (unsigned int)(v23 - 1);
              *(_DWORD *)(v21 + 14976) = v70;
              v26 = *(_BYTE **)(v21 + 8 * v70 + 14848);
              v71 = *((unsigned int *)v26 + 134);
              *v26 = 0;
              v72 = *((_QWORD *)v26 + 66);
              *((_DWORD *)v26 + 106) = 0;
              v73 = v72 + (v71 << 6);
              while ( v72 != v73 )
              {
                while ( 1 )
                {
                  v73 -= 64;
                  v74 = *(void **)(v73 + 24);
                  if ( v74 == (void *)(v73 + 40) )
                    break;
                  operator delete(v74);
                  if ( v72 == v73 )
                    goto LABEL_98;
                }
              }
LABEL_98:
              v25 = (__int64 *)(v26 + 112);
              *((_DWORD *)v26 + 134) = 0;
              v137.m128i_i64[0] = (__int64)(v26 + 432);
            }
            else
            {
              v24 = (_BYTE *)operator new(0x3A0u);
              v25 = (__int64 *)(v24 + 112);
              v26 = v24;
              *v24 = 0;
              v24 += 144;
              *((_QWORD *)v24 - 6) = v25;
              *((_QWORD *)v24 - 5) = 0;
              *(v24 - 32) = 0;
              *((_QWORD *)v26 + 16) = v24;
              *((_QWORD *)v26 + 20) = v26 + 176;
              *((_QWORD *)v26 + 24) = v26 + 208;
              *((_QWORD *)v26 + 28) = v26 + 240;
              *((_QWORD *)v26 + 32) = v26 + 272;
              *((_QWORD *)v26 + 36) = v26 + 304;
              *((_QWORD *)v26 + 40) = v26 + 336;
              *((_QWORD *)v26 + 44) = v26 + 368;
              *((_QWORD *)v26 + 48) = v26 + 400;
              v137.m128i_i64[0] = (__int64)(v26 + 432);
              *((_QWORD *)v26 + 17) = 0;
              v26[144] = 0;
              *((_QWORD *)v26 + 21) = 0;
              v26[176] = 0;
              *((_QWORD *)v26 + 25) = 0;
              v26[208] = 0;
              *((_QWORD *)v26 + 29) = 0;
              v26[240] = 0;
              *((_QWORD *)v26 + 33) = 0;
              v26[272] = 0;
              *((_QWORD *)v26 + 37) = 0;
              v26[304] = 0;
              *((_QWORD *)v26 + 41) = 0;
              v26[336] = 0;
              *((_QWORD *)v26 + 45) = 0;
              v26[368] = 0;
              *((_QWORD *)v26 + 49) = 0;
              v26[400] = 0;
              *((_QWORD *)v26 + 52) = v26 + 432;
              *((_QWORD *)v26 + 53) = 0x800000000LL;
              *((_QWORD *)v26 + 66) = v26 + 544;
              *((_QWORD *)v26 + 67) = 0x600000000LL;
            }
            *v15 = (unsigned __int64)v26;
            v27 = *v20;
            v28 = v25;
            v29 = *v20 + 96;
            *v26 = *(_BYTE *)*v20;
            v26[1] = *(_BYTE *)(v27 + 1);
            v26[2] = *(_BYTE *)(v27 + 2);
            v26[3] = *(_BYTE *)(v27 + 3);
            v26[4] = *(_BYTE *)(v27 + 4);
            v26[5] = *(_BYTE *)(v27 + 5);
            v26[6] = *(_BYTE *)(v27 + 6);
            v26[7] = *(_BYTE *)(v27 + 7);
            v26[8] = *(_BYTE *)(v27 + 8);
            v26[9] = *(_BYTE *)(v27 + 9);
            v26[10] = *(_BYTE *)(v27 + 10);
            *((_QWORD *)v26 + 2) = *(_QWORD *)(v27 + 16);
            *((_QWORD *)v26 + 3) = *(_QWORD *)(v27 + 24);
            *((_QWORD *)v26 + 4) = *(_QWORD *)(v27 + 32);
            *((_QWORD *)v26 + 5) = *(_QWORD *)(v27 + 40);
            v30 = *(_QWORD *)(v27 + 48);
            v137.m128i_i64[1] = (__int64)v15;
            *((_QWORD *)v26 + 6) = v30;
            v31 = *(_QWORD *)(v27 + 56);
            v138 = v20;
            *((_QWORD *)v26 + 7) = v31;
            *((_QWORD *)v26 + 8) = *(_QWORD *)(v27 + 64);
            *((_QWORD *)v26 + 9) = *(_QWORD *)(v27 + 72);
            *((_QWORD *)v26 + 10) = *(_QWORD *)(v27 + 80);
            *((_QWORD *)v26 + 11) = *(_QWORD *)(v27 + 88);
            do
            {
              if ( (__int64 *)v29 != v28 - 2 )
              {
                v33 = (__int64 *)*(v28 - 2);
                v34 = *(_QWORD *)(v29 + 8);
                if ( v33 == v28 )
                  v35 = 15;
                else
                  v35 = *v28;
                if ( v34 > v35 )
                {
                  if ( (v34 & 0x8000000000000000LL) != 0LL )
                    std::__throw_length_error("basic_string::_M_create");
                  v36 = 2 * v35;
                  if ( v34 < 2 * v35 )
                  {
                    v37 = v36 + 1;
                    if ( (v35 & 0x4000000000000000LL) != 0 )
                    {
                      v37 = 0x8000000000000000LL;
                      v36 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                  }
                  else
                  {
                    v37 = v34 + 1;
                    v36 = *(_QWORD *)(v29 + 8);
                  }
                  v33 = (__int64 *)operator new(v37);
                  v38 = (__int64 *)*(v28 - 2);
                  if ( v38 != v28 )
                  {
                    v139 = v33;
                    operator delete(v38);
                    v33 = v139;
                  }
                  *(v28 - 2) = (__int64)v33;
                  *v28 = v36;
                }
                if ( v34 )
                {
                  v32 = *(_BYTE **)v29;
                  if ( v34 == 1 )
                    *(_BYTE *)v33 = *v32;
                  else
                    memcpy(v33, v32, v34);
                  v33 = (__int64 *)*(v28 - 2);
                }
                *(v28 - 1) = v34;
                *((_BYTE *)v33 + v34) = 0;
              }
              v29 += 32;
              v28 += 4;
            }
            while ( (__int64 *)v137.m128i_i64[0] != v28 );
            v15 = (unsigned __int64 *)v137.m128i_i64[1];
            v20 = v138;
            sub_E32260((__int64 *)v26 + 52, (__int64 *)(v27 + 416));
            sub_9EED30((__int64)(v26 + 528), (__int64 *)(v27 + 528));
          }
          v15 += 3;
          v20 += 3;
        }
        while ( v141 != v20 );
        v6 = v145;
      }
      v168[1] = v15;
      v39 = -1;
      LODWORD(v160) = 0;
      v40 = *(_QWORD *)(v135 + 8);
      v41 = *(_DWORD *)(v135 + 16);
      v164 = 0;
      v158 = v40;
      v166 = v40 != 0;
      v163 = v41;
      v42 = v41 > 0x2710 || v162 > 0x2710;
      if ( !v42 )
      {
        v42 = 1;
        v43 = 110 * v41 + 100 * v162;
        if ( v43 <= 0x2710 )
        {
          v39 = (v43 + 50) / 0x64;
          v42 = v43 + 50 > 0x63;
        }
      }
      v44 = *(_QWORD *)(v6 - 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v6 - 16) & 7) != 0 )
        v44 = 0;
      if ( *(_QWORD *)(v140 + 8) != v44 && v42 && v149 / v39 <= 2 )
        goto LABEL_108;
      v45 = v140;
      v46 = *(_QWORD *)(v140 + 576);
      v47 = v140 + 488;
      *(_DWORD *)(v140 + 488) = 0;
      *(_DWORD *)(v45 + 504) = 0;
      if ( v46 )
      {
        v48 = *(void **)(v46 + 232);
        if ( v48 != (void *)(v46 + 248) )
          free(v48);
        if ( !*(_BYTE *)(v46 + 188) )
          free(*(void **)(v46 + 168));
        if ( (*(_BYTE *)(v46 + 32) & 1) == 0 )
          operator delete(*(_QWORD *)(v46 + 40), 16LL * *(unsigned int *)(v46 + 48), 8);
        v49 = *(_QWORD **)(v46 + 8);
        v50 = (_QWORD *)(v46 + 8);
        if ( v49 != (_QWORD *)(v46 + 8) )
        {
          while ( 1 )
          {
            v51 = (_QWORD *)v49[2];
            v52 = (_QWORD *)*v49;
            if ( v51 == v49 + 4 )
            {
              operator delete(v49);
              if ( v52 == v50 )
                break;
            }
            else
            {
              free(v51);
              operator delete(v49);
              if ( v52 == v50 )
                break;
            }
            v49 = v52;
          }
        }
        operator delete((void *)v46, 0x170u);
      }
      v53 = v140;
      v54 = v47;
      *(_OWORD *)(v140 + 576) = 0;
      v55 = *(_QWORD *)(v53 + 448);
      *(_BYTE *)(v53 + 654) = 0;
      v56 = *(_QWORD *)(v6 - 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v6 - 16) & 7) != 0 )
        v56 = 0;
      v57 = v143;
      *(_QWORD *)(v53 + 608) = v56;
      v58 = sub_1A5C990(v55, v47, v57, v53, *(double *)v19.m128i_i64, 0.0, v10, v11);
      v15 = (unsigned __int64 *)v168[1];
      if ( v58 )
      {
        v60 = v140;
        v137.m128i_i32[0] = *(_DWORD *)(v140 + 488);
        if ( (unsigned int)(v137.m128i_i32[0] - 2) > 1 )
          goto LABEL_60;
        v92 = *(_QWORD *)(v140 + 464);
        v93 = v140;
        if ( v92 && *(_QWORD *)(v92 + 8) )
        {
          sub_1A39F10(s2, (__int64 *)v142, *(_QWORD *)(*(_QWORD *)(v140 + 448) + 232LL));
          v155[0] = v156;
          v172 = 0;
          v155[1] = nullptr;
          v156[0] = 0;
          v170 = &off_2BEBE68;
          v171 = 0;
          v174 = 0;
          v175 = 1;
          dest = nullptr;
          v176 = v155;
          sub_227B8B0(&v170, 0, 0, 0);
          v94 = *(_QWORD *)(*(_QWORD *)(v60 + 464) + 8LL);
          v99.m128i_i64[0] = sub_16043A0(
                               *(_QWORD **)(*(_QWORD *)(v93 + 448) + 248LL),
                               *(_QWORD **)(*(_QWORD *)(v93 + 448) + 240LL),
                               v95,
                               v96,
                               v97,
                               v98);
          v152 = v99;
          sub_E90250(v94, (__int64)&v170, &v152, 0, 1);
          v100 = *(unsigned int **)(*(_QWORD *)(v93 + 8) + 16LL);
          v101 = *v100;
          v54 = (__int64)(v100 + 4);
          if ( v101 > *((_QWORD *)&v172 + 1) - (_QWORD)dest )
          {
            sub_227BF10(&v170, v54, v101);
          }
          else if ( v101 )
          {
            memcpy(dest, (const void *)v54, v101);
            dest = (char *)dest + v101;
          }
          v102 = v176[1];
          if ( v102 == s2[1] )
          {
            if ( !v102 || (v54 = (__int64)s2[0], !memcmp(*v176, s2[0], (size_t)v102)) )
            {
              v170 = &off_2BEBE68;
              sub_227B7A0(&v170);
              if ( v155[0] != v156 )
                operator delete(v155[0]);
              if ( s2[0] != v154 )
                operator delete(s2[0]);
              goto LABEL_60;
            }
          }
          v170 = &off_2BEBE68;
          sub_227B7A0(&v170);
          if ( v155[0] != v156 )
            operator delete(v155[0]);
          if ( s2[0] != v154 )
            operator delete(s2[0]);
        }
        v103 = *(__int64 **)(v140 + 496);
        v104 = &v103[*(unsigned int *)(v140 + 504)];
        if ( v104 != v103 )
        {
          v105 = v146;
          v106 = v140;
          while ( 1 )
          {
            v107 = *(_QWORD **)(v106 + 448);
            v108 = nullptr;
            if ( v105 )
              v108 = sub_F63270(v105, v54, 0, v59, v10, v11);
            v54 = (unsigned int)v165;
            if ( (unsigned int)sub_16623D0(v107, v165, (__int64)v108, *v103) )
              goto LABEL_146;
            v109 = *v103 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v109 )
              goto LABEL_146;
            v110 = (unsigned int)v160;
            if ( (_DWORD)v160 )
              break;
            v59 = HIDWORD(v160);
            v111 = 1;
            v110 = 0;
            if ( !HIDWORD(v160) )
              goto LABEL_167;
LABEL_155:
            *((_QWORD *)ptr + v110) = v109;
            LODWORD(v160) = v160 + 1;
            if ( v157 )
            {
LABEL_146:
              if ( v104 == ++v103 )
                goto LABEL_157;
            }
            else
            {
              ++v103;
              v157 = *(_QWORD *)(v109 + 40);
              if ( v104 == v103 )
                goto LABEL_157;
            }
          }
          if ( *(_QWORD *)ptr )
          {
            v111 = (unsigned int)v160 + 1LL;
          }
          else
          {
            LODWORD(v160) = 0;
            v111 = 1;
            v110 = 0;
          }
          v59 = HIDWORD(v160);
          if ( HIDWORD(v160) >= v111 )
            goto LABEL_155;
LABEL_167:
          v54 = (__int64)(v142 + 4);
          sub_2237220(v142 + 2, v142 + 4, v111, 8);
          v110 = (unsigned int)v160;
          goto LABEL_155;
        }
LABEL_157:
        if ( (_DWORD)v160 )
        {
          v112 = v140;
          v113 = *(_QWORD *)(v140 + 464);
          v114 = sub_B85A10(v140 + 608);
          if ( v114 )
          {
            v115 = *(_DWORD *)(v112 + 616);
          }
          else
          {
            v114 = *(_DWORD *)(v140 + 616);
            v115 = v114;
          }
          v165 = __PAIR64__(v114, v115);
          if ( v113 && v166 && (*(_DWORD *)v113 && *(_DWORD *)(v113 + 4) || *(_QWORD *)(v113 + 8)) )
            LODWORD(v165) = *(_DWORD *)v113;
          sub_1A3B6B0((__int64)&v170, (__int64)v142);
          sub_1A60F00(v140, (unsigned __int64)&v170, v116, v117, v118, v119);
          sub_17A1D90(&v170);
        }
LABEL_60:
        v61 = (unsigned __int64 *)v168[1];
        v15 = (unsigned __int64 *)v168[0];
        if ( v168[1] == v168[0] )
        {
LABEL_78:
          if ( v15 )
            operator delete(v15);
          if ( ptr != v142 + 4 )
            free(ptr);
          goto LABEL_82;
        }
        do
        {
          v62 = *v15;
          if ( *v15 )
          {
            v63 = v15[1];
            if ( v63 )
            {
              if ( v62 < v63 || v62 > v63 + 14848 )
              {
                v64 = *(_QWORD **)(v62 + 528);
                v65 = &v64[8 * (unsigned __int64)*(unsigned int *)(v62 + 536)];
                if ( v64 != v65 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v65 -= 8;
                      v66 = (_QWORD *)v65[3];
                      if ( v66 == v65 + 5 )
                        break;
                      operator delete(v66);
                      if ( v64 == v65 )
                        goto LABEL_67;
                    }
                  }
                  while ( v64 != v65 );
LABEL_67:
                  v65 = *(_QWORD **)(v62 + 528);
                }
                if ( v65 != (_QWORD *)(v62 + 544) )
                  free(v65);
                v67 = *(void **)(v62 + 416);
                if ( v67 != (void *)(v62 + 432) )
                  free(v67);
                v68 = (void **)(v62 + 384);
                v69 = (void **)(v62 + 64);
                do
                {
                  while ( *v68 != v68 + 2 )
                  {
                    operator delete(*v68);
                    v68 -= 4;
                    if ( v68 == v69 )
                      goto LABEL_75;
                  }
                  v68 -= 4;
                }
                while ( v69 != v68 );
LABEL_75:
                operator delete((void *)v62, 0x3A0u);
              }
              else
              {
                v75 = *(unsigned int *)(v63 + 14976);
                *(_DWORD *)(v63 + 14976) = v75 + 1;
                *(_QWORD *)(v63 + 8 * v75 + 14848) = v62;
              }
            }
          }
          v15 += 3;
        }
        while ( v61 != v15 );
      }
      else
      {
LABEL_108:
        v82 = (unsigned __int64 *)v168[0];
        if ( v168[0] == v15 )
          goto LABEL_78;
        do
        {
          v83 = *v82;
          if ( *v82 )
          {
            v84 = v82[1];
            if ( v84 )
            {
              if ( v83 < v84 || v83 > v84 + 14848 )
              {
                v85 = *(_QWORD **)(v83 + 528);
                v86 = &v85[8 * (unsigned __int64)*(unsigned int *)(v83 + 536)];
                if ( v85 != v86 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v86 -= 8;
                      v87 = (_QWORD *)v86[3];
                      if ( v87 == v86 + 5 )
                        break;
                      operator delete(v87);
                      if ( v85 == v86 )
                        goto LABEL_115;
                    }
                  }
                  while ( v85 != v86 );
LABEL_115:
                  v86 = *(_QWORD **)(v83 + 528);
                }
                if ( v86 != (_QWORD *)(v83 + 544) )
                  free(v86);
                v88 = *(void **)(v83 + 416);
                if ( v88 != (void *)(v83 + 432) )
                  free(v88);
                v89 = (void **)(v83 + 384);
                v90 = (void **)(v83 + 64);
                do
                {
                  while ( *v89 != v89 + 2 )
                  {
                    operator delete(*v89);
                    v89 -= 4;
                    if ( v90 == v89 )
                      goto LABEL_123;
                  }
                  v89 -= 4;
                }
                while ( v90 != v89 );
LABEL_123:
                operator delete((void *)v83, 0x3A0u);
              }
              else
              {
                v91 = *(unsigned int *)(v84 + 14976);
                *(_DWORD *)(v84 + 14976) = v91 + 1;
                *(_QWORD *)(v84 + 8 * v91 + 14848) = v83;
              }
            }
          }
          v82 += 3;
        }
        while ( v82 != v15 );
      }
      v15 = (unsigned __int64 *)v168[0];
      goto LABEL_78;
    }
LABEL_84:
    if ( v151 == v6 + 72 )
      break;
    v6 += 88;
  }
  v136 = *(_QWORD **)(v140 + 888);
  v120 = &v136[11 * *(unsigned int *)(v140 + 896)];
  while ( v136 != v120 )
  {
    while ( 1 )
    {
      v120 -= 11;
      v121 = (unsigned __int64 *)v120[8];
      v122 = (unsigned __int64 *)v120[9];
      v123 = v121;
      if ( v122 != v121 )
      {
        do
        {
          v124 = *v123;
          if ( *v123 )
          {
            v125 = v123[1];
            if ( v125 )
            {
              if ( v124 < v125 || v124 > v125 + 14848 )
              {
                v126 = *(_QWORD **)(v124 + 528);
                v127 = &v126[8 * (unsigned __int64)*(unsigned int *)(v124 + 536)];
                if ( v126 != v127 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v127 -= 8;
                      v128 = (_QWORD *)v127[3];
                      if ( v128 == v127 + 5 )
                        break;
                      operator delete(v128);
                      if ( v126 == v127 )
                        goto LABEL_189;
                    }
                  }
                  while ( v126 != v127 );
LABEL_189:
                  v127 = *(_QWORD **)(v124 + 528);
                }
                if ( v127 != (_QWORD *)(v124 + 544) )
                  free(v127);
                v129 = *(void **)(v124 + 416);
                v130 = (void **)(v124 + 416);
                if ( v129 != (void *)(v124 + 432) )
                  free(v129);
                v131 = (void **)(v124 + 96);
                do
                {
                  while ( 1 )
                  {
                    v130 -= 4;
                    if ( *v130 == v130 + 2 )
                      break;
                    operator delete(*v130);
                    if ( v131 == v130 )
                      goto LABEL_197;
                  }
                }
                while ( v131 != v130 );
LABEL_197:
                operator delete((void *)v124, 0x3A0u);
              }
              else
              {
                v134 = *(unsigned int *)(v125 + 14976);
                *(_DWORD *)(v125 + 14976) = v134 + 1;
                *(_QWORD *)(v125 + 8 * v134 + 14848) = v124;
              }
            }
          }
          v123 += 3;
        }
        while ( v122 != v123 );
        v121 = (unsigned __int64 *)v120[8];
      }
      if ( v121 )
        operator delete(v121);
      v132 = (_QWORD *)v120[2];
      if ( v132 == v120 + 4 )
        break;
      free(v132);
      if ( v136 == v120 )
        goto LABEL_204;
    }
  }
LABEL_204:
  result = v140;
  *(_DWORD *)(v140 + 896) = 0;
  return result;
}
