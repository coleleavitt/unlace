__int64 __fastcall sub_5946C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r13
  _QWORD *v20; // rbx
  __int64 i; // rbp
  __int64 v22; // rdi
  _QWORD *v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r14d
  _QWORD *v28; // rdx
  _QWORD *v29; // r15
  unsigned int v30; // r14d
  size_t v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r12
  size_t v35; // rdx
  unsigned int v36; // r15d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  size_t v39; // rdi
  __int64 *v40; // rax
  __int64 v41; // rdx
  __int64 *v42; // r15
  size_t v43; // rdx
  int v44; // r8d
  int v45; // r8d
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r14
  __int64 v50; // rsi
  int v51; // eax
  _QWORD *v52; // r10
  __int64 v53; // rax
  _QWORD *v54; // r9
  _QWORD *v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // r15
  unsigned int v59; // r14d
  _QWORD *v60; // rdx
  int j; // eax
  unsigned int v62; // eax
  __int64 v63; // rsi
  int v64; // eax
  _QWORD *v65; // rdi
  unsigned int v66; // eax
  unsigned int v67; // edx
  size_t v68; // rsi
  __int64 v69; // rax
  unsigned int v70; // eax
  int v71; // eax
  _QWORD *v72; // r10
  __int64 v73; // rax
  _QWORD *v74; // rdi
  _QWORD *v75; // rcx
  _QWORD *v76; // rax
  __int64 v77; // rax
  size_t v78; // r14
  char *v79; // rax
  char *v80; // rdx
  char *v81; // rsi
  __int64 v82; // rdx
  char *v83; // r8
  char *v84; // r10
  char *v85; // rax
  char *v86; // rdx
  int v87; // edi
  __int64 v88; // rdx
  char *v89; // rsi
  char *v90; // rdx
  __int64 v91; // rsi
  char *v92; // rax
  char *v93; // r14
  __int64 v94; // rdi
  int v95; // ecx
  unsigned int v96; // edx
  size_t v97; // rsi
  __int64 v98; // rax
  __int64 v99; // rcx
  _QWORD *v100; // rax
  char **exception; // r13
  char **v103; // r13
  __int64 v104; // [rsp+0h] [rbp-D8h]
  __int64 v105; // [rsp+8h] [rbp-D0h]
  __int64 v106; // [rsp+10h] [rbp-C8h]
  __int64 v107; // [rsp+18h] [rbp-C0h]
  __int64 v108; // [rsp+20h] [rbp-B8h]
  unsigned int v109; // [rsp+2Ch] [rbp-ACh]
  char *v110; // [rsp+30h] [rbp-A8h]
  char *v111; // [rsp+38h] [rbp-A0h]
  __int64 v112; // [rsp+40h] [rbp-98h]
  char *v113; // [rsp+48h] [rbp-90h]
  __int64 v114; // [rsp+50h] [rbp-88h]
  char *v115; // [rsp+58h] [rbp-80h]
  __int64 v116; // [rsp+60h] [rbp-78h]
  char *v117; // [rsp+68h] [rbp-70h]
  _QWORD *v118; // [rsp+78h] [rbp-60h] BYREF
  __int64 *v119[11]; // [rsp+80h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v116 = a3;
  v5 = *(_QWORD *)v4;
  v108 = a1;
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(v5 + 40);
  if ( v6 == sub_592DC0 )
  {
    v7 = sub_186B270(0x40u);
    v104 = v7;
    *(_QWORD *)v7 = qword_1C67518;
    v8 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(v7 + 8) = v4;
    *(_QWORD *)(v7 + 16) = 0;
    if ( v8 )
    {
      v9 = _mm_loadl_epi64((const __m128i *)(v8 - 8));
      v105 = v9.m128i_i64[0];
      v10 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v9) + 8);
      v11 = *(_QWORD **)(a1 + 8);
      *(_QWORD *)(v7 + 16) = v10 + 1;
      *v10 = v9.m128i_i64[0];
      if ( v11 )
      {
        v12 = 8LL * *((unsigned int *)v11 - 1);
        if ( v12 <= 8 )
        {
          if ( v12 == 8 )
            v10[1] = *v11;
        }
        else
        {
          memmove(v10 + 1, v11, v12);
        }
      }
    }
    *(_DWORD *)(v7 + 24) = *(_DWORD *)(v108 + 16);
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(v4 + 8);
    *(_QWORD *)v7 = &off_1C67FF0;
    v13 = (_QWORD *)sub_186B270(0x80u);
    *v13 = 0;
    v13[1] = 0;
    v13[2] = 0;
    v13[3] = 0;
    v13[4] = 0;
    v13[5] = 0;
    v13[6] = 0;
    v13[7] = 0;
    v13[8] = 0;
    v13[9] = 0;
    v13[10] = 0;
    v13[11] = 0;
    v13[12] = 0;
    v13[13] = 0;
    v13[14] = 0;
    v13[15] = 0;
    *(_QWORD *)(v7 + 40) = v13;
    *(_QWORD *)(v7 + 48) = 8;
    *(_DWORD *)(v7 + 56) = 0;
  }
  else
  {
    v104 = v6(v4, a1 + 8);
  }
  v14 = 16LL * *(unsigned int *)(a2 + 48);
  v15 = *(_QWORD *)(a2 + 40);
  v16 = v15 + v14;
  v17 = v15;
  v114 = v16;
  if ( v15 == v16 )
    return v104;
  while ( *(_DWORD *)(v17 + 4) != 2 )
  {
    v17 += 16;
    if ( v16 == v17 )
      return v104;
  }
  v105 = v17;
  v18 = *(unsigned int *)(v116 + 48);
  v19 = *(_QWORD *)(v116 + 40);
  v112 = v19 + 16 * v18;
  if ( v114 == v17 )
    return v104;
  v20 = nullptr;
  while ( 2 )
  {
    for ( i = v19 + 16 * v18; i != v19; v19 += 16 )
    {
      if ( *(_DWORD *)(v19 + 4) == 2 )
        break;
    }
LABEL_17:
    if ( v112 == v19 )
      goto LABEL_26;
    do
    {
      v22 = *(unsigned int *)(v108 + 40);
      v23 = *(_QWORD **)(v105 + 8);
      if ( (_DWORD)v22 )
      {
        v24 = 4 * v22;
        v25 = 0;
        do
        {
          if ( v23[*(unsigned int *)(*(_QWORD *)(v108 + 24) + v25)] != *(_QWORD *)(*(_QWORD *)(v19 + 8)
                                                                                 + 8LL
                                                                                 * *(unsigned int *)(*(_QWORD *)(v108 + 32) + v25)) )
            goto LABEL_24;
          v25 += 4;
        }
        while ( v25 != v24 );
      }
      if ( v20 )
      {
        *((_DWORD *)v20 - 1) = 0;
        if ( v23 )
        {
          v27 = *((_DWORD *)v23 - 1);
          if ( v27 )
          {
            v58 = v23;
            v59 = 0;
            goto LABEL_68;
          }
          v28 = *(_QWORD **)(v19 + 8);
          v29 = v28;
          if ( !v28 )
          {
LABEL_36:
            v118 = nullptr;
            v30 = *((_DWORD *)v20 - 1);
LABEL_37:
            v31 = 8LL * *((unsigned int *)v20 - 2) + 8;
            LODWORD(v106) = *((_DWORD *)v20 - 2);
            v32 = (_QWORD *)sub_186B270(v31);
            v33 = *((unsigned int *)v20 - 1);
            v34 = v32 + 1;
            v118 = v32 + 1;
            v35 = 8 * v33;
            *v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v106), _mm_cvtsi32_si128(v30)).m128i_u64[0];
            if ( v35 <= 8 )
            {
              if ( v35 == 8 )
                v32[1] = *v20;
            }
            else
            {
              memcpy(v32 + 1, v20, v35);
            }
            v36 = *(_DWORD *)(v104 + 48);
            v37 = 2 * v36;
            v38 = 4 * (*(_DWORD *)(v104 + 52) + *(_DWORD *)(v104 + 56));
            LODWORD(v106) = 2 * v36;
            if ( 3 * v36 >= v38 )
            {
LABEL_40:
              if ( v30 )
              {
                v39 = 8LL * *((unsigned int *)v34 - 2) + 8;
                LODWORD(v106) = *((_DWORD *)v34 - 2);
                v40 = (__int64 *)sub_186B270(v39);
                v41 = *((unsigned int *)v34 - 1);
                v42 = v40;
                v119[0] = v40 + 1;
                v43 = 8 * v41;
                *v40 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v106), _mm_cvtsi32_si128(v30)).m128i_u64[0];
                if ( v43 <= 8 )
                {
                  if ( v43 == 8 )
                    v40[1] = *v34;
                  v44 = sub_592970(v119, v30);
                }
                else
                {
                  memcpy(v40 + 1, v34, v43);
                  v44 = sub_592970(v119, v30);
                }
                LODWORD(v106) = v44;
                sub_186B220(v42);
                v45 = v106;
                v107 = *(unsigned int *)(v104 + 48);
                v109 = v107 - 1;
                goto LABEL_44;
              }
              goto LABEL_83;
            }
LABEL_108:
            v107 = v37;
            v36 = v37;
            v78 = 16LL * v37;
            v79 = (char *)sub_186B270(v78);
            v113 = v79;
            v80 = &v79[16 * v107];
            if ( (_DWORD)v106 )
            {
              do
              {
                *(_QWORD *)v79 = 0;
                v79 += 16;
                *((_QWORD *)v79 - 1) = 0;
              }
              while ( v79 != v80 );
            }
            v81 = *(char **)(v104 + 40);
            v82 = *(unsigned int *)(v104 + 48);
            v83 = &v81[16 * v82];
            v109 = v106 - 1;
            v84 = &v113[v78];
            v85 = v81 + 8;
            if ( v81 == v83 )
            {
LABEL_124:
              if ( v83 )
              {
                if ( (_DWORD)v82 )
                {
                  v93 = v83;
                  v110 = &v83[16 * v82];
                  do
                  {
                    while ( 1 )
                    {
                      v94 = *((_QWORD *)v93 + 1);
                      if ( !v94 )
                        break;
                      v111 = v83;
                      v93 += 16;
                      sub_186B220((void *)(v94 - 8));
                      v83 = v111;
                      if ( v110 == v93 )
                        goto LABEL_129;
                    }
                    v93 += 16;
                  }
                  while ( v93 != v110 );
                }
LABEL_129:
                sub_186B220(v83);
              }
              *(_QWORD *)(v104 + 40) = v113;
              v95 = v106;
              *(_DWORD *)(v104 + 56) = 0;
              *(_DWORD *)(v104 + 48) = v95;
              if ( !v34 )
              {
                v45 = 778;
                goto LABEL_44;
              }
              v30 = *((_DWORD *)v34 - 1);
              goto LABEL_40;
            }
            while ( 1 )
            {
              if ( *((_DWORD *)v85 - 1) != 2 )
              {
LABEL_112:
                v86 = v85 + 16;
                if ( v83 == v85 + 8 )
                  goto LABEL_123;
                goto LABEL_113;
              }
              v87 = *((_DWORD *)v85 - 2);
              v88 = 16LL * (v87 & v109);
              v89 = &v113[v88];
              if ( v78 == v88 )
              {
LABEL_147:
                if ( v113 == v89 )
                {
LABEL_169:
                  v115 = v83;
                  v111 = v85;
                  v110 = v84;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v90 = v113;
                while ( *((_DWORD *)v90 + 1) )
                {
                  v90 += 16;
                  if ( v89 == v90 )
                    goto LABEL_169;
                }
                *(_DWORD *)v90 = v87;
                *((_DWORD *)v90 + 1) = 2;
                if ( v85 == v90 + 8 )
                  goto LABEL_112;
                v91 = *((_QWORD *)v90 + 1);
                if ( v91 )
                  goto LABEL_121;
              }
              else
              {
                v90 = &v113[v88];
                while ( *((_DWORD *)v90 + 1) )
                {
                  v90 += 16;
                  if ( v84 == v90 )
                    goto LABEL_147;
                }
                *(_DWORD *)v90 = v87;
                *((_DWORD *)v90 + 1) = 2;
                if ( v85 == v90 + 8 )
                  goto LABEL_112;
                v91 = *((_QWORD *)v90 + 1);
                if ( v91 )
                {
LABEL_121:
                  v117 = v83;
                  v115 = v85;
                  v111 = v84;
                  v110 = v90;
                  sub_186B220((void *)(v91 - 8));
                  v83 = v117;
                  v85 = v115;
                  v84 = v111;
                  v90 = v110;
                }
              }
              *((_QWORD *)v90 + 1) = 0;
              *((_QWORD *)v90 + 1) = *(_QWORD *)v85;
              v86 = v85 + 16;
              v92 = v85 + 8;
              *((_QWORD *)v92 - 1) = 0;
              if ( v83 == v92 )
              {
LABEL_123:
                v82 = *(unsigned int *)(v104 + 48);
                v83 = *(char **)(v104 + 40);
                goto LABEL_124;
              }
LABEL_113:
              v85 = v86;
            }
          }
LABEL_72:
          if ( *((_DWORD *)v28 - 1) )
          {
            while ( 1 )
            {
              v66 = *((_DWORD *)v20 - 1);
              if ( v66 == *((_DWORD *)v20 - 2) )
              {
                v67 = (3 * v66 + 1) >> 1;
                v68 = 8 * v67 + 8;
                if ( 8 * v66 + 8 >= (unsigned int)v68 || v66 >= v67 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v119, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v119);
                  sub_233E40((__int64)v119);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                LODWORD(v106) = (3 * v66 + 1) >> 1;
                v69 = sub_186B300(v20 - 1, v68);
                v20 = (_QWORD *)(v69 + 8);
                *(_DWORD *)v69 = v106;
                LODWORD(v69) = *(_DWORD *)(v69 + 4);
                v65 = &v20[(unsigned int)v69];
                v28 = *(_QWORD **)(v19 + 8);
                v64 = v69 + 1;
              }
              else
              {
                v63 = v66;
                v64 = v66 + 1;
                v65 = &v20[v63];
              }
LABEL_75:
              ++v27;
              *v65 = *v29;
              *((_DWORD *)v20 - 1) = v64;
              if ( !v28 || v27 >= *((_DWORD *)v28 - 1) )
                break;
              v29 = &v28[v27];
            }
          }
          goto LABEL_36;
        }
        v28 = *(_QWORD **)(v19 + 8);
        v29 = v28;
        if ( !v28 )
        {
          v118 = nullptr;
          v30 = 0;
          goto LABEL_37;
        }
