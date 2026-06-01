void __fastcall sub_6F2DE0(__int64 a1, char **a2, __int64 a3, unsigned int a4)
{
  char **v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r14
  char *v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 (*v19)(); // rcx
  void **v20; // rbp
  void **v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rdi
  unsigned int *v29; // rdx
  char *v30; // r14
  void *v31; // r15
  char *v32; // r13
  char *v33; // rbp
  char *v34; // r15
  _BYTE *v35; // rdi
  size_t v36; // r14
  __int64 v37; // rax
  char *v38; // rsi
  __int64 v39; // rax
  void **v40; // rbp
  void **v41; // rbx
  char *v42; // rdi
  char v43; // al
  char v44; // dl
  __int64 v45; // rdx
  _QWORD *v46; // rax
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  __int64 *v50; // rax
  __int64 v51; // rdi
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rax
  _DWORD *v55; // rdx
  __int64 v56; // rax
  __m128i *v57; // rax
  const __m128i *v58; // r13
  unsigned __int64 v59; // rax
  __int64 v60; // rbp
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  __m128i v64; // xmm0
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rsi
  _DWORD *v68; // rcx
  char *v69; // rsi
  __int64 v70; // rax
  __m128i *v71; // r15
  __int64 v72; // rcx
  __int64 v73; // rdx
  _DWORD *v74; // rdx
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  void *v78; // rdx
  _QWORD *v79; // rax
  __int64 v80; // r8
  _QWORD *v81; // rdx
  __int64 *v82; // rax
  unsigned __int64 v83; // rdx
  __int64 *v84; // rcx
  __int64 v85; // r15
  void *v86; // rcx
  __int64 v87; // rdx
  void (__fastcall *v88)(void **, __int64, void *, unsigned __int64, __int64, void *); // r15
  void *v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // r8
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  unsigned __int64 v94; // rax
  void *v95; // rax
  char *v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // r15
  void *v100; // rax
  char *v101; // rax
  _QWORD *v102; // rdi
  const __m128i *v103; // r13
  unsigned __int64 v104; // rax
  __int64 v105; // rbp
  unsigned __int64 v106; // rbx
  unsigned __int64 v107; // rax
  unsigned __int64 v108; // rax
  __m128i v109; // xmm0
  unsigned __int64 v110; // rdx
  __m128i v111; // xmm0
  __m128i v112; // xmm1
  char *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rbx
  __int64 v116; // r15
  __int64 v117; // rbp
  size_t v118; // r12
  __int64 v119; // rbx
  __int64 v120; // r13
  __m128i v121; // xmm0
  __int32 v122; // edx
  __int32 v123; // eax
  unsigned int v124; // eax
  __int64 v125; // rbx
  __int64 v126; // rbp
  __int64 v127; // rax
  char *v129; // [rsp+8h] [rbp-360h]
  void *v130; // [rsp+8h] [rbp-360h]
  __int64 *v131; // [rsp+8h] [rbp-360h]
  unsigned __int64 v132; // [rsp+10h] [rbp-358h]
  const __m128i *v133; // [rsp+10h] [rbp-358h]
  __int64 v134; // [rsp+10h] [rbp-358h]
  unsigned __int64 v135; // [rsp+10h] [rbp-358h]
  __int64 v136; // [rsp+10h] [rbp-358h]
  const __m128i *v137; // [rsp+10h] [rbp-358h]
  char *v138; // [rsp+10h] [rbp-358h]
  unsigned __int64 v139; // [rsp+18h] [rbp-350h]
  void *v140; // [rsp+20h] [rbp-348h]
  __int64 v141; // [rsp+20h] [rbp-348h]
  __int64 v142; // [rsp+28h] [rbp-340h]
  unsigned __int64 v143; // [rsp+48h] [rbp-320h]
  unsigned __int64 v144; // [rsp+48h] [rbp-320h]
  __int64 v145; // [rsp+50h] [rbp-318h]
  __int64 v146; // [rsp+50h] [rbp-318h]
  __m128i v147; // [rsp+60h] [rbp-308h] BYREF
  _QWORD v148[2]; // [rsp+70h] [rbp-2F8h] BYREF
  __m128i v149; // [rsp+80h] [rbp-2E8h] BYREF
  __m128i v150; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v151; // [rsp+A0h] [rbp-2C8h]
  __m128i v152; // [rsp+B0h] [rbp-2B8h] BYREF
  __int64 v153; // [rsp+C0h] [rbp-2A8h]
  void *v154[2]; // [rsp+D0h] [rbp-298h] BYREF
  _QWORD v155[8]; // [rsp+E0h] [rbp-288h] BYREF
  void *ptr; // [rsp+120h] [rbp-248h] BYREF
  __m128i si128; // [rsp+128h] [rbp-240h] BYREF
  unsigned __int64 v158; // [rsp+138h] [rbp-230h]
  unsigned __int64 v159; // [rsp+140h] [rbp-228h]

  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 17288) + 200LL);
  v7 = *(char **)(v6 + 64);
  v8 = *(_QWORD *)(v6 + 72);
  v9 = sub_7984D0(a3 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
    goto LABEL_172;
  v10 = v9;
  v11 = sub_79A2B0(v9);
  v12 = *(__int64 **)v11;
  v13 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8);
  if ( (unsigned __int64)v12 >= v13 )
  {
    if ( v12 == (__int64 *)v13 )
    {
LABEL_28:
      if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
        goto LABEL_202;
      v22 = sub_79A2B0(v10);
      v23 = *(_QWORD **)v22;
      v24 = *(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8);
      if ( (unsigned __int64)v23 >= v24 )
      {
        if ( v23 == (_QWORD *)v24 )
          goto LABEL_66;
        while ( *(_WORD *)(*(_QWORD *)v24 + 32LL) != 152 )
        {
          v24 += 8LL;
          if ( v23 == (_QWORD *)v24 )
            goto LABEL_66;
        }
        v25 = v23;
      }
      else
      {
        v25 = v23;
        while ( *(_WORD *)(*v25 + 32LL) != 152 )
        {
          if ( (_QWORD *)v24 == ++v25 )
            goto LABEL_66;
        }
      }
      if ( v25 != (_QWORD *)v24 )
      {
        v26 = *v23;
        if ( *(_WORD *)(*v23 + 32LL) != 152 )
        {
          v27 = v23 + 1;
          do
            v26 = *v27++;
          while ( *(_WORD *)(v26 + 32) != 152 );
        }
        v28 = *(_QWORD *)(a1 + 17288);
        ptr = &si128.m128i_u64[1];
        si128.m128i_i64[0] = 0x2000000000LL;
        v29 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)(v26 + 40) + 8LL * a4) + 16LL);
        (*(void (__fastcall **)(__int64, unsigned int *, _QWORD, void **))(*(_QWORD *)v28 + 664LL))(
          v28,
          v29 + 4,
          *v29,
          &ptr);
        v30 = (char *)ptr;
        v155[0] = 0;
        *(_OWORD *)v154 = 0;
        v129 = (char *)ptr + 16 * si128.m128i_u32[0];
        if ( 16LL * si128.m128i_u32[0] )
        {
          v132 = 32LL * si128.m128i_u32[0];
          v154[0] = (void *)operator new(v132);
          v31 = v154[0];
          v155[0] = (char *)v154[0] + v132;
          if ( v30 != v129 )
          {
            v139 = v8;
            v32 = v30;
            v33 = (char *)v154[0];
            while ( 1 )
            {
              v34 = *(char **)v32;
              v35 = v33 + 16;
              v36 = *((_QWORD *)v32 + 1);
              *(_QWORD *)v33 = v33 + 16;
              if ( !v34 && v36 )
                std::__throw_logic_error("basic_string: construction from null is not valid");
              v152.m128i_i64[0] = v36;
              if ( v36 > 0xF )
                break;
              if ( v36 == 1 )
              {
                v33[16] = *v34;
                goto LABEL_42;
              }
              if ( v36 )
                goto LABEL_47;
LABEL_42:
              v32 += 16;
              *((_QWORD *)v33 + 1) = v36;
              v33 += 32;
              v35[v36] = 0;
              if ( v129 == v32 )
              {
                v31 = v33;
                v8 = v139;
                v4 = a2;
                v38 = (char *)v154[0];
                goto LABEL_50;
              }
            }
            v37 = std::string::_M_create();
            *(_QWORD *)v33 = v37;
            v35 = (_BYTE *)v37;
            *((_QWORD *)v33 + 2) = v152.m128i_i64[0];
LABEL_47:
            memcpy(v35, v34, v36);
            v36 = v152.m128i_i64[0];
            v35 = *(_BYTE **)v33;
            goto LABEL_42;
          }
          v38 = (char *)v154[0];
        }
        else
        {
          v154[0] = nullptr;
          v38 = nullptr;
          v31 = nullptr;
        }
