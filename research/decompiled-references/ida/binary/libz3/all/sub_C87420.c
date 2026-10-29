__int64 __fastcall sub_C87420(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rdx
  __m128 v4; // xmm0
  __int64 v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // r15
  char *v10; // rbp
  _QWORD *v11; // r12
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  void **p_ptr; // rdx
  __int64 v18; // rax
  __m128 *v19; // rdi
  __int64 v20; // rsi
  char v21; // cl
  unsigned int v22; // ecx
  int v23; // ecx
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r13
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  char v32; // cl
  unsigned int v33; // ecx
  unsigned int v34; // eax
  _QWORD *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rsi
  _DWORD *v38; // rax
  char *v39; // rdi
  __int64 v40; // r9
  __int64 v41; // r10
  char *v42; // rcx
  bool v43; // r8
  char *v44; // r10
  char *v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // r13
  unsigned int v48; // eax
  char *v49; // rax
  char *v50; // r9
  char *v51; // rdx
  unsigned int v52; // r10d
  __int64 v53; // r11
  char *v54; // rax
  char *i; // rax
  __int64 v56; // rdx
  _DWORD *v57; // rax
  bool v58; // bl
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // rdi
  __int64 v63; // rax
  void *v64; // r14
  __int64 v65; // rbx
  __m128i *v66; // rbp
  __int64 v67; // rax
  __m128i v68; // xmm0
  __int64 v69; // rsi
  int v70; // ecx
  int v71; // r8d
  int v72; // r9d
  __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // rbx
  void (__fastcall ***v76)(void *); // rbp
  bool v77; // zf
  __int64 v78; // rbx
  __int64 v79; // rdx
  char j; // al
  __int64 v81; // r13
  unsigned int v82; // ebp
  __int64 v83; // r14
  __int64 *v84; // rdi
  __int64 v85; // rcx
  char v86; // dl
  unsigned int v87; // edx
  int v88; // edx
  __int64 *v89; // rax
  char v90; // r8
  __int64 v91; // rdx
  int v92; // ecx
  __int64 *v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rcx
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // rdi
  __int64 v100; // rdx
  int v101; // ecx
  __int64 *v102; // rdx
  __int64 v103; // rcx
  _DWORD *v104; // rax
  _DWORD *v105; // rax
  __int64 v106; // rax
  int v107; // ecx
  __int64 *v108; // rax
  __m128 v109; // kr00_16
  __int64 v110; // rsi
  unsigned __int64 v111; // rdi
  __int64 v112; // r12
  unsigned int v113; // edx
  unsigned int v114; // ebp
  __int64 v115; // rbx
  char *v116; // rdi
  __int64 v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rbp
  unsigned int v121; // ecx
  size_t v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rbp
  _QWORD *v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rax
  unsigned __int64 v128; // rax
  __int64 v129; // rax
  int v130; // eax
  __int64 v131; // rax
  __int64 v132; // rbp
  __int64 v133; // rdi
  _DWORD *v134; // rax
  _QWORD *v135; // rax
  __int64 k; // rax
  __int64 v137; // rax
  __int64 v138; // rsi
  unsigned __int64 v139; // rax
  char **exception; // r15
  __int64 v141; // rdx
  __m128i v145; // [rsp+18h] [rbp-190h] BYREF
  char *v146; // [rsp+28h] [rbp-180h]
  char *v147; // [rsp+30h] [rbp-178h]
  __int64 v148; // [rsp+38h] [rbp-170h]
  void **v149; // [rsp+40h] [rbp-168h]
  void **v150; // [rsp+48h] [rbp-160h]
  unsigned int v151; // [rsp+54h] [rbp-154h]
  _QWORD *v152; // [rsp+58h] [rbp-150h]
  char v153[8]; // [rsp+68h] [rbp-140h] BYREF
  __int64 v154; // [rsp+70h] [rbp-138h] BYREF
  unsigned __int64 v155; // [rsp+78h] [rbp-130h]
  __m128 v156; // [rsp+90h] [rbp-118h] BYREF
  __int64 v157; // [rsp+A0h] [rbp-108h] BYREF
  _QWORD *v158; // [rsp+A8h] [rbp-100h]
  void *v159; // [rsp+B0h] [rbp-F8h]
  unsigned int v160; // [rsp+B8h] [rbp-F0h]
  __int64 v161; // [rsp+BCh] [rbp-ECh]
  void *v162; // [rsp+C8h] [rbp-E0h]
  unsigned int v163; // [rsp+D0h] [rbp-D8h]
  __int64 v164; // [rsp+D4h] [rbp-D4h]
  void *ptr; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v166; // [rsp+E8h] [rbp-C0h]
  _BYTE v167[184]; // [rsp+F0h] [rbp-B8h] BYREF

  v3 = *a2;
  v146 = v153;
  sub_EE4940(v153, "fix-dl-var", v3);
  *((_BYTE *)a1 + 40) = (*(_BYTE *)(*a2 + 123) & 4) != 0;
  v145.m128i_i64[1] = (__int64)(a1 + 1);
  v145.m128i_i64[0] = a1[1];
  v4 = _mm_loadh_ps((const double *)&v145.m128i_i64[1]);
  v156 = v4;
  v5 = sub_186B270(0x80u);
  *(_QWORD *)v5 = 0;
  v6 = (char *)v5;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_QWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 88) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 104) = 0;
  *(_QWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 120) = 0;
  v161 = 0;
  v7 = sub_186B270(0x80u);
  v9 = *a2;
  *(_QWORD *)v7 = 0;
  v10 = (char *)v7;
  *(_DWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  v11 = *(_QWORD **)(v9 + 72);
  *(_DWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 88) = 0;
  *(_QWORD *)(v7 + 96) = 0;
  *(_DWORD *)(v7 + 104) = 0;
  *(_QWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 120) = 0;
  v147 = v167;
  ptr = v167;
  v164 = 0;
  v166 = 0x1000000000LL;
  if ( v11 )
  {
    v12 = *((_BYTE *)v11 + 3) >> 6;
    if ( v12 )
    {
      if ( v12 != 1 )
        goto LABEL_4;
    }
    else
    {
      do
      {
        v11 = (_QWORD *)v11[2];
        v12 = *((_BYTE *)v11 + 3) >> 6;
      }
      while ( !v12 );
      if ( v12 != 1 )
      {
LABEL_4:
        if ( v12 == 2 )
          v13 = (unsigned int)(*((_DWORD *)v11 + 1) - 1);
        else
          v13 = *((unsigned int *)v11 + 1);
        if ( (_DWORD)v13 )
          goto LABEL_7;
LABEL_188:
        v42 = v147;
        v43 = 1;
        v41 = 128;
        v11 = nullptr;
        v40 = 128;
        v39 = v147;
        goto LABEL_42;
      }
    }
    v13 = (unsigned int)(*((_DWORD *)v11 + 1) + 1);
    if ( *((_DWORD *)v11 + 1) != -1 )
    {
LABEL_7:
      v145.m128i_i64[0] = v13;
      v14 = 0;
      v15 = 8;
      v11 = nullptr;
      v16 = 8;
      p_ptr = &ptr;
      while ( 1 )
      {
        v18 = *(_QWORD *)(v9 + 88);
        v19 = *(__m128 **)v9;
        if ( v18 )
          break;
LABEL_17:
        if ( (*(_BYTE *)(v9 + 123) & 0x10) != 0 )
        {
          v24 = *(_QWORD *)(v9 + 104);
          v25 = 17;
          do
          {
            v8 = *(unsigned __int8 *)(v24 + 3);
            LOBYTE(v8) = (unsigned __int8)v8 >> 6;
            if ( *(char *)(v24 + 3) >= 0 )
            {
              if ( *(_DWORD *)(v24 + 4) == (_DWORD)v14 )
                goto LABEL_21;
            }
            else if ( (_BYTE)v8 != 2 )
            {
              goto LABEL_21;
            }
            v24 = *(_QWORD *)(v24 + 16);
            --v25;
          }
          while ( v25 );
          v150 = p_ptr;
          LODWORD(v149) = v15;
          LODWORD(v148) = v16;
          sub_236900((__m128 *)v19[42].m128_u64, (__int64 *)(v9 + 104));
          v19 = *(__m128 **)v9;
          v16 = v148;
          v15 = (unsigned int)v149;
          v26 = *(_BYTE *)(v9 + 123) & 0x20;
          p_ptr = v150;
          if ( (*(_BYTE *)(v9 + 123) & 0x20) != 0 )
          {
LABEL_22:
            v27 = v19[54].m128_i64[0];
            goto LABEL_23;
          }
        }
        else
        {
LABEL_21:
          v26 = *(_BYTE *)(v9 + 123) & 0x20;
          if ( (*(_BYTE *)(v9 + 123) & 0x20) != 0 )
            goto LABEL_22;
        }
        v106 = *(_QWORD *)(v9 + 72);
        v107 = 18;
        while ( 1 )
        {
          if ( !--v107 )
          {
            v19 = (__m128 *)((char *)v19 + 616);
            v150 = p_ptr;
            LODWORD(v149) = v15;
            LODWORD(v148) = v16;
            sub_233F80((__int64 *)v19, (_DWORD *)(v9 + 72));
            v16 = v148;
            v15 = (unsigned int)v149;
            p_ptr = v150;
            v108 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v9 + 72) + 16LL) + 8 * v14);
            goto LABEL_161;
          }
          v26 = *(unsigned __int8 *)(v106 + 3);
          LOBYTE(v26) = (unsigned __int8)v26 >> 6;
          if ( *(char *)(v106 + 3) >= 0 )
            break;
          if ( (_BYTE)v26 != 2 )
          {
            v108 = (__int64 *)(*(_QWORD *)(v106 + 16) + 8 * v14);
            goto LABEL_161;
          }
LABEL_176:
          v106 = *(_QWORD *)(v106 + 16);
        }
        if ( *(_DWORD *)(v106 + 4) != (_DWORD)v14 )
          goto LABEL_176;
        v108 = (__int64 *)(v106 + 8);
LABEL_161:
        v27 = *v108;
LABEL_23:
        if ( (*(_BYTE *)(v27 + 6) & 1) == 0 )
        {
          if ( !*(_WORD *)(v27 + 4) )
          {
            while ( 1 )
            {
              v103 = *(_QWORD *)(v27 + 16);
              v104 = *(_DWORD **)(v103 + 24);
              if ( !v104 || *v104 || v104[1] != 8 || *(_DWORD *)(v27 + 24) != 1 )
                break;
              v27 = *(_QWORD *)(v27 + 32);
              if ( *(_WORD *)(v27 + 4) )
                goto LABEL_25;
            }
            v105 = *(_DWORD **)(v103 + 24);
            if ( v105 )
            {
              if ( *v105 == 5 )
              {
                v158 = v11;
                v157 = (__int64)p_ptr;
                v159 = v6;
                v160 = v16;
                v162 = v10;
                v163 = v15;
                sub_C86B60((__int64)&v156, v27, 0);
                p_ptr = (void **)v157;
                v11 = v158;
                v6 = (char *)v159;
                v16 = v160;
                v10 = (char *)v162;
                v15 = v163;
                goto LABEL_40;
              }
            }
          }
LABEL_25:
          if ( v11 )
          {
            v28 = *((_DWORD *)v11 - 1);
            if ( v28 == *((_DWORD *)v11 - 2) )
            {
              v121 = (3 * v28 + 1) >> 1;
              v122 = 8 * v121 + 8;
              if ( 8 * v28 + 8 >= (unsigned int)v122 || v28 >= v121 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_161A10(&v154, "Overflow encountered when expanding vector", v141);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v154);
                sub_233E40((__int64)&v154);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v19 = (__m128 *)(v11 - 1);
              v151 = v16;
              LODWORD(v150) = (3 * v28 + 1) >> 1;
              LODWORD(v149) = v15;
              v148 = (__int64)p_ptr;
              v123 = sub_186B300(v11 - 1, v122);
              v11 = (_QWORD *)(v123 + 8);
              p_ptr = (void **)v148;
              v15 = (unsigned int)v149;
              v16 = v151;
              *(_DWORD *)v123 = (_DWORD)v150;
              LODWORD(v123) = *(_DWORD *)(v123 + 4);
              v31 = &v11[(unsigned int)v123];
              v30 = v123 + 1;
            }
            else
            {
              v29 = v28;
              v30 = v28 + 1;
              v31 = &v11[v29];
            }
          }
          else
          {
            v19 = (__m128 *)&qword_18;
            LODWORD(v150) = v16;
            LODWORD(v149) = v15;
            v148 = (__int64)p_ptr;
            v135 = (_QWORD *)sub_186B270(0x18u);
            p_ptr = (void **)v148;
            v15 = (unsigned int)v149;
            *v135 = 2;
            v11 = v135 + 1;
            v16 = (unsigned int)v150;
            v30 = 1;
            v31 = v11;
          }
          *v31 = v27;
          *((_DWORD *)v11 - 1) = v30;
          v32 = *(_BYTE *)(v27 + 6);
          if ( (v32 & 1) == 0 )
          {
            *(_BYTE *)(v27 + 6) = v32 | 1;
            v33 = *((_DWORD *)p_ptr + 2);
            v34 = *((_DWORD *)p_ptr + 3);
            if ( v33 >= v34 )
            {
              v151 = v16;
              LODWORD(v148) = 2 * v34;
              LODWORD(v150) = v15;
              v149 = p_ptr;
              v127 = sub_186B270(16LL * v34);
              p_ptr = v149;
              v15 = (unsigned int)v150;
              v35 = (_QWORD *)v127;
              v16 = v151;
              v33 = *((_DWORD *)v149 + 2);
              v19 = (__m128 *)*v149;
              if ( v33 )
              {
                if ( v33 - 1 <= 2 || (unsigned __int16 *)v127 == &v19->m128_u16[4] )
                {
                  v139 = 0;
                  v26 = 8LL * v33;
                  do
                  {
                    v8 = v19->m128_u64[v139 / 8];
                    v35[v139 / 8] = v8;
                    v139 += 8LL;
                  }
                  while ( v139 != v26 );
                }
                else
                {
                  v128 = 0;
                  v26 = 16LL * (v33 >> 1);
                  do
                  {
                    v4 = (__m128)_mm_loadu_si128((const __m128i *)&v19[v128 / 0x10]);
                    *(__m128 *)&v35[v128 / 8] = v4;
                    v128 += 16LL;
                  }
                  while ( v128 != v26 );
                  if ( (v33 & 1) != 0 )
                  {
                    v129 = v33 & 0xFFFFFFFE;
                    v26 = v19->m128_i64[v129];
                    v35[v129] = v26;
                  }
                }
              }
              if ( v19 != (__m128 *)(p_ptr + 2) && v19 )
              {
                v152 = v35;
                v151 = v16;
                LODWORD(v150) = v15;
                v149 = p_ptr;
                sub_186B220(v19);
                p_ptr = v149;
                v35 = v152;
                v16 = v151;
                v15 = (unsigned int)v150;
                v33 = *((_DWORD *)v149 + 2);
              }
              v130 = v148;
              *p_ptr = v35;
              *((_DWORD *)p_ptr + 3) = v130;
            }
            else
            {
              v35 = *p_ptr;
            }
            v35[v33] = v27;
            *((_DWORD *)p_ptr + 2) = v33 + 1;
            v30 = *((_DWORD *)v11 - 1);
          }
          if ( v30 )
          {
            while ( 2 )
            {
              v36 = (unsigned int)(v30 - 1);
              v37 = v11[v36];
              *((_DWORD *)v11 - 1) = v36;
              if ( *(_WORD *)(v37 + 4) )
                sub_161A90(v19, v37, p_ptr, v36, v26, v8);
              v38 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
              if ( v38 )
              {
                if ( *v38 )
                {
                  if ( *v38 != 5 )
                    break;
                  v158 = v11;
                  v157 = (__int64)p_ptr;
                  v19 = &v156;
                  v159 = v6;
                  v160 = v16;
                  v162 = v10;
                  v163 = v15;
                  sub_C86B60((__int64)&v156, v37, 1);
LABEL_38:
                  v11 = v158;
                  p_ptr = (void **)v157;
                  v6 = (char *)v159;
                  v16 = v160;
                  v10 = (char *)v162;
                  v15 = v163;
                  if ( !v158 )
                    goto LABEL_40;
                  v30 = *((_DWORD *)v158 - 1);
                  if ( !v30 )
                    goto LABEL_40;
                  continue;
                }
                if ( v38[1] == 2 )
                {
                  v133 = *(_QWORD *)(v37 + 32);
                  v151 = v16;
                  LODWORD(v150) = v15;
                  v149 = p_ptr;
                  v148 = v37;
                  v134 = *(_DWORD **)(sub_15D1F10(v133) + 24);
                  if ( v134 && *v134 == 5 )
                  {
                    v137 = *(_QWORD *)(v148 + 40);
                    v138 = *(_QWORD *)(v148 + 32);
                    v158 = v11;
                    v157 = (__int64)v149;
                    v19 = &v156;
                    v159 = v6;
                    v160 = v151;
                    v162 = v10;
                    v163 = (unsigned int)v150;
                    sub_C84C00((__int64)&v156, v138, v137, 1);
                  }
                  else
                  {
                    v158 = v11;
                    v19 = &v156;
                    v157 = (__int64)v149;
                    v159 = v6;
                    v160 = v151;
                    v162 = v10;
                    v163 = (unsigned int)v150;
                    sub_C84300((__int64)&v156, v148);
                  }
                  goto LABEL_38;
                }
              }
              break;
            }
            v158 = v11;
            v19 = &v156;
            v157 = (__int64)p_ptr;
            v159 = v6;
            v160 = v16;
            v162 = v10;
            v163 = v15;
            sub_C84300((__int64)&v156, v37);
            goto LABEL_38;
          }
        }
LABEL_40:
        if ( v145.m128i_i64[0] == ++v14 )
        {
          v39 = (char *)ptr;
          v40 = 16LL * v16;
          v41 = 16LL * v15;
          v42 = (char *)ptr + 8 * (unsigned int)v166;
          v43 = ptr == nullptr || ptr == v147;
          goto LABEL_42;
        }
      }
      v20 = *(_QWORD *)(v9 + 88);
      v21 = *(_BYTE *)(v18 + 3) >> 6;
      if ( v21 )
      {
        if ( v21 != 1 )
        {
LABEL_11:
          if ( v21 == 2 )
            v22 = *(_DWORD *)(v20 + 4) - 1;
          else
            v22 = *(_DWORD *)(v20 + 4);
LABEL_13:
          v8 = (unsigned int)v14;
          if ( (unsigned int)v14 < v22 )
          {
            v23 = 17;
            do
            {
              if ( *(char *)(v18 + 3) >= 0 )
              {
                if ( *(_DWORD *)(v18 + 4) == (_DWORD)v14 )
                  goto LABEL_17;
              }
              else if ( *(_BYTE *)(v18 + 3) >> 6 != 2 )
              {
                goto LABEL_17;
              }
              v18 = *(_QWORD *)(v18 + 16);
              --v23;
            }
            while ( v23 );
            v150 = p_ptr;
            LODWORD(v149) = v15;
            LODWORD(v148) = v16;
            sub_233F80(&v19[38].m128_i64[1], (_DWORD *)(v9 + 88));
            v19 = *(__m128 **)v9;
            v16 = v148;
            v15 = (unsigned int)v149;
            p_ptr = v150;
          }
          goto LABEL_17;
        }
      }
      else
      {
        do
        {
          v20 = *(_QWORD *)(v20 + 16);
          v21 = *(_BYTE *)(v20 + 3) >> 6;
        }
        while ( !v21 );
        if ( v21 != 1 )
          goto LABEL_11;
      }
      v22 = *(_DWORD *)(v20 + 4) + 1;
      goto LABEL_13;
    }
    goto LABEL_188;
  }
  v42 = v147;
  v43 = 1;
  v41 = 128;
  v40 = 128;
  v39 = v147;
