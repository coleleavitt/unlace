__int64 __fastcall sub_3BBC80(_QWORD *a1, __int64 a2, __int64 a3, __m128i a4)
{
  __int64 *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  int v12; // eax
  char **v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // r9d
  size_t v17; // rsi
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rdx
  int v22; // eax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rsi
  __m128i v25; // xmm1
  __int64 v26; // r13
  unsigned int v27; // eax
  unsigned int v28; // edx
  size_t v29; // rsi
  unsigned int *v30; // rax
  int v31; // r9d
  __int64 v32; // rdi
  int v33; // edx
  __int64 v34; // rsi
  __int64 v35; // r15
  __int64 v36; // r9
  __int64 *v37; // rcx
  __int64 v38; // rax
  int v39; // edi
  unsigned int v40; // edx
  __int64 *v41; // rsi
  __int64 v42; // rdx
  __int64 *v43; // r8
  __int64 *i; // rax
  __int64 v45; // rdx
  bool v46; // zf
  unsigned __int64 v47; // r12
  __int64 *v48; // r14
  __int64 v49; // rsi
  __int64 v50; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v58; // r14
  _QWORD *v59; // rdx
  unsigned int v60; // eax
  __int64 v61; // rcx
  int v62; // eax
  _QWORD *v63; // rcx
  __int64 v64; // rcx
  int v65; // esi
  unsigned int v66; // r8d
  __int32 v67; // eax
  __int64 v68; // rcx
  _QWORD *v69; // r12
  int v70; // edi
  __int64 v71; // rax
  _QWORD *v72; // r8
  _QWORD *v73; // rax
  _QWORD *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rax
  _QWORD *v77; // rdx
  __int64 v78; // rax
  unsigned int v79; // edi
  unsigned int v80; // ecx
  unsigned int *v81; // rax
  __int64 v82; // r12
  void *v83; // rax
  __int32 v84; // r8d
  char *v85; // r15
  char *v86; // r9
  __int64 v87; // rdi
  __int64 v88; // rdx
  _QWORD *v89; // rsi
  _QWORD *v90; // rdx
  __int64 v91; // rsi
  __int64 v92; // rsi
  _QWORD *v93; // rax
  char **v94; // r12
  __int64 v95; // rdx
  char **v96; // r12
  __int64 v97; // rdx
  char **exception; // r12
  __int64 v99; // rdx
  __int64 v100; // [rsp-10h] [rbp-140h]
  __int64 *v101; // [rsp+10h] [rbp-120h]
  __int64 v103; // [rsp+20h] [rbp-110h]
  __int64 v104; // [rsp+28h] [rbp-108h]
  __int64 v105; // [rsp+30h] [rbp-100h]
  unsigned int v106; // [rsp+3Ch] [rbp-F4h]
  __int64 v107; // [rsp+40h] [rbp-F0h]
  __int64 *v109; // [rsp+50h] [rbp-E0h]
  unsigned int v110; // [rsp+58h] [rbp-D8h]
  unsigned int v111; // [rsp+58h] [rbp-D8h]
  __int32 v112; // [rsp+58h] [rbp-D8h]
  __m128i v113; // [rsp+60h] [rbp-D0h] BYREF
  __m128i v114; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v115; // [rsp+80h] [rbp-B0h]
  __int64 v116; // [rsp+88h] [rbp-A8h]
  __m128i v117; // [rsp+90h] [rbp-A0h] BYREF
  char *v118; // [rsp+A0h] [rbp-90h]
  _QWORD *v119; // [rsp+A8h] [rbp-88h]
  __int64 v120; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v121; // [rsp+B8h] [rbp-78h]
  __m128i v122; // [rsp+C0h] [rbp-70h] BYREF
  __m128i v123; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v124[10]; // [rsp+E0h] [rbp-50h] BYREF

  v4 = *(__int64 **)(a2 + 24);
  v119 = a1;
  if ( v4 )
  {
    v101 = &v4[*((unsigned int *)v4 - 1)];
    if ( v101 != v4 )
    {
      v109 = v4;
      while ( 1 )
      {
        v120 = 0;
        v5 = *v109;
        v6 = *(_QWORD *)(*v109 + 40);
        v105 = v119[1];
        v121 = v105;
        v117 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)(unsigned __int64)v105);
        sub_3BAB60((__int64)v119, v6, &v120);
        v107 = v120;
        v110 = *(_DWORD *)(v5 + 56);
        v103 = v121;
        v7 = *(unsigned int *)(v5 + 68);
        v106 = v7;
        if ( !(_DWORD)v7 )
          break;
        v104 = *(unsigned int *)(v5 + 68);
        v8 = v5;
        v9 = v5 + 8 * v7;
        v10 = nullptr;
        a4 = _mm_load_si128(&v117);
        do
        {
          v14 = *(_QWORD *)(v8 + 80);
          v122 = a4;
          sub_3BAB60((__int64)v119, v14 & 0xFFFFFFFFFFFFFFF8LL, v122.m128i_i64);
          a4 = _mm_load_si128(&v122);
          v116 = v122.m128i_i64[0];
          v118 = (char *)a4.m128i_i64[0];
          v115 = v122.m128i_i64[1];
          if ( a4.m128i_i64[0] )
            ++*(_DWORD *)(a4.m128i_i64[0] + 8);
          if ( v10 )
          {
            v15 = *((_DWORD *)v10 - 1);
            if ( v15 == *((_DWORD *)v10 - 2) )
            {
              v16 = (3 * v15 + 1) >> 1;
              v17 = 8 * v16 + 8;
              if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_C7E7E(v124, "Overflow encountered when expanding vector", v99);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v124);
                sub_233E40((__int64)v124);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v114.m128i_i32[0] = (3 * v15 + 1) >> 1;
              v113 = a4;
              v18 = (_DWORD *)sub_186B300(v10 - 1, v17);
              v19 = (unsigned int)v18[1];
              v10 = v18 + 2;
              a4 = _mm_load_si128(&v113);
              *v18 = v114.m128i_i32[0];
              LODWORD(v18) = v19;
              v13 = (char **)&v10[v19];
              v12 = (_DWORD)v18 + 1;
            }
            else
            {
              v11 = v15;
              v12 = v15 + 1;
              v13 = (char **)&v10[v11];
            }
          }
          else
          {
            v114 = a4;
            v53 = (_QWORD *)sub_186B270(0x18u);
            a4 = _mm_load_si128(&v114);
            *v53 = 2;
            v10 = v53 + 1;
            v12 = 1;
            v13 = (char **)v10;
          }
          v8 += 8;
          *v13 = v118;
          *((_DWORD *)v10 - 1) = v12;
        }
        while ( v9 != v8 );
        if ( v106 < v110 )
          goto LABEL_16;
        v26 = 0;
        v113.m128i_i64[0] = v105;
LABEL_27:
        v31 = v5 + 72;
        v32 = v119[2];
        v33 = *((_DWORD *)v10 - 1);
LABEL_28:
        v34 = sub_62C680(v32, v107, v33, (_DWORD)v10, 0, v31, 0);
        v35 = v34;
        sub_63DAD0(a3, v34, v100, *(double *)a4.m128i_i64);
        if ( (unsigned int)sub_180B130(a3) > 0x13 )
        {
          if ( (unsigned __int8)sub_186A530() )
          {
            sub_186A4C0();
            v55 = sub_180B150(a3, v34);
            v56 = *v119;
            sub_62AAE0(v35, *v119, v55, 0);
            sub_186A500(v35, v56);
          }
          else
          {
            v57 = sub_180B150(a3, v34);
            sub_62AAE0(v34, *v119, v57, 0);
          }
        }
        v36 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL);
        v37 = *(__int64 **)(a2 + 152);
        v38 = *(unsigned int *)(a2 + 160);
        v39 = *(_DWORD *)(v36 + 12);
        v40 = v38 - 1;
        v38 *= 8;
        v41 = (__int64 *)((char *)v37 + v38);
        v42 = 8LL * (v39 & v40);
        v43 = &v37[(unsigned __int64)v42 / 8];
        if ( v42 != v38 )
        {
          for ( i = &v37[(unsigned __int64)v42 / 8]; v41 != i; ++i )
          {
            v45 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v45 + 12) == v39 && v36 == v45 )
              {
LABEL_70:
                v58 = *(_QWORD *)(*(_QWORD *)(v35 + 40) + 16LL);
                if ( v58 )
                  ++*(_DWORD *)(v58 + 8);
                v59 = *(_QWORD **)(a3 + 232);
                if ( v59 )
                {
                  v60 = *((_DWORD *)v59 - 1);
                  if ( v60 == *((_DWORD *)v59 - 2) )
                  {
                    v79 = (3 * v60 + 1) >> 1;
                    v80 = 8 * v79 + 8;
                    if ( 8 * v60 + 8 >= v80 || v60 >= v79 )
                    {
                      v94 = (char **)__cxa_allocate_exception(0x28u);
                      sub_C7E7E(v124, "Overflow encountered when expanding vector", v95);
                      *v94 = (char *)off_1C63128;
                      sub_2333C0(v94 + 1, v124);
                      sub_233E40((__int64)v124);
                      __cxa_throw(
                        v94,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v81 = (unsigned int *)sub_186B300(v59 - 1, v80);
                    v59 = v81 + 2;
                    *v81 = v79;
                    *(_QWORD *)(a3 + 232) = v81 + 2;
                    LODWORD(v81) = v81[1];
                    v63 = &v59[(unsigned int)v81];
                    v62 = (_DWORD)v81 + 1;
                  }
                  else
                  {
                    v61 = v60;
                    v62 = v60 + 1;
                    v63 = &v59[v61];
                  }
                }
                else
                {
                  v93 = (_QWORD *)sub_186B270(0x18u);
                  *v93 = 2;
                  v59 = v93 + 1;
                  *(_QWORD *)(a3 + 232) = v93 + 1;
                  v63 = v93 + 1;
                  v62 = 1;
                }
                *v63 = v58;
                *((_DWORD *)v59 - 1) = v62;
                v64 = *(unsigned int *)(a3 + 160);
                v65 = *(_DWORD *)(a3 + 168);
                v66 = 2 * v64;
                if ( 3 * (int)v64 < (unsigned int)(4 * (v65 + *(_DWORD *)(a3 + 164))) )
                {
                  v82 = v66;
                  v114.m128i_i32[0] = 2 * v64;
                  v118 = (char *)(8LL * v66);
                  v83 = (void *)sub_186B270((size_t)v118);
                  v84 = v114.m128i_i32[0];
                  v117.m128i_i64[0] = (__int64)v83;
                  v68 = (__int64)v118;
                  if ( v114.m128i_i32[0] )
                  {
                    memset(v83, 0, 8 * v82);
                    v68 = (__int64)v118;
                    v84 = v114.m128i_i32[0];
                  }
                  v67 = v84 - 1;
                  v85 = *(char **)(a3 + 152);
                  v86 = &v85[8 * *(unsigned int *)(a3 + 160)];
                  v69 = (_QWORD *)(v117.m128i_i64[0] + v68);
                  if ( v85 != v86 )
                  {
                    do
                    {
                      while ( *(_QWORD *)v85 <= 1u )
                      {
                        v85 += 8;
                        if ( v86 == v85 )
                          goto LABEL_113;
                      }
                      v87 = v117.m128i_i64[0];
                      v88 = 8LL * (*(_DWORD *)(*(_QWORD *)v85 + 12LL) & (unsigned int)v67);
                      v89 = (_QWORD *)(v117.m128i_i64[0] + v88);
                      if ( v68 == v88 )
                      {
LABEL_117:
                        v87 = v117.m128i_i64[0];
                        if ( (_QWORD *)v117.m128i_i64[0] == v89 )
                        {
LABEL_122:
                          v114.m128i_i32[0] = v84 - 1;
                          v118 = v86;
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v90 = (_QWORD *)v117.m128i_i64[0];
                        while ( *v90 )
                        {
                          if ( v89 == ++v90 )
                            goto LABEL_122;
                        }
                      }
                      else
                      {
                        v90 = (_QWORD *)(v117.m128i_i64[0] + v88);
                        while ( *v90 )
                        {
                          if ( v69 == ++v90 )
                            goto LABEL_117;
                        }
                      }
                      v91 = *(_QWORD *)v85;
                      v85 += 8;
                      v117.m128i_i64[0] = v87;
                      *v90 = v91;
                    }
                    while ( v86 != v85 );
LABEL_113:
                    v86 = *(char **)(a3 + 152);
                  }
                  if ( v86 )
                  {
                    v112 = v84;
                    v114.m128i_i64[0] = v68;
                    LODWORD(v118) = v84 - 1;
                    sub_186B220(v86);
                    v84 = v112;
                    v68 = v114.m128i_i64[0];
                    v67 = (int)v118;
                  }
                  v92 = v117.m128i_i64[0];
                  *(_DWORD *)(a3 + 160) = v84;
                  *(_QWORD *)(a3 + 152) = v92;
                  v65 = 0;
                  *(_DWORD *)(a3 + 168) = 0;
                }
                else
                {
                  v67 = v64 - 1;
                  v68 = 8 * v64;
                  v117.m128i_i64[0] = *(_QWORD *)(a3 + 152);
                  v69 = (_QWORD *)(v117.m128i_i64[0] + v68);
                }
                v70 = *(_DWORD *)(v58 + 12);
                v71 = 8LL * (v70 & (unsigned int)v67);
                v72 = (_QWORD *)(v117.m128i_i64[0] + v71);
                if ( v71 == v68 )
                {
                  v74 = nullptr;
                  v76 = v117.m128i_i64[0];
LABEL_86:
                  if ( v72 == (_QWORD *)v76 )
                  {
LABEL_94:
                    sub_1872CE0("");
                    sub_1873130(114, 405);
                  }
                  v77 = (_QWORD *)v76;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v78 = *v77;
                      if ( *v77 > 1u )
                        break;
                      if ( !v78 )
                      {
                        v117.m128i_i64[0] = (__int64)v77;
                        v73 = v77;
                        goto LABEL_96;
                      }
                      v74 = v77++;
                      if ( v72 == v77 )
                        goto LABEL_94;
                    }
                    if ( *(_DWORD *)(v78 + 12) == v70 && v58 == v78 )
                      break;
                    if ( v72 == ++v77 )
                      goto LABEL_94;
                  }
                  v73 = v77;
LABEL_124:
                  *v73 = v58;
                }
                else
                {
                  v73 = (_QWORD *)(v117.m128i_i64[0] + v71);
                  v74 = nullptr;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v75 = *v73;
                      if ( *v73 <= 1u )
                        break;
                      if ( *(_DWORD *)(v75 + 12) == v70 && v58 == v75 )
                        goto LABEL_124;
                      if ( ++v73 == v69 )
                      {
LABEL_85:
                        v76 = v117.m128i_i64[0];
                        goto LABEL_86;
                      }
                    }
                    if ( !v75 )
                      break;
                    v74 = v73++;
                    if ( v73 == v69 )
                      goto LABEL_85;
                  }
LABEL_96:
                  if ( v74 )
                    *(_DWORD *)(a3 + 168) = v65 - 1;
                  else
                    v74 = v73;
                  *v74 = v58;
                  ++*(_DWORD *)(a3 + 164);
                }
                goto LABEL_36;
              }
            }
            else if ( !v45 )
            {
              goto LABEL_36;
            }
          }
        }
        for ( ; v43 != v37; ++v37 )
        {
          v54 = *v37;
          if ( (unsigned __int64)*v37 > 1 )
          {
            if ( *(_DWORD *)(v54 + 12) == v39 && v36 == v54 )
              goto LABEL_70;
          }
          else if ( !v54 )
          {
            break;
          }
        }