LABEL_50:
        v39 = *(_QWORD *)(v5 + 17288);
        v154[1] = v31;
        sub_6B0480(
          (__int64 *)v154,
          v38,
          *(_QWORD *)(*(_QWORD *)(v39 + 200) + 232LL),
          *(_QWORD *)(*(_QWORD *)(v39 + 200) + 240LL));
        (*(void (__fastcall **)(_QWORD, char **, _QWORD, char *, unsigned __int64, void **))(**(_QWORD **)(v5 + 17288)
                                                                                           + 440LL))(
          *(_QWORD *)(v5 + 17288),
          v4,
          *(_QWORD *)(*(_QWORD *)(v5 + 2152) + 8LL),
          v7,
          v8,
          v154);
        v40 = (void **)v154[1];
        v41 = (void **)v154[0];
        if ( v154[1] != v154[0] )
        {
          do
          {
            if ( *v41 != v41 + 2 )
              operator delete(*v41, (unsigned __int64)v41[2] + 1);
            v41 += 4;
          }
          while ( v40 != v41 );
          v41 = (void **)v154[0];
        }
        if ( v41 )
          operator delete(v41, v155[0] - (_QWORD)v41);
        goto LABEL_57;
      }
LABEL_66:
      if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
        goto LABEL_202;
      v45 = sub_79A2B0(v10);
      v46 = *(_QWORD **)v45;
      v47 = *(_QWORD *)v45 + 8LL * *(unsigned int *)(v45 + 8);
      if ( (unsigned __int64)v46 >= v47 )
      {
        if ( v46 == (_QWORD *)v47 )
          goto LABEL_117;
        while ( *(_WORD *)(*(_QWORD *)v47 + 32LL) != 368 )
        {
          v47 += 8LL;
          if ( v46 == (_QWORD *)v47 )
            goto LABEL_117;
        }
        v48 = v46;
      }
      else
      {
        v48 = v46;
        while ( *(_WORD *)(*v48 + 32LL) != 368 )
        {
          if ( (_QWORD *)v47 == ++v48 )
            goto LABEL_117;
        }
      }
      if ( v48 != (_QWORD *)v47 )
      {
        v49 = *v46;
        if ( *(_WORD *)(*v46 + 32LL) != 368 )
        {
          v50 = v46 + 1;
          do
            v49 = *v50++;
          while ( *(_WORD *)(v49 + 32) != 368 );
        }
        v51 = *(_QWORD *)(a1 + 17288);
        v52 = *(_DWORD *)(v51 + 248);
        v53 = 16LL * a4;
        if ( (unsigned int)(v52 - 3) <= 2 )
        {
          ptr = &si128.m128i_u64[1];
          si128.m128i_i64[0] = 0x800000000LL;
          v54 = *(_QWORD *)(v49 + 40) + v53;
          v55 = *(_DWORD **)v54;
          v56 = *(_QWORD *)(v54 + 8);
          if ( v56 != 7 || *v55 != 1634100580 || *(_DWORD *)((char *)v55 + 3) != 1953264993 )
          {
            v149.m128i_i64[1] = v56;
            v154[0] = v155;
            v149.m128i_i64[0] = (__int64)v55;
            v154[1] = (void *)0x400000000LL;
            sub_25E50E0(&v149, v154, 43, 0xFFFFFFFFLL, 1);
            v57 = (__m128i *)((char *)v154[0] + 16 * LODWORD(v154[1]));
            v133 = v57;
            if ( v154[0] != v57 )
            {
              v145 = v5;
              v143 = v8;
              v58 = (const __m128i *)v154[0];
              do
              {
                v150 = _mm_loadu_si128(v58);
                v59 = sub_25E4D40(&v150, word_3AB7F7A, 6, 0);
                v60 = v150.m128i_i64[1];
                if ( v59 > v150.m128i_i64[1] )
                  v59 = v150.m128i_u64[1];
                v61 = v59;
                v152.m128i_i64[0] = v150.m128i_i64[0] + v59;
                v152.m128i_i64[1] = v150.m128i_i64[1] - v59;
                v62 = sub_25E4EC0(&v152, word_3AB7F7A, 6, -1) + 1;
                v150.m128i_i64[0] = v152.m128i_i64[0];
                if ( v62 > v152.m128i_i64[1] )
                  v62 = v152.m128i_u64[1];
                v63 = v61 + v152.m128i_i64[1] - v60 + v62;
                if ( v63 > v152.m128i_i64[1] )
                  v63 = v152.m128i_u64[1];
                v150.m128i_i64[1] = v63;
                v64 = _mm_load_si128(&v150);
                v65 = si128.m128i_u32[0] + 1LL;
                if ( si128.m128i_u32[1] < v65 )
                {
                  v147 = v64;
                  sub_25D6060(&ptr, &si128.m128i_u64[1], v65, 16);
                  v64 = _mm_load_si128(&v147);
                }
                *((__m128i *)ptr + si128.m128i_u32[0]) = v64;
                ++v58;
                ++si128.m128i_i32[0];
              }
              while ( v133 != v58 );
              v57 = (__m128i *)v154[0];
              v8 = v143;
              v5 = v145;
              v4 = a2;
            }
            if ( v57 != (__m128i *)v155 )
              free(v57);
          }
          sub_6F2740((__int64)v154, (__int64)&ptr);
          sub_6B0480(
            (__int64 *)v154,
            (char *)v154[0],
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 17288) + 200LL) + 232LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 17288) + 200LL) + 240LL));
          (*(void (__fastcall **)(_QWORD, char **, _QWORD, char *, unsigned __int64, void **))(**(_QWORD **)(v5 + 17288)
                                                                                             + 440LL))(
            *(_QWORD *)(v5 + 17288),
            v4,
            *(_QWORD *)(*(_QWORD *)(v5 + 2152) + 8LL),
            v7,
            v8,
            v154);
          sub_6D8B80((__int64 *)v154);