LABEL_42:
  v44 = &v10[v41];
  if ( v44 == v10 )
  {
LABEL_178:
    v46 = 0;
    v47 = 0;
  }
  else
  {
    v45 = v10;
    while ( *(_QWORD *)v45 <= 1u )
    {
      v45 += 16;
      if ( v44 == v45 )
        goto LABEL_178;
    }
    v46 = 0;
    v47 = 0;
    if ( v44 != v45 )
    {
      do
      {
        v48 = *((_DWORD *)v45 + 2);
        if ( (unsigned int)v46 < v48 )
        {
          v47 = *(_QWORD *)v45;
          v46 = v48;
        }
        v49 = v45 + 16;
        if ( v44 == v45 + 16 )
          break;
        while ( 1 )
        {
          v45 = v49;
          if ( *(_QWORD *)v49 > 1u )
            break;
          v49 += 16;
          if ( v44 == v49 )
            goto LABEL_54;
        }
      }
      while ( v44 != v49 );
    }
  }
LABEL_54:
  v50 = &v6[v40];
  if ( v50 != v6 )
  {
    v51 = v6;
    while ( *(_QWORD *)v51 <= 1u )
    {
      v51 += 16;
      if ( v50 == v51 )
        goto LABEL_69;
    }
    if ( v50 != v51 )
    {
      v52 = 0;
      v53 = 0;
      do
      {
        if ( v52 < *((_DWORD *)v51 + 2) )
        {
          v53 = *(_QWORD *)v51;
          v52 = *((_DWORD *)v51 + 2);
        }
        v54 = v51 + 16;
        if ( v50 == v51 + 16 )
          break;
        while ( 1 )
        {
          v51 = v54;
          if ( *(_QWORD *)v54 > 1u )
            break;
          v54 += 16;
          if ( v50 == v54 )
            goto LABEL_67;
        }
      }
      while ( v54 != v50 );
LABEL_67:
      if ( 10 * (int)v46 < v52 )
        v47 = v53;
    }
  }
