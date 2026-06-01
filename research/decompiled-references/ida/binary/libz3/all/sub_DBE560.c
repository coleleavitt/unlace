__int64 __fastcall sub_DBE560(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // r14
  __int64 result; // rax
  __int64 v13; // rax
  int v14; // ecx
  __int64 *v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 *v18; // rdi
  __int64 v19; // rdx
  __int64 *v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // r13
  _QWORD *v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rsi
  int v37; // eax
  _QWORD *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r13
  unsigned int v43; // eax
  unsigned int v44; // edx
  size_t v45; // rsi
  _DWORD *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned int v49; // r14d
  unsigned int v50; // edx
  unsigned int *v51; // rax
  unsigned int v52; // r13d
  unsigned int v53; // edx
  unsigned int *v54; // rax
  __int64 v55; // rdx
  unsigned int v56; // edx
  int v57; // eax
  __m128i *v58; // r13
  unsigned int v59; // r9d
  __int64 v60; // r10
  __m128 *v61; // r15
  __int64 v62; // r9
  __m128 v63; // xmm0
  __m128i *v64; // rdi
  __m128 *v65; // rax
  __m128 *v66; // rsi
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  int v69; // r15d
  __m128i *v70; // rax
  __m128i *v71; // rcx
  const __m128i *v72; // rax
  __m128i *v73; // r11
  __int64 v74; // rdx
  __m128i *v75; // rsi
  __m128i *v76; // rdx
  int v77; // eax
  _QWORD *v78; // rax
  unsigned int v79; // edx
  unsigned int v80; // r9d
  __int64 v81; // rcx
  size_t v82; // r8
  int v83; // esi
  __int64 v84; // r9
  __m128i *v85; // rdi
  __m128 *v86; // rcx
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  _QWORD *v89; // rdi
  char **v90; // rbp
  __int64 v91; // rax
  int v92; // r10d
  _OWORD *m128i_i8; // rdx
  size_t v94; // rax
  __m128i *v95; // rdi
  const __m128i *v96; // r15
  size_t v97; // r11
  __int64 v98; // rdx
  __m128i *v99; // rsi
  __m128i *v100; // rdx
  _QWORD *v101; // rdi
  char **v102; // rbp
  char **exception; // rbp
  char **v104; // rbp
  __int64 v105; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+10h] [rbp-98h]
  __int64 v107; // [rsp+18h] [rbp-90h]
  size_t v108; // [rsp+20h] [rbp-88h]
  const __m128i *v109; // [rsp+28h] [rbp-80h]
  __m128i *v110; // [rsp+30h] [rbp-78h]
  __m128i *v111; // [rsp+38h] [rbp-70h]
  _DWORD *v112; // [rsp+48h] [rbp-60h] BYREF
  __int64 v113[11]; // [rsp+50h] [rbp-58h] BYREF

  v8 = (_QWORD *)sub_186B270(0x18u);
  v9 = v8 + 1;
  v8[1] = a3;
  v112 = v8 + 1;
  *v8 = 0x100000002LL;
  v10 = 1;
  do
  {
    v11 = v9[v10 - 1];
    result = sub_15D37A0(a2, v11);
    if ( (_BYTE)result )
      goto LABEL_6;
    switch ( *(_WORD *)(v11 + 4) )
    {
      case 0:
        if ( !(unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 16)) )
        {
          v9 = v112;
          v23 = *(_QWORD *)(v11 + 16);
          if ( v112 )
          {
            v24 = *(v112 - 1);
            if ( v24 == *(v112 - 2) )
            {
              v52 = (3 * v24 + 1) >> 1;
              v53 = 8 * v52 + 8;
              if ( 8 * v24 + 8 >= v53 || v24 >= v52 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v113, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v113);
                sub_233E40((__int64)v113);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v54 = (unsigned int *)sub_186B300(v112 - 2, v53);
              v55 = v54[1];
              v9 = v54 + 2;
              *v54 = v52;
              v112 = v9;
              LODWORD(v54) = v55;
              v27 = &v9[v55];
              v26 = (_DWORD)v54 + 1;
            }
            else
            {
              v25 = v24;
              v26 = v24 + 1;
              v27 = &v112[2 * v25];
            }
          }
          else
          {
            v89 = (_QWORD *)sub_186B270(0x18u);
            *v89 = 2;
            v26 = 1;
            v9 = v89 + 1;
            v112 = v9;
            v27 = v9;
          }
          *v27 = v23;
          *((_DWORD *)v9 - 1) = v26;
          goto LABEL_7;
        }
        result = sub_DBE3E0(&v112, a2, *(_DWORD *)(v11 + 24), (_QWORD *)(v11 + 32));
        if ( (_BYTE)result )
        {
          sub_DBDC80((__int64 *)a1, v11);
          goto LABEL_5;
        }
LABEL_10:
        v9 = v112;
        if ( !v112 )
          return result;
        goto LABEL_7;
      case 1:
        v13 = *(_QWORD *)(a1 + 32);
        v14 = *(_DWORD *)(v11 + 12);
        v15 = *(__int64 **)v13;
        v16 = *(unsigned int *)(v13 + 8);
        v17 = v16 - 1;
        v16 *= 16;
        v18 = (__int64 *)((char *)v15 + v16);
        v19 = 16LL * (v14 & v17);
        v20 = &v15[(unsigned __int64)v19 / 8];
        if ( v19 == v16 )
          goto LABEL_53;
        v21 = &v15[(unsigned __int64)v19 / 8];
        while ( 2 )
        {
          v22 = *v21;
          if ( (unsigned __int64)*v21 <= 1 )
          {
            if ( !v22 )
              goto LABEL_19;
LABEL_16:
            v21 += 2;
            if ( v18 == v21 )
            {
LABEL_53:
              while ( v20 != v15 )
              {
                v48 = *v15;
                if ( (unsigned __int64)*v15 > 1 )
                {
                  if ( *(_DWORD *)(v48 + 12) == v14 && v11 == v48 )
                  {
                    v21 = v15;
                    goto LABEL_73;
                  }
                }
                else if ( !v48 )
                {
                  break;
                }
                v15 += 2;
              }
LABEL_19:
              BUG();
            }
            continue;
          }
          break;
        }
        if ( *(_DWORD *)(v22 + 12) != v14 || v11 != v22 )
          goto LABEL_16;
LABEL_73:
        v56 = *(_DWORD *)(a1 + 48);
        v105 = v21[1];
        v57 = *(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56);
        LODWORD(v106) = 2 * v56;
        if ( 3 * v56 < 4 * v57 )
        {
          v69 = v106;
          v107 = 16LL * (unsigned int)v106;
          v70 = (__m128i *)sub_186B270(v107);
          v60 = v107;
          v58 = v70;
          v71 = (__m128i *)((char *)v70 + v107);
          if ( v69 )
          {
            if ( (v107 & 0x10) == 0 || (*v70 = 0, ++v70, v70 != v71) )
            {
              do
              {
                *v70 = 0;
                v70 += 2;
                v70[-1] = 0;
              }
              while ( v70 != v71 );
            }
          }
          v72 = *(const __m128i **)(a1 + 40);
          v61 = (__m128 *)v71;
          v73 = (__m128i *)&v72[*(unsigned int *)(a1 + 48)];
          v59 = v106 - 1;
          if ( v72 != v73 )
          {
            do
            {
              if ( v72->m128i_i64[0] > 1uLL )
              {
                v74 = 16LL * (*(_DWORD *)(v72->m128i_i64[0] + 12) & v59);
                v75 = &v58[(unsigned __int64)v74 / 0x10];
                if ( v60 == v74 )
                {
LABEL_104:
                  if ( v58 == v75 )
                  {
LABEL_116:
                    v111 = v71;
                    v110 = v73;
                    v109 = v72;
                    LODWORD(v108) = v59;
                    v107 = v60;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v76 = v58;
                  while ( v76->m128i_i64[0] )
                  {
                    if ( v75 == ++v76 )
                      goto LABEL_116;
                  }
                }
                else
                {
                  v76 = &v58[(unsigned __int64)v74 / 0x10];
                  while ( v76->m128i_i64[0] )
                  {
                    if ( v71 == ++v76 )
                      goto LABEL_104;
                  }
                }
                *v76 = _mm_loadu_si128(v72);
              }
              ++v72;
            }
            while ( v73 != v72 );
            v73 = *(__m128i **)(a1 + 40);
          }
          if ( v73 )
          {
            LODWORD(v108) = v59;
            v107 = v60;
            sub_186B220(v73);
            v59 = v108;
            v60 = v107;
          }
          v77 = v106;
          v14 = *(_DWORD *)(v11 + 12);
          *(_QWORD *)(a1 + 40) = v58;
          *(_DWORD *)(a1 + 56) = 0;
          *(_DWORD *)(a1 + 48) = v77;
        }
        else
        {
          v58 = *(__m128i **)(a1 + 40);
          v59 = v56 - 1;
          v60 = 16LL * v56;
          v61 = (__m128 *)&v58->m128i_i8[v60];
        }
        v62 = 16LL * (v14 & v59);
        v63 = _mm_loadh_ps((const double *)&v105);
        v64 = &v58[(unsigned __int64)v62 / 0x10];
        if ( v62 != v60 )
        {
          v65 = (__m128 *)&v58[(unsigned __int64)v62 / 0x10];
          v66 = nullptr;
          while ( 1 )
          {
            v67 = v65->m128_u64[0];
            if ( v65->m128_u64[0] > 1 )
            {
              if ( *(_DWORD *)(v67 + 12) == v14 && v11 == v67 )
                goto LABEL_121;
            }
            else
            {
              if ( !v67 )
              {
                if ( v66 )
                  goto LABEL_114;
                v66 = v65;
                goto LABEL_115;
              }
              v66 = v65;
            }
            if ( ++v65 == v61 )
              goto LABEL_86;
          }
        }
        v66 = nullptr;
        break;
      case 2:
        result = sub_DBE3E0(&v112, a2, *(_DWORD *)(v11 + 72), (_QWORD *)(v11 + 80 + 16LL * *(unsigned int *)(v11 + 20)));
        if ( !(_BYTE)result )
          goto LABEL_10;
        result = sub_DBE3E0(&v112, a2, *(_DWORD *)(v11 + 76), (_QWORD *)(v11 + 80 + 16LL * *(unsigned int *)(v11 + 20)));
        if ( !(_BYTE)result )
          goto LABEL_10;
        if ( !(unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 24)) )
        {
          v9 = v112;
          v42 = *(_QWORD *)(v11 + 24);
          if ( v112 )
          {
            v43 = *(v112 - 1);
            if ( v43 == *(v112 - 2) )
            {
              v49 = (3 * v43 + 1) >> 1;
              v50 = 8 * v49 + 8;
              if ( 8 * v43 + 8 >= v50 || v43 >= v49 )
              {
                v90 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v113, "Overflow encountered when expanding vector");
                *v90 = (char *)off_1C63128;
                sub_2333C0(v90 + 1, v113);
                sub_233E40((__int64)v113);
                __cxa_throw(v90, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
LABEL_67:
              v51 = (unsigned int *)sub_186B300(v9 - 1, v50);
              v9 = v51 + 2;
              v112 = v51 + 2;
              *v51 = v49;
              v43 = v51[1];
            }
          }
          else
          {
LABEL_172:
            v101 = (_QWORD *)sub_186B270(0x18u);
            *v101 = 2;
            v43 = 0;
            v9 = v101 + 1;
            v112 = v9;
          }
LABEL_49:
          v9[v43] = v42;
          *((_DWORD *)v9 - 1) = v43 + 1;
          goto LABEL_7;
        }
        v79 = *(_DWORD *)(a1 + 48);
        if ( 3 * v79 < 4 * (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56)) )
        {
          LODWORD(v106) = 2 * v79;
          v105 = 32LL * v79;
          v91 = sub_186B270(v105);
          v81 = v105;
          v92 = v106;
          v58 = (__m128i *)v91;
          m128i_i8 = (_OWORD *)v91;
          v94 = v105 + v91;
          if ( (_DWORD)v106 )
          {
            if ( (((_BYTE)v94 - (_BYTE)v58) & 0x10) == 0
              || (m128i_i8 = v58[1].m128i_i8, *v58 = 0, (__m128i *)v94 != &v58[1]) )
            {
              do
              {
                *m128i_i8 = 0;
                m128i_i8 += 2;
                *(m128i_i8 - 1) = 0;
              }
              while ( (_OWORD *)v94 != m128i_i8 );
            }
          }
          v95 = *(__m128i **)(a1 + 40);
          v80 = v92 - 1;
          v82 = v94;
          v96 = v95;
          v97 = (size_t)&v95[*(unsigned int *)(a1 + 48)];
          if ( v95 != (__m128i *)v97 )
          {
            do
            {
              if ( v96->m128i_i64[0] > 1uLL )
              {
                v98 = 16LL * (*(_DWORD *)(v96->m128i_i64[0] + 12) & v80);
                v99 = &v58[(unsigned __int64)v98 / 0x10];
                if ( v81 == v98 )
                {
LABEL_159:
                  if ( v58 == v99 )
                  {
LABEL_171:
                    v110 = (__m128i *)v94;
                    LODWORD(v109) = v92;
                    v108 = v94;
                    v107 = v81;
                    LODWORD(v106) = v92 - 1;
                    v105 = v97;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v100 = v58;
                  while ( v100->m128i_i64[0] )
                  {
                    if ( v99 == ++v100 )
                      goto LABEL_171;
                  }
                }
                else
                {
                  v100 = &v58[(unsigned __int64)v98 / 0x10];
                  while ( v100->m128i_i64[0] )
                  {
                    if ( (__m128i *)v94 == ++v100 )
                      goto LABEL_159;
                  }
                }
                *v100 = _mm_loadu_si128(v96);
              }
              ++v96;
            }
            while ( (const __m128i *)v97 != v96 );
            v95 = *(__m128i **)(a1 + 40);
          }
          if ( v95 )
          {
            LODWORD(v108) = v92;
            v107 = v94;
            v106 = v81;
            LODWORD(v105) = v92 - 1;
            sub_186B220(v95);
            v92 = v108;
            v82 = v107;
            v81 = v106;
            v80 = v105;
          }
          *(_QWORD *)(a1 + 40) = v58;
          *(_DWORD *)(a1 + 48) = v92;
          *(_DWORD *)(a1 + 56) = 0;
        }
        else
        {
          v58 = *(__m128i **)(a1 + 40);
          v80 = v79 - 1;
          v81 = 16LL * v79;
          v82 = (size_t)v58->m128i_u64 + v81;
        }
        v83 = *(_DWORD *)(v11 + 12);
        v63 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
        v84 = 16LL * (v83 & v80);
        v85 = &v58[(unsigned __int64)v84 / 0x10];
        if ( v84 == v81 )
        {
          v86 = nullptr;
        }
        else
        {
          v65 = (__m128 *)&v58[(unsigned __int64)v84 / 0x10];
          v86 = nullptr;
          do
          {
            v87 = v65->m128_u64[0];
            if ( v65->m128_u64[0] > 1 )
            {
              if ( *(_DWORD *)(v87 + 12) == v83 && v11 == v87 )
              {
LABEL_121:
                *v65 = v63;
                goto LABEL_5;
              }
            }
            else
            {
              if ( !v87 )
              {
                if ( v86 )
                {
                  --*(_DWORD *)(a1 + 56);
                  v65 = v86;
                }
                *v65 = v63;
                ++*(_DWORD *)(a1 + 52);
                goto LABEL_5;
              }
              v86 = v65;
            }
            ++v65;
          }
          while ( v65 != (__m128 *)v82 );
        }
        while ( 1 )
        {
          if ( v85 == v58 )
          {
LABEL_90:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v88 = v58->m128i_i64[0];
          if ( v58->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v88 + 12) == v83 && v11 == v88 )
            {
LABEL_123:
              *v58 = (__m128i)v63;
              goto LABEL_5;
            }
          }
          else
          {
            if ( !v88 )
            {
              if ( v86 )
              {
                --*(_DWORD *)(a1 + 56);
                v58 = (__m128i *)v86;
              }
              *v58 = (__m128i)v63;
              ++*(_DWORD *)(a1 + 52);
              goto LABEL_5;
            }
            v86 = (__m128 *)v58;
          }
          ++v58;
        }
      case 3:
        if ( a4 )
        {
          v39 = *(_QWORD *)(v11 + 24);
          if ( v39 && (v40 = *(_QWORD *)(v39 + 8)) != 0 )
            v41 = *(unsigned int *)(v40 - 4);
          else
            v41 = 0;
          result = sub_1681830(&v112, a2, v41);
          if ( !(_BYTE)result )
            goto LABEL_10;
        }
        goto LABEL_5;
      case 4:
        if ( a4 )
        {
          v28 = *(_QWORD *)(v11 + 24);
          if ( v28 && (v29 = *(_QWORD *)(v28 + 8)) != 0 )
            v30 = *(unsigned int *)(v29 - 4);
          else
            v30 = 0;
          result = sub_1681830(&v112, a2, v30);
          if ( !(_BYTE)result )
            goto LABEL_10;
        }
        v31 = *(unsigned int *)(v11 + 32);
        if ( (_DWORD)v31 )
        {
          LOBYTE(v106) = 1;
          v32 = v11;
          v105 = v11 + 8 * v31;
          do
          {
            v33 = *(_QWORD *)(v32 + 48);
            if ( !(unsigned __int8)sub_15D37A0(a2, v33) )
            {
              v34 = v112;
              if ( v112 )
              {
                v35 = *(v112 - 1);
                if ( v35 == *(v112 - 2) )
                {
                  v44 = (3 * v35 + 1) >> 1;
                  v45 = 8 * v44 + 8;
                  if ( 8 * v35 + 8 >= (unsigned int)v45 || v35 >= v44 )
                  {
                    v102 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v113, "Overflow encountered when expanding vector");
                    *v102 = (char *)off_1C63128;
                    sub_2333C0(v102 + 1, v113);
                    sub_233E40((__int64)v113);
                    __cxa_throw(
                      v102,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  LODWORD(v106) = (3 * v35 + 1) >> 1;
                  v46 = (_DWORD *)sub_186B300(v112 - 2, v45);
                  v47 = (unsigned int)v46[1];
                  v34 = v46 + 2;
                  v112 = v46 + 2;
                  *v46 = v106;
                  LODWORD(v46) = v47;
                  v38 = &v34[v47];
                  v37 = (_DWORD)v46 + 1;
                }
                else
                {
                  v36 = v35;
                  v37 = v35 + 1;
                  v38 = &v112[2 * v36];
                }
              }
              else
              {
                v78 = (_QWORD *)sub_186B270(0x18u);
                v34 = v78 + 1;
                *v78 = 2;
                v37 = 1;
                v112 = v34;
                v38 = v34;
              }
              *v38 = v33;
              LOBYTE(v106) = 0;
              *((_DWORD *)v34 - 1) = v37;
            }
            result = v105;
            v32 += 8;
          }
          while ( v32 != v105 );
          if ( !(_BYTE)v106 )
            goto LABEL_10;
        }
        if ( (unsigned __int8)sub_15D37A0(a2, *(_QWORD *)(v11 + 40)) )
          goto LABEL_5;
        v9 = v112;
        v42 = *(_QWORD *)(v11 + 40);
        if ( !v112 )
          goto LABEL_172;
        v43 = *(v112 - 1);
        if ( v43 != *(v112 - 2) )
          goto LABEL_49;
        v49 = (3 * v43 + 1) >> 1;
        v50 = 8 * v49 + 8;
        if ( 8 * v43 + 8 >= v50 || v43 >= v49 )
        {
          v104 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v113, "Overflow encountered when expanding vector");
          *v104 = (char *)off_1C63128;
          sub_2333C0(v104 + 1, v113);
          sub_233E40((__int64)v113);
          __cxa_throw(v104, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_67;
      default:
        goto LABEL_10;
    }
    while ( 1 )
    {
LABEL_86:
      if ( v64 == v58 )
        goto LABEL_90;
      v68 = v58->m128i_i64[0];
      if ( v58->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v68 + 12) == v14 && v11 == v68 )
        goto LABEL_123;
LABEL_85:
      ++v58;
    }
    if ( v68 )
    {
      v66 = (__m128 *)v58;
      goto LABEL_85;
    }
    if ( v66 )
LABEL_114:
      --*(_DWORD *)(a1 + 56);
    else
      v66 = (__m128 *)v58;
LABEL_115:
    *v66 = v63;
    ++*(_DWORD *)(a1 + 52);
LABEL_5:
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v11, 1);
LABEL_6:
    v9 = v112;
    --*(v112 - 1);
LABEL_7:
    v10 = *((_DWORD *)v9 - 1);
  }
  while ( v10 );
  return sub_186B220(v9 - 1);
}

