__int64 __fastcall sub_2146AB0(__int64 a1, __m128 *a2, char a3)
{
  char v3; // r13
  __int64 v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rbp
  bool v13; // zf
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rcx
  void (*v18)(void); // rax
  __m128i *v19; // r14
  __m128 *v21; // rbx
  void **v22; // rsi
  __int64 v23; // rax
  char v24; // al
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // r12
  __m128 *v28; // rbp
  void (*v29)(void); // rax
  __int64 v30; // r10
  __int64 v31; // r15
  __int64 v32; // r12
  const __m128i *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rbp
  __int64 *v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r12
  __int64 v44; // rbp
  void *v45; // rdi
  __int64 v46; // rax
  int v47; // esi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // r10
  __int64 v52; // r14
  __int64 v53; // rbp
  __int32 v54; // r13d
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  int v59; // esi
  __int64 v60; // rbp
  __int64 v61; // r12
  _QWORD *v62; // r15
  void *v63; // rax
  __m128i v64; // xmm2
  int v65; // eax
  __int64 v66; // rsi
  _QWORD *v67; // rax
  __int64 v68; // rdi
  unsigned int v69; // ebx
  __int64 v71; // rbp
  __int64 v72; // r13
  __m128i *v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // r12
  __int64 v77; // r14
  __m128i *v78; // rbp
  __int64 v79; // rbx
  void ***v80; // rdx
  __int64 v81; // rdi
  __int64 v82; // r12
  __int64 v83; // rbp
  void *v84; // rdi
  __int64 v85; // rbp
  void (__fastcall *v86)(__int64, _QWORD, __int64); // r12
  __int64 v87; // rax
  __int64 v88; // rbp
  __int64 v89; // r13
  __int64 *v90; // rbp
  __int64 v91; // r8
  unsigned __int64 v92; // r13
  __int64 v93; // rdx
  __int64 v94; // rax
  char v95; // dl
  __int64 v96; // rcx
  _QWORD *v97; // rax
  __int64 *v98; // rax
  __int64 v99; // rsi
  __int64 v100; // rax
  int v101; // esi
  __int64 v102; // rax
  __int64 v103; // r12
  __int64 *v104; // rcx
  int v105; // r10d
  __int64 *v106; // r11
  int v107; // ecx
  __int64 v108; // r8
  __int64 v109; // [rsp+0h] [rbp-3E8h]
  __int64 v110; // [rsp+8h] [rbp-3E0h]
  __int64 v111; // [rsp+10h] [rbp-3D8h]
  __int64 v112; // [rsp+10h] [rbp-3D8h]
  __int64 v113; // [rsp+18h] [rbp-3D0h]
  const __m128i *v114; // [rsp+40h] [rbp-3A8h]
  char v115; // [rsp+48h] [rbp-3A0h]
  __m128 *v116; // [rsp+50h] [rbp-398h]
  int v117; // [rsp+64h] [rbp-384h]
  char v119; // [rsp+6Fh] [rbp-379h]
  __m128i v120[2]; // [rsp+80h] [rbp-368h] BYREF
  __int16 v121; // [rsp+A0h] [rbp-348h]
  __m128i v122[2]; // [rsp+B0h] [rbp-338h] BYREF
  __int16 v123; // [rsp+D0h] [rbp-318h]
  __m128i v124; // [rsp+E0h] [rbp-308h] BYREF
  __int64 v125; // [rsp+F0h] [rbp-2F8h]
  __int64 v126; // [rsp+F8h] [rbp-2F0h]
  __int16 v127; // [rsp+100h] [rbp-2E8h]
  __m128i v128; // [rsp+110h] [rbp-2D8h] BYREF
  __int16 v129; // [rsp+130h] [rbp-2B8h]
  __m128 v130[2]; // [rsp+140h] [rbp-2A8h] BYREF
  __int16 v131; // [rsp+160h] [rbp-288h]
  int v132; // [rsp+190h] [rbp-258h]
  char v133; // [rsp+194h] [rbp-254h]
  void **v134; // [rsp+198h] [rbp-250h]
  void *ptr[2]; // [rsp+1A0h] [rbp-248h] BYREF
  _BYTE v136[568]; // [rsp+1B0h] [rbp-238h] BYREF

  v3 = (char)a2;
  v4 = a1;
  v5 = *(_QWORD **)(a1 + 824);
  *(_DWORD *)(a1 + 768) = 0;
  if ( v5 )
  {
    do
    {
      a2 = (__m128 *)v5[3];
      sub_9ED9D0(a1 + 808, a2);
      v6 = (_QWORD *)v5[2];
      operator delete(v5);
      v5 = v6;
    }
    while ( v6 );
  }
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = a1 + 816;
  *(_QWORD *)(a1 + 840) = a1 + 816;
  *(_QWORD *)(a1 + 848) = 0;
  if ( !v3 )
  {
    v85 = *(_QWORD *)(a1 + 24);
    v86 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v85 + 192LL);
    v87 = sub_2154A60(*(_QWORD *)(a1 + 8));
    a2 = nullptr;
    v86(v85, 0, v87);
  }
  sub_2132C70(a1, a2);
  v11 = *(_DWORD *)(a1 + 300);
  v12 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 240) = 0;
  v117 = v11;
  v13 = *(_BYTE *)(v12 + 1777) == 0;
  v119 = *(_BYTE *)(a1 + 305);
  ptr[0] = v136;
  ptr[1] = (void *)0x400000000LL;
  if ( !v13 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 288LL) + 8LL);
    if ( !*(_QWORD *)(v14 + 16) )
    {
      v88 = sub_2108670(v12, (__int64)a2, v7, v8, v9, v10);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 208LL))(*(_QWORD *)(a1 + 24), v88, 0);
      *(_QWORD *)(v14 + 16) = v88;
      v12 = *(_QWORD *)(a1 + 16);
    }
    v15 = *(unsigned int *)(v12 + 1800);
    v128.m128i_i64[0] = v14;
    if ( (_DWORD)v15 )
    {
      v7 = *(_QWORD *)(v12 + 1784);
      v10 = ((_DWORD)v15 - 1) & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v16 = (__int64 *)(v7 + 8 * v10);
      v17 = *v16;
      if ( *v16 == v14 )
      {
LABEL_10:
        sub_21314C0(v130, v16, (_QWORD *)(v7 + 8 * v15), v12 + 1784, 1);
        goto LABEL_11;
      }
      v105 = 1;
      v106 = nullptr;
      if ( v17 != -4096 )
      {
        while ( 1 )
        {
          if ( v17 == -8192 && !v106 )
            v106 = v16;
          v10 = ((_DWORD)v15 - 1) & (unsigned int)(v105 + v10);
          v16 = (__int64 *)(v7 + 8LL * (unsigned int)v10);
          v17 = *v16;
          if ( v14 == *v16 )
            goto LABEL_10;
          if ( v17 == -4096 )
          {
            if ( v106 )
              v16 = v106;
            break;
          }
          ++v105;
        }
      }
      v107 = *(_DWORD *)(v12 + 1792);
      v130[0].m128_u64[0] = (unsigned __int64)v16;
      v8 = (unsigned int)(v107 + 1);
      v9 = (unsigned int)(4 * v8);
      if ( (unsigned int)v9 < 3 * (int)v15 )
      {
        v108 = (unsigned int)v15 >> 3;
        if ( (int)v15 - *(_DWORD *)(v12 + 1796) - (int)v8 > (unsigned int)v108 )
          goto LABEL_110;
        sub_2146850(v12 + 1784, v15, v7, v8, v108, v10);
LABEL_109:
        sub_21313D0((__int64 *)(v12 + 1784), v128.m128i_i64, v130);
        v14 = v128.m128i_i64[0];
        v7 = *(_QWORD *)(v12 + 1784);
        v15 = *(unsigned int *)(v12 + 1800);
        v16 = (__int64 *)v130[0].m128_u64[0];
        LODWORD(v8) = *(_DWORD *)(v12 + 1792) + 1;
LABEL_110:
        v13 = *v16 == -4096;
        *(_DWORD *)(v12 + 1792) = v8;
        if ( !v13 )
          --*(_DWORD *)(v12 + 1796);
        *v16 = v14;
        sub_21314C0(v130, v16, (_QWORD *)(v7 + 8 * v15), v12 + 1784, 1);
        v102 = *(unsigned int *)(v12 + 1816);
        v8 = *(unsigned int *)(v12 + 1820);
        v103 = v128.m128i_i64[0];
        if ( v102 + 1 > v8 )
        {
          sub_2237220(v12 + 1808, v12 + 1824, v102 + 1, 8);
          v102 = *(unsigned int *)(v12 + 1816);
        }
        *(_QWORD *)(*(_QWORD *)(v12 + 1808) + 8 * v102) = v103;
        ++*(_DWORD *)(v12 + 1816);
        goto LABEL_11;
      }
    }
    else
    {
      v130[0].m128_u64[0] = 0;
    }
    sub_2146850(v12 + 1784, 2 * v15, v7, v8, v9, v10);
    goto LABEL_109;
  }