LABEL_36:
        if ( v26 )
        {
          v46 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v46 )
            sub_15D7BC0(v113.m128i_i64[0], v26);
        }
        if ( v10 )
        {
          v47 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
          if ( (unsigned __int64)v10 < v47 )
          {
            v48 = v10;
            do
            {
              while ( 1 )
              {
                v49 = *v48;
                if ( *v48 )
                {
                  v46 = (*(_DWORD *)(v49 + 8))-- == 1;
                  if ( v46 )
                    break;
                }
                if ( (unsigned __int64)++v48 >= v47 )
                  goto LABEL_46;
              }
              sub_15D7BC0(v105, v49);
              ++v48;
            }
            while ( (unsigned __int64)v48 < v47 );
          }
LABEL_46:
          sub_186B220(v10 - 1);
        }
        v50 = v116;
        if ( v116 )
        {
          v117.m128i_i32[0] = *(_DWORD *)(v116 + 8);
          v46 = v117.m128i_i32[0] == 1;
          *(_DWORD *)(v116 + 8) = v117.m128i_i32[0] - 1;
          if ( v46 )
            sub_15D7BC0(v115, v50);
        }
        if ( v107 )
        {
          v117.m128i_i32[0] = *(_DWORD *)(v107 + 8);
          v46 = v117.m128i_i32[0] == 1;
          *(_DWORD *)(v107 + 8) = v117.m128i_i32[0] - 1;
          if ( v46 )
            sub_15D7BC0(v103, v107);
        }
        if ( v101 == ++v109 )
          return 1;
      }
      if ( !v110 )
      {
        v33 = 0;
        v31 = v5 + 72;
        v10 = nullptr;
        v26 = 0;
        v116 = 0;
        v32 = v119[2];
        v115 = v105;
        v113.m128i_i64[0] = v105;
        goto LABEL_28;
      }
      v10 = nullptr;
      v116 = 0;
      v104 = 0;
      v115 = v105;
