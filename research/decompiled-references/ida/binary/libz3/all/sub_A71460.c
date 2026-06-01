__int64 __fastcall sub_A71460(__int64 a1)
{
  char **v1; // rbp
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 *v16; // r14
  __int64 v17; // r15
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rcx
  __m128i *v24; // rbx
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __m128i *v27; // r13
  __m128i v28; // xmm0
  int v29; // esi
  __int64 v30; // r9
  __m128i *v31; // rdi
  __m128i *v32; // rax
  __m128i *v33; // r8
  __int64 *v34; // rdx
  __int64 *v35; // rax
  unsigned int v36; // r13d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rcx
  __int64 **v40; // rbx
  __int64 **v41; // r13
  __int64 *v42; // r12
  __int64 v43; // r14
  _DWORD *v44; // rax
  __int64 *v45; // rbx
  unsigned __int64 v46; // rbp
  __int64 v47; // rsi
  bool v48; // zf
  __int64 result; // rax
  __int64 v50; // r15
  __int64 v51; // r9
  __int64 *v52; // rdx
  __int64 v53; // rsi
  unsigned int v54; // r10d
  __int64 *v55; // rcx
  int v56; // edi
  __int64 v57; // r10
  __int64 *v58; // r8
  __int64 *v59; // rax
  __int64 v60; // r9
  _QWORD *v61; // r11
  __int64 v62; // rax
  _QWORD **v63; // rcx
  int v64; // r9d
  unsigned int v65; // edx
  _QWORD **v66; // rdi
  __int64 v67; // rdx
  _QWORD **v68; // r10
  _QWORD **v69; // rdx
  _QWORD *v70; // rax
  unsigned int v71; // ebx
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rcx
  __m128i *v75; // rax
  int v76; // r10d
  __m128i *v77; // r8
  const __m128i *v78; // rax
  __m128i *v79; // r11
  __int64 v80; // rdx
  __m128i *v81; // rsi
  __m128i *v82; // rdx
  __m128i v83; // xmm0
  _QWORD *v84; // rax
  _QWORD *v85; // rbx
  unsigned __int64 v86; // r13
  __int64 v87; // rsi
  int v88; // esi
  char *i; // rdx
  char *v90; // rcx
  __int64 v91; // rax
  char *v92; // rdi
  __int64 *v93; // rax
  char *v94; // r13
  char *v95; // rbx
  __int64 v96; // r15
  _QWORD *v97; // rdx
  unsigned int v98; // eax
  __int64 v99; // rcx
  int v100; // eax
  __int64 *v101; // rcx
  __int64 v102; // rax
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 *v105; // rcx
  int v106; // r8d
  unsigned int v107; // edx
  __int64 *v108; // rsi
  __int64 v109; // rdx
  __int64 *v110; // rdi
  __int64 *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  unsigned int v114; // ecx
  size_t v115; // rsi
  unsigned int *v116; // rax
  _DWORD *v117; // rdx
  _QWORD *v118; // rdx
  __int64 v119; // rax
  _QWORD *v120; // rax
  __m128i *v121; // [rsp+8h] [rbp-220h]
  __m128i *v122; // [rsp+10h] [rbp-218h]
  char *v123; // [rsp+18h] [rbp-210h]
  __int64 *v124; // [rsp+20h] [rbp-208h]
  size_t v125; // [rsp+30h] [rbp-1F8h]
  unsigned int v126; // [rsp+30h] [rbp-1F8h]
  unsigned int v127; // [rsp+30h] [rbp-1F8h]
  int v128; // [rsp+38h] [rbp-1F0h]
  size_t v129; // [rsp+38h] [rbp-1F0h]
  __int64 v130; // [rsp+38h] [rbp-1F0h]
  unsigned int v131; // [rsp+44h] [rbp-1E4h]
  int v132; // [rsp+50h] [rbp-1D8h]
  __int64 *v133; // [rsp+68h] [rbp-1C0h] BYREF
  __int64 v134; // [rsp+70h] [rbp-1B8h] BYREF
  __m128i *v135; // [rsp+78h] [rbp-1B0h] BYREF
  __int64 v136[2]; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v137; // [rsp+90h] [rbp-198h] BYREF
  _QWORD *v138; // [rsp+98h] [rbp-190h]
  char *v139; // [rsp+A0h] [rbp-188h] BYREF
  __int64 v140; // [rsp+A8h] [rbp-180h]
  int v141; // [rsp+B0h] [rbp-178h]
  __int64 v142[4]; // [rsp+C0h] [rbp-168h] BYREF
  void *ptr; // [rsp+E0h] [rbp-148h] BYREF
  __int64 v144; // [rsp+E8h] [rbp-140h]
  _BYTE v145[312]; // [rsp+F0h] [rbp-138h] BYREF

  v6 = (char *)sub_186B270(0x80u);
  *(_OWORD *)v6 = 0;
  v144 = 0x1000000000LL;
  v7 = *(_QWORD *)a1;
  ptr = v145;
  v137 = v7;
  *((_OWORD *)v6 + 1) = 0;
  *((_OWORD *)v6 + 2) = 0;
  *((_OWORD *)v6 + 3) = 0;
  *((_OWORD *)v6 + 4) = 0;
  *((_OWORD *)v6 + 5) = 0;
  *((_OWORD *)v6 + 6) = 0;
  *((_OWORD *)v6 + 7) = 0;
  v141 = 0;
  v134 = 0;
  v136[0] = a1;
  v136[1] = (__int64)&v134;
  v138 = nullptr;
  v139 = v6;
  v140 = 8;
  v133 = nullptr;
  sub_A6E9B0(a1, (__int64)&v139, &v133, &v134);
  v135 = nullptr;
  v123 = v139;
  v124 = v133;
  v131 = v140;
  sub_A70EC0(a1, &v133, (__int64)&v139, &v135);
  v122 = v135;
  if ( v135 )
  {
    v121 = &v135[v135[-1].m128i_u32[3]];
    if ( v121 != v135 )
    {
      v8 = v135;
      while ( 1 )
      {
        v16 = (__int64 *)v8->m128i_i64[1];
        if ( v8->m128i_i8[0] )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 48LL))(
                 *(_QWORD *)(a1 + 72),
                 v16[1]);
          v10 = v9;
          if ( v9 )
            ++*(_DWORD *)(v9 + 8);
          v11 = *(_QWORD **)(a1 + 64);
          if ( v11 )
          {
            v12 = *((_DWORD *)v11 - 1);
            if ( v12 == *((_DWORD *)v11 - 2) )
            {
              v36 = (3 * v12 + 1) >> 1;
              v37 = 8 * v36 + 8;
              if ( 8 * v12 + 8 >= (unsigned int)v37 || v12 >= v36 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v142, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v142);
                sub_233E40((__int64)v142);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v38 = (unsigned int *)sub_186B300(v11 - 1, v37);
              v39 = v38[1];
              v11 = v38 + 2;
              *v38 = v36;
              *(_QWORD *)(a1 + 64) = v38 + 2;
              LODWORD(v38) = v39;
              v15 = &v11[v39];
              v14 = (_DWORD)v38 + 1;
            }
            else
            {
              v13 = v12;
              v14 = v12 + 1;
              v15 = &v11[v13];
            }
          }
          else
          {
            v84 = (_QWORD *)sub_186B270(0x18u);
            v11 = v84 + 1;
            *v84 = 2;
            v14 = 1;
            *(_QWORD *)(a1 + 64) = v11;
            v15 = v11;
          }
          *v15 = v10;
          *((_DWORD *)v11 - 1) = v14;
          *(_QWORD *)(v8->m128i_i64[1] + 24) = v10;
          goto LABEL_10;
        }
        if ( !(unsigned __int8)sub_15D26C0(*(_QWORD *)a1, *v16) )
          break;
        v17 = *v16;
LABEL_14:
        sub_C05B20(*(_QWORD *)(a1 + 72));
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        v18 = *(_QWORD **)(a1 + 64);
        if ( v18 )
        {
          v19 = *((_DWORD *)v18 - 1);
          if ( v19 == *((_DWORD *)v18 - 2) )
          {
            v71 = (3 * v19 + 1) >> 1;
            v72 = 8 * v71 + 8;
            if ( 8 * v19 + 8 >= (unsigned int)v72 || v19 >= v71 )
            {
              v1 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v142, "Overflow encountered when expanding vector");
              *v1 = (char *)off_1C63128;
              sub_2333C0(v1 + 1, v142);
              sub_233E40((__int64)v142);
              __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v73 = (unsigned int *)sub_186B300(v18 - 1, v72);
            v74 = v73[1];
            v18 = v73 + 2;
            *v73 = v71;
            *(_QWORD *)(a1 + 64) = v73 + 2;
            LODWORD(v73) = v74;
            v22 = &v18[v74];
            v21 = (_DWORD)v73 + 1;
          }
          else
          {
            v20 = v19;
            v21 = v19 + 1;
            v22 = &v18[v20];
          }
        }
        else
        {
          v120 = (_QWORD *)sub_186B270(0x18u);
          v18 = v120 + 1;
          *v120 = 2;
          v21 = 1;
          *(_QWORD *)(a1 + 64) = v18;
          v22 = v18;
        }
        *v22 = v17;
        *((_DWORD *)v18 - 1) = v21;
        v23 = *(unsigned int *)(a1 + 40);
        if ( 3 * (int)v23 < (unsigned int)(4 * (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 48))) )
        {
          v128 = 2 * v23;
          v125 = 16LL * (unsigned int)(2 * v23);
          v75 = (__m128i *)sub_186B270(v125);
          v26 = v125;
          v76 = v128;
          v24 = v75;
          v77 = &v75[v125 / 0x10];
          if ( v128 )
          {
            if ( (v125 & 0x10) == 0 || (*v75 = 0, ++v75, v75 != v77) )
            {
              do
              {
                *v75 = 0;
                v75 += 2;
                v75[-1] = 0;
              }
              while ( v75 != v77 );
            }
          }
          v78 = *(const __m128i **)(a1 + 32);
          v25 = v128 - 1;
          v27 = v77;
          v79 = (__m128i *)&v78[*(unsigned int *)(a1 + 40)];
          if ( v78 != v79 )
          {
            do
            {
              while ( v78->m128i_i64[0] <= 1uLL )
              {
                if ( v79 == ++v78 )
                  goto LABEL_101;
              }
              v80 = 16LL * (*(_DWORD *)(*(_QWORD *)v78->m128i_i64[0] + 12LL) & v25);
              v81 = &v24[(unsigned __int64)v80 / 0x10];
              if ( v125 == v80 )
              {
LABEL_105:
                if ( v24 == v81 )
                {
LABEL_113:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v82 = v24;
                while ( v82->m128i_i64[0] )
                {
                  if ( v81 == ++v82 )
                    goto LABEL_113;
                }
              }
              else
              {
                v82 = &v24[(unsigned __int64)v80 / 0x10];
                while ( v82->m128i_i64[0] )
                {
                  if ( v77 == ++v82 )
                    goto LABEL_105;
                }
              }
              v83 = _mm_loadu_si128(v78++);
              *v82 = v83;
            }
            while ( v79 != v78 );
LABEL_101:
            v79 = *(__m128i **)(a1 + 32);
          }
          if ( v79 )
          {
            v132 = v128;
            v129 = v125;
            v126 = v76 - 1;
            sub_186B220(v79);
            v76 = v132;
            v26 = v129;
            v25 = v126;
          }
          *(_QWORD *)(a1 + 32) = v24;
          *(_DWORD *)(a1 + 40) = v76;
          *(_DWORD *)(a1 + 48) = 0;
        }
        else
        {
          v24 = *(__m128i **)(a1 + 32);
          v25 = v23 - 1;
          v26 = 16 * v23;
          v27 = (__m128i *)((char *)v24 + v26);
        }
        v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v17);
        v29 = *(_DWORD *)(*v16 + 12);
        v30 = 16LL * (v29 & v25);
        v31 = &v24[(unsigned __int64)v30 / 0x10];
        if ( v30 != v26 )
        {
          v32 = &v24[(unsigned __int64)v30 / 0x10];
          v33 = nullptr;
          while ( 1 )
          {
            v34 = (__int64 *)v32->m128i_i64[0];
            if ( v32->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(*v34 + 12) == v29 && v34 == v16 )
              {
                *v32 = v28;
                goto LABEL_10;
              }
            }
            else
            {
              if ( !v34 )
              {
                if ( v33 )
                  goto LABEL_111;
                v33 = v32;
                goto LABEL_112;
              }
              v33 = v32;
            }
            if ( ++v32 == v27 )
              goto LABEL_32;
          }
        }
        v33 = nullptr;
        while ( 1 )
        {
LABEL_32:
          if ( v31 == v24 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v35 = (__int64 *)v24->m128i_i64[0];
          if ( v24->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(*v35 + 12) == v29 && v35 == v16 )
          {
            *v24 = v28;
            goto LABEL_10;
          }
LABEL_31:
          ++v24;
        }
        if ( v35 )
        {
          v33 = v24;
          goto LABEL_31;
        }
        if ( v33 )
LABEL_111:
          --*(_DWORD *)(a1 + 48);
        else
          v33 = v24;
LABEL_112:
        *v33 = v28;
        ++*(_DWORD *)(a1 + 44);
LABEL_10:
        if ( v121 == ++v8 )
          goto LABEL_39;
      }
      v85 = v138;
      LODWORD(v144) = 0;
      if ( v138 )
      {
        v86 = (unsigned __int64)&v138[*((unsigned int *)v138 - 1)];
        if ( (unsigned __int64)v138 >= v86 )
          goto LABEL_125;
        do
        {
          while ( 1 )
          {
            v87 = *v85;
            if ( *v85 )
            {
              v48 = (*(_DWORD *)(v87 + 8))-- == 1;
              if ( v48 )
                break;
            }
            if ( (unsigned __int64)++v85 >= v86 )
              goto LABEL_124;
          }
          sub_15D7BC0(v137, v87);
          ++v85;
        }
        while ( (unsigned __int64)v85 < v86 );
LABEL_124:
        v85 = v138;
        if ( v138 )
LABEL_125:
          *((_DWORD *)v85 - 1) = 0;
      }
      v88 = *(_DWORD *)(*v16 + 12);
      i = (char *)(16LL * v131);
      v90 = &i[(_QWORD)v123];
      v91 = 16LL * (v88 & (v131 - 1));
      v92 = &v123[v91];
      if ( (char *)v91 != i )
      {
        for ( i = &v123[v91]; v90 != i; i += 16 )
        {
          v93 = *(__int64 **)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(*v93 + 12) == v88 && v93 == v16 )
            {
LABEL_203:
              v93 = (__int64 *)i;
              goto LABEL_133;
            }
          }
          else if ( !v93 )
          {
            goto LABEL_133;
          }
        }
      }
      if ( v92 != v123 )
      {
        i = v123;
        do
        {
          while ( 1 )
          {
            v93 = *(__int64 **)i;
            if ( *(_QWORD *)i <= 1u )
              break;
            v90 = (char *)*v93;
            if ( *(_DWORD *)(*v93 + 12) == v88 && v93 == v16 )
              goto LABEL_203;
            i += 16;
            if ( v92 == i )
              goto LABEL_189;
          }
          if ( !v93 )
            goto LABEL_133;
          i += 16;
        }
        while ( v92 != i );
      }
