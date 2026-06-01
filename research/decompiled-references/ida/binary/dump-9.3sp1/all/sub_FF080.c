unsigned __int64 __fastcall sub_FF080(_QWORD *a1)
{
  int tinfo_property; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  int v7; // eax
  int *v8; // rdx
  _DWORD *v9; // rcx
  bool v10; // zf
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  unsigned int v25; // eax
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  __m128i v29; // xmm4
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rdi
  __m128i v35; // xmm7
  __int64 v36; // r13
  unsigned __int64 v37; // r12
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 j; // r12
  __int64 v41; // rax
  __m128i v42; // xmm7
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // r12
  void *v46; // r13
  __int64 v47; // rdi
  __m128i v48; // xmm0
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // r12
  void *v52; // r13
  __int64 v53; // rdi
  __m128i v54; // xmm0
  const void *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // r12
  void *v59; // r13
  __int64 v60; // rdi
  __m128i v61; // xmm0
  void *v62; // r13
  unsigned __int64 v63; // r12
  __int64 v64; // rdi
  __m128i v65; // xmm0
  const void *v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  unsigned __int64 v69; // r12
  void *v70; // r13
  __int64 v71; // rdi
  __m128i v72; // xmm0
  __int64 v73; // r14
  __int64 v74; // rax
  __m128i v75; // xmm6
  __int64 v76; // rdi
  __int64 v77; // r15
  __int64 k; // r13
  __int64 *v79; // r12
  __int64 v80; // rdi
  __int64 v81; // rdi
  __m128i v82; // xmm7
  __int64 v83; // rdi
  __int64 v84; // rcx
  __int64 v85; // r12
  __int64 v86; // r13
  __int64 v87; // rdx
  __int64 v88; // r15
  __int64 v89; // rdx
  void *v90; // rax
  size_t v91; // rdx
  void *v92; // rax
  size_t v93; // rdx
  void *v94; // rax
  void *v95; // rax
  __int64 i; // r14
  __int64 v97; // r12
  __int64 v98; // r13
  __int64 v99; // r14
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  void *v103; // rax
  size_t v104; // rdx
  int v105; // eax
  int v106; // r8d
  __int64 v107; // r8
  int v108; // r9d
  __int64 v109; // r8
  int v110; // r9d
  __m128i v111; // [rsp+0h] [rbp-138h] BYREF
  __int64 v112; // [rsp+10h] [rbp-128h]
  int v113; // [rsp+1Ch] [rbp-11Ch]
  size_t n; // [rsp+20h] [rbp-118h]
  __int64 v115; // [rsp+28h] [rbp-110h]
  _QWORD *v116; // [rsp+30h] [rbp-108h]
  __int64 v117; // [rsp+38h] [rbp-100h]
  size_t v118; // [rsp+40h] [rbp-F8h]
  __int64 *v119; // [rsp+48h] [rbp-F0h]
  __int64 v120; // [rsp+50h] [rbp-E8h]
  bool v121; // [rsp+5Ah] [rbp-DEh]
  char v122; // [rsp+5Bh] [rbp-DDh]
  int v123; // [rsp+5Ch] [rbp-DCh]
  __m128i *v124; // [rsp+60h] [rbp-D8h]
  __int64 *v125; // [rsp+68h] [rbp-D0h]
  __int64 v126; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v127[8]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v128; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v129; // [rsp+90h] [rbp-A8h]
  __int64 v130; // [rsp+98h] [rbp-A0h]
  __int64 v131[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v132; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v133; // [rsp+B8h] [rbp-80h]
  __m128i v134; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v135; // [rsp+E0h] [rbp-58h] BYREF
  int v136; // [rsp+E8h] [rbp-50h]
  __int16 v137; // [rsp+ECh] [rbp-4Ch]
  unsigned __int64 v138; // [rsp+F8h] [rbp-40h]

  v116 = a1;
  v138 = __readfsqword(0x28u);
  if ( a1[153] )
  {
    v126 = 0;
    v119 = &v126;
    if ( !(unsigned __int8)sub_F35D0((__int64)a1, (__int64)&v126) )
      goto LABEL_5;
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64 )
      goto LABEL_5;
    v134.m128i_i64[0] = 0;
    v134.m128i_i64[0] = get_tinfo_property();
    v122 = get_tinfo_property() & 0x3F;
    v124 = &v134;
    clear_tinfo_t();
    if ( !v116[153] )
      goto LABEL_5;
    v123 = 0;
    v3 = 0;
    v125 = v131;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v116[152] + 8 * v3);
      v133 = 0;
      v131[1] = 0;
      v120 = v4;
      v5 = v116[65];
      v132 = 0;
      v131[0] = 0;
      v6 = *(_QWORD *)(v5 + 8);
      if ( !v6 )
        goto LABEL_132;
      v121 = 0;
      do
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v6 + 56);
          if ( !v16 )
            goto LABEL_27;
          if ( *(_DWORD *)v16 == 55 )
          {
            v16 = *(_QWORD *)(v16 + 16);
            if ( !v16 )
              break;
          }
          if ( (*(_BYTE *)(v16 + 4) & 0x40) != 0 )
          {
            v7 = *(_DWORD *)v16;
            if ( *(_DWORD *)v16 != 4 )
            {
              if ( v7 == 67 )
              {
                if ( *(_DWORD *)(v16 + 68) != *(_DWORD *)(v16 + 36) )
                {
LABEL_95:
                  if ( !under_debugger )
                    sub_383060(50105);
                  goto LABEL_140;
                }
              }
              else
              {
                v8 = (int *)v16;
                if ( (unsigned int)(v7 - 8) > 2 )
                {
LABEL_14:
                  v9 = v8 + 8;
                  if ( v7 != 56 )
                  {
                    if ( v7 != 57 )
                      goto LABEL_95;
                    v9 = v8 + 12;
                  }
                  if ( *(_BYTE *)v9 == 6 && *((_QWORD *)v9 + 1) == v120 && (v122 != 1 || v8[17] <= 0) )
                  {
                    v10 = v7 == 57;
                    v11 = v132;
                    v12 = v133;
                    v134.m128i_i64[0] = v6;
                    v134.m128i_i64[1] = v16;
                    v121 = v10;
                    v13 = v133 + 1;
                    if ( (unsigned __int64)v124 < v132 || (unsigned __int64)v124 >= v132 + 16LL * *((_QWORD *)&v133 + 1) )
                    {
                      if ( *((_QWORD *)&v133 + 1) < v13 )
                      {
                        v132 = qvector_reserve((__int64)&v132, v132, v133 + 1, 16);
                        v11 = v132;
                        v12 = v133;
                      }
                      *(__m128i *)(v11 + 16 * v12) = _mm_load_si128(&v134);
                    }
                    else
                    {
                      if ( *((_QWORD *)&v133 + 1) < v13 )
                      {
                        v132 = qvector_reserve((__int64)&v132, v132, v133 + 1, 16);
                        v11 = v132;
                        v12 = v133;
                      }
                      v14 = (__int64 *)(v11 + 16 * v12);
                      *v14 = v6;
                      v14[1] = v16;
                    }
                    v15 = v125;
                    *(_QWORD *)&v133 = v133 + 1;
                    sub_6FCF0(v116[98], *(_DWORD *)(v6 + 72), v125);
                    sub_64190(v15, *(_DWORD *)(v6 + 72));
                  }
                  goto LABEL_27;
                }
              }
            }
            if ( *(_BYTE *)(v16 + 32) != 4 )
            {
              if ( !under_debugger )
                sub_383060(50104);
LABEL_140:
              BUG();
            }
            v8 = *(int **)(v16 + 40);
            v7 = *v8;
            goto LABEL_14;
          }