LABEL_16:
      v20 = v5 + 8 * v104;
      v118 = (char *)(v5 + 8 * (v104 + v110 - 1 - v106) + 8);
      v114.m128i_i64[0] = (__int64)&v123;
      do
      {
        v24 = *(_QWORD *)(v20 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        v123 = _mm_load_si128(&v117);
        sub_3B97A0((__int64)v119, v24, (__int64 *)v114.m128i_i64[0]);
        v25 = _mm_load_si128(&v123);
        v113.m128i_i64[0] = v123.m128i_i64[1];
        v26 = v123.m128i_i64[0];
        v117 = v25;
        if ( v25.m128i_i64[0] )
          ++*(_DWORD *)(v25.m128i_i64[0] + 8);
        if ( v10 )
        {
          v27 = *((_DWORD *)v10 - 1);
          if ( v27 == *((_DWORD *)v10 - 2) )
          {
            v28 = (3 * v27 + 1) >> 1;
            v29 = 8 * v28 + 8;
            if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
            {
              v96 = (char **)__cxa_allocate_exception(0x28u);
              sub_C7E7E(v124, "Overflow encountered when expanding vector", v97);
              *v96 = (char *)off_1C63128;
              sub_2333C0(v96 + 1, v124);
              sub_233E40((__int64)v124);
              __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v111 = (3 * v27 + 1) >> 1;
            v30 = (unsigned int *)sub_186B300(v10 - 1, v29);
            v10 = v30 + 2;
            *v30 = v111;
            LODWORD(v30) = v30[1];
            v23 = &v10[(unsigned int)v30];
            v22 = (_DWORD)v30 + 1;
          }
          else
          {
            v21 = v27;
            v22 = v27 + 1;
            v23 = &v10[v21];
          }
        }
        else
        {
          v52 = (_QWORD *)sub_186B270(0x18u);
          *v52 = 2;
          v10 = v52 + 1;
          v22 = 1;
          v23 = v10;
        }
        *v23 = v25.m128i_i64[0];
        v20 += 8;
        *((_DWORD *)v10 - 1) = v22;
      }
      while ( v118 != (char *)v20 );
      goto LABEL_27;
    }
  }
  return 1;
}