LABEL_57:
          v42 = (char *)ptr;
          if ( ptr == &si128.m128i_u64[1] )
            return;
LABEL_58:
          free(v42);
          return;
        }
        v66 = *(_QWORD *)(v49 + 40) + v53;
        if ( (unsigned int)(v52 - 27) <= 1 )
        {
          v67 = *(_QWORD *)(v66 + 8);
          v68 = *(_DWORD **)v66;
          v155[0] = 0;
          *(_OWORD *)v154 = 0;
          if ( v67 == 7 && *v68 == 1634100580 && *(_DWORD *)((char *)v68 + 3) == 1953264993 )
          {
            v69 = nullptr;
          }
          else
          {
            (*(void (__fastcall **)(void **, __int64, _DWORD *, __int64))(*(_QWORD *)v51 + 496LL))(&ptr, v51, v68, v67);
            sub_6B0480((__int64 *)v154, (char *)v154[0], (__int64)ptr, si128.m128i_i64[0]);
            sub_6D8B80((__int64 *)&ptr);
            v51 = *(_QWORD *)(v5 + 17288);
            v69 = (char *)v154[0];
          }
          v70 = *(_QWORD *)(v51 + 200);
          v71 = (__m128i *)v154;
          v72 = *(_QWORD *)(v70 + 240);
          v73 = *(_QWORD *)(v70 + 232);
LABEL_104:
          sub_6B0480(v71->m128i_i64, v69, v73, v72);
          (*(void (__fastcall **)(_QWORD, char **, _QWORD, char *, unsigned __int64, __m128i *))(**(_QWORD **)(v5 + 17288)
                                                                                               + 440LL))(
            *(_QWORD *)(v5 + 17288),
            v4,
            *(_QWORD *)(*(_QWORD *)(v5 + 2152) + 8LL),
            v7,
            v8,
            v71);
          sub_6D8B80(v71->m128i_i64);
          return;
        }
        v153 = 0;
        v152 = 0;
        v74 = *(_DWORD **)v66;
        v75 = *(_QWORD *)(v66 + 8);
        if ( v75 > 4 )
        {
          if ( *v74 == 1751347809 && *((_BYTE *)v74 + 4) == 61 )
          {
            v8 = v75 - 5;
            v7 = (char *)v74 + 5;
LABEL_114:
            (*(void (__fastcall **)(__int64, char **, _QWORD, char *, unsigned __int64, __m128i *))(*(_QWORD *)v51
                                                                                                  + 440LL))(
              v51,
              a2,
              *(_QWORD *)(*(_QWORD *)(v5 + 2152) + 8LL),
              v7,
              v8,
              &v152);
            sub_6D8B80(v152.m128i_i64);
            return;
          }
          if ( v75 == 7 && *v74 == 1634100580 && *(_DWORD *)((char *)v74 + 3) == 1953264993 )
            goto LABEL_114;
        }
        v158 = v75;
        ptr = "+";
        si128.m128i_i64[1] = (__int64)v74;
        si128.m128i_i64[0] = 1;
        LOWORD(v159) = 1285;
        sub_25F1F70(v154, &ptr);
        v76 = v152.m128i_i64[1];
        if ( v152.m128i_i64[1] == v153 )
        {
          sub_625280((__int64)&v152, (char **)v154);
        }
        else
        {
          *(_QWORD *)v152.m128i_i64[1] = v152.m128i_i64[1] + 16;
          if ( v154[0] == v155 )
          {
            qmemcpy((void *)(v76 + 16), v155, (unsigned int)(LODWORD(v154[1]) + 1));
          }
          else
          {
            v77 = v155[0];
            *(void **)v76 = v154[0];
            *(_QWORD *)(v76 + 16) = v77;
          }
          v78 = v154[1];
          v154[1] = nullptr;
          *(_QWORD *)(v76 + 8) = v78;
          v152.m128i_i64[1] += 32;
          v154[0] = v155;
          LOBYTE(v155[0]) = 0;
        }
        std::string::_M_dispose();
        v51 = *(_QWORD *)(v5 + 17288);
        goto LABEL_114;
      }
