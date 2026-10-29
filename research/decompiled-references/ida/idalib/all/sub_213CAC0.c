__int64 __fastcall sub_213CAC0(__int64 a1, __m128 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  unsigned int v8; // r13d
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r15d
  __int64 v15; // rax
  __m128 v16; // rax
  __m128 v17; // kr20_16
  __m128 v18; // kr30_16
  __m128i v19; // xmm1
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // r8
  char *v29; // rax
  char *v30; // rdi
  __int64 (*v31)(); // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r12
  __m128 *v37; // rsi
  __int64 v38; // rax
  void *v39; // rdx
  void *v40; // rax
  void *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r9
  size_t v45; // r15
  size_t v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  size_t v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r15
  __int64 v53; // r12
  __int64 v54; // r8
  __int64 v55; // r9
  void *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  _BYTE *v59; // rsi
  __m128i v60; // xmm3
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rdx
  __m128i v63; // xmm4
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  __m128i v66; // xmm6
  __int64 v67; // rdi
  const char *v68; // rax
  __int64 v69; // rax
  __int64 v70; // r12
  __int64 v71; // r15
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r12
  __m128 *v78; // rsi
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // r12
  __int64 v87; // r8
  __int64 v88; // r9
  unsigned __int64 v89; // rax
  __m128i si128; // xmm0
  __int64 v91; // rsi
  __int64 v92; // rdi
  __int64 v93; // r13
  __int64 v94; // rdx
  unsigned int v95; // ecx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  unsigned int v99; // ecx
  __int64 v100; // r8
  __int64 v101; // r9
  char v102; // al
  __int64 v103; // rsi
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // r13
  __int64 v111; // r8
  __int64 v112; // r9
  void *v113; // rax
  char v114; // r12
  __int64 v115; // rbx
  __int64 v116; // rax
  char *v117; // rdi
  __int64 v118; // r15
  __int64 v119; // rcx
  char *v120; // rdx
  char *v121; // rsi
  __m128i v122; // xmm7
  __int64 v123; // rax
  __m128i v124; // xmm7
  __int32 v125; // eax
  __int64 v126; // rcx
  __int64 v128; // [rsp+8h] [rbp-140h]
  __int64 v129; // [rsp+8h] [rbp-140h]
  __int64 v133; // [rsp+8h] [rbp-140h]
  __int64 v134; // [rsp+8h] [rbp-140h]
  __int64 v135; // [rsp+8h] [rbp-140h]
  __int32 v136; // [rsp+8h] [rbp-140h]
  size_t n; // [rsp+10h] [rbp-138h]
  __int16 s1; // [rsp+18h] [rbp-130h]
  void *s1a; // [rsp+18h] [rbp-130h]
  __int16 v140; // [rsp+20h] [rbp-128h]
  size_t v141; // [rsp+28h] [rbp-120h]
  __m128 v142; // [rsp+30h] [rbp-118h] BYREF
  void *v143[2]; // [rsp+40h] [rbp-108h] BYREF
  __m128i v144; // [rsp+50h] [rbp-F8h] BYREF
  __m128 v145; // [rsp+60h] [rbp-E8h]
  __m128i v146; // [rsp+70h] [rbp-D8h] BYREF
  __m128 v147; // [rsp+80h] [rbp-C8h]
  __int16 v148; // [rsp+90h] [rbp-B8h]
  __m128 v149; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v150; // [rsp+B0h] [rbp-98h] BYREF
  __int16 v151; // [rsp+C0h] [rbp-88h]
  _BYTE v152[40]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v153; // [rsp+F8h] [rbp-50h]
  __int64 v154; // [rsp+100h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 184);
  v8 = **(_DWORD **)(a1 + 48);
  switch ( v8 )
  {
    case 1u:
      return 1;
    case 2u:
    case 3u:
    case 0x18u:
    case 0x1Bu:
    case 0x2Eu:
      v142 = 0u;
      if ( !(unsigned __int8)sub_213B1B0(a1, &v142, v8, a4, a5, a6)
        || *(_DWORD *)sub_2153C00(a1) != 27 && *(_DWORD *)sub_2153C00(a1) != 24 )
      {
        v15 = *(_QWORD *)(a1 + 40);
        if ( *(_BYTE *)(v15 + 328) )
        {
          if ( v8 != 3 )
          {
            if ( *(_BYTE *)(a1 + 193) )
            {
              v149.m128_i8[0] = 64;
              sub_105F1C0(v152, (__int64 *)&v142, (__int64)&v149, 1);
              v145 = *(__m128 *)&v152[16];
              v16 = v142;
              v17 = *(__m128 *)&v152[16];
              v18 = *(__m128 *)v152;
              goto LABEL_10;
            }
LABEL_66:
            v89 = v142.m128_u64[1];
            si128 = _mm_load_si128((const __m128i *)&v142);
            *a3 = v142.m128_u64[1] + v142.m128_u64[0];
            *(__m128i *)v143 = si128;
            if ( v89 )
              goto LABEL_68;
            goto LABEL_67;
          }
          if ( **(_DWORD **)(a1 + 48) != 46 )
            goto LABEL_66;
          sub_2132C70(a1, &v142);
          v93 = *(_QWORD *)(a1 + 184);
          v149 = 0u;
          if ( (unsigned __int8)sub_213B1B0(a1, &v149, v94, v95, v96, v97) )
          {
            *(_QWORD *)v152 = "expected symbol variant after '@'";
            *(_WORD *)&v152[32] = 259;
            return (unsigned int)sub_2153E90(a1, v93, v152, 0, 0);
          }
          v16 = v142;
          v17 = v149;
          v18 = v142;
        }
        else
        {
          if ( !*(_BYTE *)(v15 + 329) || !(unsigned __int8)sub_2154640(a1, 17) )
            goto LABEL_66;
          v149 = 0u;
          sub_213B1B0(a1, &v149, v98, v99, v100, v101);
          *(_QWORD *)v152 = "expected ')'";
          *(_WORD *)&v152[32] = 259;
          v13 = sub_2154510(a1, 18, v152);
          if ( (_BYTE)v13 )
            return v13;
          v16 = v142;
          v17 = v149;
          v18 = v142;
        }
LABEL_10:
        v19 = _mm_load_si128((const __m128i *)&v142);
        *a3 = v16.m128_u64[1] + v16.m128_u64[0];
        *(__m128i *)v143 = v19;
        if ( v16.m128_u64[1] )
        {
          if ( v17.m128_u64[1] )
          {
            v20 = *(_QWORD *)(a1 + 40);
            v145 = v17;
            v21 = sub_20FE3B0(v20, v17.m128_i64[0], v17.m128_i64[1]);
            if ( BYTE4(v21) )
            {
              s1 = v21;
              *(__m128 *)v143 = v18;
              goto LABEL_14;
            }
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 156LL) )
            {
              v149.m128_u64[0] = (unsigned __int64)"'";
              v151 = 259;
              v148 = 1283;
              v146.m128i_i64[0] = (__int64)"invalid variant '";
              v147 = v17;
              sub_A41580((__m128i *)v152, &v146, (const __m128i *)&v149, v17.m128_i64[1], v22, v23);
              return (unsigned int)sub_2153E90(a1, v17.m128_u64[0], v152, 0, 0);
            }
          }
LABEL_68:
          s1 = 0;
          v18 = *(__m128 *)v143;
LABEL_14:
          v24 = *(_QWORD *)(a1 + 16);
          v25 = sub_2244B30(v18.m128_u64[0], v18.m128_u64[1]);
          v26 = sub_2244E60(v24 + 1400, v18.m128_u64[0], v18.m128_u64[1], v25);
          if ( v26 == -1 )
            sub_21309F0((__int64 **)v152, (__int64 *)(*(_QWORD *)(v24 + 1400) + 8LL * *(unsigned int *)(v24 + 1408)), 1);
          else
            sub_21309F0((__int64 **)v152, (__int64 *)(*(_QWORD *)(v24 + 1400) + 8LL * v26), 1);
          v128 = *(_QWORD *)v152;
          sub_21309F0((__int64 **)v152, (__int64 *)(*(_QWORD *)(v24 + 1400) + 8LL * *(unsigned int *)(v24 + 1408)), 1);
          if ( *(_QWORD *)v152 == v128 || (v28 = *(_QWORD *)(*(_QWORD *)v128 + 8LL)) == 0 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 22LL) )
            {
              v134 = *(_QWORD *)(a1 + 16);
              sub_2246780(&v149, v143);
              *(_WORD *)&v152[32] = 261;
              *(__m128 *)v152 = v149;
              v105 = sub_21093A0(v134, (void ***)v152);
              v28 = v105;
              if ( (__int64 *)v149.m128_u64[0] != &v150 )
              {
                v135 = v105;
                operator delete((void *)v149.m128_u64[0]);
                v28 = v135;
              }
            }
            else
            {
              v92 = *(_QWORD *)(a1 + 16);
              *(_WORD *)&v152[32] = 261;
              *(void **)v152 = v143[0];
              *(void **)&v152[8] = v143[1];
              v28 = sub_21093A0(v92, (void ***)v152);
            }
          }
          if ( (*(_BYTE *)(v28 + 9) & 0x70) == 0x20 )
          {
            v29 = *(char **)(v28 + 24);
            if ( *v29 == 1 )
            {
              if ( !s1 )
                goto LABEL_24;
            }
            else if ( *v29 == 5 )
            {
              v30 = v29 - 8;
              if ( v29 != byte_8 )
              {
                v31 = *(__int64 (**)())(*((_QWORD *)v29 - 1) + 48LL);
                if ( v31 != sub_20FDBB0 )
                {
                  v133 = v28;
                  v102 = ((__int64 (__fastcall *)(char *))v31)(v30);
                  v28 = v133;
                  if ( v102 )
                  {
                    if ( s1 )
                    {
                      v103 = *a3;
                      *(_QWORD *)v152 = "unexpected modifier on variable reference";
                      *(_WORD *)&v152[32] = 259;
                      return (unsigned int)sub_2153E90(a1, v103, v152, 0, 0);
                    }
                    v29 = *(char **)(v133 + 24);
LABEL_24:
                    a2->m128_u64[0] = (unsigned __int64)v29;
                    return 0;
                  }
                }
              }
            }
          }
          v29 = (char *)sub_210EA90(v28, s1, *(_QWORD **)(a1 + 16), v7, v28, v27);
          goto LABEL_24;
        }
