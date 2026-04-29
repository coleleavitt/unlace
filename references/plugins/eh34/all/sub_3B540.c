__m128i *__fastcall sub_3B540(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // eax
  __int64 v6; // r15
  unsigned int v7; // ebx
  const __m128i *v8; // r13
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rax
  void (__fastcall *v17)(__int64, __int64); // rax
  __int64 *v18; // rax
  __int64 *v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // rax
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // rbx
  void (__fastcall *v31)(__int64, __int64, __int64 *); // rax
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 *v36; // rdi
  void (__fastcall *v37)(__int64, __m256i *); // rax
  __m256i *v38; // rax
  __int64 *v40; // rbx
  __m256i *v41; // r15
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // r12
  void (__fastcall *hexdsp)(__int64, __int64, const char *); // rax
  const char *v47; // r13
  size_t v48; // rax
  __int64 v49; // r14
  size_t v50; // r12
  __int64 v51; // rdx
  __int64 v52; // r14
  __int64 v53; // rdi
  void (__fastcall *v54)(__int64, __int64); // rax
  __m256i *v55; // rcx
  __int64 v56; // r11
  _BYTE *v57; // rax
  __int64 v58; // rdi
  int v59; // eax
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 *v62; // rax
  unsigned __int64 v63; // rdx
  __m256i *v64; // r8
  bool v65; // dl
  __int64 v66; // rax
  __m256i *v67; // rdx
  __m128i v68; // xmm0
  __int64 v69; // rax
  __m128i v70; // xmm2
  __m128i v71; // xmm0
  unsigned __int64 v72; // rdx
  __int64 v73; // r15
  __int64 (__fastcall *v74)(__int64, __int64); // rax
  int v75; // eax
  __m128i v76; // xmm0
  __int64 v77; // rax
  __m256i *v78; // rcx
  __int64 v79; // rax
  __m128i *v80; // rdx
  __m128i v81; // xmm0
  bool v82; // cf
  void (__fastcall *v83)(__int64, __int64); // rax
  __int64 v84; // rax
  __m256i *v85; // rcx
  __m128i v86; // xmm0
  __int64 v87; // rax
  __m128i *v88; // rdx
  __m128i v89; // xmm1
  __int64 v90; // r15
  __int64 (__fastcall *v91)(__int64, __int64); // rax
  int v92; // eax
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // r12
  __int64 (__fastcall *v96)(__int64, __int64); // rax
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // r15
  __int64 (__fastcall *v100)(__int64, __int64); // rax
  int v101; // eax
  __m128i v102; // xmm0
  __int32 v103; // [rsp+Ch] [rbp-154h]
  __m256i *v104; // [rsp+10h] [rbp-150h]
  __m128i *v105; // [rsp+18h] [rbp-148h]
  __m128i v106; // [rsp+20h] [rbp-140h] BYREF
  const char *v107; // [rsp+30h] [rbp-130h]
  __m128i *v108; // [rsp+38h] [rbp-128h]
  __int64 *v109; // [rsp+40h] [rbp-120h]
  __m256i *v110; // [rsp+48h] [rbp-118h]
  __int64 v111; // [rsp+50h] [rbp-110h] BYREF
  __int64 v112; // [rsp+58h] [rbp-108h] BYREF
  __int64 v113; // [rsp+60h] [rbp-100h] BYREF
  __int128 v114; // [rsp+68h] [rbp-F8h]
  const __m128i *v115; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v116; // [rsp+88h] [rbp-D8h]
  __int64 v117; // [rsp+A0h] [rbp-C0h] BYREF
  __m128 v118; // [rsp+A8h] [rbp-B8h]
  const __m128i *v119; // [rsp+C0h] [rbp-A0h] BYREF
  __m128i v120; // [rsp+C8h] [rbp-98h] BYREF
  char v121; // [rsp+D8h] [rbp-88h]
  const __m128i *v122; // [rsp+E0h] [rbp-80h] BYREF
  __m128i v123; // [rsp+E8h] [rbp-78h] BYREF
  char v124; // [rsp+F8h] [rbp-68h]
  __m256i v125; // [rsp+100h] [rbp-60h] BYREF
  unsigned __int64 v126; // [rsp+128h] [rbp-38h]

  v105 = (__m128i *)a1;
  v4 = *(_DWORD *)(a3 + 64);
  v109 = (__int64 *)a2;
  v126 = __readfsqword(0x28u);
  v114 = 0;
  v113 = 0;
  v115 = nullptr;
  v116 = 0;
  if ( (int)(v4 - 1) > 1 )
  {
    v6 = 8;
    v7 = 1;
    v108 = (__m128i *)(v109 + 236);
    while ( 1 )
    {
      v8 = *(const __m128i **)(*(_QWORD *)(a3 + 528) + v6);
      if ( v8[4].m128i_i32[3] != 2 )
        goto LABEL_3;
      v3 = v8[3].m128i_i64[1];
      if ( !v3 || *(_DWORD *)v3 != 56 || *(_BYTE *)(v3 + 32) != 6 )
        goto LABEL_3;
      v9 = *(_QWORD *)(v3 + 40);
      v10 = (_QWORD *)v109[237];
      if ( v10 )
      {
        v11 = (unsigned __int64)v108;
        do
        {
          while ( 1 )
          {
            a2 = v10[2];
            v12 = v10[3];
            if ( v10[4] < v9 )
              break;
            v11 = (unsigned __int64)v10;
            v10 = (_QWORD *)v10[2];
            if ( !a2 )
              goto LABEL_14;
          }
          v10 = (_QWORD *)v10[3];
        }
        while ( v12 );
LABEL_14:
        if ( v108 != (__m128i *)v11 && v9 >= *(_QWORD *)(v11 + 32) )
          goto LABEL_16;
      }
      v110 = *(__m256i **)(v3 + 40);
      a1 = (const __m128i *)&v125;
      a2 = *v109 + 32;
      (**(void (__fastcall ***)(__m256i *, __int64, unsigned __int64))a2)(&v125, a2, v9);
      v55 = v110;
      v56 = v125.m256i_i64[0];
      if ( v125.m256i_i64[1] )
      {
        if ( v125.m256i_i32[2] - 1 > 16 )
        {
          LODWORD(v110) = 0;
          if ( *(_BYTE *)v125.m256i_i64[0] == 106 )
            LODWORD(v110) = 2 * (*(_BYTE *)(v125.m256i_i64[0] + 1) == 95);
          LODWORD(a2) = (_DWORD)v110;
          v57 = (_BYTE *)(v125.m256i_i64[0] + (int)v110);
          do
          {
            if ( *v57 != 95 )
              break;
            LODWORD(a2) = a2 + 1;
            ++v57;
          }
          while ( v125.m256i_i32[2] - 1 > (int)a2 );
          LODWORD(v110) = a2;
          a2 = (unsigned int)a2;
          v103 = v125.m256i_i32[2] - 1;
          v104 = v55;
          v107 = (const char *)(v125.m256i_i64[1] - 1);
          if ( v125.m256i_i32[2] - 1 - (int)a2 > 16 )
          {
            v58 = (int)a2;
            a2 = (__int64)"CxxThrowException";
            v106.m128i_i64[0] = v125.m256i_i64[0];
            a1 = (const __m128i *)(v125.m256i_i64[0] + v58);
            v59 = strncmp(a1->m128i_i8, "CxxThrowException", 0x11u);
            v56 = v106.m128i_i64[0];
            if ( !v59 )
            {
              a2 = (unsigned int)v110;
              v61 = (unsigned __int64)v104;
              if ( (_DWORD)v107 == (_DWORD)v110 + 17 )
                goto LABEL_95;
              if ( *(_BYTE *)(v106.m128i_i64[0] + (int)v110 + 17) == 95 )
                break;
            }
          }
        }
      }
LABEL_107:
      if ( !v56 )
        goto LABEL_115;
      a1 = (const __m128i *)v56;
      v125.m256i_i64[1] = 0;
      qfree(v56);
      v4 = *(_DWORD *)(a3 + 64);
LABEL_3:
      if ( (int)(v4 - 1) <= (int)++v7 )
      {
        v40 = (__int64 *)v115;
        v106.m128i_i64[0] = (__int64)v115[v116].m128i_i64;
        if ( (const __m128i *)v106.m128i_i64[0] != v115 )
        {
          v107 = "__eh34_throw";
          do
          {
            v44 = v40[1];
            v45 = *v40 + 32;
            hexdsp = (void (__fastcall *)(__int64, __int64, const char *))get_hexdsp(a1, a2);
            hexdsp(289, v45, v107);
            v47 = s1;
            if ( *(_QWORD *)(v44 + 8) )
              v47 = *(const char **)v44;
            memset(&v125, 0, 24);
            if ( v47 )
            {
              v48 = strlen(v47);
              v49 = v48 + 1;
              v50 = v48;
              v110 = &v125;
              v125.m256i_i64[0] = qvector_reserve(&v125, 0, v48 + 1, 1);
              v125.m256i_i64[1] = v49;
              memmove((void *)v125.m256i_i64[0], v47, v50);
              *(_BYTE *)(v125.m256i_i64[0] + v50) = 0;
            }
            else
            {
              v110 = &v125;
            }
            v108 = (__m128i *)&v122;
            sub_6E690(&v122, v110);
            if ( v125.m256i_i64[0] )
            {
              v125.m256i_i64[1] = 0;
              qfree(v125.m256i_i64[0]);
            }
            v111 = 0;
            if ( v123.m128i_i8[0] )
              copy_tinfo_t(&v111, v108);
            else
              get_stock_tinfo(&v111, 7);
            v112 = 0;
            v117 = 0;
            v119 = nullptr;
            *(_OWORD *)v125.m256i_i8 = 0;
            copy_tinfo_t(&v125.m256i_u64[1], &v119);
            v125.m256i_i64[2] = 0;
            v109 = &v125.m256i_i64[2];
            copy_tinfo_t(&v125.m256i_u64[2], &v117);
            v125.m256i_i32[6] = 0;
            v125.m256i_i16[14] = 0;
            clear_tinfo_t(&v119);
            clear_tinfo_t(&v117);
            copy_tinfo_t(v110, &v111);
            v41 = v110;
            create_tinfo(&v112, 10, 10, v110);
            clear_tinfo_t(v109);
            clear_tinfo_t(&v125.m256i_u64[1]);
            clear_tinfo_t(v41);
            a2 = (__int64)&v112;
            copy_tinfo_t(*(_QWORD *)(*(_QWORD *)(*v40 + 72) + 24LL) + 24LL, &v112);
            v42 = *(_QWORD *)(*v40 + 72);
            v43 = *(_QWORD *)(v42 + 32);
            if ( v43 )
            {
              v51 = v43 - 1;
              *(_QWORD *)(v42 + 32) = v51;
              v52 = *(_QWORD *)(v42 + 24) + 80 * v51;
              cleanup_argloc(v52 + 56);
              v53 = *(_QWORD *)(v52 + 32);
              if ( v53 )
              {
                *(_QWORD *)(v52 + 40) = 0;
                qfree(v53);
              }
              clear_tinfo_t(v52 + 24);
              v54 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v52 + 24, &v112);
              a2 = v52;
              v54(276, v52);
              v42 = *(_QWORD *)(*v40 + 72);
            }
            *(_DWORD *)(v42 + 8) = 1;
            clear_tinfo_t(&v112);
            a1 = (const __m128i *)&v111;
            clear_tinfo_t(&v111);
            if ( v123.m128i_i8[0] )
            {
              a1 = v108;
              v123.m128i_i8[0] = 0;
              clear_tinfo_t(v108);
            }
            v40 += 2;
          }
          while ( (__int64 *)v106.m128i_i64[0] != v40 );
        }
        v28 = v113 + 8 * v114;
        if ( v113 != v28 )
        {
          v110 = (__m256i *)v113;
          v109 = (__int64 *)"__eh34_throw";
          do
          {
            v29 = v110->m256i_i64[0];
            v30 = v110->m256i_i64[0] + 32;
            v31 = (void (__fastcall *)(__int64, __int64, __int64 *))get_hexdsp(a1, a2);
            a2 = v30;
            v31(289, v30, v109);
            v32 = *(_QWORD *)(v29 + 72);
            a1 = *(const __m128i **)(v32 + 24);
            if ( a1 )
            {
              v33 = *(_QWORD *)(v32 + 32);
              if ( v33 )
              {
                v34 = 0;
                v108 = (__m128i *)v110;
                do
                {
                  v110 = (__m256i *)&a1[5 * v34];
                  cleanup_argloc(&v110[1].m256i_u64[3]);
                  v35 = v110[1].m256i_i64[0];
                  if ( v35 )
                  {
                    v110[1].m256i_i64[1] = 0;
                    qfree(v35);
                  }
                  ++v34;
                  v36 = &v110->m256i_i64[3];
                  clear_tinfo_t(&v110->m256i_u64[3]);
                  v37 = (void (__fastcall *)(__int64, __m256i *))get_hexdsp(v36, a2);
                  a2 = (__int64)v110;
                  v37(276, v110);
                  a1 = *(const __m128i **)(v32 + 24);
                }
                while ( v33 != v34 );
                v110 = (__m256i *)v108;
              }
              *(_QWORD *)(v32 + 32) = 0;
              qfree(a1);
              *(_QWORD *)(v32 + 24) = 0;
              *(_QWORD *)(v32 + 40) = 0;
              v32 = *(_QWORD *)(v29 + 72);
            }
            v110 = (__m256i *)((char *)v110 + 8);
            v38 = v110;
            *(_DWORD *)(v32 + 8) = 0;
          }
          while ( (__m256i *)v28 != v38 );
        }
        goto LABEL_56;
      }
      v6 += 8;
      if ( v7 >= v4 )
      {
        if ( under_debugger )
          BUG();
        interr(52719);
        goto LABEL_154;
      }
    }
    a2 = (unsigned int)((_DWORD)v110 + 18);
    v60 = v106.m128i_i64[0] + (int)v110 + 18;
    while ( v103 > (int)a2 )
    {
      ++v60;
      a2 = (unsigned int)(a2 + 1);
      if ( (unsigned int)(*(char *)(v60 - 1) - 48) > 9 )
        goto LABEL_107;
    }
LABEL_95:
    v110 = (__m256i *)v109[237];
    if ( !v110 )
    {
      v11 = (unsigned __int64)v108;
      if ( v108 != (__m128i *)v109[238] )
      {
        v110 = v104;
        v98 = std::_Rb_tree_decrement(v108, a2, v60, v104, v107);
        v61 = (unsigned __int64)v110;
        if ( *(_QWORD *)(v98 + 32) >= (unsigned __int64)v110 )
        {
          v56 = v106.m128i_i64[0];
          goto LABEL_105;
        }
      }
LABEL_154:
      v65 = 1;
      v110 = (__m256i *)v108;
LABEL_104:
      LOBYTE(v107) = v65;
      v106.m128i_i64[0] = v61;
      v66 = operator new(0x28u);
      v11 = (unsigned __int8)v107;
      a2 = v66;
      v67 = v110;
      *(_QWORD *)(v66 + 32) = v106.m128i_i64[0];
      std::_Rb_tree_insert_and_rebalance(v11, v66, v67, v108);
      v56 = v125.m256i_i64[0];
      ++v109[240];
      goto LABEL_105;
    }
    v62 = (__int64 *)v110;
    do
    {
      v63 = v62[4];
      v11 = v62[2];
      v64 = (__m256i *)v62;
      a2 = 0;
      v62 = (__int64 *)v62[3];
      if ( (unsigned __int64)v104 < v63 )
      {
        v62 = (__int64 *)v11;
        a2 = 1;
      }
    }
    while ( v62 );
    v110 = v64;
    if ( (_BYTE)a2 )
    {
      a2 = (__int64)v109;
      if ( v64 == (__m256i *)v109[238] )
      {
LABEL_102:
        v65 = 1;
        if ( v110 != (__m256i *)v108 )
          v65 = v61 < v110[1].m256i_i64[0];
        goto LABEL_104;
      }
      v11 = (unsigned __int64)v64;
      v107 = (const char *)v104;
      v84 = std::_Rb_tree_decrement(v64, v109, v63, v104, v64);
      v56 = v106.m128i_i64[0];
      v61 = (unsigned __int64)v107;
      v63 = *(_QWORD *)(v84 + 32);
    }
    if ( v63 < v61 )
      goto LABEL_102;
LABEL_105:
    if ( v56 )
    {
      v11 = v56;
      v125.m256i_i64[1] = 0;
      qfree(v56);
    }
LABEL_16:
    v13 = *(_QWORD *)(v3 + 72);
    v110 = *(__m256i **)(v13 + 32);
    if ( v110 != (__m256i *)((char *)&dword_0 + 2) )
    {
      v95 = v109[1];
      v96 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v11, a2);
      v97 = v96(338, v3);
      sub_64B50(
        (unsigned int)&v125,
        v95,
        (unsigned int)"create_throw_helper_calls(%a[%d]): call %s has %d args",
        v8[2].m128i_i64[0],
        v7,
        v97);
      goto LABEL_120;
    }
    v14 = *(_QWORD *)(v13 + 24);
    if ( *(_DWORD *)(v14 + 84) != 8 )
    {
      v99 = v109[1];
      v100 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v11, a2);
      v101 = v100(338, v3);
      sub_64B50(
        (unsigned int)&v125,
        v99,
        (unsigned int)"create_throw_helper_calls(%a[%d]): call %s bad arg1",
        v8[2].m128i_i64[0],
        v7,
        v101);
      goto LABEL_120;
    }
    v15 = *(_BYTE *)(v14 + 80);
    if ( v15 == 2 )
    {
      v110 = *(__m256i **)(*(_QWORD *)(v14 + 88) + 16LL);
      if ( !v110 )
      {
        if ( (*(_QWORD *)v14 & 0xFFFFFFFF000000FFLL) != 0x800000002LL || *(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL) )
        {
          v73 = v109[1];
          v74 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v11, a2);
          v75 = v74(338, v3);
          sub_64B50(
            (unsigned int)&v125,
            v73,
            (unsigned int)"create_throw_helper_calls(%a[%d]):  call %s bad numeric arg0",
            v8[2].m128i_i64[0],
            v7,
            v75);
LABEL_120:
          v105->m128i_i64[0] = v125.m256i_i64[0];
          v76 = _mm_loadu_si128((const __m128i *)&v125.m256i_u64[1]);
          v105[1].m128i_i8[8] = 1;
          *(__m128i *)((char *)v105 + 8) = v76;
          goto LABEL_57;
        }
        v93 = v114;
        v94 = v113;
        if ( *((_QWORD *)&v114 + 1) < (unsigned __int64)(v114 + 1) )
        {
          v11 = (unsigned __int64)&v113;
          v113 = qvector_reserve(&v113, v113, v114 + 1, 8);
          v94 = v113;
          v93 = v114;
        }
        *(_QWORD *)(v94 + 8 * v93) = v3;
        *(_QWORD *)&v114 = v114 + 1;
        v83 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v11, v94);
        goto LABEL_132;
      }
    }
    else
    {
      if ( v15 != 10 )
      {
        v83 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v11, a2);
LABEL_132:
        a2 = v3;
        a1 = (const __m128i *)(&qword_150 + 2);
        v83(338, v3);
        v4 = *(_DWORD *)(a3 + 64);
        goto LABEL_3;
      }
      v16 = *(_QWORD *)(v14 + 88);
      if ( *(_BYTE *)v16 != 6 )
      {
        v90 = v109[1];
        v91 = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(v11, a2);
        v92 = v91(338, v3);
        sub_64B50(
          (unsigned int)&v125,
          v90,
          (unsigned int)"create_throw_helper_calls(%a[%d]): call %s bad mop_addr",
          v8[2].m128i_i64[0],
          v7,
          v92);
        goto LABEL_120;
      }
      v110 = *(__m256i **)(v16 + 8);
    }
    v17 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v11, a2);
    v17(338, v3);
    v18 = (__int64 *)v109[243];
    if ( !v18 )
      goto LABEL_29;
    a1 = (const __m128i *)v110;
    v19 = v109 + 242;
    do
    {
      while ( 1 )
      {
        v20 = v18[2];
        v21 = v18[3];
        if ( v18[4] < (unsigned __int64)v110 )
          break;
        v19 = v18;
        v18 = (__int64 *)v18[2];
        if ( !v20 )
          goto LABEL_27;
      }
      v18 = (__int64 *)v18[3];
    }
    while ( v21 );