LABEL_189:
      v93 = nullptr;
LABEL_133:
      v130 = v93[1];
      (*(void (__fastcall **)(__int64, void **, char *, char *))(*(_QWORD *)v130 + 16LL))(v130, &ptr, i, v90);
      v94 = (char *)ptr;
      v95 = (char *)ptr + 16 * (unsigned int)v144;
      if ( ptr == v95 )
      {
LABEL_160:
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v130 + 24LL))(v130, a1, &v137);
        goto LABEL_14;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v102 = *((_QWORD *)v94 + 1);
          if ( !*v94 )
            break;
          v96 = *(_QWORD *)(v102 + 24);
          if ( v96
            || (v96 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 40LL))(
                        *(_QWORD *)(a1 + 72),
                        *(_QWORD *)(v102 + 8))) != 0 )
          {
            v97 = v138;
            ++*(_DWORD *)(v96 + 8);
            if ( !v97 )
              goto LABEL_163;
          }
          else
          {
            v97 = v138;
            if ( !v138 )
              goto LABEL_163;
          }
          v98 = *((_DWORD *)v97 - 1);
          if ( v98 == *((_DWORD *)v97 - 2) )
          {
            v114 = (3 * v98 + 1) >> 1;
            v115 = 8 * v114 + 8;
            if ( 8 * v98 + 8 >= (unsigned int)v115 || v98 >= v114 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v142, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v142);
              sub_233E40((__int64)v142);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_159;
          }