LABEL_71:
        v27 = 0;
        goto LABEL_72;
      }
      if ( v23 && *((_DWORD *)v23 - 1) )
      {
        v57 = (_QWORD *)sub_186B270(0x18u);
        v58 = v23;
        v59 = 0;
        *v57 = 2;
        v20 = v57 + 1;
        v60 = v57 + 1;
        v23 = *(_QWORD **)(v105 + 8);
        for ( j = 1; ; j = v98 + 1 )
        {
          *v60 = *v58;
          *((_DWORD *)v20 - 1) = j;
          if ( !v23 )
            break;
          if ( ++v59 >= *((_DWORD *)v23 - 1) )
            break;
          while ( 1 )
          {
            v58 = &v23[v59];
LABEL_68:
            v62 = *((_DWORD *)v20 - 1);
            if ( v62 == *((_DWORD *)v20 - 2) )
              break;
            ++v59;
            v20[v62] = *v58;
            *((_DWORD *)v20 - 1) = v62 + 1;
            if ( v59 >= *((_DWORD *)v23 - 1) )
              goto LABEL_70;
          }
          v96 = (3 * v62 + 1) >> 1;
          v97 = 8 * v96 + 8;
          if ( 8 * v62 + 8 >= (unsigned int)v97 || v62 >= v96 )
          {
            v103 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v119, "Overflow encountered when expanding vector");
            *v103 = (char *)off_1C63128;
            sub_2333C0(v103 + 1, v119);
            sub_233E40((__int64)v119);
            __cxa_throw(v103, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v106) = (3 * v62 + 1) >> 1;
          v98 = sub_186B300(v20 - 1, v97);
          v99 = v105;
          v20 = (_QWORD *)(v98 + 8);
          *(_DWORD *)v98 = v106;
          v23 = *(_QWORD **)(v99 + 8);
          LODWORD(v98) = *(_DWORD *)(v98 + 4);
          v60 = &v20[(unsigned int)v98];
        }
LABEL_70:
        v28 = *(_QWORD **)(v19 + 8);
        v29 = v28;
        if ( !v28 )
          goto LABEL_36;
        goto LABEL_71;
      }
      v29 = *(_QWORD **)(v19 + 8);
      if ( v29 && *((_DWORD *)v29 - 1) )
      {
        v100 = (_QWORD *)sub_186B270(0x18u);
        v28 = *(_QWORD **)(v19 + 8);
        v27 = 0;
        *v100 = 2;
        v20 = v100 + 1;
        v64 = 1;
        v65 = v20;
        goto LABEL_75;
      }
      v118 = nullptr;
      v34 = nullptr;
      v36 = *(_DWORD *)(v104 + 48);
      v37 = 2 * v36;
      v70 = 4 * (*(_DWORD *)(v104 + 52) + *(_DWORD *)(v104 + 56));
      LODWORD(v106) = 2 * v36;
      if ( 3 * v36 < v70 )
        goto LABEL_108;
