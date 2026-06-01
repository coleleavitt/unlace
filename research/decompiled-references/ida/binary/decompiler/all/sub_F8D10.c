unsigned __int64 __fastcall sub_F8D10(__int64 a1)
{
  int tinfo_property; // eax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // eax
  int *v9; // rdx
  _DWORD *v10; // rcx
  bool v11; // zf
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // rax
  unsigned __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbp
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // r8d
  __int64 v26; // rdx
  int i; // ecx
  __int64 v28; // r15
  __int64 v29; // rbx
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // r14
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // r13
  unsigned __int64 v37; // r12
  __int64 v38; // rdi
  __m128i v39; // xmm0
  __int64 v40; // r14
  __int64 v41; // r12
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  void *v44; // r13
  __m128i v45; // xmm0
  unsigned __int64 v46; // r12
  void *v47; // r13
  __m128i v48; // xmm0
  unsigned __int64 v49; // r12
  void *v50; // r13
  __m128i v51; // xmm0
  void *v52; // r13
  unsigned __int64 v53; // r12
  __m128i v54; // xmm0
  unsigned __int64 v55; // r12
  void *v56; // r13
  __m128i v57; // xmm0
  __int64 v58; // r14
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __m128i v61; // xmm0
  __int64 v62; // r15
  __int64 v63; // r13
  _QWORD *v64; // r12
  __int64 v65; // r12
  __int64 v66; // r13
  __int64 v67; // r15
  void *v68; // rax
  size_t v69; // rdx
  void *v70; // rax
  size_t v71; // rdx
  __int64 j; // r14
  __int64 v73; // r12
  __int64 v74; // r13
  __int64 v75; // r14
  __int64 v76; // rax
  void *v77; // rax
  size_t v78; // rdx
  __int64 v80; // [rsp+10h] [rbp-128h]
  __int64 v81; // [rsp+18h] [rbp-120h]
  __m128i v82; // [rsp+20h] [rbp-118h] BYREF
  int v83; // [rsp+34h] [rbp-104h]
  size_t n; // [rsp+38h] [rbp-100h]
  __m128i *v85; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v86; // [rsp+48h] [rbp-F0h]
  __int64 v87; // [rsp+50h] [rbp-E8h]
  __int64 *v88; // [rsp+58h] [rbp-E0h]
  size_t v89; // [rsp+60h] [rbp-D8h]
  char v90; // [rsp+6Ah] [rbp-CEh]
  bool v91; // [rsp+6Bh] [rbp-CDh]
  int v92; // [rsp+6Ch] [rbp-CCh]
  __int64 v93; // [rsp+78h] [rbp-C0h] BYREF
  _BYTE v94[8]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v95; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v96; // [rsp+90h] [rbp-A8h]
  __int64 v97; // [rsp+98h] [rbp-A0h]
  _QWORD v98[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v99; // [rsp+B0h] [rbp-88h]
  __int128 v100; // [rsp+B8h] [rbp-80h]
  __m128i v101; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v102; // [rsp+E0h] [rbp-58h]
  int v103; // [rsp+E8h] [rbp-50h]
  __int16 v104; // [rsp+ECh] [rbp-4Ch]
  unsigned __int64 v105; // [rsp+F8h] [rbp-40h]

  v105 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 1224) )
  {
    v93 = 0;
    if ( !(unsigned __int8)sub_E4C80(a1, (__int64)&v93) )
      goto LABEL_5;
    tinfo_property = get_tinfo_property();
    if ( (tinfo_property & 0xFFFFFFF0) == 208 || (tinfo_property & 0xFFFFFFF0) == 64 )
      goto LABEL_5;
    v101.m128i_i64[0] = 0;
    v101.m128i_i64[0] = get_tinfo_property();
    v90 = get_tinfo_property() & 0x3F;
    v85 = &v101;
    clear_tinfo_t();
    if ( !*(_QWORD *)(a1 + 1224) )
      goto LABEL_5;
    v92 = 0;
    v3 = 0;
    v88 = v98;
    while ( 1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1216) + 8 * v3);
      v100 = 0;
      v98[1] = 0;
      v80 = v4;
      v5 = *(_QWORD *)(a1 + 520);
      v99 = 0;
      v98[0] = 0;
      v6 = *(_QWORD *)(v5 + 8);
      if ( !v6 )
      {
LABEL_127:
        qfree();
        if ( v99 )
          goto LABEL_97;
        goto LABEL_98;
      }
      v91 = 0;
      do
      {
        v7 = *(_QWORD *)(v6 + 56);
        if ( !v7 )
          goto LABEL_29;
        if ( *(_DWORD *)v7 == 55 )
        {
          v7 = *(_QWORD *)(v7 + 16);
          if ( !v7 )
            goto LABEL_29;
        }
        if ( (*(_BYTE *)(v7 + 4) & 0x40) == 0 )
          goto LABEL_29;
        v8 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 == 4 )
          goto LABEL_100;
        if ( v8 == 67 )
        {
          if ( *(_DWORD *)(v7 + 68) != *(_DWORD *)(v7 + 36) )
          {
LABEL_105:
            if ( !under_debugger )
              sub_37EA20(50105);
            goto LABEL_142;
          }
LABEL_100:
          if ( *(_BYTE *)(v7 + 32) != 4 )
          {
            if ( !under_debugger )
              sub_37EA20(50104);
LABEL_142:
            BUG();
          }
          v9 = *(int **)(v7 + 40);
          v8 = *v9;
          goto LABEL_16;
        }
        v9 = (int *)v7;
        if ( (unsigned int)(v8 - 8) <= 2 )
          goto LABEL_100;