LABEL_138:
          v99 = v98;
          v100 = v98 + 1;
          v101 = &v97[v99];
LABEL_139:
          v94 += 16;
          *v101 = v96;
          *((_DWORD *)v97 - 1) = v100;
          if ( v95 == v94 )
            goto LABEL_160;
        }
        v103 = *(_QWORD *)(v102 + 8);
        v104 = *(unsigned int *)(a1 + 40);
        v105 = *(__int64 **)(a1 + 32);
        v106 = *(_DWORD *)(*(_QWORD *)v103 + 12LL);
        v107 = v104 - 1;
        v104 *= 16;
        v108 = (__int64 *)((char *)v105 + v104);
        v109 = 16LL * (v106 & v107);
        v110 = &v105[(unsigned __int64)v109 / 8];
        if ( v109 == v104 )
        {
LABEL_149:
          while ( v110 != v105 )
          {
            v113 = *v105;
            if ( (unsigned __int64)*v105 > 1 )
            {
              if ( *(_DWORD *)(*(_QWORD *)v113 + 12LL) == v106 && v103 == v113 )
              {
                v111 = v105;
                goto LABEL_174;
              }
            }
            else if ( !v113 )
            {
              break;
            }
            v105 += 2;
          }
LABEL_206:
          BUG();
        }
        v111 = &v105[(unsigned __int64)v109 / 8];
        while ( 1 )
        {
          while ( 1 )
          {
            v112 = *v111;
            if ( (unsigned __int64)*v111 > 1 )
              break;
            if ( !v112 )
              goto LABEL_206;
            v111 += 2;
            if ( v108 == v111 )
              goto LABEL_149;
          }
          if ( *(_DWORD *)(*(_QWORD *)v112 + 12LL) == v106 && v103 == v112 )
            break;
          v111 += 2;
          if ( v108 == v111 )
            goto LABEL_149;
        }
