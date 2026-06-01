__int64 __fastcall sub_3B3EA0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // edi
  unsigned int v9; // edx
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 result; // rax
  __int64 v14; // rdx
  unsigned int v15; // r13d
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  char *v23; // rcx
  unsigned int v24; // esi
  char *v25; // rdi
  __int64 v26; // rsi
  char *v27; // r8
  char *v28; // rax
  int v29; // esi
  __int64 *v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned int v33; // ecx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r14
  int v38; // eax
  bool v39; // zf
  _QWORD *v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 *v44; // rcx
  unsigned int v45; // edx
  __int64 *v46; // r12
  int v47; // r9d
  __int64 v48; // rcx
  __m128i *v49; // r13
  int v50; // esi
  __int64 v51; // rax
  __int64 *v52; // rdi
  _QWORD *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rax
  unsigned int v59; // r12d
  unsigned int v60; // ecx
  unsigned int *v61; // rax
  __int64 v62; // rcx
  __int64 *v63; // rax
  int v64; // r10d
  __int64 *v65; // r8
  const __m128i *v66; // r15
  __m128i *v67; // r11
  __int64 v68; // r8
  const __m128i *v69; // rbp
  __int64 v70; // rax
  __int64 *v71; // rdx
  __m128i *v72; // rax
  int v73; // eax
  __int64 *v74; // rax
  int v75; // edx
  __int64 v76; // rcx
  int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rsi
  __int64 v81; // r9
  __int64 v82; // rsi
  __int64 v83; // r10
  int v84; // edi
  int v85; // ecx
  int v86; // r10d
  _QWORD *v87; // rsi
  __m128i *v88; // r9
  __m128i *v89; // r11
  __int64 v90; // rsi
  const __m128i *v91; // rbx
  __int64 v92; // rax
  __int64 v93; // r8
  __m128i *v94; // rbp
  int v95; // ecx
  __int64 v96; // r9
  __int64 v97; // rdx
  __m128i *v98; // rsi
  __m128i *v99; // rdx
  _QWORD *v100; // rdx
  char **exception; // rbx
  __int64 v102; // rdx
  __int64 v103; // [rsp+0h] [rbp-A8h]
  size_t v104; // [rsp+0h] [rbp-A8h]
  int v105; // [rsp+0h] [rbp-A8h]
  int v106; // [rsp+0h] [rbp-A8h]
  __int64 *v107; // [rsp+0h] [rbp-A8h]
  unsigned int v108; // [rsp+0h] [rbp-A8h]
  int v109; // [rsp+0h] [rbp-A8h]
  int v110; // [rsp+8h] [rbp-A0h]
  size_t v111; // [rsp+8h] [rbp-A0h]
  int v112; // [rsp+8h] [rbp-A0h]
  __int64 v113; // [rsp+8h] [rbp-A0h]
  int v114; // [rsp+10h] [rbp-98h]
  size_t v115; // [rsp+10h] [rbp-98h]
  int v116; // [rsp+10h] [rbp-98h]
  int v117; // [rsp+18h] [rbp-90h]
  __int64 *v118; // [rsp+18h] [rbp-90h]
  __int64 *v119; // [rsp+18h] [rbp-90h]
  __int64 *v120; // [rsp+20h] [rbp-88h]
  __m128i *v121; // [rsp+20h] [rbp-88h]
  __int64 v122; // [rsp+20h] [rbp-88h]
  int v123; // [rsp+28h] [rbp-80h]
  __int64 v124; // [rsp+28h] [rbp-80h]
  int v125; // [rsp+30h] [rbp-78h]
  __int64 v126[11]; // [rsp+50h] [rbp-58h] BYREF

  v4 = a1;
  v5 = a2;
  v6 = *(unsigned int *)(a1 + 232);
  v7 = *(__int64 **)(a1 + 224);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (char *)v7 + v6;
  v11 = 16LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    for ( result = (__int64)&v7[(unsigned __int64)v11 / 8]; v10 != (char *)result; result += 16 )
    {
      v14 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && v5 == v14 )
          goto LABEL_43;
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v7; v7 += 2 )
  {
    v58 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( *(_DWORD *)(v58 + 12) == v8 && v5 == v58 )
      {
        result = (__int64)v7;
LABEL_43:
        v55 = *(_QWORD *)(result + 8);
        if ( v55 )
          ++*(_DWORD *)(v55 + 8);
        v56 = *a3;
        if ( *a3 )
        {
          v57 = a3[1];
          v39 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v39 )
            result = sub_15D7BC0(v57, v56);
        }
        *a3 = v55;
        return result;
      }
    }
    else if ( !v58 )
    {
      break;
    }
  }