LABEL_83:
      v45 = 778;
      v107 = v36;
      v109 = v36 - 1;
LABEL_44:
      v46 = *(_QWORD *)(v104 + 40);
      v47 = 16LL * (v45 & v109);
      v48 = v46 + v47;
      if ( v47 != 16 * v107 )
      {
        v49 = v46 + v47;
        v50 = 0;
        while ( 1 )
        {
          v51 = *(_DWORD *)(v49 + 4);
          if ( v51 == 2 )
          {
            if ( *(_DWORD *)v49 == v45 )
            {
              v52 = *(_QWORD **)(v49 + 8);
              if ( v52 )
              {
                v53 = *((unsigned int *)v52 - 1);
                if ( v34 )
                {
                  if ( (_DWORD)v53 == *((_DWORD *)v34 - 1) )
                  {
                    v54 = &v52[v53];
                    if ( v52 == v54 )
                    {
LABEL_58:
                      if ( &v118 != (_QWORD **)(v49 + 8) )
                        goto LABEL_59;
LABEL_140:
                      *(_DWORD *)(v49 + 4) = 2;
                      goto LABEL_136;
                    }
                    v55 = v34;
                    v56 = *(_QWORD **)(v49 + 8);
                    while ( *v56 == *v55 )
                    {
                      ++v56;
                      ++v55;
                      if ( v54 == v56 )
                        goto LABEL_58;
                    }
                  }
                }
                else if ( !(_DWORD)v53 )
                {
                  if ( &v118 == (_QWORD **)(v49 + 8) )
                    goto LABEL_61;
LABEL_59:
                  sub_186B220(v52 - 1);
                  goto LABEL_60;
                }
              }
              else
              {
                if ( !v34 )
                {
                  if ( &v118 == (_QWORD **)(v49 + 8) )
                    goto LABEL_61;
                  goto LABEL_60;
                }
                if ( !*((_DWORD *)v34 - 1) )
                {
                  if ( &v118 == (_QWORD **)(v49 + 8) )
                    goto LABEL_140;
LABEL_60:
                  *(_QWORD *)(v49 + 8) = v34;
LABEL_61:
                  *(_DWORD *)(v49 + 4) = 2;
                  goto LABEL_24;
                }
              }
            }
          }
          else
          {
            if ( !v51 )
            {
              if ( v50 )
              {
                --*(_DWORD *)(v104 + 56);
                if ( &v118 == (_QWORD **)(v50 + 8) )
                  goto LABEL_171;
              }
              else
              {
                v50 = v49;
                if ( &v118 == (_QWORD **)(v49 + 8) )
                  goto LABEL_171;
              }
              v77 = *(_QWORD *)(v50 + 8);
              if ( v77 )
                goto LABEL_106;
              goto LABEL_107;
            }
            v50 = v49;
          }
          v49 += 16;
          if ( v46 + 16 * v107 == v49 )
            goto LABEL_85;
        }
      }
      v50 = 0;