LABEL_174:
        v96 = v111[1];
        if ( v96 )
          ++*(_DWORD *)(v96 + 8);
        v97 = v138;
        if ( !v138 )
        {
LABEL_163:
          v118 = (_QWORD *)sub_186B270(0x18u);
          *v118 = 2;
          v100 = 1;
          v97 = v118 + 1;
          v138 = v97;
          v101 = v97;
          goto LABEL_139;
        }
        v98 = *((_DWORD *)v138 - 1);
        if ( v98 != *((_DWORD *)v138 - 2) )
          goto LABEL_138;
        v114 = (3 * v98 + 1) >> 1;
        v115 = 8 * v114 + 8;
        if ( 8 * v98 + 8 >= (unsigned int)v115 || v98 >= v114 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v142, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v142);
          sub_233E40((__int64)v142);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_159:
        v127 = v114;
        v116 = (unsigned int *)sub_186B300(v97 - 1, v115);
        v117 = v116 + 2;
        v94 += 16;
        v138 = v116 + 2;
        *v116 = v127;
        LODWORD(v116) = v116[1];
        *(_QWORD *)&v117[2 * (unsigned int)v116] = v96;
        *(v117 - 1) = (_DWORD)v116 + 1;
        if ( v95 == v94 )
          goto LABEL_160;
      }
    }
  }