LABEL_11:
  v18 = *(void (**)(void))(**(_QWORD **)(a1 + 8) + 200LL);
  if ( v18 != nullsub_1458 )
    v18();
  v19 = &v128;
  if ( **(_DWORD **)(a1 + 48) )
  {
    v21 = v130;
    while ( 1 )
    {
      v22 = (void **)v21;
      v130[0].m128_u64[0] = (unsigned __int64)&v21[1];
      v130[0].m128_u64[1] = 0x800000000LL;
      v132 = -1;
      v134 = ptr;
      v23 = *(_QWORD *)a1;
      v133 = 0;
      v24 = (*(__int64 (__fastcall **)(__int64, __m128 *, _QWORD, unsigned __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v23 + 240))(
              a1,
              v21,
              0,
              v8,
              v9,
              v10,
              v109,
              v110,
              v111,
              v113);
      v13 = v24 == 0;
      v115 = v24;
      v26 = *(unsigned int *)(a1 + 232);
      if ( v13 || (_DWORD)v26 )
        goto LABEL_72;
      if ( **(_DWORD **)(a1 + 48) == 1 )
        break;
      if ( !*(_BYTE *)(a1 + 177) )
        goto LABEL_85;
LABEL_19:
      v27 = v130[0].m128_u64[0];
      v28 = (__m128 *)(v130[0].m128_u64[0] + 8LL * v130[0].m128_u32[2]);
      if ( (__m128 *)v130[0].m128_u64[0] != v28 )
      {
        do
        {
          while ( 1 )
          {
            v28 = (__m128 *)((char *)v28 - 8);
            if ( !v28->m128_u64[0] )
              break;
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v28->m128_u64[0] + 8LL))(v28->m128_u64[0]);
            if ( (__m128 *)v27 == v28 )
              goto LABEL_22;
          }
        }
        while ( (__m128 *)v27 != v28 );
LABEL_22:
        v28 = (__m128 *)v130[0].m128_u64[0];
      }
      if ( v28 == &v21[1] )
      {
        if ( !**(_DWORD **)(a1 + 48) )
        {
LABEL_25:
          v4 = a1;
          goto LABEL_26;
        }
      }
      else
      {
        free(v28);
        if ( !**(_DWORD **)(a1 + 48) )
          goto LABEL_25;
      }
    }
    sub_2132C70(a1, v21);
    v26 = *(unsigned int *)(a1 + 232);