LABEL_16:
        v10 = v9 + 8;
        if ( v8 != 56 )
        {
          if ( v8 != 57 )
            goto LABEL_105;
          v10 = v9 + 12;
        }
        if ( *(_BYTE *)v10 == 6 && *((_QWORD *)v10 + 1) == v80 && (v90 != 1 || v9[17] <= 0) )
        {
          v11 = v8 == 57;
          v12 = v99;
          v13 = v100;
          v101.m128i_i64[0] = v6;
          v101.m128i_i64[1] = v7;
          v91 = v11;
          v14 = v100 + 1;
          if ( (unsigned __int64)v85 < v99 || (unsigned __int64)v85 >= v99 + 16LL * *((_QWORD *)&v100 + 1) )
          {
            if ( *((_QWORD *)&v100 + 1) < v14 )
            {
              v99 = qvector_reserve();
              v12 = v99;
              v13 = v100;
            }
            *(__m128i *)(v12 + 16 * v13) = _mm_load_si128(&v101);
          }
          else
          {
            if ( *((_QWORD *)&v100 + 1) < v14 )
            {
              v99 = qvector_reserve();
              v12 = v99;
              v13 = v100;
            }
            v15 = (__int64 *)(v12 + 16 * v13);
            *v15 = v6;
            v15[1] = v7;
          }
          v16 = v88;
          *(_QWORD *)&v100 = v100 + 1;
          sub_6F230(*(_QWORD *)(a1 + 784), *(_DWORD *)(v6 + 72), v88);
          sub_63890(v16, *(_DWORD *)(v6 + 72));
        }