LABEL_69:
  for ( i = v39; v42 != i; *(_BYTE *)(v56 + 6) &= ~1u )
  {
    v56 = *(_QWORD *)i;
    i += 8;
  }
  LODWORD(v166) = 0;
  if ( !v43 )
    sub_186B220(v39);
  if ( v10 )
  {
    v39 = v10;
    sub_186B220(v10);
  }
  if ( v6 )
  {
    v39 = v6;
    sub_186B220(v6);
  }
  if ( v11 )
  {
    v39 = (char *)(v11 - 1);
    sub_186B220(v11 - 1);
  }
  if ( v47 )
  {
    if ( (unsigned int)sub_180B130(v39) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)v4.m128_u64) )
      {
        sub_186A4C0(*(double *)v4.m128_u64);
        v118 = sub_180B150(v39, v46);
        std::__ostream_insert<char,std::char_traits<char>>();
        v119 = *(_QWORD *)(v47 + 16);
        v120 = *(_QWORD *)(v119 + 16);
        if ( (v120 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v120 )
            strlen(*(const char **)(v119 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v118, ")\n");
      }
      else
      {
        sub_180B150(v39, v46);
        std::__ostream_insert<char,std::char_traits<char>>();
        v131 = *(_QWORD *)(v47 + 16);
        v132 = *(_QWORD *)(v131 + 16);
        if ( (v132 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v132 )
            strlen(*(const char **)(v131 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    sub_1694970(&ptr, *a1);
    v57 = *(_DWORD **)(sub_15D1F10(v47) + 24);
    v58 = 0;
    if ( v57 && *v57 == 5 )
      v58 = v57[1] == 1;
    v156 = 0u;
    v157 = 1;
    v158 = nullptr;
    sub_182CBA0(qword_1C7F2C0, &v157);
    BYTE4(v157) &= ~1u;
    LODWORD(v157) = 1;
    v62 = a1[2];
    if ( !v62 )
    {
      sub_16669E0(v145.m128i_i64[1]);
      v62 = a1[2];
    }
    v63 = sub_166A700(v62, (unsigned int)&v156, v58, v59, v60, v61);
    v64 = qword_1C7F2C0;
    v65 = v63;
    sub_182CBA0(qword_1C7F2C0, &v156);
    sub_182CBA0(v64, &v157);
    sub_1692DB0(&ptr, v47, v65, 0, 0);
    v147 = (char *)(a1 + 3);
    sub_14B64E0(a1 + 3, &ptr);
    if ( *((_BYTE *)a1 + 40) )
    {
      v66 = (__m128i *)sub_186B270(0x50u);
      v67 = *a1;
      strcpy(&v66[3].m128i_i8[8], "fix_dl");
      v145.m128i_i64[0] = v67;
      v68 = _mm_loadl_epi64(&v145);
      v66->m128i_i32[2] = 0;
      v66[1].m128i_i64[0] = 0;
      v66->m128i_i64[0] = (__int64)&off_1C60CE8;
      v66[1].m128i_i8[8] = 1;
      v66[2] = _mm_unpacklo_epi64(v68, (__m128i)(unsigned __int64)&v66[3].m128i_u64[1]);
      v69 = *(_QWORD *)(v47 + 16);
      v66[3].m128i_i64[0] = 6;
      v66[4].m128i_i64[1] = 0;
      sub_13333D0((_DWORD)v66, v69, v65, v70, v71, v72);
      v73 = *a2;
      v74 = sub_1336AB0(*(_QWORD *)(*a2 + 8), v66);
      v75 = v74;
      if ( v74 )
        ++*(_DWORD *)(v74 + 8);
      v76 = *(void (__fastcall ****)(void *))(v73 + 8);
      if ( v76 )
      {
        v77 = (*((_DWORD *)v76 + 2))-- == 1;
        if ( v77 )
        {
          (**v76)(v76);
          sub_186B220(v76);
        }
      }
      *(_QWORD *)(v73 + 8) = v75;
    }
    v154 = 0;
    v156.m128_u64[0] = 0;
    v155 = *a1;
    v156.m128_u64[1] = v155;
    v78 = *a2;
    v79 = *(_QWORD *)(*a2 + 72);
    if ( !v79 )
      goto LABEL_227;
    for ( j = *(_BYTE *)(v79 + 3) >> 6; !j; j = *(_BYTE *)(v79 + 3) >> 6 )
      v79 = *(_QWORD *)(v79 + 16);
    if ( j == 1 )
      v145.m128i_i32[0] = *(_DWORD *)(v79 + 4) + 1;
    else
      v145.m128i_i32[0] = j == 2 ? *(_DWORD *)(v79 + 4) - 1 : *(_DWORD *)(v79 + 4);
    v81 = 0;
    v82 = 0;
    if ( v145.m128i_i32[0] )
    {
      v83 = *(_QWORD *)(v78 + 88);
      v84 = *(__int64 **)v78;
      if ( !v83 )
        goto LABEL_111;
      v85 = *(_QWORD *)(v78 + 88);
      v86 = *(_BYTE *)(v83 + 3) >> 6;
      if ( !v86 )
        goto LABEL_128;
LABEL_101:
      if ( v86 != 1 )
      {
LABEL_102:
        if ( v86 == 2 )
          v87 = *(_DWORD *)(v85 + 4) - 1;
        else
          v87 = *(_DWORD *)(v85 + 4);
        if ( v82 >= v87 )
          goto LABEL_131;
LABEL_105:
        v88 = 18;
        while ( 1 )
        {
          if ( !--v88 )
          {
            sub_233F80(v84 + 77, (_DWORD *)(v78 + 88));
            v89 = (__int64 *)(v81 + *(_QWORD *)(*(_QWORD *)(v78 + 88) + 16LL));
            v84 = *(__int64 **)v78;
            goto LABEL_110;
          }
          if ( *(char *)(v83 + 3) >= 0 )
          {
            if ( v82 == *(_DWORD *)(v83 + 4) )
            {
              v89 = (__int64 *)(v83 + 8);
LABEL_110:
              v83 = *v89;
LABEL_111:
              v90 = *(_BYTE *)(v78 + 123);
              if ( (v90 & 0x10) == 0 )
                goto LABEL_132;
LABEL_112:
              v91 = *(_QWORD *)(v78 + 104);
              v92 = 18;
              while ( 1 )
              {
                if ( !--v92 )
                {
                  sub_236900(v84 + 84, (__int64 *)(v78 + 104));
                  v90 = *(_BYTE *)(v78 + 123);
                  v84 = *(__int64 **)v78;
                  v93 = (__int64 *)(v81 + *(_QWORD *)(*(_QWORD *)(v78 + 104) + 16LL));
                  goto LABEL_117;
                }
                if ( *(char *)(v91 + 3) >= 0 )
                {
                  if ( v82 == *(_DWORD *)(v91 + 4) )
                  {
                    v93 = (__int64 *)(v91 + 8);
                    goto LABEL_117;
                  }
                }
                else if ( *(_BYTE *)(v91 + 3) >> 6 != 2 )
                {
                  v93 = (__int64 *)(v81 + *(_QWORD *)(v91 + 16));
LABEL_117:
                  v145.m128i_i64[1] = *v93;
                  if ( (v90 & 0x20) == 0 )
                    goto LABEL_133;
LABEL_118:
                  v94 = v84[108];
                  goto LABEL_119;
                }
                v91 = *(_QWORD *)(v91 + 16);
              }
            }
          }
          else if ( *(_BYTE *)(v83 + 3) >> 6 != 2 )
          {
            v89 = (__int64 *)(v81 + *(_QWORD *)(v83 + 16));
            goto LABEL_110;
          }
          v83 = *(_QWORD *)(v83 + 16);
        }
      }
      while ( 1 )
      {
        if ( v82 < *(_DWORD *)(v85 + 4) + 1 )
          goto LABEL_105;
LABEL_131:
        v90 = *(_BYTE *)(v78 + 123);
        v83 = 0;
        if ( (v90 & 0x10) != 0 )
          goto LABEL_112;
LABEL_132:
        v145.m128i_i64[1] = 0;
        if ( (v90 & 0x20) != 0 )
          goto LABEL_118;
LABEL_133:
        v100 = *(_QWORD *)(v78 + 72);
        v101 = 18;
        while ( --v101 )
        {
          if ( *(char *)(v100 + 3) >= 0 )
          {
            if ( v82 == *(_DWORD *)(v100 + 4) )
            {
              v102 = (__int64 *)(v100 + 8);
              goto LABEL_138;
            }
          }
          else if ( *(_BYTE *)(v100 + 3) >> 6 != 2 )
          {
            v102 = (__int64 *)(v81 + *(_QWORD *)(v100 + 16));
            goto LABEL_138;
          }
          v100 = *(_QWORD *)(v100 + 16);
        }
        sub_233F80(v84 + 77, (_DWORD *)(v78 + 72));
        v102 = (__int64 *)(v81 + *(_QWORD *)(*(_QWORD *)(v78 + 72) + 16LL));
LABEL_138:
        v94 = *v102;
LABEL_119:
        v95 = *a2;
        if ( (*(_BYTE *)(*a2 + 123) & 0x20) != 0 )
          break;
        sub_14BB8A0(v147, v94, &v154, &v156);
        v96 = sub_15DE0E0(*a1, v83, v156.m128_u64[0]);
        v97 = v96;
        if ( v96 )
          ++*(_DWORD *)(v96 + 8);
        v98 = v156.m128_u64[0];
        if ( v156.m128_u64[0] )
        {
          v99 = v156.m128_u64[1];
          v77 = (*(_DWORD *)(v156.m128_u64[0] + 8))-- == 1;
          if ( v77 )
          {
            v148 = v96;
            sub_15D7BC0(v99, v98);
            v97 = v148;
          }
        }
        v156.m128_u64[0] = v97;
        sub_EDBFA0(*a2);
        v81 += 8;
        if ( v82 + 1 == v145.m128i_i32[0] )
        {
          v109 = v156;
          v95 = *a2;
          goto LABEL_163;
        }
        ++v82;
        v83 = *(_QWORD *)(v78 + 88);
        v84 = *(__int64 **)v78;
        if ( !v83 )
          goto LABEL_111;
        v85 = *(_QWORD *)(v78 + 88);
        v86 = *(_BYTE *)(v83 + 3) >> 6;
        if ( v86 )
          goto LABEL_101;
        do
        {
LABEL_128:
          v85 = *(_QWORD *)(v85 + 16);
          v86 = *(_BYTE *)(v85 + 3) >> 6;
        }
        while ( !v86 );
        if ( v86 != 1 )
          goto LABEL_102;
      }
      v109 = v156;
LABEL_163:
      *(_DWORD *)(v95 + 120) = (*(_DWORD *)(v95 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(v95 + 120) & 0xFC000000;
      if ( v109.m128_u64[0] )
      {
        v77 = (*(_DWORD *)(v109.m128_u64[0] + 8))-- == 1;
        if ( v77 )
          sub_15D7BC0(v109.m128_u64[1], v109.m128_u64[0]);
      }
    }
    else
    {
LABEL_227:
      *(_DWORD *)(v78 + 120) = (*(_DWORD *)(v78 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(v78 + 120) & 0xFC000000;
    }
    v110 = v154;
    if ( v154 )
    {
      v111 = v155;
      v77 = (*(_DWORD *)(v154 + 8))-- == 1;
      if ( v77 )
        sub_15D7BC0(v111, v110);
    }
    sub_1695230(&ptr);
  }
  v112 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v112 + 32);
  v113 = *(_DWORD *)(a3 + 8);
  v114 = *(_DWORD *)(a3 + 12);
  if ( v113 >= v114 )
  {
    v124 = 2 * v114;
    v115 = sub_186B270(8 * v124);
    v113 = *(_DWORD *)(a3 + 8);
    v125 = *(_QWORD **)a3;
    if ( v113 )
    {
      if ( v113 - 1 <= 2 || (_QWORD *)v115 == v125 + 1 )
      {
        for ( k = 0; k != v113; ++k )
          *(_QWORD *)(v115 + k * 8) = v125[k];
      }
      else
      {
        v126 = 0;
        do
        {
          *(__m128i *)(v115 + v126 * 8) = _mm_loadu_si128((const __m128i *)&v125[v126]);
          v126 += 2;
        }
        while ( v126 != 2LL * (v113 >> 1) );
        if ( (v113 & 1) != 0 )
          *(_QWORD *)(v115 + 8LL * (v113 & 0xFFFFFFFE)) = v125[v113 & 0xFFFFFFFE];
      }
    }
    if ( v125 != (_QWORD *)(a3 + 16) && v125 )
    {
      sub_186B220(v125);
      v113 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v115;
    *(_DWORD *)(a3 + 12) = v124;
  }
  else
  {
    v115 = *(_QWORD *)a3;
  }
  v116 = v146;
  *(_QWORD *)(v115 + 8LL * v113) = v112;
  *(_DWORD *)(a3 + 8) = v113 + 1;
  return sub_EE4A00(v116);
}