LABEL_72:
    v71 = *(_QWORD *)(a1 + 224);
    v72 = v71 + 112 * v26;
    if ( v71 != v72 )
    {
      v116 = v21;
      v73 = v19;
      do
      {
        v74 = *(_QWORD *)(v71 + 8);
        v127 = 261;
        v75 = *(_QWORD *)(a1 + 32);
        v124.m128i_i64[0] = v74;
        v111 = 0;
        v124.m128i_i64[1] = *(_QWORD *)(v71 + 16);
        v113 = 0;
        v22 = *(void ***)v71;
        v128 = _mm_loadu_si128((const __m128i *)(v71 + 96));
        *(_BYTE *)(a1 + 240) = 1;
        sub_223BFB0(v75, (_DWORD)v22, 0, (unsigned int)&v124, (_DWORD)v73, 1, 0, 0, 1);
        v76 = *(_QWORD *)(a1 + 368);
        if ( *(_QWORD *)(a1 + 360) != v76 )
        {
          v77 = v71;
          v78 = v73;
          v79 = *(_QWORD *)(a1 + 360);
          do
          {
            v80 = *(void ****)(v76 - 8);
            v81 = *(_QWORD *)(a1 + 32);
            v76 -= 8;
            v109 = 0;
            v128.m128i_i64[0] = (__int64)"while in macro instantiation";
            v22 = *v80;
            v129 = 259;
            v122[0] = 0u;
            v110 = 0;
            sub_223BFB0(v81, (_DWORD)v22, 3, (_DWORD)v78, (unsigned int)v122, 1, 0, 0, 1);
          }
          while ( v79 != v76 );
          v73 = v78;
          v71 = v77;
        }
        v71 += 112;
      }
      while ( v72 != v71 );
      v82 = *(_QWORD *)(a1 + 224);
      v19 = v73;
      v21 = v116;
      v83 = v82 + 112LL * *(unsigned int *)(a1 + 232);
      while ( v82 != v83 )
      {
        while ( 1 )
        {
          v83 -= 112;
          v84 = *(void **)(v83 + 8);
          if ( v84 == (void *)(v83 + 32) )
            break;
          free(v84);
          if ( v82 == v83 )
            goto LABEL_83;
        }
      }
    }