LABEL_85:
      if ( v46 == v48 )
      {
LABEL_134:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v71 = *(_DWORD *)(v46 + 4);
        if ( v71 != 2 )
          break;
        if ( *(_DWORD *)v46 == v45 )
        {
          v72 = *(_QWORD **)(v46 + 8);
          if ( v72 )
          {
            v73 = *((unsigned int *)v72 - 1);
            if ( v34 )
            {
              if ( (_DWORD)v73 == *((_DWORD *)v34 - 1) )
              {
                v74 = &v72[v73];
                if ( v72 == v74 )
                {
LABEL_99:
                  if ( &v118 != (_QWORD **)(v46 + 8) )
                    goto LABEL_100;
LABEL_162:
                  *(_DWORD *)(v46 + 4) = 2;
LABEL_136:
                  sub_186B220(v34 - 1);
                  goto LABEL_24;
                }
                v75 = v34;
                v76 = *(_QWORD **)(v46 + 8);
                while ( *v76 == *v75 )
                {
                  ++v76;
                  ++v75;
                  if ( v74 == v76 )
                    goto LABEL_99;
                }
              }
            }
            else if ( !(_DWORD)v73 )
            {
              if ( &v118 == (_QWORD **)(v46 + 8) )
                goto LABEL_102;
LABEL_100:
              sub_186B220(v72 - 1);
              goto LABEL_101;
            }
          }
          else
          {
            if ( !v34 )
            {
              if ( &v118 == (_QWORD **)(v46 + 8) )
                goto LABEL_102;
              goto LABEL_101;
            }
            if ( !*((_DWORD *)v34 - 1) )
            {
              if ( &v118 == (_QWORD **)(v46 + 8) )
                goto LABEL_162;
LABEL_101:
              *(_QWORD *)(v46 + 8) = v34;
LABEL_102:
              *(_DWORD *)(v46 + 4) = 2;
              goto LABEL_24;
            }
          }
        }
LABEL_89:
        v46 += 16;
        if ( v48 == v46 )
          goto LABEL_134;
      }
      if ( v71 )
      {
        v50 = v46;
        goto LABEL_89;
      }
      if ( v50 )
        --*(_DWORD *)(v104 + 56);
      else
        v50 = v46;
      if ( &v118 != (_QWORD **)(v50 + 8) )
      {
        v77 = *(_QWORD *)(v50 + 8);
        if ( v77 )
        {
LABEL_106:
          LODWORD(v107) = v45;
          v106 = v50;
          sub_186B220((void *)(v77 - 8));
          v45 = v107;
          v50 = v106;
        }
LABEL_107:
        *(_QWORD *)(v50 + 8) = v34;
        *(_DWORD *)(v50 + 4) = 2;
        *(_DWORD *)v50 = v45;
        ++*(_DWORD *)(v104 + 52);
        goto LABEL_24;
      }
LABEL_171:
      *(_DWORD *)(v50 + 4) = 2;
      *(_DWORD *)v50 = v45;
      ++*(_DWORD *)(v104 + 52);
      if ( v34 )
        goto LABEL_136;
LABEL_24:
      while ( 1 )
      {
        v19 += 16;
        if ( i == v19 )
          break;
        if ( *(_DWORD *)(v19 + 4) == 2 )
          goto LABEL_17;
      }
    }
    while ( v112 != v19 );
LABEL_26:
    v26 = v105 + 16;
    if ( v114 != v105 + 16 )
    {
      while ( *(_DWORD *)(v26 + 4) != 2 )
      {
        v26 += 16;
        if ( v114 == v26 )
          goto LABEL_185;
      }
      v105 = v26;
      if ( v26 != v114 )
      {
        v19 = *(_QWORD *)(v116 + 40);
        v18 = *(unsigned int *)(v116 + 48);
        continue;
      }
    }
    break;
  }
LABEL_185:
  if ( v20 )
    sub_186B220(v20 - 1);
  return v104;
}

