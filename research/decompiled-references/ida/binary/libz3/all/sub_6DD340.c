__int64 __fastcall sub_6DD340(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // eax
  __int64 *v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *i; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // r8
  int v33; // eax
  __m128i v34; // xmm1
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // edx
  int v38; // r15d
  __m128i *v39; // r12
  __int32 v40; // eax
  __int64 v41; // r9
  __m128i *v42; // r14
  __int64 v43; // r10
  __m128i *v44; // rsi
  __m128i *v45; // rax
  __m128i *v46; // rcx
  __int64 v47; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // r15d
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  __int64 v54; // rcx
  __int64 *v55; // rcx
  int v56; // eax
  unsigned int v57; // r14d
  unsigned int v58; // ecx
  unsigned int *v59; // rax
  __int64 v60; // rax
  __int32 v61; // r11d
  __int32 v62; // edx
  unsigned __int64 v63; // rcx
  __m128i *v64; // rax
  const __m128i *v65; // rcx
  __int64 v66; // rsi
  __m128i *v67; // r10
  __int64 v68; // rdi
  const __m128i *v69; // rbp
  __int64 v70; // r8
  const __m128i *v71; // rbx
  int v72; // ecx
  __int64 *v73; // r15
  __int32 v74; // r13d
  __int64 v75; // rdx
  __m128i *v76; // rsi
  __m128i *v77; // rdx
  __int64 *v78; // rbx
  __int64 *v79; // rbp
  __int64 v80; // rsi
  __int64 v81; // rdi
  bool v82; // zf
  __int64 *v83; // rbx
  __int64 *v84; // rbp
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 *v87; // rbx
  __int64 *v88; // rbp
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 *v91; // rbx
  __int64 *v92; // rbp
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 *v95; // rbx
  __int64 *v96; // rbp
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 *v99; // rbx
  __int64 *v100; // rbp
  __int64 v101; // rsi
  __int64 v102; // rdi
  __int64 *v103; // rbx
  __int64 *v104; // rbp
  __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 *v107; // rbp
  __int64 v108; // rsi
  __int64 v109; // rdi
  _QWORD *v110; // rdx
  char **exception; // rbp
  __m128i v112; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v113; // [rsp+10h] [rbp-A8h]
  __int64 v114; // [rsp+18h] [rbp-A0h]
  __m128i v115; // [rsp+20h] [rbp-98h] BYREF
  __int64 v116; // [rsp+30h] [rbp-88h]
  __int64 v117; // [rsp+38h] [rbp-80h]
  __int64 v118; // [rsp+40h] [rbp-78h]
  __int32 v119; // [rsp+4Ch] [rbp-6Ch]
  __int64 v120[11]; // [rsp+60h] [rbp-58h] BYREF

  v4 = a3;
  v5 = a1;
  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 12);
  v8 = (*(_DWORD *)(a3 + 12) - v7) ^ (v7 << 8);
  v9 = (v7 - v8) << 10;
  v10 = v8 ^ ((v7 - v8) << 16);
  v11 = v8 - v7;
  v12 = *(__int64 **)(a1 + 216);
  v13 = (v10 + v11) ^ v9;
  v14 = *(unsigned int *)(a1 + 224);
  v15 = v14 - 1;
  v14 *= 32;
  v16 = (__int64 *)((char *)v12 + v14);
  v17 = 32LL * (v13 & v15);
  v18 = &v12[(unsigned __int64)v17 / 8];
  if ( v17 != v14 )
  {
    for ( i = &v12[(unsigned __int64)v17 / 8]; v16 != i; i += 4 )
    {
      v20 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v13 && v6 == v20 && v4 == i[1] )
          return 1;
      }
      else if ( !v20 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v18 != v12; v12 += 4 )
  {
    v49 = *v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      if ( *((_DWORD *)v12 + 6) == v13 && v6 == v49 && v4 == v12[1] )
        return 1;
    }
    else if ( !v49 )
    {
      break;
    }
  }