LABEL_83:
    *(_DWORD *)(a1 + 232) = 0;
    if ( !v115 || *(_BYTE *)(a1 + 177) )
      goto LABEL_19;
LABEL_85:
    sub_21319B0(a1, v22, v25, v8, v9, v10);
    goto LABEL_19;
  }
LABEL_26:
  v29 = *(void (**)(void))(**(_QWORD **)(v4 + 8) + 208LL);
  if ( v29 != nullsub_1459 )
    v29();
  v30 = *(_QWORD *)(v4 + 224);
  v31 = 112LL * *(unsigned int *)(v4 + 232);
  v114 = (const __m128i *)(v30 + v31);
  if ( v30 != v30 + v31 )
  {
    v32 = v4;
    v33 = *(const __m128i **)(v4 + 224);
    do
    {
      v34 = v33->m128i_i64[1];
      v129 = 261;
      v35 = *(_QWORD *)(v32 + 32);
      v128.m128i_i64[0] = v34;
      v128.m128i_i64[1] = v33[1].m128i_i64[0];
      v36 = v33->m128i_i64[0];
      v130[0] = (__m128)_mm_loadu_si128(v33 + 6);
      *(_BYTE *)(v32 + 240) = 1;
      sub_223BFB0(v35, v36, 0, (unsigned int)&v128, (unsigned int)v130, 1, 0, 0, 1);
      v112 = *(_QWORD *)(v32 + 360);
      if ( v112 != *(_QWORD *)(v32 + 368) )
      {
        v37 = v32;
        v38 = *(_QWORD *)(v32 + 368);
        v39 = v37;
        do
        {
          v40 = *(__int64 **)(v38 - 8);
          v41 = *(_QWORD *)(v39 + 32);
          v130[0].m128_u64[0] = (unsigned __int64)"while in macro instantiation";
          v38 -= 8;
          v131 = 259;
          v42 = *v40;
          v124 = 0u;
          sub_223BFB0(v41, v42, 3, (unsigned int)v130, (unsigned int)&v124, 1, 0, 0, 1);
        }
        while ( v112 != v38 );
        v32 = v39;
      }
      v33 += 7;
    }
    while ( v114 != v33 );
    v4 = v32;
    v43 = *(_QWORD *)(v32 + 224);
    v44 = v43 + 112LL * *(unsigned int *)(v4 + 232);
    while ( v43 != v44 )
    {
      while ( 1 )
      {
        v44 -= 112;
        v45 = *(void **)(v44 + 8);
        if ( v45 == (void *)(v44 + 32) )
          break;
        free(v45);
        if ( v43 == v44 )
          goto LABEL_39;
      }
    }
  }