LABEL_117:
      if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
      {
        v79 = (_QWORD *)sub_79A2B0(v10);
        v80 = *(_QWORD *)(a1 + 17288);
        v81 = v79;
        v82 = (__int64 *)*v79;
        v83 = (unsigned __int64)&v82[*((unsigned int *)v81 + 2)];
        if ( (unsigned __int64)v82 >= v83 )
        {
          if ( v82 == (__int64 *)v83 )
          {
LABEL_171:
            v6 = *(_QWORD *)(v80 + 200);
            goto LABEL_172;
          }
          while ( *(_WORD *)(*(_QWORD *)v83 + 32LL) != 369 )
          {
            v83 += 8LL;
            if ( v82 == (__int64 *)v83 )
              goto LABEL_171;
          }
          v84 = v82;
        }
        else
        {
          v84 = v82;
          while ( *(_WORD *)(*v84 + 32) != 369 )
          {
            if ( (__int64 *)v83 == ++v84 )
              goto LABEL_171;
          }
        }
        if ( v84 != (__int64 *)v83 )
        {
          while ( 1 )
          {
            v85 = *v82;
            if ( *(_WORD *)(*v82 + 32) == 369 )
              break;
            ++v82;
          }
          v151 = 0;
          v150 = 0;
          v86 = *(void **)(v85 + 40);
          v87 = *(unsigned int *)(v85 + 36);
          if ( (unsigned int)(*(_DWORD *)(v80 + 248) - 27) > 1 )
          {
            v152.m128i_i64[0] = *(_QWORD *)(v85 + 40);
            ptr = &si128.m128i_u64[1];
            v152.m128i_i64[1] = v87;
            si128.m128i_i64[0] = 0x800000000LL;
            v94 = sub_25E4D40(&v152, word_3AB7F7A, 6, 0);
            v142 = v152.m128i_i64[1];
            if ( v94 > v152.m128i_i64[1] )
              v94 = v152.m128i_u64[1];
            v154[0] = (void *)(v152.m128i_i64[0] + v94);
            v135 = v94;
            v154[1] = (void *)(v152.m128i_i64[1] - v94);
            v95 = (void *)(sub_25E4EC0(v154, word_3AB7F7A, 6, -1) + 1);
            if ( v95 > v154[1] )
              v95 = v154[1];
            v96 = (char *)v154[1] + v135 - v142 + (unsigned __int64)v95;
            if ( v96 > v154[1] )
              v96 = (char *)v154[1];
            if ( v96 != &byte_7 || *(_DWORD *)v154[0] != 1634100580 || *(_DWORD *)((char *)v154[0] + 3) != 1953264993 )
            {
              v97 = *(unsigned int *)(v85 + 36);
              v152.m128i_i64[0] = *(_QWORD *)(v85 + 40);
              v152.m128i_i64[1] = v97;
              v98 = sub_25E4D40(&v152, word_3AB7F7A, 6, 0);
              v136 = v152.m128i_i64[1];
              if ( v98 > v152.m128i_i64[1] )
                v98 = v152.m128i_u64[1];
              v99 = v98;
              v154[0] = (void *)(v152.m128i_i64[0] + v98);
              v154[1] = (void *)(v152.m128i_i64[1] - v98);
              v100 = (void *)(sub_25E4EC0(v154, word_3AB7F7A, 6, -1) + 1);
              v148[0] = v154[0];
              if ( v100 > v154[1] )
                v100 = v154[1];
              v101 = (char *)v154[1] + v99 - v136 + (unsigned __int64)v100;
              if ( v101 > v154[1] )
                v101 = (char *)v154[1];
              v148[1] = v101;
              v154[0] = v155;
              v154[1] = (void *)0x400000000LL;
              sub_25E50E0(v148, v154, 43, 0xFFFFFFFFLL, 1);
              v102 = v154[0];
              v137 = (const __m128i *)((char *)v154[0] + 16 * LODWORD(v154[1]));
              if ( v154[0] != v137 )
              {
                v146 = v5;
                v144 = v8;
                v103 = (const __m128i *)v154[0];
                do
                {
                  v149 = _mm_loadu_si128(v103);
                  v104 = sub_25E4D40(&v149, word_3AB7F7A, 6, 0);
                  v105 = v149.m128i_i64[1];
                  if ( v104 > v149.m128i_i64[1] )
                    v104 = v149.m128i_u64[1];
                  v106 = v104;
                  v152.m128i_i64[0] = v149.m128i_i64[0] + v104;
                  v152.m128i_i64[1] = v149.m128i_i64[1] - v104;
                  v107 = sub_25E4EC0(&v152, word_3AB7F7A, 6, -1) + 1;
                  v149.m128i_i64[0] = v152.m128i_i64[0];
                  if ( v107 > v152.m128i_i64[1] )
                    v107 = v152.m128i_u64[1];
                  v108 = v106 + v152.m128i_i64[1] - v105 + v107;
                  if ( v108 > v152.m128i_i64[1] )
                    v108 = v152.m128i_u64[1];
                  v149.m128i_i64[1] = v108;
                  v109 = _mm_load_si128(&v149);
                  v110 = si128.m128i_u32[0] + 1LL;
                  if ( si128.m128i_u32[1] < v110 )
                  {
                    v147 = v109;
                    sub_25D6060(&ptr, &si128.m128i_u64[1], v110, 16);
                    v109 = _mm_load_si128(&v147);
                  }
                  *((__m128i *)ptr + si128.m128i_u32[0]) = v109;
                  ++v103;
                  ++si128.m128i_i32[0];
                }
                while ( v137 != v103 );
                v8 = v144;
                v5 = v146;
                v4 = a2;
                v102 = v154[0];
              }
              if ( v102 != v155 )
                free(v102);
            }
            sub_6F2740((__int64)&v152, (__int64)&ptr);
            v111 = _mm_load_si128(&v150);
            v112 = _mm_load_si128(&v152);
            v155[0] = v151;
            v151 = v153;
            v150 = v112;
            *(__m128i *)v154 = v111;
            sub_6D8B80((__int64 *)v154);
            v153 = 0;
            v152 = 0;
            sub_6D8B80(v152.m128i_i64);
            if ( ptr != &si128.m128i_u64[1] )
              free(ptr);
          }
          else
          {
            v134 = v80;
            v88 = *(void (__fastcall **)(void **, __int64, void *, unsigned __int64, __int64, void *))(*(_QWORD *)v80 + 496LL);
            v154[0] = v86;
            v154[1] = (void *)v87;
            v89 = (void *)sub_25E4D40(v154, word_3AB7F7A, 6, 0);
            v140 = v154[1];
            if ( v89 > v154[1] )
              v89 = v154[1];
            ptr = (char *)v154[0] + (unsigned __int64)v89;
            v130 = v89;
            si128.m128i_i64[0] = (char *)v154[1] - (char *)v89;
            v90 = sub_25E4EC0(&ptr, word_3AB7F7A, 6, -1) + 1;
            if ( v90 > si128.m128i_i64[0] )
              v90 = si128.m128i_i64[0];
            v92 = (unsigned __int64)v130 + si128.m128i_i64[0] - (_QWORD)v140 + v90;
            if ( v92 > si128.m128i_i64[0] )
              v92 = si128.m128i_i64[0];
            v88(&ptr, v134, ptr, v92, v91, v130);
            sub_6B0480(v150.m128i_i64, (char *)v150.m128i_i64[0], (__int64)ptr, si128.m128i_i64[0]);
            sub_6D8B80((__int64 *)&ptr);
          }
          v69 = (char *)v150.m128i_i64[0];
          v71 = &v150;
          v93 = *(_QWORD *)(*(_QWORD *)(v5 + 17288) + 200LL);
          v72 = *(_QWORD *)(v93 + 240);
          v73 = *(_QWORD *)(v93 + 232);
          goto LABEL_104;
        }
        goto LABEL_171;
      }
