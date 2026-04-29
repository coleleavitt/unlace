unsigned __int64 __fastcall sub_F89C0(_QWORD *a1)
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
  __int64 v20; // rax
  __int64 v21; // rbp
  int v22; // eax
  int v23; // edx
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rax
  __m128i v27; // xmm4
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rdi
  __m128i v33; // xmm7
  __int64 v34; // r13
  unsigned __int64 v35; // r12
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 k; // r12
  __int64 v39; // rax
  __m128i v40; // xmm7
  unsigned __int64 v41; // r12
  void *v42; // r13
  __int64 v43; // rdi
  __m128i v44; // xmm0
  unsigned __int64 v45; // r12
  void *v46; // r13
  __int64 v47; // rdi
  __m128i v48; // xmm0
  unsigned __int64 v49; // r12
  void *v50; // r13
  __int64 v51; // rdi
  __m128i v52; // xmm0
  void *v53; // r13
  unsigned __int64 v54; // r12
  __int64 v55; // rdi
  __m128i v56; // xmm0
  unsigned __int64 v57; // r12
  void *v58; // r13
  __int64 v59; // rdi
  __m128i v60; // xmm0
  __int64 v61; // r14
  __int64 v62; // rax
  __m128i v63; // xmm6
  __int64 v64; // rdi
  __int64 v65; // r15
  __int64 m; // r13
  __int64 *v67; // r12
  __int64 v68; // rdi
  __int64 v69; // rdi
  __m128i v70; // xmm7
  unsigned __int64 v71; // rdi
  __int64 v72; // r12
  __int64 v73; // r13
  __int64 v74; // r15
  void *v75; // rax
  size_t v76; // rdx
  void *v77; // rax
  size_t v78; // rdx
  __int64 j; // r14
  __int64 v80; // r12
  __int64 v81; // r13
  __int64 v82; // r14
  __int64 v83; // rax
  void *v84; // rax
  size_t v85; // rdx
  int v86; // eax
  int v87; // r8d
  __int64 v88; // rdx
  int i; // ecx
  __int64 v90; // r8
  int v91; // r9d
  __m128i *v92; // rbx
  __int64 v93; // r8
  int v94; // r9d
  __m128i *v95; // rbx
  __m128i v96; // [rsp+0h] [rbp-138h] BYREF
  __int64 v97; // [rsp+10h] [rbp-128h]
  int v98; // [rsp+1Ch] [rbp-11Ch]
  size_t n; // [rsp+20h] [rbp-118h]
  __int64 v100; // [rsp+28h] [rbp-110h]
  _QWORD *v101; // [rsp+30h] [rbp-108h]
  __int64 v102; // [rsp+38h] [rbp-100h]
  size_t v103; // [rsp+40h] [rbp-F8h]
  __int64 *v104; // [rsp+48h] [rbp-F0h]
  __int64 v105; // [rsp+50h] [rbp-E8h]
  bool v106; // [rsp+5Ah] [rbp-DEh]
  char v107; // [rsp+5Bh] [rbp-DDh]
  int v108; // [rsp+5Ch] [rbp-DCh]
  __m128i *v109; // [rsp+60h] [rbp-D8h]
  __int64 *v110; // [rsp+68h] [rbp-D0h]
  __int64 v111; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v112; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v113; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v114; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v115; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v116[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v117; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v118; // [rsp+B8h] [rbp-80h]
  __m128i v119; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v120; // [rsp+E0h] [rbp-58h] BYREF
  int v121; // [rsp+E8h] [rbp-50h]
  __int16 v122; // [rsp+ECh] [rbp-4Ch]
  unsigned __int64 v123; // [rsp+F8h] [rbp-40h]

  v101 = a1;
  v123 = __readfsqword(0x28u);
  if ( a1[153] )
  {
    v111 = 0;
    v104 = &v111;
    if ( !(unsigned __int8)sub_ECF10((__int64)a1, (__int64)&v111) )
      goto LABEL_5;
    tinfo_property = get_tinfo_property(v111, 20);
    if ( (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64 )
      goto LABEL_5;
    v119.m128i_i64[0] = 0;
    v119.m128i_i64[0] = get_tinfo_property(v111, 24);
    v107 = get_tinfo_property(v119.m128i_i64[0], 2) & 0x3F;
    v109 = &v119;
    clear_tinfo_t(&v119);
    if ( !v101[153] )
      goto LABEL_5;
    v108 = 0;
    v3 = 0;
    v110 = v116;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v101[152] + 8 * v3);
      v118 = 0;
      v116[1] = 0;
      v105 = v4;
      v5 = v101[65];
      v117 = 0;
      v116[0] = 0;
      v6 = *(_QWORD *)(v5 + 8);
      if ( !v6 )
        goto LABEL_132;
      v106 = 0;
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
                    sub_37B760(50105);
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
                  if ( *(_BYTE *)v9 == 6 && *((_QWORD *)v9 + 1) == v105 && (v107 != 1 || v8[17] <= 0) )
                  {
                    v10 = v7 == 57;
                    v11 = v117;
                    v12 = v118;
                    v119.m128i_i64[0] = v6;
                    v119.m128i_i64[1] = v16;
                    v106 = v10;
                    v13 = v118 + 1;
                    if ( (unsigned __int64)v109 < v117 || (unsigned __int64)v109 >= v117 + 16LL * *((_QWORD *)&v118 + 1) )
                    {
                      if ( *((_QWORD *)&v118 + 1) < v13 )
                      {
                        v117 = qvector_reserve(&v117, v117, v118 + 1, 16);
                        v11 = v117;
                        v12 = v118;
                      }
                      *(__m128i *)(v11 + 16 * v12) = _mm_load_si128(&v119);
                    }
                    else
                    {
                      if ( *((_QWORD *)&v118 + 1) < v13 )
                      {
                        v117 = qvector_reserve(&v117, v117, v118 + 1, 16);
                        v11 = v117;
                        v12 = v118;
                      }
                      v14 = (__int64 *)(v11 + 16 * v12);
                      *v14 = v6;
                      v14[1] = v16;
                    }
                    v15 = v110;
                    *(_QWORD *)&v118 = v118 + 1;
                    sub_69770(v101[98], *(_DWORD *)(v6 + 72), v110);
                    sub_5DC10(v15, *(_DWORD *)(v6 + 72));
                  }
                  goto LABEL_27;
                }
              }
            }
            if ( *(_BYTE *)(v16 + 32) != 4 )
            {
              if ( !under_debugger )
                sub_37B760(50104);
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
      if ( !(_QWORD)v118 )
      {
        v6 = v116[0];
LABEL_132:
        qfree(v6);
        v71 = v117;
        if ( v117 )
          goto LABEL_89;
        goto LABEL_90;
      }
      if ( (*((_BYTE *)v101 + 757) & 1) != 0 )
        goto LABEL_34;
      v113 = 0;
      copy_tinfo_t(&v113, v104);
      if ( v106 )
      {
        v114 = 0;
        v115 = 0;
        v119 = 0;
        copy_tinfo_t(&v119.m128i_u64[1], &v115);
        v120 = 0;
        v96.m128i_i64[0] = (__int64)&v120;
        copy_tinfo_t(&v120, &v114);
        v121 = 0;
        v122 = 0;
        clear_tinfo_t(&v115);
        clear_tinfo_t(&v114);
        copy_tinfo_t(v109, &v113);
        v95 = v109;
        create_tinfo(&v113, 10, 10, v109);
        clear_tinfo_t(v96.m128i_i64[0]);
        clear_tinfo_t(&v119.m128i_u64[1]);
        clear_tinfo_t(v95);
      }
      sub_ECE00((__int64)v101, v105, &v113, 134217730, v93, v94);
      clear_tinfo_t(&v113);
      if ( (_QWORD)v118 )
      {
LABEL_34:
        v98 = 0;
        v17 = 0;
        do
        {
          v18 = (__int64 *)(v117 + 16 * v17);
          v100 = *v18;
          v19 = v18[1];
          LODWORD(v18) = *(_DWORD *)v19;
          v102 = v19;
          v97 = v19;
          if ( (unsigned int)((_DWORD)v18 - 56) > 1 )
            v97 = *(_QWORD *)(v19 + 40);
          v20 = sub_F78C0(v101, v100, v102, v97, v104);
          v21 = v20;
          if ( !v98 )
          {
            v22 = *(_DWORD *)(v20 + 20);
            v23 = v22;
            LOBYTE(v23) = v22 & 0x7F;
            if ( v23 != 96 && v22 != 80 )
            {
              v86 = sub_D0680((__int64)v101, *(_DWORD *)(v100 + 72));
              if ( v86 > 0 )
              {
                v87 = *(_QWORD *)(v21 + 32);
                if ( v87 > 0 )
                {
                  v88 = *(_QWORD *)(v21 + 24) + 56LL;
                  for ( i = 0; v87 != i; ++i )
                  {
                    if ( (unsigned int)(*(_DWORD *)v88 - 3) > 1 )
                    {
                      if ( *(_DWORD *)v88 != 1 )
                      {
                        if ( !under_debugger )
                          sub_37B760(51014);
                        goto LABEL_140;
                      }
                      if ( v86 <= *(_QWORD *)(v88 + 8) )
                      {
                        if ( *(_DWORD *)(v21 + 8) > i )
                          *(_DWORD *)(v21 + 8) = i;
                        sub_32EA70(&v112, v21);
                        if ( (*((_BYTE *)v101 + 757) & 1) == 0 )
                        {
                          v113 = 0;
                          copy_tinfo_t(&v113, &v112);
                          if ( v106 )
                          {
                            v114 = 0;
                            v115 = 0;
                            v119 = 0;
                            copy_tinfo_t(&v119.m128i_u64[1], &v115);
                            v120 = 0;
                            v96.m128i_i64[0] = (__int64)&v120;
                            copy_tinfo_t(&v120, &v114);
                            v121 = 0;
                            v122 = 0;
                            clear_tinfo_t(&v115);
                            clear_tinfo_t(&v114);
                            copy_tinfo_t(v109, &v113);
                            v92 = v109;
                            create_tinfo(&v113, 10, 10, v109);
                            clear_tinfo_t(v96.m128i_i64[0]);
                            clear_tinfo_t(&v119.m128i_u64[1]);
                            clear_tinfo_t(v92);
                          }
                          sub_ECE00((__int64)v101, v105, &v113, 134217730, v90, v91);
                          clear_tinfo_t(&v113);
                        }
                        sub_B4A60((_QWORD *)v21);
                        j__qfree(v21);
                        v21 = sub_F78C0(v101, v100, v102, v97, &v112);
                        clear_tinfo_t(&v112);
                        break;
                      }
                    }
                    v88 += 80;
                  }
                }
              }
            }
          }
          if ( *(_BYTE *)(v97 + 64) != 8 )
          {
            if ( !under_debugger )
              sub_37B760(50106);
            goto LABEL_140;
          }
          v24 = 0;
          v25 = *(_QWORD *)(v97 + 72);
          *(_QWORD *)v25 = *(_QWORD *)v21;
          *(_DWORD *)(v25 + 8) = *(_DWORD *)(v21 + 8);
          *(_DWORD *)(v25 + 12) = *(_DWORD *)(v21 + 12);
          *(_DWORD *)(v25 + 16) = *(_DWORD *)(v21 + 16);
          *(_DWORD *)(v25 + 20) = *(_DWORD *)(v21 + 20);
          v26 = *(_QWORD *)(v21 + 32);
          v96.m128i_i64[0] = v26;
          if ( v26 )
          {
            v24 = qalloc_or_throw(80 * v26);
            v80 = v24;
            v81 = 0;
            do
            {
              v82 = *(_QWORD *)(v21 + 24) + v80 - v24;
              sub_11D380(v80, v82);
              v83 = *(_QWORD *)(v82 + 16);
              *(_QWORD *)(v80 + 24) = 0;
              *(_QWORD *)(v80 + 16) = v83;
              n = v80 + 24;
              copy_tinfo_t(v80 + 24, v82 + 24);
              *(_QWORD *)(v80 + 32) = 0;
              *(_OWORD *)(v80 + 40) = 0;
              if ( *(_QWORD *)(v82 + 40) )
              {
                v103 = *(_QWORD *)(v82 + 40);
                v84 = (void *)qalloc_or_throw(v103);
                v85 = v103;
                *(_QWORD *)(v80 + 32) = v84;
                *(_QWORD *)(v80 + 48) = v85;
                memcpy(v84, *(const void **)(v82 + 32), v85);
                *(_QWORD *)(v80 + 40) = v103;
              }
              *(_DWORD *)(v80 + 56) = 0;
              copy_argloc(v80 + 56, v82 + 56);
              ++v81;
              v80 += 80;
              *(_DWORD *)(v80 - 8) = *(_DWORD *)(v82 + 72);
            }
            while ( v96.m128i_i64[0] != v81 );
          }
          v27 = _mm_loadl_epi64(&v96);
          v28 = *(_QWORD *)(v25 + 24);
          v96 = _mm_unpacklo_epi64(v27, v27);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v25 + 32);
            if ( v29 )
            {
              v30 = 0;
              do
              {
                v31 = v28 + 80 * v30;
                cleanup_argloc(v31 + 56);
                v32 = *(_QWORD *)(v31 + 32);
                if ( v32 )
                {
                  *(_QWORD *)(v31 + 40) = 0;
                  qfree(v32);
                }
                ++v30;
                clear_tinfo_t(v31 + 24);
                sub_1166E0(v31);
                v28 = *(_QWORD *)(v25 + 24);
              }
              while ( v29 != v30 );
            }
            *(_QWORD *)(v25 + 32) = 0;
            qfree(v28);
          }
          v33 = _mm_load_si128(&v96);
          *(_QWORD *)(v25 + 24) = v24;
          v34 = 0;
          *(__m128i *)(v25 + 32) = v33;
          v35 = *(_QWORD *)(v21 + 56);
          if ( v35 )
          {
            v34 = qalloc_or_throw(16 * v35);
            for ( j = 0; j != v35; ++j )
              sub_11D380(v34 + 16 * j, 16 * j + *(_QWORD *)(v21 + 48));
          }
          v36 = *(_QWORD *)(v25 + 48);
          v96 = _mm_unpacklo_epi64((__m128i)v35, (__m128i)v35);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v25 + 56);
            if ( v37 )
            {
              for ( k = 0; k != v37; ++k )
              {
                v39 = k;
                sub_1166E0(16 * v39 + v36);
                v36 = *(_QWORD *)(v25 + 48);
              }
            }
            *(_QWORD *)(v25 + 56) = 0;
            qfree(v36);
          }
          v40 = _mm_load_si128(&v96);
          *(_QWORD *)(v25 + 48) = v34;
          *(__m128i *)(v25 + 56) = v40;
          copy_tinfo_t(v25 + 72, v21 + 72);
          copy_argloc(v25 + 80, v21 + 80);
          sub_5E350((__int64 *)(v25 + 96), (__int64 *)(v21 + 96));
          v41 = *(_QWORD *)(v21 + 120);
          v42 = nullptr;
          if ( v41 )
          {
            v42 = (void *)qalloc_or_throw(16 * v41);
            memcpy(v42, *(const void **)(v21 + 112), 16 * v41);
          }
          v43 = *(_QWORD *)(v25 + 112);
          v44 = _mm_unpacklo_epi64((__m128i)v41, (__m128i)v41);
          if ( v43 )
          {
            *(_QWORD *)(v25 + 120) = 0;
            v96 = v44;
            qfree(v43);
            v44 = _mm_load_si128(&v96);
          }
          *(_QWORD *)(v25 + 112) = v42;
          *(__m128i *)(v25 + 120) = v44;
          sub_5E350((__int64 *)(v25 + 136), (__int64 *)(v21 + 136));
          v45 = *(_QWORD *)(v21 + 160);
          v46 = nullptr;
          if ( v45 )
          {
            v46 = (void *)qalloc_or_throw(16 * v45);
            memcpy(v46, *(const void **)(v21 + 152), 16 * v45);
          }
          v47 = *(_QWORD *)(v25 + 152);
          v48 = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
          if ( v47 )
          {
            *(_QWORD *)(v25 + 160) = 0;
            v96 = v48;
            qfree(v47);
            v48 = _mm_load_si128(&v96);
          }
          *(_QWORD *)(v25 + 152) = v46;
          *(__m128i *)(v25 + 160) = v48;
          sub_5E350((__int64 *)(v25 + 176), (__int64 *)(v21 + 176));
          v49 = *(_QWORD *)(v21 + 200);
          v50 = nullptr;
          if ( v49 )
          {
            v50 = (void *)qalloc_or_throw(16 * v49);
            memcpy(v50, *(const void **)(v21 + 192), 16 * v49);
          }
          v51 = *(_QWORD *)(v25 + 192);
          v52 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v49);
          if ( v51 )
          {
            *(_QWORD *)(v25 + 200) = 0;
            v96 = v52;
            qfree(v51);
            v52 = _mm_load_si128(&v96);
          }
          *(_QWORD *)(v25 + 192) = v50;
          v53 = nullptr;
          *(__m128i *)(v25 + 200) = v52;
          v54 = *(_QWORD *)(v21 + 224);
          if ( v54 )
          {
            v53 = (void *)qalloc_or_throw(16 * v54);
            memcpy(v53, *(const void **)(v21 + 216), 16 * v54);
          }
          v55 = *(_QWORD *)(v25 + 216);
          v56 = _mm_unpacklo_epi64((__m128i)v54, (__m128i)v54);
          if ( v55 )
          {
            *(_QWORD *)(v25 + 224) = 0;
            v96 = v56;
            qfree(v55);
            v56 = _mm_load_si128(&v96);
          }
          *(_QWORD *)(v25 + 216) = v53;
          *(__m128i *)(v25 + 224) = v56;
          sub_5E350((__int64 *)(v25 + 240), (__int64 *)(v21 + 240));
          v57 = *(_QWORD *)(v21 + 264);
          v58 = nullptr;
          if ( v57 )
          {
            v58 = (void *)qalloc_or_throw(16 * v57);
            memcpy(v58, *(const void **)(v21 + 256), 16 * v57);
          }
          v59 = *(_QWORD *)(v25 + 256);
          v60 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
          if ( v59 )
          {
            *(_QWORD *)(v25 + 264) = 0;
            v96 = v60;
            qfree(v59);
            v60 = _mm_load_si128(&v96);
          }
          *(_QWORD *)(v25 + 256) = v58;
          v61 = 0;
          *(__m128i *)(v25 + 264) = v60;
          *(_DWORD *)(v25 + 280) = *(_DWORD *)(v21 + 280);
          *(_DWORD *)(v25 + 284) = *(_DWORD *)(v21 + 284);
          v62 = *(_QWORD *)(v21 + 296);
          v96.m128i_i64[0] = v62;
          if ( v62 )
          {
            v61 = qalloc_or_throw(48 * v62);
            v72 = v61;
            v73 = 0;
            do
            {
              v74 = *(_QWORD *)(v21 + 288) + v72 - v61;
              *(_OWORD *)(v72 + 8) = 0;
              *(_QWORD *)v72 = 0;
              if ( *(_QWORD *)(v74 + 8) )
              {
                n = *(_QWORD *)(v74 + 8);
                v75 = (void *)qalloc_or_throw(n);
                v76 = n;
                *(_QWORD *)v72 = v75;
                *(_QWORD *)(v72 + 16) = v76;
                memcpy(v75, *(const void **)v74, v76);
                *(_QWORD *)(v72 + 8) = n;
              }
              *(_QWORD *)(v72 + 24) = 0;
              *(_OWORD *)(v72 + 32) = 0;
              if ( *(_QWORD *)(v74 + 32) )
              {
                n = *(_QWORD *)(v74 + 32);
                v77 = (void *)qalloc_or_throw(n);
                v78 = n;
                *(_QWORD *)(v72 + 24) = v77;
                *(_QWORD *)(v72 + 40) = v78;
                memcpy(v77, *(const void **)(v74 + 24), v78);
                *(_QWORD *)(v72 + 32) = n;
              }
              ++v73;
              v72 += 48;
            }
            while ( v96.m128i_i64[0] != v73 );
          }
          v63 = _mm_loadl_epi64(&v96);
          v64 = *(_QWORD *)(v25 + 288);
          v96 = _mm_unpacklo_epi64(v63, v63);
          if ( v64 )
          {
            v65 = *(_QWORD *)(v25 + 296);
            if ( v65 )
            {
              for ( m = 0; m != v65; ++m )
              {
                v67 = (__int64 *)(v64 + 48 * m);
                v68 = v67[3];
                if ( v68 )
                {
                  v67[4] = 0;
                  qfree(v68);
                }
                v69 = *v67;
                if ( *v67 )
                {
                  v67[1] = 0;
                  qfree(v69);
                }
                v64 = *(_QWORD *)(v25 + 288);
              }
            }
            *(_QWORD *)(v25 + 296) = 0;
            qfree(v64);
          }
          v70 = _mm_load_si128(&v96);
          *(_QWORD *)(v25 + 288) = v61;
          *(__m128i *)(v25 + 296) = v70;
          sub_B4A60((_QWORD *)v21);
          j__qfree(v21);
          if ( (unsigned __int8)sub_116090(v97, v101[188], 0) )
            sub_F8620(v100, v102, v97);
          v17 = ++v98;
        }
        while ( v98 < (unsigned __int64)v118 );
      }
      qfree(v116[0]);
      v71 = v117;
      if ( v117 )
      {
LABEL_89:
        *(_QWORD *)&v118 = 0;
        qfree(v71);
      }
LABEL_90:
      v3 = ++v108;
      if ( (unsigned __int64)v108 >= v101[153] )
      {
LABEL_5:
        clear_tinfo_t(v104);
        return v123 - __readfsqword(0x28u);
      }
    }
  }
  return v123 - __readfsqword(0x28u);
}