LABEL_8:
  v21 = sub_186B270(0x40u);
  v22 = *(__int64 **)(v5 + 24);
  v23 = (__int64 *)v21;
  v24 = *(_QWORD *)(v5 + 8);
  v23[1] = 0;
  *v23 = v24;
  v23[2] = v24;
  v23[4] = v24;
  v23[6] = v24;
  v25 = *v22;
  v23[3] = 0;
  v23[5] = 0;
  v23[7] = 0;
  v26 = (*(__int64 (__fastcall **)(__int64 *))(v25 + 24))(v22);
  if ( !(unsigned __int8)sub_6DCDA0(v5, v23, a2, v26, 1) )
  {
    v78 = (__int64 *)v23[7];
    if ( v78 )
    {
      v79 = &v78[*((unsigned int *)v78 - 1)];
      if ( v78 >= v79 )
        goto LABEL_89;
      do
      {
        v80 = *v78;
        if ( *v78 )
        {
          v81 = v23[6];
          v82 = (*(_DWORD *)(v80 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(v81, v80);
        }
        ++v78;
      }
      while ( v78 < v79 );
      v78 = (__int64 *)v23[7];
      if ( v78 )
LABEL_89:
        sub_186B220(v78 - 1);
    }
    v83 = (__int64 *)v23[5];
    if ( v83 )
    {
      v84 = &v83[*((unsigned int *)v83 - 1)];
      if ( v83 >= v84 )
        goto LABEL_98;
      do
      {
        v85 = *v83;
        if ( *v83 )
        {
          v86 = v23[4];
          v82 = (*(_DWORD *)(v85 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(v86, v85);
        }
        ++v83;
      }
      while ( v83 < v84 );
      v83 = (__int64 *)v23[5];
      if ( v83 )
LABEL_98:
        sub_186B220(v83 - 1);
    }
    v87 = (__int64 *)v23[3];
    if ( v87 )
    {
      v88 = &v87[*((unsigned int *)v87 - 1)];
      if ( v87 >= v88 )
        goto LABEL_107;
      do
      {
        v89 = *v87;
        if ( *v87 )
        {
          v90 = v23[2];
          v82 = (*(_DWORD *)(v89 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(v90, v89);
        }
        ++v87;
      }
      while ( v87 < v88 );
      v87 = (__int64 *)v23[3];
      if ( v87 )
LABEL_107:
        sub_186B220(v87 - 1);
    }
    v91 = (__int64 *)v23[1];
    if ( !v91 )
      goto LABEL_117;
    v92 = &v91[*((unsigned int *)v91 - 1)];
    if ( v91 < v92 )
    {
      do
      {
        v93 = *v91;
        if ( *v91 )
        {
          v94 = *v23;
          v82 = (*(_DWORD *)(v93 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(v94, v93);
        }
        ++v91;
      }
      while ( v91 < v92 );
      v91 = (__int64 *)v23[1];
      if ( !v91 )
        goto LABEL_117;
    }
LABEL_116:
    sub_186B220(v91 - 1);
LABEL_117:
    sub_186B220(v23);
    return 0;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 24) + 32LL))(*(_QWORD *)(v5 + 24));
  if ( !(unsigned __int8)sub_6DCDA0(v5, v23, a2, v27, 0) )
  {
    v95 = (__int64 *)v23[7];
    if ( v95 )
    {
      v96 = &v95[*((unsigned int *)v95 - 1)];
      if ( v95 >= v96 )
        goto LABEL_130;
      do
      {
        v97 = *v95;
        if ( *v95 )
        {
          v98 = v23[6];
          v82 = (*(_DWORD *)(v97 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(v98, v97);
        }
        ++v95;
      }
      while ( v95 < v96 );
      v95 = (__int64 *)v23[7];
      if ( v95 )
LABEL_130:
        sub_186B220(v95 - 1);
    }
    v99 = (__int64 *)v23[5];
    if ( v99 )
    {
      v100 = &v99[*((unsigned int *)v99 - 1)];
      if ( v99 >= v100 )
        goto LABEL_139;
      do
      {
        v101 = *v99;
        if ( *v99 )
        {
          v102 = v23[4];
          v82 = (*(_DWORD *)(v101 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(v102, v101);
        }
        ++v99;
      }
      while ( v99 < v100 );
      v99 = (__int64 *)v23[5];
      if ( v99 )
LABEL_139:
        sub_186B220(v99 - 1);
    }
    v103 = (__int64 *)v23[3];
    if ( v103 )
    {
      v104 = &v103[*((unsigned int *)v103 - 1)];
      if ( v103 >= v104 )
        goto LABEL_148;
      do
      {
        v105 = *v103;
        if ( *v103 )
        {
          v106 = v23[2];
          v82 = (*(_DWORD *)(v105 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(v106, v105);
        }
        ++v103;
      }
      while ( v103 < v104 );
      v103 = (__int64 *)v23[3];
      if ( v103 )
LABEL_148:
        sub_186B220(v103 - 1);
    }
    v91 = (__int64 *)v23[1];
    if ( !v91 )
      goto LABEL_117;
    v107 = &v91[*((unsigned int *)v91 - 1)];
    if ( v91 < v107 )
    {
      do
      {
        v108 = *v91;
        if ( *v91 )
        {
          v109 = *v23;
          v82 = (*(_DWORD *)(v108 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(v109, v108);
        }
        ++v91;
      }
      while ( v91 < v107 );
      v91 = (__int64 *)v23[1];
      if ( !v91 )
        goto LABEL_117;
    }
    goto LABEL_116;
  }
  v28 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v28 + 8);
  v29 = *(_QWORD **)(v5 + 208);
  if ( v29 )
  {
    v30 = *((_DWORD *)v29 - 1);
    if ( v30 != *((_DWORD *)v29 - 2) )
    {
      v29[v30] = v28;
      *((_DWORD *)v29 - 1) = v30 + 1;
      goto LABEL_15;
    }
    v51 = (3 * v30 + 1) >> 1;
    v52 = 8 * v51 + 8;
    if ( 8 * v30 + 8 >= v52 || v30 >= v51 )
      goto LABEL_166;
    v53 = (unsigned int *)sub_186B300(v29 - 1, v52);
    v29 = v53 + 2;
    v54 = v53[1];
    *v53 = v51;
    *(_QWORD *)(v5 + 208) = v53 + 2;
    LODWORD(v53) = v54;
    v55 = &v29[v54];
    v56 = (_DWORD)v53 + 1;
  }
  else
  {
    v110 = (_QWORD *)sub_186B270(0x18u);
    *v110 = 2;
    v56 = 1;
    v29 = v110 + 1;
    *(_QWORD *)(v5 + 208) = v29;
    v55 = v29;
  }
  *v55 = v28;
  *((_DWORD *)v29 - 1) = v56;
LABEL_15:
  ++*(_DWORD *)(v4 + 8);
  v31 = *((_DWORD *)v29 - 2);
  if ( *((_DWORD *)v29 - 1) == v31 )
  {
    v57 = (3 * v31 + 1) >> 1;
    v58 = 8 * v57 + 8;
    if ( 8 * v31 + 8 < v58 && v31 < v57 )
    {
      v59 = (unsigned int *)sub_186B300(v29 - 1, v58);
      v29 = v59 + 2;
      *v59 = v57;
      *(_QWORD *)(v5 + 208) = v59 + 2;
      goto LABEL_16;
    }
LABEL_166:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v120, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v120);
    sub_233E40((__int64)v120);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_16:
  v32 = *a2;
  v33 = *((_DWORD *)v29 - 1);
  v29[v33] = v4;
  v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)v4);
  *((_DWORD *)v29 - 1) = v33 + 1;
  v35 = *(_DWORD *)(v32 + 12);
  v36 = (*(_DWORD *)(v4 + 12) - v35) ^ (v35 << 8);
  v37 = *(_DWORD *)(v5 + 224);
  v38 = ((v36 ^ ((v35 - v36) << 16)) + v36 - v35) ^ ((v35 - v36) << 10);
  if ( 3 * v37 < 4 * (*(_DWORD *)(v5 + 228) + *(_DWORD *)(v5 + 232)) )
  {
    v114 = v32;
    v112.m128i_i32[0] = 2 * v37;
    v113 = 64LL * v37;
    v115 = v34;
    v60 = sub_186B270(v113);
    v61 = v112.m128i_i32[0];
    v41 = v113;
    v32 = v114;
    v34 = _mm_load_si128(&v115);
    v39 = (__m128i *)v60;
    if ( v112.m128i_i32[0] )
    {
      v62 = v112.m128i_i32[0] - 1;
      if ( (unsigned int)(v112.m128i_i32[0] - 1) <= 2 )
      {
        *(_DWORD *)(v60 + 24) = 0;
        *(_DWORD *)(v60 + 56) = 0;
        *(_OWORD *)v60 = 0;
        *(_OWORD *)(v60 + 32) = 0;
      }
      else
      {
        v63 = v60 + ((unsigned __int64)((unsigned __int32)v112.m128i_i32[0] >> 2) << 7);
        do
        {
          *(_DWORD *)(v60 + 24) = 0;
          v60 += 128;
          *(_OWORD *)(v60 - 128) = 0;
          *(_OWORD *)(v60 - 96) = 0;
          *(_OWORD *)(v60 - 64) = 0;
          *(_OWORD *)(v60 - 32) = 0;
          *(_DWORD *)(v60 - 72) = 0;
          *(_DWORD *)(v60 - 40) = 0;
          *(_DWORD *)(v60 - 8) = 0;
        }
        while ( v63 != v60 );
        if ( (v61 & 2) != 0 )
        {
          v64 = &v39[2 * (v61 & 0xFFFFFFFC)];
          v64[1].m128i_i32[2] = 0;
          v64[3].m128i_i32[2] = 0;
          *v64 = 0;
          v64[2] = 0;
          if ( v61 - (v61 & 0xFFFFFFFC) != 2 )
          {
            v64[5].m128i_i32[2] = 0;
            v64[4] = 0;
          }
        }
      }
    }
    else
    {
      v62 = -1;
    }
    v65 = *(const __m128i **)(v5 + 216);
    v40 = v62;
    v42 = (__m128i *)((char *)v39 + v41);
    v66 = 2LL * *(unsigned int *)(v5 + 224);
    v67 = (__m128i *)&v65[v66];
    if ( v65 != &v65[v66] )
    {
      v68 = v4;
      v113 = v32;
      v69 = &v65[v66];
      v70 = v5;
      v71 = v65;
      v72 = v38;
      v73 = v23;
      v74 = v62;
      do
      {
        if ( v71->m128i_i64[0] > 1uLL )
        {
          v75 = 32LL * (v71[1].m128i_i32[2] & (unsigned int)v74);
          v76 = &v39[(unsigned __int64)v75 / 0x10];
          if ( v75 == v41 )
          {
LABEL_72:
            if ( v76 == v39 )
            {
LABEL_158:
              v119 = v61;
              v118 = v68;
              v117 = v70;
              v116 = v41;
              v115.m128i_i32[0] = v40;
              LODWORD(v114) = v72;
              v112 = v34;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v77 = v39;
            while ( v77->m128i_i64[0] )
            {
              v77 += 2;
              if ( v76 == v77 )
                goto LABEL_158;
            }
          }
          else
          {
            v77 = &v39[(unsigned __int64)v75 / 0x10];
            while ( v77->m128i_i64[0] )
            {
              v77 += 2;
              if ( v42 == v77 )
                goto LABEL_72;
            }
          }
          *v77 = _mm_loadu_si128(v71);
          v77[1] = _mm_loadu_si128(v71 + 1);
        }
        v71 += 2;
      }
      while ( v69 != v71 );
      v5 = v70;
      v4 = v68;
      v32 = v113;
      v23 = v73;
      v67 = *(__m128i **)(v5 + 216);
      v38 = v72;
    }
    if ( v67 )
    {
      LODWORD(v116) = v61;
      v115.m128i_i64[0] = v41;
      LODWORD(v114) = v40;
      v113 = v32;
      v112 = v34;
      sub_186B220(v67);
      v61 = v116;
      v41 = v115.m128i_i64[0];
      v40 = v114;
      v34 = _mm_load_si128(&v112);
      v32 = v113;
    }
    *(_QWORD *)(v5 + 216) = v39;
    *(_DWORD *)(v5 + 224) = v61;
    *(_DWORD *)(v5 + 232) = 0;
  }
  else
  {
    v39 = *(__m128i **)(v5 + 216);
    v40 = v37 - 1;
    v41 = 32LL * v37;
    v42 = (__m128i *)((char *)v39 + v41);
  }
  v43 = 32LL * (v38 & (unsigned int)v40);
  v44 = &v39[(unsigned __int64)v43 / 0x10];
  if ( v43 != v41 )
  {
    v45 = &v39[(unsigned __int64)v43 / 0x10];
    v46 = nullptr;
    while ( 1 )
    {
      v47 = v45->m128i_i64[0];
      if ( v45->m128i_i64[0] > 1uLL )
      {
        if ( v45[1].m128i_i32[2] == v38 && v32 == v47 && v4 == v45->m128i_i64[1] )
        {
          v45[1].m128i_i64[0] = (__int64)v23;
          v45[1].m128i_i32[2] = v38;
          *v45 = v34;
          return 1;
        }
      }
      else
      {
        if ( !v47 )
        {
          if ( v46 )
            goto LABEL_127;
          v46 = v45;
          goto LABEL_128;
        }
        v46 = v45;
      }
      v45 += 2;
      if ( v45 == v42 )
        goto LABEL_41;
    }
  }
  v46 = nullptr;
  while ( 1 )
  {
LABEL_41:
    if ( v44 == v39 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v50 = v39->m128i_i64[0];
    if ( v39->m128i_i64[0] <= 1uLL )
      break;
    if ( v39[1].m128i_i32[2] == v38 && v32 == v50 && v4 == v39->m128i_i64[1] )
    {
      v39[1].m128i_i64[0] = (__int64)v23;
      v39[1].m128i_i32[2] = v38;
      *v39 = v34;
      return 1;
    }
LABEL_40:
    v39 += 2;
  }
  if ( v50 )
  {
    v46 = v39;
    goto LABEL_40;
  }
  if ( v46 )
LABEL_127:
    --*(_DWORD *)(v5 + 232);
  else
    v46 = v39;
LABEL_128:
  v46[1].m128i_i64[0] = (__int64)v23;
  v46[1].m128i_i32[2] = v38;
  *v46 = v34;
  ++*(_DWORD *)(v5 + 228);
  return 1;
}