LABEL_29:
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v6 );
      if ( !(_QWORD)v100 )
        goto LABEL_127;
      if ( (*(_BYTE *)(a1 + 757) & 1) != 0 )
        goto LABEL_32;
      v95 = 0;
      copy_tinfo_t();
      if ( v91 )
      {
        v96 = 0;
        v97 = 0;
        v101 = 0;
        copy_tinfo_t();
        v102 = 0;
        copy_tinfo_t();
        v103 = 0;
        v104 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      sub_E7180(a1, v80, &v95, 134217730);
      clear_tinfo_t();
      if ( (_QWORD)v100 )
      {
LABEL_32:
        v83 = 0;
        v17 = 0;
        do
        {
          v18 = (unsigned __int64 *)(v99 + 16 * v17);
          v86 = *v18;
          v19 = v18[1];
          LODWORD(v18) = *(_DWORD *)v19;
          v87 = v19;
          v81 = v19;
          if ( (unsigned int)((_DWORD)v18 - 56) > 1 )
            v81 = *(_QWORD *)(v19 + 40);
          v20 = sub_F7F40((_QWORD *)a1, v86, v87, v81);
          v21 = v20;
          if ( !v83 )
          {
            v22 = *(_DWORD *)(v20 + 20);
            v23 = v22;
            LOBYTE(v23) = v22 & 0x7F;
            if ( v23 != 96 && v22 != 80 )
            {
              v24 = sub_DBD80(a1, *(_DWORD *)(v86 + 72));
              if ( v24 > 0 )
              {
                v25 = *(_QWORD *)(v21 + 32);
                if ( v25 > 0 )
                {
                  v26 = *(_QWORD *)(v21 + 24) + 56LL;
                  for ( i = 0; v25 != i; ++i )
                  {
                    if ( (unsigned int)(*(_DWORD *)v26 - 3) > 1 )
                    {
                      if ( *(_DWORD *)v26 != 1 )
                      {
                        if ( !under_debugger )
                          sub_37EA20(51014);
                        goto LABEL_142;
                      }
                      if ( v24 <= *(_QWORD *)(v26 + 8) )
                      {
                        if ( *(_DWORD *)(v21 + 8) > i )
                          *(_DWORD *)(v21 + 8) = i;
                        v82.m128i_i64[0] = (__int64)v94;
                        sub_332E10(v94, v21);
                        if ( (*(_BYTE *)(a1 + 757) & 1) == 0 )
                        {
                          v95 = 0;
                          copy_tinfo_t();
                          if ( v91 )
                          {
                            v96 = 0;
                            v97 = 0;
                            v101 = 0;
                            copy_tinfo_t();
                            v102 = 0;
                            copy_tinfo_t();
                            v104 = 0;
                            v103 = 0;
                            clear_tinfo_t();
                            clear_tinfo_t();
                            copy_tinfo_t();
                            create_tinfo();
                            clear_tinfo_t();
                            clear_tinfo_t();
                            clear_tinfo_t();
                          }
                          sub_E7180(a1, v80, &v95, 134217730);
                          clear_tinfo_t();
                        }
                        sub_BA2C0((_QWORD *)v21);
                        j__qfree();
                        v21 = sub_F7F40((_QWORD *)a1, v86, v87, v81);
                        clear_tinfo_t();
                        break;
                      }
                    }
                    v26 += 80;
                  }
                }
              }
            }
          }
          if ( *(_BYTE *)(v81 + 64) != 8 )
          {
            if ( !under_debugger )
              sub_37EA20(50106);
            goto LABEL_142;
          }
          v28 = 0;
          v29 = *(_QWORD *)(v81 + 72);
          *(_QWORD *)v29 = *(_QWORD *)v21;
          *(_DWORD *)(v29 + 8) = *(_DWORD *)(v21 + 8);
          *(_DWORD *)(v29 + 12) = *(_DWORD *)(v21 + 12);
          *(_DWORD *)(v29 + 16) = *(_DWORD *)(v21 + 16);
          *(_DWORD *)(v29 + 20) = *(_DWORD *)(v21 + 20);
          v82.m128i_i64[0] = *(_QWORD *)(v21 + 32);
          if ( v82.m128i_i64[0] )
          {
            v28 = qalloc_or_throw();
            v73 = v28;
            v74 = 0;
            do
            {
              v75 = *(_QWORD *)(v21 + 24) + v73 - v28;
              sub_121540(v73, v75);
              v76 = *(_QWORD *)(v75 + 16);
              *(_QWORD *)(v73 + 24) = 0;
              *(_QWORD *)(v73 + 16) = v76;
              n = v73 + 24;
              copy_tinfo_t();
              *(_QWORD *)(v73 + 32) = 0;
              *(_OWORD *)(v73 + 40) = 0;
              if ( *(_QWORD *)(v75 + 40) )
              {
                v89 = *(_QWORD *)(v75 + 40);
                v77 = (void *)qalloc_or_throw();
                v78 = v89;
                *(_QWORD *)(v73 + 32) = v77;
                *(_QWORD *)(v73 + 48) = v78;
                memcpy(v77, *(const void **)(v75 + 32), v78);
                *(_QWORD *)(v73 + 40) = v89;
              }
              *(_DWORD *)(v73 + 56) = 0;
              copy_argloc();
              ++v74;
              v73 += 80;
              *(_DWORD *)(v73 - 8) = *(_DWORD *)(v75 + 72);
            }
            while ( v82.m128i_i64[0] != v74 );
          }
          v30 = _mm_loadl_epi64(&v82);
          v31 = *(_QWORD *)(v29 + 24);
          v32 = _mm_unpacklo_epi64(v30, v30);
          if ( v31 )
          {
            v33 = *(_QWORD *)(v29 + 32);
            if ( v33 )
            {
              v34 = 0;
              v82 = v32;
              do
              {
                v35 = v31 + 80 * v34;
                cleanup_argloc();
                if ( *(_QWORD *)(v35 + 32) )
                {
                  *(_QWORD *)(v35 + 40) = 0;
                  qfree();
                }
                ++v34;
                clear_tinfo_t();
                sub_11A960(v35);
                v31 = *(_QWORD *)(v29 + 24);
              }
              while ( v33 != v34 );
              v32 = _mm_load_si128(&v82);
            }
            *(_QWORD *)(v29 + 32) = 0;
            v82 = v32;
            qfree();
            v32 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v29 + 24) = v28;
          v36 = 0;
          *(__m128i *)(v29 + 32) = v32;
          v37 = *(_QWORD *)(v21 + 56);
          if ( v37 )
          {
            v36 = qalloc_or_throw();
            for ( j = 0; j != v37; ++j )
              sub_121540(v36 + 16 * j, 16 * j + *(_QWORD *)(v21 + 48));
          }
          v38 = *(_QWORD *)(v29 + 48);
          v39 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
          if ( v38 )
          {
            v40 = *(_QWORD *)(v29 + 56);
            if ( v40 )
            {
              v41 = 0;
              v82 = v39;
              do
              {
                v42 = v41++;
                sub_11A960(16 * v42 + v38);
                v38 = *(_QWORD *)(v29 + 48);
              }
              while ( v40 != v41 );
              v39 = _mm_load_si128(&v82);
            }
            *(_QWORD *)(v29 + 56) = 0;
            v82 = v39;
            qfree();
            v39 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v29 + 48) = v36;
          *(__m128i *)(v29 + 56) = v39;
          copy_tinfo_t();
          copy_argloc();
          sub_63FD0((__int64 *)(v29 + 96), (__int64 *)(v21 + 96));
          v43 = *(_QWORD *)(v21 + 120);
          v44 = 0;
          if ( v43 )
          {
            v44 = (void *)qalloc_or_throw();
            memcpy(v44, *(const void **)(v21 + 112), 16 * v43);
          }
          v45 = _mm_unpacklo_epi64((__m128i)v43, (__m128i)v43);
          if ( *(_QWORD *)(v29 + 112) )
          {
            *(_QWORD *)(v29 + 120) = 0;
            v82 = v45;
            qfree();
            v45 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v29 + 112) = v44;
          *(__m128i *)(v29 + 120) = v45;
          sub_63FD0((__int64 *)(v29 + 136), (__int64 *)(v21 + 136));
          v46 = *(_QWORD *)(v21 + 160);
          v47 = 0;
          if ( v46 )
          {
            v47 = (void *)qalloc_or_throw();
            memcpy(v47, *(const void **)(v21 + 152), 16 * v46);
          }
          v48 = _mm_unpacklo_epi64((__m128i)v46, (__m128i)v46);
          if ( *(_QWORD *)(v29 + 152) )
          {
            *(_QWORD *)(v29 + 160) = 0;
            v82 = v48;
            qfree();
            v48 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v29 + 152) = v47;
          *(__m128i *)(v29 + 160) = v48;
          sub_63FD0((__int64 *)(v29 + 176), (__int64 *)(v21 + 176));
          v49 = *(_QWORD *)(v21 + 200);
          v50 = 0;
          if ( v49 )
          {
            v50 = (void *)qalloc_or_throw();
            memcpy(v50, *(const void **)(v21 + 192), 16 * v49);
          }
          v51 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v49);
          if ( *(_QWORD *)(v29 + 192) )
          {
            *(_QWORD *)(v29 + 200) = 0;
            v82 = v51;
            qfree();
            v51 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v29 + 192) = v50;
          v52 = 0;
          *(__m128i *)(v29 + 200) = v51;
          v53 = *(_QWORD *)(v21 + 224);
          if ( v53 )
          {
            v52 = (void *)qalloc_or_throw();
            memcpy(v52, *(const void **)(v21 + 216), 16 * v53);
          }
          v54 = _mm_unpacklo_epi64((__m128i)v53, (__m128i)v53);
          if ( *(_QWORD *)(v29 + 216) )
          {
            *(_QWORD *)(v29 + 224) = 0;
            v82 = v54;
            qfree();
            v54 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v29 + 216) = v52;
          *(__m128i *)(v29 + 224) = v54;
          sub_63FD0((__int64 *)(v29 + 240), (__int64 *)(v21 + 240));
          v55 = *(_QWORD *)(v21 + 264);
          v56 = 0;
          if ( v55 )
          {
            v56 = (void *)qalloc_or_throw();
            memcpy(v56, *(const void **)(v21 + 256), 16 * v55);
          }
          v57 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
          if ( *(_QWORD *)(v29 + 256) )
          {
            *(_QWORD *)(v29 + 264) = 0;
            v82 = v57;
            qfree();
            v57 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v29 + 256) = v56;
          v58 = 0;
          *(__m128i *)(v29 + 264) = v57;
          *(_DWORD *)(v29 + 280) = *(_DWORD *)(v21 + 280);
          *(_DWORD *)(v29 + 284) = *(_DWORD *)(v21 + 284);
          v82.m128i_i64[0] = *(_QWORD *)(v21 + 296);
          if ( v82.m128i_i64[0] )
          {
            v58 = qalloc_or_throw();
            v65 = v58;
            v66 = 0;
            do
            {
              v67 = *(_QWORD *)(v21 + 288) + v65 - v58;
              *(_OWORD *)(v65 + 8) = 0;
              *(_QWORD *)v65 = 0;
              if ( *(_QWORD *)(v67 + 8) )
              {
                n = *(_QWORD *)(v67 + 8);
                v68 = (void *)qalloc_or_throw();
                v69 = n;
                *(_QWORD *)v65 = v68;
                *(_QWORD *)(v65 + 16) = v69;
                memcpy(v68, *(const void **)v67, v69);
                *(_QWORD *)(v65 + 8) = n;
              }
              *(_QWORD *)(v65 + 24) = 0;
              *(_OWORD *)(v65 + 32) = 0;
              if ( *(_QWORD *)(v67 + 32) )
              {
                n = *(_QWORD *)(v67 + 32);
                v70 = (void *)qalloc_or_throw();
                v71 = n;
                *(_QWORD *)(v65 + 24) = v70;
                *(_QWORD *)(v65 + 40) = v71;
                memcpy(v70, *(const void **)(v67 + 24), v71);
                *(_QWORD *)(v65 + 32) = n;
              }
              ++v66;
              v65 += 48;
            }
            while ( v82.m128i_i64[0] != v66 );
          }
          v59 = _mm_loadl_epi64(&v82);
          v60 = *(_QWORD *)(v29 + 288);
          v61 = _mm_unpacklo_epi64(v59, v59);
          if ( v60 )
          {
            v62 = *(_QWORD *)(v29 + 296);
            if ( v62 )
            {
              v63 = 0;
              v82 = v61;
              do
              {
                v64 = (_QWORD *)(v60 + 48 * v63);
                if ( v64[3] )
                {
                  v64[4] = 0;
                  qfree();
                }
                if ( *v64 )
                {
                  v64[1] = 0;
                  qfree();
                }
                ++v63;
                v60 = *(_QWORD *)(v29 + 288);
              }
              while ( v62 != v63 );
              v61 = _mm_load_si128(&v82);
            }
            *(_QWORD *)(v29 + 296) = 0;
            v82 = v61;
            qfree();
            v61 = _mm_load_si128(&v82);
          }
          *(_QWORD *)(v29 + 288) = v58;
          *(__m128i *)(v29 + 296) = v61;
          sub_BA2C0((_QWORD *)v21);
          j__qfree();
          if ( (unsigned __int8)sub_11A310(v81, *(_QWORD *)(a1 + 1504), 0) )
            sub_E66D0(v86, v87, v81);
          v17 = ++v83;
        }
        while ( v83 < (unsigned __int64)v100 );
      }
      qfree();
      if ( v99 )
      {
LABEL_97:
        *(_QWORD *)&v100 = 0;
        qfree();
      }
LABEL_98:
      v3 = ++v92;
      if ( (unsigned __int64)v92 >= *(_QWORD *)(a1 + 1224) )
      {
LABEL_5:
        clear_tinfo_t();
        return v105 - __readfsqword(0x28u);
      }
    }
  }
  return v105 - __readfsqword(0x28u);
}