LABEL_39:
  *(_DWORD *)(v4 + 232) = 0;
  if ( *(_DWORD *)(v4 + 300) != v117 || *(_BYTE *)(v4 + 305) != v119 )
  {
    v131 = 259;
    v130[0].m128_u64[0] = (unsigned __int64)"unmatched .ifs or .elses";
    v46 = sub_2153C00(v4);
    v47 = sub_2124B50(v46);
    sub_2129C30(v4, v47, (int)v130, 0, 0);
  }
  v48 = *(_QWORD *)(v4 + 16);
  if ( *(_QWORD *)(v48 + 1752) )
  {
    v49 = *(_QWORD *)(v48 + 1736);
    v50 = *(_QWORD *)(v49 + 160);
    v51 = 80LL * *(unsigned int *)(v49 + 168);
    v52 = v50 + v51;
    if ( v50 + v51 != v50 )
    {
      v53 = v50 + 80;
      if ( v52 != v53 )
      {
        v54 = 1;
        do
        {
          if ( !*(_QWORD *)(v53 + 8) && v54 )
          {
            v128.m128i_i64[0] = (__int64)" for .file directives";
            v129 = 259;
            v121 = 265;
            v123 = 259;
            v122[0].m128i_i64[0] = (__int64)"unassigned file number: ";
            v120[0].m128i_i32[0] = v54;
            sub_A41580(&v124, v122, v120, v8, 259, 265);
            sub_A41580((__m128i *)v130, &v124, &v128, v55, v56, v57);
            v58 = sub_2153C00(v4);
            v59 = sub_2124B50(v58);
            sub_2129C30(v4, v59, (int)v130, 0, 0);
          }
          v53 += 80;
          ++v54;
        }
        while ( v52 != v53 );
      }
    }
  }
  if ( !a3 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 40) + 18LL) )
    {
      v89 = *(_QWORD *)(v4 + 16);
      sub_21095E0((__int64 **)v130, *(__int64 **)(v89 + 1344), *(_DWORD *)(v89 + 1352) == 0);
      v90 = (__int64 *)v130[0].m128_u64[0];
      sub_21095E0((__int64 **)v130, (__int64 *)(*(_QWORD *)(v89 + 1344) + 8LL * *(unsigned int *)(v89 + 1352)), 1);
      v92 = v130[0].m128_u64[0];
      if ( (__int64 *)v130[0].m128_u64[0] != v90 )
      {
        v93 = *v90;
        do
        {
          while ( 1 )
          {
            v94 = *(_QWORD *)(v93 + 8);
            if ( v94 )
            {
              v95 = *(_BYTE *)(v94 + 8);
              if ( (v95 & 2) != 0 && (*(_BYTE *)(v94 + 9) & 0x70) != 0x20 )
              {
                v96 = *(_QWORD *)v94;
                if ( !*(_QWORD *)v94 )
                {
                  v128.m128i_i64[0] = (__int64)"' not defined";
                  v129 = 259;
                  v99 = 0;
                  if ( (v95 & 1) != 0 )
                  {
                    v104 = *(__int64 **)(v94 - 8);
                    v99 = *v104;
                    v96 = (__int64)(v104 + 3);
                  }
                  v126 = v99;
                  v127 = 1283;
                  v124.m128i_i64[0] = (__int64)"assembler local symbol '";
                  v125 = v96;
                  sub_A41580((__m128i *)v130, &v124, &v128, v96, v91, (__int64)"assembler local symbol '");
                  v100 = sub_2153C00(v4);
                  v101 = sub_2124B50(v100);
                  sub_2129C30(v4, v101, (int)v130, 0, 0);
                }
              }
            }
            v93 = v90[1];
            v97 = v90 + 1;
            if ( !v93 || v93 == -8 )
              break;
            ++v90;
            if ( (_QWORD *)v92 == v97 )
              goto LABEL_52;
          }
          v98 = v90 + 2;
          do
          {
            do
            {
              v93 = *v98;
              v90 = v98++;
            }
            while ( !v93 );
          }
          while ( v93 == -8 );
        }
        while ( (__int64 *)v92 != v90 );
      }
    }
LABEL_52:
    v60 = *(_QWORD *)(v4 + 520);
    v61 = v60 + 56LL * *(unsigned int *)(v4 + 528);
    while ( v61 != v60 )
    {
      while ( 1 )
      {
        v62 = *(_QWORD **)v60;
        if ( !**(_QWORD **)v60 )
        {
          if ( (*((_BYTE *)v62 + 9) & 0x70) != 0x20 )
            break;
          if ( (v62[1] & 0x40) != 0 )
            break;
          v63 = sub_210D820(v62[3]);
          *v62 = v63;
          if ( !v63 )
            break;
        }
        v60 += 56;
        if ( v61 == v60 )
          goto LABEL_60;
      }
      v64 = _mm_loadu_si128((const __m128i *)(v60 + 8));
      v60 += 56;
      *(__m128i *)(v4 + 472) = v64;
      *(__m128i *)(v4 + 488) = _mm_loadu_si128((const __m128i *)(v60 - 32));
      v65 = *(_DWORD *)(v60 - 16);
      v130[0].m128_u64[0] = (unsigned __int64)"directional label undefined";
      *(_DWORD *)(v4 + 504) = v65;
      v66 = *(_QWORD *)(v60 - 8);
      v131 = 259;
      sub_2129C30(v4, v66, (int)v130, 0, 0);
    }
LABEL_60:
    if ( *(_BYTE *)(v4 + 240) )
      goto LABEL_88;
    v67 = *(_QWORD **)(v4 + 24);
    v68 = v67[2];
    if ( v68 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 72LL))(v68);
      v67 = *(_QWORD **)(v4 + 24);
    }
    sub_211C830(v67, *(_QWORD *)(v4 + 184));
  }
  if ( !*(_BYTE *)(v4 + 240) )
  {
    v69 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 2352LL);
    goto LABEL_66;
  }
LABEL_88:
  v69 = 1;
LABEL_66:
  if ( ptr[0] != v136 )
    free(ptr[0]);
  return v69;
}