LABEL_27:
    if ( v19 != v109 + 242 && (unsigned __int64)v110 >= v19[4] )
    {
      v110 = &v125;
    }
    else
    {
LABEL_29:
      v8 = (const __m128i *)&v117;
      v106.m128i_i64[0] = (__int64)(v109 + 242);
      v22 = v109[2];
      v117 = *(_QWORD *)(v22 + 88);
      v118 = _mm_loadh_ps((const double *)(v22 + 104));
      sub_5EF00(&v119, &v117);
      if ( v121 )
      {
        v102 = _mm_loadu_si128(&v120);
        v105->m128i_i64[0] = (__int64)v119;
        v105[1].m128i_i8[8] = 1;
        *(__m128i *)((char *)v105 + 8) = v102;
        goto LABEL_57;
      }
      a2 = (__int64)v119;
      a1 = (const __m128i *)&v122;
      sub_6E8E0(&v122, v119);
      if ( !v124 )
      {
        if ( v121 )
        {
          a1 = v119;
          if ( v119 )
          {
            v120.m128i_i64[0] = 0;
            qfree(v119);
            v4 = *(_DWORD *)(a3 + 64);
            goto LABEL_3;
          }
        }
        goto LABEL_115;
      }
      v23 = _mm_loadu_si128(&v123);
      v19 = (__int64 *)v106.m128i_i64[0];
      a1 = v122;
      v122 = nullptr;
      v24 = (__int64 *)v109[243];
      *(__m128i *)&v125.m256i_u64[2] = v23;
      v125.m256i_i64[0] = (__int64)v110;
      v123 = 0;
      if ( !v24 )
        goto LABEL_38;
      do
      {
        while ( 1 )
        {
          v25 = v24[2];
          v26 = v24[3];
          if ( v24[4] < (unsigned __int64)v110 )
            break;
          v19 = v24;
          v24 = (__int64 *)v24[2];
          if ( !v25 )
            goto LABEL_36;
        }
        v24 = (__int64 *)v24[3];
      }
      while ( v26 );
LABEL_36:
      if ( v19 != (__int64 *)v106.m128i_i64[0] && (unsigned __int64)v110 >= v19[4] )
      {
        v110 = &v125;
      }
      else
      {
LABEL_38:
        v125.m256i_i64[1] = (__int64)a1;
        v110 = &v125;
        v27 = sub_3B390(v109 + 241, v19, (const __m128i *)&v125);
        a1 = (const __m128i *)v125.m256i_i64[1];
        v19 = v27;
      }
      if ( a1 )
        qfree(a1);
      if ( v124 )
      {
        a1 = v122;
        v124 = 0;
        if ( v122 )
        {
          v123.m128i_i64[0] = 0;
          qfree(v122);
        }
      }
      if ( v121 )
      {
        a1 = v119;
        if ( v119 )
        {
          v120.m128i_i64[0] = 0;
          qfree(v119);
        }
      }
    }
    v68 = (__m128i)(unsigned __int64)v3;
    v69 = v116;
    a2 = (__int64)v110;
    v70 = (__m128i)(unsigned __int64)(v19 + 5);
    v8 = v115;
    v3 = *((_QWORD *)&v116 + 1);
    v71 = _mm_unpacklo_epi64(v68, v70);
    v72 = v116 + 1;
    *(__m128i *)v125.m256i_i8 = v71;
    if ( v110 >= (__m256i *)v115 && v110 < (__m256i *)&v115[*((_QWORD *)&v116 + 1)] )
    {
      if ( *((_QWORD *)&v116 + 1) < v72 )
      {
        a2 = 0;
        v106 = v71;
        v8 = (const __m128i *)qvector_reserve(&v115, 0, v72, 16);
        v85 = *((__m256i **)&v116 + 1);
        *((_QWORD *)&v116 + 1) = v3;
        a1 = v115;
        v86 = _mm_load_si128(&v106);
        v87 = v116 - 1;
        v110 = v85;
        if ( (__int64)v116 - 1 >= 0 )
        {
          v88 = (__m128i *)v8;
          do
          {
            v89 = _mm_loadu_si128(a1);
            ++v88;
            ++a1;
            v88[-1] = v89;
            v82 = v87-- == 0;
          }
          while ( !v82 );
          v110 = v85;
          a1 = v115;
        }
        v106 = v86;
        qfree(a1);
        v115 = v8;
        v71 = _mm_load_si128(&v106);
        *((_QWORD *)&v116 + 1) = v110;
        v69 = v116;
      }
      v8[v69] = v71;
    }
    else
    {
      if ( *((_QWORD *)&v116 + 1) < v72 )
      {
        a2 = 0;
        v77 = qvector_reserve(&v115, 0, v72, 16);
        v78 = *((__m256i **)&v116 + 1);
        v8 = (const __m128i *)v77;
        *((_QWORD *)&v116 + 1) = v3;
        a1 = v115;
        v110 = v78;
        v79 = v116 - 1;
        if ( (__int64)v116 - 1 >= 0 )
        {
          v80 = (__m128i *)v8;
          do
          {
            v81 = _mm_loadu_si128(a1);
            ++v80;
            ++a1;
            v80[-1] = v81;
            v82 = v79-- == 0;
          }
          while ( !v82 );
          v110 = v78;
          a1 = v115;
        }
        qfree(a1);
        v115 = v8;
        *((_QWORD *)&v116 + 1) = v110;
        v69 = v116;
      }
      v8[v69] = _mm_load_si128((const __m128i *)&v125);
    }
    *(_QWORD *)&v116 = v116 + 1;
LABEL_115:
    v4 = *(_DWORD *)(a3 + 64);
    goto LABEL_3;
  }
LABEL_56:
  v105->m128i_i32[0] = 0;
  v105[1].m128i_i8[8] = 0;
LABEL_57:
  if ( v115 )
  {
    *(_QWORD *)&v116 = 0;
    qfree(v115);
  }
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113);
  }
  return v105;
}