LABEL_8:
  v15 = *(_DWORD *)(v5 + 16);
  v16 = *(_QWORD *)(v4 + 8);
  v17 = sub_15D1F10(v5);
  v18 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 840LL);
  if ( v17 == v18 )
    goto LABEL_23;
  v19 = v4 + 24;
  v103 = v17;
  if ( !(unsigned __int8)sub_1673B10(v4 + 24, v17) )
  {
    sub_1872CE0("");
    sub_1873130(114, 761);
  }
  v20 = *(_QWORD *)(*(_QWORD *)(v103 + 24) + 8LL);
  if ( *(_BYTE *)(v20 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v21 = *(_DWORD *)v20;
  v22 = *(unsigned int *)(v4 + 176);
  v23 = *(char **)(v4 + 168);
  v24 = v22 - 1;
  v22 *= 24;
  v25 = &v23[v22];
  v26 = 24LL * (v21 & v24);
  v27 = &v23[v26];
  if ( v26 != v22 )
  {
    v28 = &v23[v26];
    do
    {
      v29 = *((_DWORD *)v28 + 1);
      if ( v29 == 2 )
      {
        if ( v21 == *(_DWORD *)v28 && v21 == *((_DWORD *)v28 + 2) )
          goto LABEL_18;
      }
      else if ( !v29 )
      {
        goto LABEL_109;
      }
      v28 += 24;
    }
    while ( v25 != v28 );
  }
  for ( ; v27 != v23; v23 += 24 )
  {
    v73 = *((_DWORD *)v23 + 1);
    if ( v73 == 2 )
    {
      if ( v21 == *(_DWORD *)v23 && v21 == *((_DWORD *)v23 + 2) )
      {
        v28 = v23;
LABEL_18:
        v30 = *((__int64 **)v28 + 2);
        goto LABEL_19;
      }
    }
    else if ( !v73 )
    {
      break;
    }
  }
LABEL_109:
  v106 = v21;
  v74 = (__int64 *)sub_186B270(0x290u);
  v75 = v106;
  v107 = v74;
  v112 = v75;
  sub_3B3820(v74, v75);
  v76 = *(unsigned int *)(v4 + 176);
  v30 = v107;
  v77 = v112;
  if ( 3 * (int)v76 < (unsigned int)(4 * (*(_DWORD *)(v4 + 180) + *(_DWORD *)(v4 + 184))) )
  {
    v123 = *(_DWORD *)(v4 + 176);
    v120 = v107;
    v117 = v112;
    v109 = 2 * v76;
    v115 = 24LL * (unsigned int)(2 * v76);
    v113 = v115;
    v78 = sub_186B270(v115);
    v86 = v109;
    v77 = v117;
    v30 = v120;
    if ( v109 )
    {
      v87 = (_QWORD *)v78;
      do
      {
        *v87 = 0;
        v87 += 6;
        *(v87 - 3) = 0;
      }
      while ( (_QWORD *)(v78 + 48LL * (v123 & 0x7FFFFFFF)) != v87 );
    }
    v88 = *(__m128i **)(v4 + 168);
    v108 = v109 - 1;
    v89 = (__m128i *)((char *)v88 + 24 * *(unsigned int *)(v4 + 176));
    v79 = v78 + v115;
    if ( v88 != v89 )
    {
      v90 = v5;
      v121 = (__m128i *)v78;
      v91 = *(const __m128i **)(v4 + 168);
      v118 = v30;
      v92 = v4 + 24;
      v93 = v4;
      v94 = (__m128i *)v79;
      v95 = v77;
      v96 = v90;
      do
      {
        if ( v91->m128i_i32[1] == 2 )
        {
          v97 = 24LL * (v91->m128i_i32[0] & v108);
          v98 = (__m128i *)((char *)v121 + v97);
          if ( v115 == v97 )
          {
LABEL_154:
            if ( v121 == v98 )
            {
LABEL_162:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v99 = v121;
            while ( v99->m128i_i32[1] )
            {
              v99 = (__m128i *)((char *)v99 + 24);
              if ( v98 == v99 )
                goto LABEL_162;
            }
          }
          else
          {
            v99 = (__m128i *)((char *)v121 + v97);
            while ( v99->m128i_i32[1] )
            {
              v99 = (__m128i *)((char *)v99 + 24);
              if ( v94 == v99 )
                goto LABEL_154;
            }
          }
          *v99 = _mm_loadu_si128(v91);
          v99[1].m128i_i64[0] = v91[1].m128i_i64[0];
        }
        v91 = (const __m128i *)((char *)v91 + 24);
      }
      while ( v89 != v91 );
      v77 = v95;
      v79 = (__int64)v94;
      v4 = v93;
      v30 = v118;
      v5 = v96;
      v89 = *(__m128i **)(v4 + 168);
      v19 = v92;
      v78 = (__int64)v121;
    }
    if ( v89 )
    {
      v125 = v86;
      v124 = v79;
      v122 = v78;
      v119 = v30;
      v116 = v77;
      sub_186B220(v89);
      v86 = v125;
      v79 = v124;
      v78 = v122;
      v30 = v119;
      v77 = v116;
    }
    *(_QWORD *)(v4 + 168) = v78;
    *(_DWORD *)(v4 + 176) = v86;
    *(_DWORD *)(v4 + 184) = 0;
  }
  else
  {
    v108 = v76 - 1;
    v78 = *(_QWORD *)(v4 + 168);
    v113 = 24 * v76;
    v79 = v78 + 24 * v76;
  }
  v80 = 24LL * (v77 & v108);
  v81 = v78 + v80;
  if ( v80 != v113 )
  {
    v82 = v78 + v80;
    v83 = 0;
    while ( 1 )
    {
      v84 = *(_DWORD *)(v82 + 4);
      if ( v84 == 2 )
      {
        if ( v77 == *(_DWORD *)v82 && v77 == *(_DWORD *)(v82 + 8) )
        {
          *(_DWORD *)(v82 + 8) = v77;
          *(_QWORD *)(v82 + 16) = v30;
          *(_DWORD *)(v82 + 4) = 2;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !v84 )
        {
          if ( v83 )
            goto LABEL_147;
          v83 = v82;
          goto LABEL_148;
        }
        v83 = v82;
      }
      v82 += 24;
      if ( v82 == v79 )
        goto LABEL_124;
    }
  }
  v83 = 0;
  while ( 1 )
  {
LABEL_124:
    if ( v81 == v78 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v85 = *(_DWORD *)(v78 + 4);
    if ( v85 != 2 )
      break;
    if ( v77 == *(_DWORD *)v78 && v77 == *(_DWORD *)(v78 + 8) )
    {
      *(_DWORD *)(v78 + 8) = v77;
      *(_QWORD *)(v78 + 16) = v30;
      *(_DWORD *)(v78 + 4) = 2;
      goto LABEL_19;
    }
LABEL_123:
    v78 += 24;
  }
  if ( v85 )
  {
    v83 = v78;
    goto LABEL_123;
  }
  if ( v83 )
LABEL_147:
    --*(_DWORD *)(v4 + 184);
  else
    v83 = v78;
LABEL_148:
  *(_DWORD *)(v83 + 8) = v77;
  *(_QWORD *)(v83 + 16) = v30;
  *(_DWORD *)(v83 + 4) = 2;
  *(_DWORD *)v83 = v77;
  ++*(_DWORD *)(v4 + 180);
LABEL_19:
  v31 = v30[2];
  if ( v31 )
  {
    v32 = *(unsigned int *)(v31 - 4);
    v33 = 1;
    if ( (unsigned int)v32 > 1 )
    {
      do
        ++v33;
      while ( v32 >= 1LL << v33 );
    }
  }
  else
  {
    v33 = 1;
  }
  v18 = sub_1674700(v19, v33);
LABEL_23:
  v34 = sub_15DB5C0(v16, v15, v18);
  v35 = a3[1];
  v36 = *a3;
  v37 = v34;
  if ( v34 )
  {
    v38 = *(_DWORD *)(v34 + 8) + 1;
    *(_DWORD *)(v37 + 8) = v38;
    if ( v36 )
    {
      v39 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v35, v36);
      *a3 = v37;
      v38 = *(_DWORD *)(v37 + 8);
    }
    else
    {
      *a3 = v37;
    }
    *(_DWORD *)(v37 + 8) = v38 + 1;
  }
  else
  {
    if ( v36 )
    {
      v39 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v35, v36);
    }
    *a3 = 0;
  }
  v40 = *(_QWORD **)(v4 + 256);
  if ( v40 )
  {
    v41 = *((_DWORD *)v40 - 1);
    if ( v41 == *((_DWORD *)v40 - 2) )
    {
      v59 = (3 * v41 + 1) >> 1;
      v60 = 8 * v59 + 8;
      if ( 8 * v41 + 8 >= v60 || v41 >= v59 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C7E7E(v126, "Overflow encountered when expanding vector", v102);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v126);
        sub_233E40((__int64)v126);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v61 = (unsigned int *)sub_186B300(v40 - 1, v60);
      v62 = v61[1];
      v40 = v61 + 2;
      *v61 = v59;
      *(_QWORD *)(v4 + 256) = v61 + 2;
      LODWORD(v61) = v62;
      v44 = &v40[v62];
      v43 = (_DWORD)v61 + 1;
    }
    else
    {
      v42 = v41;
      v43 = v41 + 1;
      v44 = &v40[v42];
    }
  }
  else
  {
    v100 = (_QWORD *)sub_186B270(0x18u);
    *v100 = 2;
    v43 = 1;
    v40 = v100 + 1;
    *(_QWORD *)(v4 + 256) = v40;
    v44 = v40;
  }
  *v44 = v37;
  *((_DWORD *)v40 - 1) = v43;
  v45 = *(_DWORD *)(v4 + 232);
  if ( 3 * v45 < 4 * (*(_DWORD *)(v4 + 236) + *(_DWORD *)(v4 + 240)) )
  {
    v110 = 2 * v45;
    v104 = 32LL * v45;
    v63 = (__int64 *)sub_186B270(v104);
    v48 = v104;
    v64 = v110;
    v46 = v63;
    v65 = &v63[v104 / 8];
    if ( v110 )
    {
      if ( (v104 & 0x10) == 0 || (*(_OWORD *)v63 = 0, v63 += 2, v65 != v63) )
      {
        do
        {
          *(_OWORD *)v63 = 0;
          v63 += 4;
          *((_OWORD *)v63 - 1) = 0;
        }
        while ( v65 != v63 );
      }
    }
    v66 = *(const __m128i **)(v4 + 224);
    v47 = v110 - 1;
    v49 = (__m128i *)v65;
    v67 = (__m128i *)&v66[*(unsigned int *)(v4 + 232)];
    if ( v66 != v67 )
    {
      v68 = v4;
      v69 = &v66[*(unsigned int *)(v4 + 232)];
      do
      {
        if ( v66->m128i_i64[0] > 1uLL )
        {
          v70 = 16LL * (*(_DWORD *)(v66->m128i_i64[0] + 12) & (unsigned int)v47);
          v71 = &v46[(unsigned __int64)v70 / 8];
          if ( v104 == v70 )
          {
LABEL_82:
            if ( v46 == v71 )
            {
LABEL_106:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v72 = (__m128i *)v46;
            while ( v72->m128i_i64[0] )
            {
              if ( v71 == (__int64 *)++v72 )
                goto LABEL_106;
            }
          }
          else
          {
            v72 = (__m128i *)&v46[(unsigned __int64)v70 / 8];
            while ( v72->m128i_i64[0] )
            {
              if ( v49 == ++v72 )
                goto LABEL_82;
            }
          }
          *v72 = _mm_loadu_si128(v66);
        }
        ++v66;
      }
      while ( v69 != v66 );
      v67 = *(__m128i **)(v68 + 224);
      v4 = v68;
    }
    if ( v67 )
    {
      v114 = v110;
      v111 = v104;
      v105 = v64 - 1;
      sub_186B220(v67);
      v64 = v114;
      v48 = v111;
      v47 = v105;
    }
    *(_QWORD *)(v4 + 224) = v46;
    *(_DWORD *)(v4 + 232) = v64;
    *(_DWORD *)(v4 + 240) = 0;
  }
  else
  {
    v46 = *(__int64 **)(v4 + 224);
    v47 = v45 - 1;
    v48 = 16LL * v45;
    v49 = (__m128i *)((char *)v46 + v48);
  }
  v50 = *(_DWORD *)(v5 + 12);
  v51 = 16LL * (v50 & (unsigned int)v47);
  v52 = &v46[(unsigned __int64)v51 / 8];
  if ( v51 != v48 )
  {
    result = (__int64)&v46[(unsigned __int64)v51 / 8];
    v53 = nullptr;
    while ( 1 )
    {
      v54 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v54 + 12) == v50 && v5 == v54 )
        {
          *(_QWORD *)result = v5;
          *(_QWORD *)(result + 8) = v37;
          return result;
        }
      }
      else
      {
        if ( !v54 )
        {
          if ( v53 )
            goto LABEL_104;
          v53 = (_QWORD *)result;
          goto LABEL_105;
        }
        v53 = (_QWORD *)result;
      }
      result += 16;
      if ( (__m128i *)result == v49 )
        goto LABEL_60;
    }
  }
  v53 = nullptr;
LABEL_60:
  while ( 2 )
  {
    if ( v52 == v46 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = *v46;
    if ( (unsigned __int64)*v46 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v50 && v5 == result )
      {
        *v46 = v5;
        v46[1] = v37;
        return result;
      }
      goto LABEL_59;
    }
    if ( result )
    {
      v53 = v46;
LABEL_59:
      v46 += 2;
      continue;
    }
    break;
  }
  if ( v53 )
LABEL_104:
    --*(_DWORD *)(v4 + 240);
  else
    v53 = v46;
LABEL_105:
  *v53 = v5;
  v53[1] = v37;
  ++*(_DWORD *)(v4 + 236);
  return result;
}