LABEL_67:
        v91 = *(_QWORD *)(a1 + 184);
        *(_QWORD *)v152 = "expected a symbol reference";
        *(_WORD *)&v152[32] = 259;
        return (unsigned int)sub_2153E90(a1, v91, v152, 0, 0);
      }
      if ( *(_DWORD *)sub_2153C00(a1) == 27 && *(_BYTE *)(*(_QWORD *)(a1 + 40) + 32LL)
        || *(_DWORD *)sub_2153C00(a1) == 24 && *(_BYTE *)(*(_QWORD *)(a1 + 40) + 22LL) )
      {
        v13 = 0;
        sub_2132C70(a1, &v142);
        v110 = sub_2108670(*(_QWORD *)(a1 + 16), (__int64)&v142, v106, v107, v108, v109);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(
          *(_QWORD *)(a1 + 24),
          v110,
          0);
        a2->m128_u64[0] = sub_210EA90(v110, 0, *(_QWORD **)(a1 + 16), 0, v111, v112);
        *a3 = v7;
      }
      else
      {
        *(_WORD *)&v152[32] = 259;
        *(_QWORD *)v152 = "invalid token in expression";
        return (unsigned int)sub_2153E90(a1, v7, v152, 0, 0);
      }
      return v13;
    case 4u:
      v32 = sub_2153C00(a1);
      v129 = sub_2124B50(v32);
      v33 = sub_2153C00(a1);
      if ( *(_DWORD *)(v33 + 32) <= 0x40u )
        v36 = *(_QWORD *)(v33 + 24);
      else
        v36 = **(_QWORD **)(v33 + 24);
      v37 = *(__m128 **)(a1 + 16);
      v13 = 0;
      a2->m128_u64[0] = sub_210EBA0(v36, v37, 0, 0, v34, v35);
      *a3 = sub_2124B60(*(_QWORD *)(a1 + 48));
      sub_2132C70(a1, v37);
      if ( **(_DWORD **)(a1 + 48) != 2 )
        return v13;
      v38 = sub_2153C00(a1);
      v39 = *(void **)(v38 + 16);
      v40 = *(void **)(v38 + 8);
      v152[0] = 64;
      v143[1] = v39;
      v143[0] = v40;
      sub_105F1C0(&v144, (__int64 *)v143, (__int64)v152, 1);
      v41 = v143[1];
      if ( (void *)v144.m128i_i64[1] == v143[1] )
      {
        v140 = 0;
      }
      else
      {
        v42 = sub_20FE3B0(*(_QWORD *)(a1 + 40), v145.m128_i64[0], v145.m128_i64[1]);
        if ( !BYTE4(v42) )
        {
          v149.m128_u64[0] = (unsigned __int64)"'";
          v146.m128i_i64[0] = (__int64)"invalid variant '";
          v151 = 259;
          v147 = v145;
          v148 = 1283;
          sub_A41580((__m128i *)v152, &v146, (const __m128i *)&v149, v43, 1283, v44);
          return (unsigned int)sub_21543E0(a1, v152, 0, 0);
        }
        v140 = v42;
        *(__m128i *)v143 = _mm_load_si128(&v144);
        v41 = v143[1];
      }
      n = (size_t)v41;
      v45 = j__strlen("f");
      s1a = v143[0];
      v46 = j__strlen("b");
      v49 = n;
      if ( v45 == n )
      {
        if ( !n )
        {
          v52 = *(_QWORD *)(a1 + 16);
          v51 = v46 == 0;
          goto LABEL_36;
        }
        v141 = v46;
        v50 = memcmp(s1a, "f", n);
        v49 = n;
        v47 = v141;
        v51 = v50;
        if ( !v50 )
        {
          v52 = *(_QWORD *)(a1 + 16);
          if ( n != v141 )
          {
LABEL_36:
            v53 = sub_210A620(v52, v36, v51, v49, v47, v48);
            a2->m128_u64[0] = sub_210EA90(v53, v140, *(_QWORD **)(a1 + 16), v129, v54, v55);
            v56 = (void *)j__strlen("b");
            if ( v56 == v143[1] && (!v56 || !memcmp(v143[0], "b", (size_t)v56)) && !*(_QWORD *)v53 )
            {
              if ( (*(_BYTE *)(v53 + 9) & 0x70) != 0x20
                || (*(_BYTE *)(v53 + 8) & 0x40) != 0
                || (v113 = sub_210D820(*(_QWORD *)(v53 + 24)), (*(_QWORD *)v53 = v113) == 0) )
              {
                *(_WORD *)&v152[32] = 259;
                *(_QWORD *)v152 = "directional label undefined";
                return (unsigned int)sub_2153E90(a1, v129, v152, 0, 0);
              }
            }
            v57 = *(_QWORD *)(a1 + 504);
            v58 = *(unsigned int *)(a1 + 528);
            v59 = v152;
            *(_QWORD *)v152 = v53;
            v60 = _mm_loadu_si128((const __m128i *)(a1 + 472));
            v61 = *(_QWORD *)(a1 + 520);
            v153 = v57;
            v62 = v58 + 1;
            v63 = _mm_loadu_si128((const __m128i *)(a1 + 488));
            *(__m128i *)&v152[8] = v60;
            v154 = v129;
            *(__m128i *)&v152[24] = v63;
            v64 = v61 + 56 * v58;
            if ( v62 > *(unsigned int *)(a1 + 532) )
            {
              if ( v61 > (unsigned __int64)v152 || v64 <= (unsigned __int64)v152 )
              {
                v115 = -1;
                v114 = 0;
              }
              else
              {
                v114 = 1;
                v115 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)&v152[-v61] >> 3);
              }
              v116 = sub_2237400(a1 + 520, a1 + 536, v62, 56, &v149);
              v117 = *(char **)(a1 + 520);
              v118 = v116;
              v119 = v116;
              v120 = v117;
              v121 = &v117[56 * *(unsigned int *)(a1 + 528)];
              if ( v117 != v121 )
              {
                do
                {
                  v122 = _mm_loadu_si128((const __m128i *)(v120 + 8));
                  v123 = *(_QWORD *)v120;
                  v120 += 56;
                  v119 += 56;
                  *(__m128i *)(v119 - 48) = v122;
                  v124 = _mm_loadu_si128((const __m128i *)v120 - 2);
                  *(_QWORD *)(v119 - 56) = v123;
                  *(__m128i *)(v119 - 32) = v124;
                  *(_QWORD *)(v119 - 16) = *((_QWORD *)v120 - 2);
                  *(_QWORD *)(v119 - 8) = *((_QWORD *)v120 - 1);
                }
                while ( v121 != v120 );
              }
              v125 = v149.m128_i32[0];
              if ( (char *)(a1 + 536) != v117 )
              {
                v136 = v149.m128_i32[0];
                free(v117);
                v125 = v136;
              }
              v126 = *(unsigned int *)(a1 + 528);
              *(_QWORD *)(a1 + 520) = v118;
              v59 = v152;
              *(_DWORD *)(a1 + 532) = v125;
              v64 = v118 + 56 * v126;
              if ( v114 )
                v59 = (_BYTE *)(v118 + 56 * v115);
            }
            v65 = *(_QWORD *)v59;
            *(__m128i *)(v64 + 8) = _mm_loadu_si128((const __m128i *)(v59 + 8));
            v66 = _mm_loadu_si128((const __m128i *)(v59 + 24));
            *(_QWORD *)v64 = v65;
            *(__m128i *)(v64 + 24) = v66;
            *(_QWORD *)(v64 + 40) = *((_QWORD *)v59 + 5);
            *(_QWORD *)(v64 + 48) = *((_QWORD *)v59 + 6);
            v67 = *(_QWORD *)(a1 + 48);
            ++*(_DWORD *)(a1 + 528);
            *a3 = sub_2124B60(v67);
            sub_2132C70(a1, (__m128 *)v59);
            return 0;
          }
          v104 = memcmp(s1a, "b", n);