LABEL_202:
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 17288) + 200LL);
LABEL_172:
      ptr = nullptr;
      si128 = _mm_load_si128((const __m128i *)byte_3C7E640);
      if ( *(_DWORD *)(v6 + 292) )
      {
        sub_25E27D0(&ptr, *(unsigned int *)(v6 + 288));
        v113 = (char *)ptr;
        v114 = *(_QWORD *)(v6 + 280);
        *(__int64 *)((char *)si128.m128i_i64 + 4) = *(_QWORD *)(v6 + 292);
        if ( si128.m128i_i32[0] )
        {
          v115 = 8LL * si128.m128i_u32[0];
          v116 = 0;
          v141 = 4LL * si128.m128i_u32[0];
          v138 = (char *)ptr + v115;
          v117 = v114 + v115;
          while ( 1 )
          {
            v120 = *(_QWORD *)(v114 + 2 * v116);
            v131 = (__int64 *)&v113[2 * v116];
            if ( !v120 || v120 == -8 )
            {
              *v131 = v120;
            }
            else
            {
              v118 = *(_QWORD *)v120;
              v119 = sub_25CC9C0(*(_QWORD *)v120 + 17LL, 8);
              if ( v118 )
                memcpy((void *)(v119 + 16), (const void *)(v120 + 16), v118);
              *(_BYTE *)(v119 + v118 + 16) = 0;
              *(_QWORD *)v119 = v118;
              *(_BYTE *)(v119 + 8) = *(_BYTE *)(v120 + 8);
              *v131 = v119;
              *(_DWORD *)&v138[v116 + 8] = *(_DWORD *)(v117 + v116 + 8);
            }
            v116 += 4;
            if ( v116 == v141 )
              break;
            v113 = (char *)ptr;
            v114 = *(_QWORD *)(v6 + 280);
          }
          v4 = a2;
        }
      }
      v42 = *v4;
      v121 = _mm_loadl_epi64((const __m128i *)(v4 + 1));
      v122 = si128.m128i_i32[2];
      *v4 = (char *)ptr;
      ptr = v42;
      v4[1] = (char *)si128.m128i_i64[0];
      v123 = *((_DWORD *)v4 + 4);
      si128.m128i_i64[0] = v121.m128i_i64[0];
      si128.m128i_i32[2] = v123;
      *((_DWORD *)v4 + 4) = v122;
      if ( _mm_cvtsi128_si32(_mm_shuffle_epi32(v121, 229)) )
      {
        v124 = _mm_cvtsi128_si32(v121);
        if ( v124 )
        {
          v125 = 8LL * v124;
          v126 = 0;
          do
          {
            v127 = *(_QWORD *)&v42[v126];
            if ( v127 && v127 != -8 )
            {
              operator delete();
              v42 = (char *)ptr;
            }
            v126 += 8;
          }
          while ( v125 != v126 );
        }
      }
      goto LABEL_58;
    }
    while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 367 )
    {
      v13 += 8LL;
      if ( v12 == (__int64 *)v13 )
        goto LABEL_28;
    }
    v14 = v12;
  }
  else
  {
    v14 = v12;
    while ( *(_WORD *)(*v14 + 32) != 367 )
    {
      if ( (__int64 *)v13 == ++v14 )
        goto LABEL_28;
    }
  }
  if ( v14 == (__int64 *)v13 )
    goto LABEL_28;
  v15 = *v12;
  if ( *(_WORD *)(*v12 + 32) != 367 )
  {
    v16 = v12 + 1;
    do
      v15 = *v16++;
    while ( *(_WORD *)(v15 + 32) != 367 );
  }
  sub_6D6F00((char **)&ptr, a1, v15);
  v17 = *(__int64 **)(a1 + 17288);
  if ( (unsigned int)(*((_DWORD *)v17 + 62) - 3) > 2 )
  {
    sub_6B0480((__int64 *)&ptr, (char *)ptr, *(_QWORD *)(v17[25] + 232), *(_QWORD *)(v17[25] + 240));
    v17 = *(__int64 **)(v5 + 17288);
  }
  v18 = *v17;
  if ( v159 )
  {
    v19 = *(__int64 (**)())(v18 + 480);
    if ( v19 == sub_6A6800
      || (v43 = ((__int64 (__fastcall *)(__int64 *, unsigned __int64, unsigned __int64))v19)(v17, v158, v159),
          v17 = *(__int64 **)(v5 + 17288),
          v44 = v43,
          v18 = *v17,
          v44) )
    {
      v7 = (char *)v158;
      v8 = v159;
    }
  }
  (*(void (__fastcall **)(__int64 *, char **, _QWORD, char *, unsigned __int64, void **))(v18 + 440))(
    v17,
    a2,
    *(_QWORD *)(*(_QWORD *)(v5 + 2152) + 8LL),
    v7,
    v8,
    &ptr);
  v20 = (void **)si128.m128i_i64[0];
  v21 = (void **)ptr;
  if ( (void *)si128.m128i_i64[0] != ptr )
  {
    do
    {
      if ( *v21 != v21 + 2 )
        operator delete(*v21, (unsigned __int64)v21[2] + 1);
      v21 += 4;
    }
    while ( v20 != v21 );
    v21 = (void **)ptr;
  }
  if ( v21 )
    operator delete(v21, si128.m128i_i64[1] - (_QWORD)v21);
}