LABEL_39:
  v40 = *(__int64 ***)(*(_QWORD *)(a1 + 8) + 8664LL);
  if ( !v40 )
    goto LABEL_46;
  v41 = &v40[*((unsigned int *)v40 - 1)];
  if ( v41 == v40 )
    goto LABEL_46;
  do
  {
    v42 = *v40;
    v43 = **v40;
    if ( *(_WORD *)(v43 + 4) )
      goto LABEL_45;
    if ( *(_DWORD *)(v43 + 24) )
      goto LABEL_45;
    v44 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL);
    if ( v44 )
    {
      if ( *v44 != -1 )
        goto LABEL_45;
    }
    v50 = *(_QWORD *)(a1 + 8);
    if ( (unsigned int)sub_8E7030(v50) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v50 + 7488) + 56LL))(
              *(_QWORD *)(v50 + 7488),
              v43) )
        goto LABEL_45;
    }
    v51 = *(unsigned int *)(a1 + 88);
    v52 = *(__int64 **)(a1 + 80);
    v53 = *(_QWORD *)(*v42 + 16);
    v54 = v51 - 1;
    v51 *= 8;
    v55 = (__int64 *)((char *)v52 + v51);
    v56 = *(_DWORD *)(v53 + 12);
    v57 = 8LL * (v56 & v54);
    v58 = &v52[(unsigned __int64)v57 / 8];
    v59 = &v52[(unsigned __int64)v57 / 8];
    if ( v57 != v51 )
    {
      do
      {
        v60 = *v59;
        if ( (unsigned __int64)*v59 > 1 )
        {
          if ( *(_DWORD *)(v60 + 12) == v56 && v53 == v60 )
            goto LABEL_45;
        }
        else if ( !v60 )
        {
          goto LABEL_76;
        }
        ++v59;
      }
      while ( v55 != v59 );
    }
    for ( ; v58 != v52; ++v52 )
    {
      v119 = *v52;
      if ( (unsigned __int64)*v52 > 1 )
      {
        if ( *(_DWORD *)(v119 + 12) == v56 && v53 == v119 )
          goto LABEL_45;
      }
      else if ( !v119 )
      {
        break;
      }
    }