LABEL_27:
          v6 = *(_QWORD *)(v6 + 8);
          if ( !v6 )
            goto LABEL_32;
        }
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v6 );
LABEL_32:
      if ( !(_QWORD)v133 )
      {
        v6 = v131[0];
LABEL_132:
        qfree(v6);
        v83 = v132;
        if ( v132 )
          goto LABEL_89;
        goto LABEL_90;
      }
      if ( (*((_BYTE *)v116 + 757) & 1) != 0 )
        goto LABEL_34;
      v128 = 0;
      copy_tinfo_t();
      if ( v121 )
      {
        v129 = 0;
        v130 = 0;
        v134 = 0;
        copy_tinfo_t();
        v135 = 0;
        v111.m128i_i64[0] = (__int64)&v135;
        copy_tinfo_t();
        v136 = 0;
        v137 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      sub_F34C0((__int64)v116, v120, (int)&v128, 134217730, v109, v110);
      clear_tinfo_t();
      if ( (_QWORD)v133 )
      {
LABEL_34:
        v113 = 0;
        v17 = 0;
        do
        {
          v18 = (__int64 *)(v132 + 16 * v17);
          v115 = *v18;
          v19 = v18[1];
          LODWORD(v18) = *(_DWORD *)v19;
          v117 = v19;
          v112 = v19;
          if ( (unsigned int)((_DWORD)v18 - 56) > 1 )
            v112 = *(_QWORD *)(v19 + 40);
          v20 = v115;
          v21 = sub_FDF80(v116, v115, v117, v112);
          v24 = v21;
          if ( !v113 )
          {
            v25 = *(_DWORD *)(v21 + 20);
            v22 = v25;
            LOBYTE(v22) = v25 & 0x7F;
            if ( (_DWORD)v22 != 96 && v25 != 80 )
            {
              v20 = *(unsigned int *)(v115 + 72);
              v105 = sub_D6D40((__int64)v116, v20);
              if ( v105 > 0 )
              {
                v22 = *(_QWORD *)(v24 + 32);
                v106 = v22;
                if ( (int)v22 > 0 )
                {
                  v22 = *(_QWORD *)(v24 + 24) + 56LL;
                  LODWORD(v23) = 0;
                  do
                  {
                    v20 = (unsigned int)(*(_DWORD *)v22 - 3);
                    if ( (unsigned int)v20 > 1 )
                    {
                      if ( *(_DWORD *)v22 != 1 )
                      {
                        if ( !under_debugger )
                          sub_383060(51014);
                        goto LABEL_140;
                      }
                      if ( v105 <= *(_QWORD *)(v22 + 8) )
                      {
                        if ( *(_DWORD *)(v24 + 8) > (int)v23 )
                          *(_DWORD *)(v24 + 8) = v23;
                        sub_336290(v127, v24);
                        if ( (*((_BYTE *)v116 + 757) & 1) == 0 )
                        {
                          v128 = 0;
                          copy_tinfo_t();
                          if ( v121 )
                          {
                            v129 = 0;
                            v130 = 0;
                            v134 = 0;
                            copy_tinfo_t();
                            v135 = 0;
                            v111.m128i_i64[0] = (__int64)&v135;
                            copy_tinfo_t();
                            v136 = 0;
                            v137 = 0;
                            clear_tinfo_t();
                            clear_tinfo_t();
                            copy_tinfo_t();
                            create_tinfo();
                            clear_tinfo_t();
                            clear_tinfo_t();
                            clear_tinfo_t();
                          }
                          sub_F34C0((__int64)v116, v120, (int)&v128, 134217730, v107, v108);
                          clear_tinfo_t();
                        }
                        sub_BB120((_QWORD *)v24);
                        j__qfree(v24);
                        v20 = v115;
                        v24 = sub_FDF80(v116, v115, v117, v112);
                        clear_tinfo_t();
                        break;
                      }
                    }
                    v23 = (unsigned int)(v23 + 1);
                    v22 += 80;
                  }
                  while ( v106 != (_DWORD)v23 );
                }
              }
            }
          }
          if ( *(_BYTE *)(v112 + 64) != 8 )
          {
            if ( !under_debugger )
              sub_383060(50106);
            goto LABEL_140;
          }
          v26 = 0;
          v27 = *(_QWORD *)(v112 + 72);
          *(_QWORD *)v27 = *(_QWORD *)v24;
          *(_DWORD *)(v27 + 8) = *(_DWORD *)(v24 + 8);
          *(_DWORD *)(v27 + 12) = *(_DWORD *)(v24 + 12);
          *(_DWORD *)(v27 + 16) = *(_DWORD *)(v24 + 16);
          *(_DWORD *)(v27 + 20) = *(_DWORD *)(v24 + 20);
          v28 = *(_QWORD *)(v24 + 32);
          v111.m128i_i64[0] = v28;
          if ( v28 )
          {
            v26 = qalloc_or_throw(80 * v28, v20, v22, v23);
            v97 = v26;
            v98 = 0;
            do
            {
              v99 = *(_QWORD *)(v24 + 24) + v97 - v26;
              sub_123A40(v97);
              v100 = *(_QWORD *)(v99 + 16);
              *(_QWORD *)(v97 + 24) = 0;
              *(_QWORD *)(v97 + 16) = v100;
              n = v97 + 24;
              copy_tinfo_t();
              *(_QWORD *)(v97 + 32) = 0;
              *(_OWORD *)(v97 + 40) = 0;
              v102 = *(_QWORD *)(v99 + 40);
              if ( v102 )
              {
                v118 = *(_QWORD *)(v99 + 40);
                v103 = (void *)qalloc_or_throw(v118, v99 + 24, v102, v101);
                v104 = v118;
                *(_QWORD *)(v97 + 32) = v103;
                *(_QWORD *)(v97 + 48) = v104;
                memcpy(v103, *(const void **)(v99 + 32), v104);
                *(_QWORD *)(v97 + 40) = v118;
              }
              *(_DWORD *)(v97 + 56) = 0;
              v20 = v99 + 56;
              copy_argloc();
              ++v98;
              v97 += 80;
              *(_DWORD *)(v97 - 8) = *(_DWORD *)(v99 + 72);
            }
            while ( v111.m128i_i64[0] != v98 );
          }
          v29 = _mm_loadl_epi64(&v111);
          v30 = *(_QWORD *)(v27 + 24);
          v111 = _mm_unpacklo_epi64(v29, v29);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v27 + 32);
            if ( v31 )
            {
              v32 = 0;
              do
              {
                v33 = v30 + 80 * v32;
                cleanup_argloc();
                v34 = *(_QWORD *)(v33 + 32);
                if ( v34 )
                {
                  *(_QWORD *)(v33 + 40) = 0;
                  qfree(v34);
                }
                ++v32;
                clear_tinfo_t();
                sub_11CDA0(v33);
                v30 = *(_QWORD *)(v27 + 24);
              }
              while ( v31 != v32 );
            }
            *(_QWORD *)(v27 + 32) = 0;
            qfree(v30);
          }
          v35 = _mm_load_si128(&v111);
          *(_QWORD *)(v27 + 24) = v26;
          v36 = 0;
          *(__m128i *)(v27 + 32) = v35;
          v37 = *(_QWORD *)(v24 + 56);
          if ( v37 )
          {
            v36 = qalloc_or_throw(16 * v37, v20, v22, v23);
            for ( i = 0; i != v37; ++i )
              sub_123A40(v36 + 16 * i);
          }
          v38 = *(_QWORD *)(v27 + 48);
          v111 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
          if ( v38 )
          {
            v39 = *(_QWORD *)(v27 + 56);
            if ( v39 )
            {
              for ( j = 0; j != v39; ++j )
              {
                v41 = j;
                sub_11CDA0(16 * v41 + v38);
                v38 = *(_QWORD *)(v27 + 48);
              }
            }
            *(_QWORD *)(v27 + 56) = 0;
            qfree(v38);
          }
          v42 = _mm_load_si128(&v111);
          *(_QWORD *)(v27 + 48) = v36;
          *(__m128i *)(v27 + 56) = v42;
          copy_tinfo_t();
          copy_argloc();
          sub_648D0((__int64 *)(v27 + 96), (__int64 *)(v24 + 96));
          v45 = *(_QWORD *)(v24 + 120);
          v46 = nullptr;
          if ( v45 )
          {
            v46 = (void *)qalloc_or_throw(16 * v45, v24 + 96, v43, v44);
            memcpy(v46, *(const void **)(v24 + 112), 16 * v45);
          }
          v47 = *(_QWORD *)(v27 + 112);
          v48 = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
          if ( v47 )
          {
            *(_QWORD *)(v27 + 120) = 0;
            v111 = v48;
            qfree(v47);
            v48 = _mm_load_si128(&v111);
          }
          *(_QWORD *)(v27 + 112) = v46;
          *(__m128i *)(v27 + 120) = v48;
          sub_648D0((__int64 *)(v27 + 136), (__int64 *)(v24 + 136));
          v51 = *(_QWORD *)(v24 + 160);
          v52 = nullptr;
          if ( v51 )
          {
            v52 = (void *)qalloc_or_throw(16 * v51, v24 + 136, v49, v50);
            memcpy(v52, *(const void **)(v24 + 152), 16 * v51);
          }
          v53 = *(_QWORD *)(v27 + 152);
          v54 = _mm_unpacklo_epi64((__m128i)v51, (__m128i)v51);
          if ( v53 )
          {
            *(_QWORD *)(v27 + 160) = 0;
            v111 = v54;
            qfree(v53);
            v54 = _mm_load_si128(&v111);
          }
          *(_QWORD *)(v27 + 152) = v52;
          v55 = (const void *)(v24 + 176);
          *(__m128i *)(v27 + 160) = v54;
          sub_648D0((__int64 *)(v27 + 176), (__int64 *)(v24 + 176));
          v58 = *(_QWORD *)(v24 + 200);
          v59 = nullptr;
          if ( v58 )
          {
            v95 = (void *)qalloc_or_throw(16 * v58, (__int64)v55, v56, v57);
            v55 = *(const void **)(v24 + 192);
            v59 = v95;
            memcpy(v95, v55, 16 * v58);
          }
          v60 = *(_QWORD *)(v27 + 192);
          v61 = _mm_unpacklo_epi64((__m128i)v58, (__m128i)v58);
          if ( v60 )
          {
            *(_QWORD *)(v27 + 200) = 0;
            v111 = v61;
            qfree(v60);
            v61 = _mm_load_si128(&v111);
          }
          *(_QWORD *)(v27 + 192) = v59;
          v62 = nullptr;
          *(__m128i *)(v27 + 200) = v61;
          v63 = *(_QWORD *)(v24 + 224);
          if ( v63 )
          {
            v62 = (void *)qalloc_or_throw(16 * v63, (__int64)v55, v56, v57);
            memcpy(v62, *(const void **)(v24 + 216), 16 * v63);
          }
          v64 = *(_QWORD *)(v27 + 216);
          v65 = _mm_unpacklo_epi64((__m128i)v63, (__m128i)v63);
          if ( v64 )
          {
            *(_QWORD *)(v27 + 224) = 0;
            v111 = v65;
            qfree(v64);
            v65 = _mm_load_si128(&v111);
          }
          *(_QWORD *)(v27 + 216) = v62;
          v66 = (const void *)(v24 + 240);
          *(__m128i *)(v27 + 224) = v65;
          sub_648D0((__int64 *)(v27 + 240), (__int64 *)(v24 + 240));
          v69 = *(_QWORD *)(v24 + 264);
          v70 = nullptr;
          if ( v69 )
          {
            v94 = (void *)qalloc_or_throw(16 * v69, (__int64)v66, v67, v68);
            v66 = *(const void **)(v24 + 256);
            v70 = v94;
            memcpy(v94, v66, 16 * v69);
          }
          v71 = *(_QWORD *)(v27 + 256);
          v72 = _mm_unpacklo_epi64((__m128i)v69, (__m128i)v69);
          if ( v71 )
          {
            *(_QWORD *)(v27 + 264) = 0;
            v111 = v72;
            qfree(v71);
            v72 = _mm_load_si128(&v111);
          }
          *(_QWORD *)(v27 + 256) = v70;
          v73 = 0;
          *(__m128i *)(v27 + 264) = v72;
          *(_DWORD *)(v27 + 280) = *(_DWORD *)(v24 + 280);
          *(_DWORD *)(v27 + 284) = *(_DWORD *)(v24 + 284);
          v74 = *(_QWORD *)(v24 + 296);
          v111.m128i_i64[0] = v74;
          if ( v74 )
          {
            v73 = qalloc_or_throw(48 * v74, (__int64)v66, v67, v68);
            v85 = v73;
            v86 = 0;
            do
            {
              v88 = *(_QWORD *)(v24 + 288) + v85 - v73;
              *(_OWORD *)(v85 + 8) = 0;
              *(_QWORD *)v85 = 0;
              v89 = *(_QWORD *)(v88 + 8);
              if ( v89 )
              {
                n = *(_QWORD *)(v88 + 8);
                v90 = (void *)qalloc_or_throw(n, (__int64)v66, v89, v84);
                v91 = n;
                *(_QWORD *)v85 = v90;
                *(_QWORD *)(v85 + 16) = v91;
                v66 = *(const void **)v88;
                memcpy(v90, *(const void **)v88, v91);
                *(_QWORD *)(v85 + 8) = n;
              }
              *(_QWORD *)(v85 + 24) = 0;
              *(_OWORD *)(v85 + 32) = 0;
              v87 = *(_QWORD *)(v88 + 32);
              if ( v87 )
              {
                n = *(_QWORD *)(v88 + 32);
                v92 = (void *)qalloc_or_throw(n, (__int64)v66, v87, v84);
                v93 = n;
                *(_QWORD *)(v85 + 24) = v92;
                *(_QWORD *)(v85 + 40) = v93;
                v66 = *(const void **)(v88 + 24);
                memcpy(v92, v66, v93);
                *(_QWORD *)(v85 + 32) = n;
              }
              ++v86;
              v85 += 48;
            }
            while ( v111.m128i_i64[0] != v86 );
          }
          v75 = _mm_loadl_epi64(&v111);
          v76 = *(_QWORD *)(v27 + 288);
          v111 = _mm_unpacklo_epi64(v75, v75);
          if ( v76 )
          {
            v77 = *(_QWORD *)(v27 + 296);
            if ( v77 )
            {
              for ( k = 0; k != v77; ++k )
              {
                v79 = (__int64 *)(v76 + 48 * k);
                v80 = v79[3];
                if ( v80 )
                {
                  v79[4] = 0;
                  qfree(v80);
                }
                v81 = *v79;
                if ( *v79 )
                {
                  v79[1] = 0;
                  qfree(v81);
                }
                v76 = *(_QWORD *)(v27 + 288);
              }
            }
            *(_QWORD *)(v27 + 296) = 0;
            qfree(v76);
          }
          v82 = _mm_load_si128(&v111);
          *(_QWORD *)(v27 + 288) = v73;
          *(__m128i *)(v27 + 296) = v82;
          sub_BB120((_QWORD *)v24);
          j__qfree(v24);
          if ( (unsigned __int8)sub_11C750(v112, v116[188], 0) )
            sub_FECE0(v115, v117, v112);
          v17 = ++v113;
        }
        while ( v113 < (unsigned __int64)v133 );
      }
      qfree(v131[0]);
      v83 = v132;
      if ( v132 )
      {
LABEL_89:
        *(_QWORD *)&v133 = 0;
        qfree(v83);
      }
LABEL_90:
      v3 = ++v123;
      if ( (unsigned __int64)v123 >= v116[153] )
      {
LABEL_5:
        clear_tinfo_t();
        return v138 - __readfsqword(0x28u);
      }
    }
  }
  return v138 - __readfsqword(0x28u);
}
