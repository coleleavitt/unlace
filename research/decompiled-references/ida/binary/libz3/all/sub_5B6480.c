__int64 __fastcall sub_5B6480(__int64 *a1)
{
  __int64 result; // rax
  __int64 *v2; // rbp
  __int64 *v3; // r8
  __int64 *v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r14
  int v7; // ecx
  unsigned int v8; // r11d
  __int64 v9; // r15
  __m128i *v10; // rbx
  unsigned int v11; // r10d
  size_t v12; // r14
  __m128i *v13; // r12
  int v14; // esi
  __int64 v15; // r10
  __m128i *v16; // rdi
  __m128i *v17; // rax
  __int64 *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r11d
  size_t v23; // rcx
  const __m128i *v24; // r13
  __int64 v25; // rdi
  __m128i *v26; // r9
  __m128i *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r15
  const __m128i *v30; // rbp
  __m128i *v31; // r9
  __m128i *v32; // r12
  __m128i *v33; // rbx
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rax
  __m128i v37; // xmm0
  __int64 **v38; // rax
  __int64 **v39; // r12
  _QWORD *v40; // rax
  __int64 *v41; // rdx
  __int64 *v42; // rcx
  int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rcx
  int v50; // edi
  __int64 v51; // r13
  __int64 v52; // rax
  unsigned int v53; // r14d
  unsigned int v54; // r10d
  __m128i *v55; // rbx
  __m128i *v56; // r15
  int v57; // esi
  __int64 v58; // r10
  __m128i *v59; // r9
  __int64 v60; // rcx
  int v61; // edx
  char v62; // dl
  __int64 v63; // r14
  __int64 *v64; // rax
  unsigned int v65; // r15d
  int v66; // r11d
  __m128i *v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rdx
  __m128i *v70; // rdi
  __m128i *v71; // r10
  __int64 v72; // rcx
  int v73; // edx
  __m128i *v74; // rax
  __m128i *v75; // rcx
  __m128i *v76; // rcx
  __m128i *v77; // r11
  __int64 *v78; // rcx
  __int64 v79; // r9
  __m128i *v80; // r12
  unsigned int v81; // r13d
  const __m128i *v82; // rbx
  __int64 *v83; // r10
  const __m128i *v84; // rbp
  unsigned int v85; // r11d
  __int64 v86; // r14
  __int64 v87; // rax
  __m128i *v88; // rdx
  __m128i *v89; // rax
  __m128i v90; // xmm0
  __m128i *v91; // rax
  int v92; // edx
  __m128i *v93; // rcx
  __int64 *v94; // rax
  const __m128i *v95; // r15
  __m128i *v96; // r11
  __int64 v97; // rax
  __int64 *v98; // r9
  __int64 *v99; // r14
  __m128i *v100; // rbp
  const __m128i *v101; // r12
  __m128i *v102; // rbx
  __int64 v103; // r11
  __int64 v104; // rcx
  int v105; // r13d
  int v106; // r10d
  __int64 v107; // rax
  __m128i *v108; // rdx
  __m128i *v109; // rax
  __m128i v110; // xmm0
  __int64 *v111; // rax
  char **exception; // rbx
  unsigned int v113; // [rsp+8h] [rbp-B0h]
  size_t v114; // [rsp+8h] [rbp-B0h]
  size_t v115; // [rsp+8h] [rbp-B0h]
  int v116; // [rsp+8h] [rbp-B0h]
  unsigned int v117; // [rsp+10h] [rbp-A8h]
  __int64 *v118; // [rsp+10h] [rbp-A8h]
  __int64 *v119; // [rsp+10h] [rbp-A8h]
  __int64 *v120; // [rsp+10h] [rbp-A8h]
  unsigned int v121; // [rsp+10h] [rbp-A8h]
  __int64 *v122; // [rsp+18h] [rbp-A0h]
  __int64 *v123; // [rsp+18h] [rbp-A0h]
  __int64 *v124; // [rsp+18h] [rbp-A0h]
  __int64 v125; // [rsp+28h] [rbp-90h]
  __int64 *v126; // [rsp+40h] [rbp-78h]
  __int64 *v127; // [rsp+48h] [rbp-70h]
  __int64 v128[11]; // [rsp+60h] [rbp-58h] BYREF

  result = *a1;
  v2 = *(__int64 **)(*a1 + 24);
  if ( !v2 )
    return result;
  result = *((unsigned int *)v2 - 1);
  if ( v2 == &v2[result] )
    return result;
  v3 = a1;
  v4 = &v2[result];
  do
  {
    v125 = *v2;
    if ( !*(_DWORD *)(*v2 + 68) )
      goto LABEL_52;
    v126 = v4;
    v113 = 0;
    v127 = v2;
    v5 = *v2;
    do
    {
      v6 = *((unsigned int *)v3 + 26);
      v7 = *((_DWORD *)v3 + 28);
      v8 = 2 * v6;
      v9 = *(_QWORD *)((*(_QWORD *)(v5 + 8LL * v113 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( 3 * (int)v6 < (unsigned int)(4 * (v7 + *((_DWORD *)v3 + 27))) )
      {
        v122 = v3;
        v12 = 16LL * v8;
        v117 = v8;
        v21 = sub_186B270(v12);
        v22 = v117;
        v3 = v122;
        v10 = (__m128i *)v21;
        v23 = v12 + v21;
        if ( v117 )
        {
          if ( (v12 & 0x10) == 0 || (v21 += 16, *(_OWORD *)(v21 - 16) = 0, v23 != v21) )
          {
            do
            {
              v21 += 32;
              *(_OWORD *)(v21 - 32) = 0;
              *(_OWORD *)(v21 - 16) = 0;
            }
            while ( v23 != v21 );
          }
        }
        v24 = (const __m128i *)v122[12];
        v11 = v117 - 1;
        v13 = (__m128i *)v23;
        v25 = *((unsigned int *)v122 + 26);
        v26 = (__m128i *)&v24[v25];
        if ( v24 != &v24[v25] )
        {
          v27 = (__m128i *)v23;
          v28 = v9;
          v29 = v5;
          v30 = &v24[v25];
          v31 = v13;
          v32 = v10;
          v33 = v27;
          do
          {
            while ( v24->m128i_i64[0] <= 1uLL )
            {
              if ( v30 == ++v24 )
                goto LABEL_36;
            }
            v34 = 16LL * (*(_DWORD *)(v24->m128i_i64[0] + 12) & v11);
            v35 = &v32[(unsigned __int64)v34 / 0x10];
            if ( v12 == v34 )
            {
LABEL_40:
              if ( v32 == v35 )
                goto LABEL_55;
              v36 = v32;
              while ( v36->m128i_i64[0] )
              {
                if ( v35 == ++v36 )
                {
LABEL_55:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
              }
            }
            else
            {
              v36 = &v32[(unsigned __int64)v34 / 0x10];
              while ( v36->m128i_i64[0] )
              {
                if ( v33 == ++v36 )
                  goto LABEL_40;
              }
            }
            v37 = _mm_loadu_si128(v24++);
            *v36 = v37;
          }
          while ( v30 != v24 );
LABEL_36:
          v10 = v32;
          v13 = v31;
          v26 = (__m128i *)v122[12];
          v5 = v29;
          v9 = v28;
        }
        if ( v26 )
        {
          sub_186B220(v26);
          v3 = v122;
          v22 = v117;
          v11 = v117 - 1;
        }
        v3[12] = (__int64)v10;
        v7 = 0;
        *((_DWORD *)v3 + 26) = v22;
        *((_DWORD *)v3 + 28) = 0;
      }
      else
      {
        v10 = (__m128i *)v3[12];
        v11 = v6 - 1;
        v12 = 16 * v6;
        v13 = &v10[v12 / 0x10];
      }
      v14 = *(_DWORD *)(v9 + 12);
      v15 = 16LL * (v14 & v11);
      v16 = &v10[(unsigned __int64)v15 / 0x10];
      if ( v15 == v12 )
      {
        v18 = nullptr;
        if ( v16 == v10 )
          goto LABEL_90;
        while ( 1 )
        {
          v20 = v10->m128i_i64[0];
          if ( v10->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v20 + 12) == v14 && v9 == v20 )
            {
              v39 = (__int64 **)v10->m128i_i64[1];
              v17 = v10;
              if ( v39 )
                goto LABEL_59;
LABEL_67:
              v18 = (__int64 *)v17;
LABEL_48:
              v118 = v3;
              v38 = (__int64 **)sub_186B270(8u);
              v3 = v118;
              *v38 = nullptr;
              v39 = v38;
              v18[1] = (__int64)v38;
LABEL_49:
              v119 = v3;
              v40 = (_QWORD *)sub_186B270(0x18u);
              v3 = v119;
              v41 = v40 + 1;
              *v40 = 2;
              v42 = v41;
              v43 = 1;
              *v39 = v41;
              goto LABEL_50;
            }
          }
          else
          {
            if ( !v20 )
            {
              if ( v18 )
LABEL_46:
                *((_DWORD *)v3 + 28) = v7 - 1;
              else
                v18 = (__int64 *)v10;
LABEL_47:
              *v18 = v9;
              v18[1] = 0;
              ++*((_DWORD *)v3 + 27);
              goto LABEL_48;
            }
            v18 = (__int64 *)v10;
          }
          ++v10;
LABEL_19:
          if ( v16 == v10 )
          {
LABEL_90:
            sub_1872CE0("");
            sub_1873130(114, 461);
          }
        }
      }
      v17 = &v10[(unsigned __int64)v15 / 0x10];
      v18 = nullptr;
      while ( 1 )
      {
        v19 = v17->m128i_i64[0];
        if ( v17->m128i_i64[0] > 1uLL )
          break;
        if ( !v19 )
        {
          if ( v18 )
            goto LABEL_46;
          v18 = (__int64 *)v17;
          goto LABEL_47;
        }
        v18 = (__int64 *)v17;
LABEL_12:
        if ( ++v17 == v13 )
          goto LABEL_19;
      }
      if ( *(_DWORD *)(v19 + 12) != v14 || v9 != v19 )
        goto LABEL_12;
      v39 = (__int64 **)v17->m128i_i64[1];
      if ( !v39 )
        goto LABEL_67;
LABEL_59:
      v41 = *v39;
      if ( !*v39 )
        goto LABEL_49;
      v44 = *((_DWORD *)v41 - 1);
      if ( v44 == *((_DWORD *)v41 - 2) )
      {
        v46 = (3 * v44 + 1) >> 1;
        v47 = 8 * v46 + 8;
        if ( 8 * v44 + 8 >= (unsigned int)v47 || v44 >= v46 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v128, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v128);
          sub_233E40((__int64)v128);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v120 = v3;
        v48 = (unsigned int *)sub_186B300(v41 - 1, v47);
        v3 = v120;
        v49 = v48[1];
        v41 = (__int64 *)(v48 + 2);
        *v39 = (__int64 *)(v48 + 2);
        *v48 = v46;
        LODWORD(v48) = v49;
        v42 = &v41[v49];
        v43 = (_DWORD)v48 + 1;
      }
      else
      {
        v45 = v44;
        v43 = v44 + 1;
        v42 = &v41[v45];
      }
LABEL_50:
      ++v113;
      *v42 = v5;
      *((_DWORD *)v41 - 1) = v43;
    }
    while ( v113 < *(_DWORD *)(v5 + 68) );
    v4 = v126;
    v2 = v127;
LABEL_52:
    result = v125;
    if ( *(_DWORD *)(v125 + 64) )
      goto LABEL_53;
    v50 = *((_DWORD *)v3 + 6);
    v51 = *(_QWORD *)(*(_QWORD *)(v125 + 40) + 16LL);
    v52 = *((unsigned int *)v3 + 4);
    v53 = 2 * v52;
    if ( 3 * (int)v52 < (unsigned int)(4 * (v50 + *((_DWORD *)v3 + 5))) )
    {
      v123 = v3;
      v114 = 24LL * v53;
      v74 = (__m128i *)sub_186B270(v114);
      v3 = v123;
      v55 = v74;
      v75 = (__m128i *)((char *)v74 + v114);
      if ( v53 )
      {
        do
        {
          v74->m128i_i64[0] = 0;
          v74 = (__m128i *)((char *)v74 + 24);
          v74[-1].m128i_i8[8] = 0;
        }
        while ( v74 != v75 );
      }
      v76 = (__m128i *)v123[1];
      v54 = v53 - 1;
      v56 = (__m128i *)((char *)v55 + v114);
      v77 = (__m128i *)((char *)v76 + 24 * *((unsigned int *)v123 + 4));
      if ( v76 != v77 )
      {
        v78 = v4;
        v79 = v51;
        v80 = v55;
        v81 = v53 - 1;
        v82 = (const __m128i *)v123[1];
        v83 = v2;
        v84 = v77;
        v85 = v53;
        v86 = 24LL * v53;
        do
        {
          while ( v82->m128i_i32[1] != 2 )
          {
            v82 = (const __m128i *)((char *)v82 + 24);
            if ( v84 == v82 )
              goto LABEL_124;
          }
          v87 = 24LL * (v82->m128i_i32[0] & v81);
          v88 = (__m128i *)((char *)v80 + v87);
          if ( v87 == v86 )
          {
LABEL_128:
            if ( v88 == v80 )
            {
LABEL_163:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v89 = v80;
            while ( v89->m128i_i32[1] )
            {
              v89 = (__m128i *)((char *)v89 + 24);
              if ( v88 == v89 )
                goto LABEL_163;
            }
          }
          else
          {
            v89 = (__m128i *)((char *)v80 + v87);
            while ( v89->m128i_i32[1] )
            {
              v89 = (__m128i *)((char *)v89 + 24);
              if ( v56 == v89 )
                goto LABEL_128;
            }
          }
          v90 = _mm_loadu_si128(v82);
          v82 = (const __m128i *)((char *)v82 + 24);
          *v89 = v90;
          v89[1].m128i_i64[0] = v82[-1].m128i_i64[1];
        }
        while ( v84 != v82 );
LABEL_124:
        v53 = v85;
        v77 = (__m128i *)v123[1];
        v55 = v80;
        v2 = v83;
        v4 = v78;
        v54 = v81;
        v51 = v79;
      }
      if ( v77 )
      {
        v121 = v54;
        sub_186B220(v77);
        v3 = v123;
        v54 = v121;
      }
      v3[1] = (__int64)v55;
      v50 = 0;
      *((_DWORD *)v3 + 4) = v53;
      *((_DWORD *)v3 + 6) = 0;
    }
    else
    {
      v54 = v52 - 1;
      v55 = (__m128i *)v3[1];
      v114 = 24 * v52;
      v56 = (__m128i *)((char *)v55 + 24 * v52);
    }
    v57 = *(_DWORD *)(v51 + 12);
    v58 = v57 & v54;
    v59 = (__m128i *)((char *)v55 + 24 * v58);
    if ( 24 * v58 != v114 )
    {
      result = (__int64)&v55->m128i_i64[3 * v58];
      v60 = 0;
      while ( 1 )
      {
        v61 = *(_DWORD *)(result + 4);
        if ( v61 == 2 )
        {
          if ( v57 == *(_DWORD *)result && v51 == *(_QWORD *)(result + 8) )
          {
            v62 = *(_BYTE *)(result + 16);
            v60 = result;
            goto LABEL_79;
          }
        }
        else
        {
          if ( !v61 )
          {
            if ( v60 )
              goto LABEL_92;
            v60 = result;
            goto LABEL_93;
          }
          v60 = result;
        }
        result += 24;
        if ( (__m128i *)result == v56 )
          goto LABEL_84;
      }
    }
    v60 = 0;
LABEL_84:
    while ( 2 )
    {
      if ( v59 == v55 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      result = v55->m128i_u32[1];
      if ( (_DWORD)result == 2 )
      {
        if ( v57 == v55->m128i_i32[0] && v51 == v55->m128i_i64[1] )
        {
          v62 = v55[1].m128i_i8[0];
          v60 = (__int64)v55;
LABEL_79:
          if ( v62 )
            goto LABEL_53;
          goto LABEL_94;
        }
        goto LABEL_83;
      }
      if ( (_DWORD)result )
      {
        v60 = (__int64)v55;
LABEL_83:
        v55 = (__m128i *)((char *)v55 + 24);
        continue;
      }
      break;
    }
    if ( v60 )
LABEL_92:
      *((_DWORD *)v3 + 6) = v50 - 1;
    else
      v60 = (__int64)v55;
LABEL_93:
    *(_QWORD *)(v60 + 8) = v51;
    *(_BYTE *)(v60 + 16) = 0;
    *(_DWORD *)(v60 + 4) = 2;
    *(_DWORD *)v60 = v57;
    ++*((_DWORD *)v3 + 5);
LABEL_94:
    v63 = *((unsigned int *)v3 + 20);
    *(_BYTE *)(v60 + 16) = 1;
    v64 = &v3[3 * v63];
    v65 = *((_DWORD *)v64 + 10);
    v66 = *((_DWORD *)v64 + 12);
    if ( 3 * v65 < 4 * (v66 + *((_DWORD *)v64 + 11)) )
    {
      v124 = v3;
      v115 = 32LL * v65;
      v91 = (__m128i *)sub_186B270(v115);
      v92 = 2 * v65;
      v3 = v124;
      v67 = v91;
      if ( 2 * v65 )
      {
        v93 = &v91[2 * (v65 & 0x7FFFFFFF)];
        do
        {
          v91->m128i_i64[0] = 0;
          v91 += 2;
          v91[-1].m128i_i64[0] = 0;
        }
        while ( v93 != v91 );
      }
      v94 = &v124[3 * v63];
      v95 = (const __m128i *)v94[4];
      v96 = (__m128i *)&v95[*((unsigned int *)v94 + 10)];
      if ( v95 != v96 )
      {
        v97 = v63;
        v98 = v2;
        v99 = v4;
        v100 = v67;
        v101 = v96;
        v102 = &v67[v115 / 0x10];
        v103 = v97;
        v104 = v51;
        v105 = v92 - 1;
        v106 = v92;
        do
        {
          while ( v95->m128i_i32[1] != 2 )
          {
            if ( v101 == ++v95 )
              goto LABEL_151;
          }
          v107 = 16LL * (v95->m128i_i32[0] & (unsigned int)v105);
          v108 = &v100[(unsigned __int64)v107 / 0x10];
          if ( v115 == v107 )
          {
LABEL_155:
            if ( v100 == v108 )
            {
LABEL_165:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v109 = v100;
            while ( v109->m128i_i32[1] )
            {
              if ( v108 == ++v109 )
                goto LABEL_165;
            }
          }
          else
          {
            v109 = &v100[(unsigned __int64)v107 / 0x10];
            while ( v109->m128i_i32[1] )
            {
              if ( v102 == ++v109 )
                goto LABEL_155;
            }
          }
          v110 = _mm_loadu_si128(v95++);
          *v109 = v110;
        }
        while ( v101 != v95 );
LABEL_151:
        v4 = v99;
        v63 = v103;
        v67 = v100;
        v96 = (__m128i *)v124[3 * v103 + 4];
        v51 = v104;
        v2 = v98;
        v92 = v106;
      }
      if ( v96 )
      {
        v116 = v92;
        sub_186B220(v96);
        v3 = v124;
        v92 = v116;
      }
      v57 = *(_DWORD *)(v51 + 12);
      v66 = 0;
      v65 = v92;
      v111 = &v3[3 * v63];
      v111[4] = (__int64)v67;
      *((_DWORD *)v111 + 10) = v92;
      *((_DWORD *)v111 + 12) = 0;
    }
    else
    {
      v67 = (__m128i *)v64[4];
    }
    v68 = 16LL * v65;
    v69 = 16LL * (v57 & (v65 - 1));
    v70 = &v67[(unsigned __int64)v68 / 0x10];
    v71 = &v67[(unsigned __int64)v69 / 0x10];
    if ( v69 != v68 )
    {
      result = (__int64)v67[(unsigned __int64)v69 / 0x10].m128i_i64;
      v72 = 0;
      while ( 1 )
      {
        v73 = *(_DWORD *)(result + 4);
        if ( v73 == 2 )
        {
          if ( *(_DWORD *)result == v57 && v51 == *(_QWORD *)(result + 8) )
          {
            *(_QWORD *)(result + 8) = v51;
            *(_DWORD *)(result + 4) = 2;
            goto LABEL_53;
          }
        }
        else
        {
          if ( !v73 )
          {
            if ( v72 )
              goto LABEL_137;
            v72 = result;
            goto LABEL_138;
          }
          v72 = result;
        }
        result += 16;
        if ( v70 == (__m128i *)result )
          goto LABEL_108;
      }
    }
    v72 = 0;
LABEL_108:
    while ( 2 )
    {
      if ( v71 == v67 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      result = v67->m128i_u32[1];
      if ( (_DWORD)result == 2 )
      {
        if ( v67->m128i_i32[0] == v57 && v51 == v67->m128i_i64[1] )
        {
          v67->m128i_i64[1] = v51;
          v67->m128i_i32[1] = 2;
          goto LABEL_53;
        }
        goto LABEL_107;
      }
      if ( (_DWORD)result )
      {
        v72 = (__int64)v67;
LABEL_107:
        ++v67;
        continue;
      }
      break;
    }
    if ( v72 )
LABEL_137:
      LODWORD(v3[3 * v63 + 6]) = v66 - 1;
    else
      v72 = (__int64)v67;
LABEL_138:
    result = 3 * v63;
    *(_QWORD *)(v72 + 8) = v51;
    *(_DWORD *)(v72 + 4) = 2;
    *(_DWORD *)v72 = v57;
    ++HIDWORD(v3[3 * v63 + 5]);
LABEL_53:
    ++v2;
  }
  while ( v4 != v2 );
  return result;
}