LABEL_76:
    v61 = (_QWORD *)v42[1];
    v62 = *(unsigned int *)(a1 + 40);
    v63 = *(_QWORD ***)(a1 + 32);
    v64 = *(_DWORD *)(*v61 + 12LL);
    v65 = v62 - 1;
    v62 *= 16;
    v66 = (_QWORD **)((char *)v63 + v62);
    v67 = 16LL * (v64 & v65);
    v68 = &v63[(unsigned __int64)v67 / 8];
    if ( v67 != v62 )
    {
      v69 = &v63[(unsigned __int64)v67 / 8];
      do
      {
        v70 = *v69;
        if ( (unsigned __int64)*v69 > 1 )
        {
          if ( *(_DWORD *)(*v70 + 12LL) == v64 && v61 == v70 )
          {
            v70 = v69;
            goto LABEL_83;
          }
        }
        else if ( !v70 )
        {
          goto LABEL_83;
        }
        v69 += 2;
      }
      while ( v66 != v69 );
    }
    if ( v63 == v68 )
    {
LABEL_202:
      v70 = nullptr;
      goto LABEL_83;
    }
    while ( 1 )
    {
      v70 = *v63;
      if ( (unsigned __int64)*v63 > 1 )
        break;
      if ( !v70 )
        goto LABEL_83;
LABEL_196:
      v63 += 2;
      if ( v68 == v63 )
        goto LABEL_202;
    }
    if ( *(_DWORD *)(*v70 + 12LL) != v64 || v61 != v70 )
      goto LABEL_196;
    v70 = v63;
LABEL_83:
    sub_135F9B0(*(_QWORD *)(a1 + 72), v53, v70[1]);
LABEL_45:
    ++v40;
  }
  while ( v41 != v40 );
LABEL_46:
  v45 = v138;
  if ( v138 )
  {
    v46 = (unsigned __int64)&v138[*((unsigned int *)v138 - 1)];
    if ( (unsigned __int64)v138 >= v46 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v47 = *v45;
        if ( *v45 )
        {
          v48 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v48 )
            break;
        }
        if ( (unsigned __int64)++v45 >= v46 )
          goto LABEL_53;
      }
      sub_15D7BC0(v137, v47);
      ++v45;
    }
    while ( (unsigned __int64)v45 < v46 );
LABEL_53:
    v45 = v138;
    if ( v138 )
LABEL_54:
      sub_186B220(v45 - 1);
  }
  if ( ptr && ptr != v145 )
    sub_186B220(ptr);
  if ( v122 )
    sub_186B220(&v122[-1].m128i_u64[1]);
  sub_A6DD40(v136);
  if ( v134 )
    sub_186B220((void *)(v134 - 8));
  if ( v124 )
    sub_186B220(v124 - 1);
  result = (__int64)v123;
  if ( v123 )
    return sub_186B220(v123);
  return result;
}