LABEL_98:
          v51 = v104 == 0;
          goto LABEL_36;
        }
        if ( n != v141 )
          return 0;
      }
      else
      {
        if ( n != v46 )
          return 0;
        if ( !n )
        {
          v52 = *(_QWORD *)(a1 + 16);
          v51 = 1;
          goto LABEL_36;
        }
      }
      v104 = memcmp(s1a, "b", v49);
      if ( v104 )
        return 0;
      v52 = *(_QWORD *)(a1 + 16);
      goto LABEL_98;
    case 5u:
      v68 = "literal value out of range for directive";
      goto LABEL_43;
    case 6u:
      v69 = sub_2153C00(a1);
      v70 = *(_QWORD *)(v69 + 16);
      v71 = *(_QWORD *)(v69 + 8);
      v72 = sub_21F90B0(a1, a2);
      sub_22051B0(v152, v72, v71, v70);
      v74 = sub_21F90D0(v152, v72, v73);
      if ( *(_QWORD *)v152 == v74 )
        sub_22010F0(&v149, v152);
      else
        sub_21FEE00(&v149, v152);
      v77 = v149.m128_u64[0];
      if ( v149.m128_i32[2] > 0x40u )
      {
        v77 = *(_QWORD *)v149.m128_u64[0];
        operator delete[]((void *)v149.m128_u64[0]);
      }
      v78 = *(__m128 **)(a1 + 16);
      v13 = 0;
      a2->m128_u64[0] = sub_210EBA0(v77, v78, 0, 0, v75, v76);
      *a3 = sub_2124B60(*(_QWORD *)(a1 + 48));
      sub_2132C70(a1, v78);
      sub_9955A0(v152);
      return v13;
    case 0xCu:
      sub_2132C70(a1, a2);
      v13 = sub_213CAC0(a1, a2, a3, a4);
      if ( (_BYTE)v13 )
        return 1;
      a2->m128_u64[0] = sub_210EA10(3, a2->m128_u64[0], *(_QWORD **)(a1 + 16), v7, v79, v80);
      return v13;
    case 0xDu:
      sub_2132C70(a1, a2);
      v13 = sub_213CAC0(a1, a2, a3, a4);
      if ( (_BYTE)v13 )
        return 1;
      a2->m128_u64[0] = sub_210EA10(1, a2->m128_u64[0], *(_QWORD **)(a1 + 16), v7, v81, v82);
      return v13;
    case 0xEu:
      sub_2132C70(a1, a2);
      v13 = sub_213CAC0(a1, a2, a3, a4);
      if ( (_BYTE)v13 )
        return 1;
      a2->m128_u64[0] = sub_210EA10(2, a2->m128_u64[0], *(_QWORD **)(a1 + 16), v7, v83, v84);
      return v13;
    case 0x11u:
      sub_2132C70(a1, a2);
      *(_QWORD *)v152 = 0;
      if ( sub_2133530(a1, (unsigned __int64 *)a2, (__int64)v152) )
        return 1;
      *a3 = sub_2124B60(*(_QWORD *)(a1 + 48));
      *(_WORD *)&v152[32] = 259;
      *(_QWORD *)v152 = "expected ')'";
      return (unsigned int)sub_2154510(a1, 18, v152);
    case 0x13u:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 16LL) )
      {
        sub_2132C70(a1, a2);
        *(_QWORD *)v152 = 0;
        if ( sub_2133530(a1, (unsigned __int64 *)a2, (__int64)v152) )
        {
          return 1;
        }
        else
        {
          v85 = sub_2153C00(a1);
          *a3 = sub_2124B60(v85);
          *(_QWORD *)v152 = "expected ']' in brackets expression";
          *(_WORD *)&v152[32] = 259;
          return (unsigned int)sub_2154510(a1, 20, v152);
        }
      }
      else
      {
        v68 = "brackets expression not supported on this target";
LABEL_43:
        *(_QWORD *)v152 = v68;
        *(_WORD *)&v152[32] = 259;
        return (unsigned int)sub_21543E0(a1, v152, 0, 0);
      }
    case 0x19u:
      v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 22LL);
      v68 = "cannot use . as current PC";
      if ( (_BYTE)v13 )
        goto LABEL_43;
      v86 = sub_2108670(*(_QWORD *)(a1 + 16), (__int64)a2, v8, a4, a5, a6);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24), v86, 0);
      a2->m128_u64[0] = sub_210EA90(v86, 0, *(_QWORD **)(a1 + 16), 0, v87, v88);
      *a3 = sub_2124B60(*(_QWORD *)(a1 + 48));
      sub_2132C70(a1, nullptr);
      return v13;
    case 0x23u:
      sub_2132C70(a1, a2);
      v13 = sub_213CAC0(a1, a2, a3, a4);
      if ( (_BYTE)v13 )
        return 1;
      a2->m128_u64[0] = sub_210EA10(0, a2->m128_u64[0], *(_QWORD **)(a1 + 16), v7, v11, v12);
      return v13;
    default:
      v68 = "unknown token in expression";
      goto LABEL_43;
  }
}
