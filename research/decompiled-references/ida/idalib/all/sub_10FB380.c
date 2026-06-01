__int64 __fastcall sub_10FB380(__int64 a1, __m128 *a2)
{
  _QWORD *v2; // r13
  __int64 v3; // r14
  __m128 *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned int v8; // r15d
  int v9; // r14d
  __int64 v10; // r12
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // rax
  bool v14; // zf
  __int64 *v15; // r10
  __int64 *v16; // r12
  __int64 *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char v21; // si
  __int64 *v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  _QWORD *v26; // r14
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r13
  _QWORD *v30; // r13
  unsigned __int64 v31; // rax
  __int64 *v32; // r15
  __int64 *v33; // r13
  __int64 *v34; // rax
  __int64 v35; // r12
  __m128 *v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 *v41; // r8
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  const char *v45; // rax
  char *v46; // rbx
  char *v47; // rdi
  char *v48; // rbp
  char *v49; // rdi
  void *v50; // rdi
  __int64 v51; // rbx
  __int64 v52; // rbp
  char *v53; // rax
  _QWORD *v54; // rdi
  void *v56; // rdi
  __int64 v57; // r8
  __m128i v58; // xmm0
  __m128i v59; // xmm1
  void (__fastcall *v60)(void **, __int64, __int64); // rcx
  __m128 v61; // rax
  __m128 *v62; // rbx
  _BYTE *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rsi
  unsigned __int64 v67; // rax
  __int64 v68; // rdx
  __m128i v69; // xmm0
  __m128 v70; // xmm0
  void *v71; // rcx
  char *v72; // rax
  void *v73; // rbx
  __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rax
  __m128i v81; // xmm0
  _QWORD *v82; // rax
  __int64 v83; // r15
  const char **v84; // rax
  size_t v85; // r15
  const char *v86; // r12
  unsigned int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned int v92; // r14d
  __int64 *v93; // rbx
  __m128 v94; // kr00_16
  unsigned __int64 v95; // rdx
  __int64 v96; // rax
  _QWORD *v97; // rcx
  unsigned int v98; // eax
  __int64 v99; // [rsp+8h] [rbp-1E0h]
  __m128i v100; // [rsp+10h] [rbp-1D8h] BYREF
  _QWORD *v101; // [rsp+20h] [rbp-1C8h]
  __int64 v102; // [rsp+28h] [rbp-1C0h]
  __m128i v103; // [rsp+30h] [rbp-1B8h] BYREF
  __m128 *v104; // [rsp+40h] [rbp-1A8h]
  _QWORD *v105; // [rsp+48h] [rbp-1A0h]
  int *v106; // [rsp+50h] [rbp-198h]
  __int64 v107; // [rsp+58h] [rbp-190h]
  __int32 v108; // [rsp+68h] [rbp-180h] BYREF
  int v109; // [rsp+6Ch] [rbp-17Ch] BYREF
  _QWORD v110[4]; // [rsp+70h] [rbp-178h] BYREF
  void *v111; // [rsp+90h] [rbp-158h] BYREF
  __m128i si128; // [rsp+98h] [rbp-150h]
  void *v113[2]; // [rsp+B0h] [rbp-138h] BYREF
  __m128 v114; // [rsp+C0h] [rbp-128h] BYREF
  __m128 v115; // [rsp+D0h] [rbp-118h] BYREF
  void *v116; // [rsp+E0h] [rbp-108h]
  __int8 *v117; // [rsp+E8h] [rbp-100h]
  __int8 *v118; // [rsp+F0h] [rbp-F8h]
  __int64 v119; // [rsp+F8h] [rbp-F0h]
  void *ptr[2]; // [rsp+100h] [rbp-E8h] BYREF
  _QWORD v121[27]; // [rsp+110h] [rbp-D8h] BYREF

  v4 = a2;
  v100.m128i_i64[0] = a1;
  v103.m128i_i64[1] = (__int64)v110;
  sub_2233820(v110);
  v5 = a2[5].m128_i64[0];
  v110[0] = &off_2BEB1D8;
  v110[2] = "Building compilation jobs";
  v100.m128i_i64[1] = sub_10DCD30(v5, 0xC2Cu);
  if ( !v100.m128i_i64[1] )
    goto LABEL_20;
  v6 = a2[7].m128_u64[0];
  v7 = v6 + 8LL * a2[7].m128_u32[2];
  if ( v7 == v6 )
    goto LABEL_20;
  v99 = v3;
  v8 = 0;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)v6;
      v11 = *(_DWORD *)(*(_QWORD *)v6 + 12LL);
      v12 = *(_DWORD *)(*(_QWORD *)v6 + 8LL);
      if ( v11 == 66 )
      {
        if ( (unsigned int)(v12 - 21) <= 1 || v12 == 11 )
          goto LABEL_10;
        if ( v12 != 1 )
          goto LABEL_9;
        goto LABEL_15;
      }
      if ( v11 == 67 )
      {
        if ( v12 == 2 )
        {
          v42 = a2[5].m128_i64[0];
          v103.m128i_i64[0] = v7;
          v43 = sub_10DCD30(v42, 0x738u);
          v7 = v103.m128i_i64[0];
          if ( !v43 )
            v8 += *(_DWORD *)(v10 + 24);
        }
        goto LABEL_10;
      }
      if ( v12 != 11 )
        break;
LABEL_10:
      v6 += 8LL;
      if ( v7 == v6 )
        goto LABEL_18;
    }
    if ( v11 == 50 && v12 == 7 )
    {
      if ( !v9 )
      {
        v9 = 1;
        goto LABEL_10;
      }
      ++v9;
LABEL_9:
      ++v8;
      goto LABEL_10;
    }
    if ( v12 != 1 )
      goto LABEL_9;
LABEL_15:
    if ( !*(_DWORD *)(v10 + 24) || *(_DWORD *)(**(_QWORD **)(v10 + 16) + 8LL) != 11 )
      goto LABEL_9;
    v6 += 8LL;
  }
  while ( v7 != v6 );
LABEL_18:
  v3 = v99;
  if ( v8 > 1 )
  {
    sub_FC70B0((__int64)ptr, *(_QWORD *)v100.m128i_i64[0], 0, 457);
    sub_AEA040((__int64)ptr);
    v100.m128i_i64[1] = 0;
  }
LABEL_20:
  v13 = a2->m128_u64[1];
  v111 = nullptr;
  v14 = *(_DWORD *)(v13 + 68) == 5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  if ( v14 )
  {
    v75 = a2[5].m128_u64[0];
    v76 = *(unsigned int *)(v75 + 16);
    v77 = *(_QWORD *)(v75 + 8);
    LODWORD(v116) = 0;
    v103.m128i_i64[0] = v77 + 8 * v76;
    v115 = _mm_loadh_ps((const double *)v103.m128i_i64);
    sub_10D8800(&v115, v103.m128i_i64[0]);
    v79 = *(unsigned int *)(v78 + 16);
    v80 = *(_QWORD *)(v78 + 8);
    LODWORD(v121[0]) = 0;
    v103.m128i_i64[0] = v80 + 8 * v79;
    v81 = _mm_loadl_epi64(&v103);
    *(__m128i *)ptr = _mm_unpacklo_epi64(v81, v81);
    sub_10D8800((_QWORD **)ptr, v103.m128i_i64[0]);
    v82 = (_QWORD *)v115.m128_u64[0];
    v103.m128i_i64[0] = (__int64)v113;
    if ( ptr[0] != (void *)v115.m128_u64[0] )
    {
      v101 = v2;
      v102 = v3;
      v104 = a2;
      while ( 1 )
      {
        v83 = *v82;
        if ( (unsigned __int8)sub_21B9810(*v82, 129) )
        {
          v84 = *(const char ***)(v83 + 48);
          v85 = 0;
          v86 = *v84;
          if ( *v84 )
            v85 = j__strlen(*v84);
          v87 = sub_2244B30(v86, v85);
          v88 = (unsigned int)sub_2244CB0(&v111, v86, v85, v87);
          v92 = v88;
          v93 = (__int64 *)((char *)v111 + 8 * v88);
          if ( !*v93 )
            goto LABEL_144;
          if ( *v93 == -8 )
          {
            --si128.m128i_i32[2];
LABEL_144:
            v96 = sub_22300B0(v85 + 9, 8, v88, v89, v90, v91);
            v97 = (_QWORD *)v96;
            if ( v85 )
            {
              v105 = (_QWORD *)v96;
              memcpy((void *)(v96 + 8), v86, v85);
              v97 = v105;
            }
            *((_BYTE *)v97 + v85 + 8) = 0;
            *v97 = v85;
            *v93 = (__int64)v97;
            ++si128.m128i_i32[1];
            v98 = sub_22450D0(&v111, v92);
            sub_A45C10((__int64 **)v103.m128i_i64[0], (__int64 *)v111 + v98, 0);
            goto LABEL_125;
          }
          sub_A45C10((__int64 **)v103.m128i_i64[0], v93, 0);
        }
LABEL_125:
        v94 = v115;
        v82 = (_QWORD *)(v115.m128_u64[0] + 8);
        v115.m128_u64[0] = (unsigned __int64)v82;
        if ( (_QWORD *)v115.m128_u64[1] == v82 || *(_QWORD *)(v94.m128_u64[0] + 8) )
        {
          if ( ptr[0] == v82 )
            goto LABEL_131;
        }
        else
        {
          v95 = v94.m128_u64[0] + 16;
          do
          {
            v82 = (_QWORD *)v94.m128_u64[0];
            if ( v94.m128_u64[1] == v94.m128_u64[0] )
              break;
            v95 += 8LL;
          }
          while ( !*(_QWORD *)v94.m128_u64[0] );
          v115.m128_u64[0] = v94.m128_u64[0];
          if ( ptr[0] == (void *)v94.m128_u64[0] )
          {
LABEL_131:
            v4 = v104;
            break;
          }
        }
      }
    }
  }
  v15 = (__int64 *)v4[7].m128_u64[0];
  v115.m128_i32[2] = 0;
  v116 = nullptr;
  v119 = 0;
  v117 = &v115.m128_i8[8];
  v118 = &v115.m128_i8[8];
  v16 = &v15[v4[7].m128_u32[2]];
  if ( v16 != v15 )
  {
    v17 = v15;
    if ( v100.m128i_i64[1] )
    {
      while ( 1 )
      {
        v18 = *v17;
        v19 = 0;
        if ( *(_DWORD *)(*v17 + 8) == 12 )
          goto LABEL_71;
        while ( 1 )
        {
          sub_10FAD90(
            (__int64)ptr,
            v100.m128i_i64[0],
            (__m128i *)v4,
            v18,
            (_QWORD *)v4->m128_u64[1],
            1u,
            nullptr,
            nullptr,
            si128.m128i_i32[1] > 1u,
            v19,
            &v115,
            0);
          if ( ptr[0] != v121 )
            break;
          if ( v16 == ++v17 )
            goto LABEL_26;
          v18 = *v17;
          v19 = 0;
          if ( *(_DWORD *)(*v17 + 8) == 12 )
LABEL_71:
            v19 = **(_QWORD **)(v100.m128i_i64[1] + 48);
        }
        free(ptr[0]);
        if ( v16 == ++v17 )
          goto LABEL_26;
      }
    }
LABEL_61:
    v44 = *v17;
    v45 = nullptr;
    if ( *(_DWORD *)(*v17 + 8) == 12 )
      goto LABEL_65;
    while ( 1 )
    {
      do
      {
        sub_10FAD90(
          (__int64)ptr,
          v100.m128i_i64[0],
          (__m128i *)v4,
          v44,
          (_QWORD *)v4->m128_u64[1],
          1u,
          nullptr,
          nullptr,
          si128.m128i_i32[1] > 1u,
          (__int64)v45,
          &v115,
          0);
        if ( ptr[0] == v121 )
        {
          if ( v16 == ++v17 )
            goto LABEL_26;
          goto LABEL_61;
        }
        free(ptr[0]);
        if ( v16 == ++v17 )
          goto LABEL_26;
        v44 = *v17;
        v45 = nullptr;
      }
      while ( *(_DWORD *)(*v17 + 8) != 12 );
LABEL_65:
      v103.m128i_i64[0] = v44;
      v45 = sub_10DB460(v100.m128i_i64[0]);
      v44 = v103.m128i_i64[0];
    }
  }
LABEL_26:
  v20 = v4[10].m128_u32[0];
  v103.m128i_i8[0] = *(_BYTE *)(v100.m128i_i64[0] + 920);
  v21 = v103.m128i_i8[0] & 4;
  if ( v20 > 1 )
  {
    v22 = (__int64 *)v4[9].m128_u64[1];
    v23 = &v22[v20];
    goto LABEL_28;
  }
  if ( v21 )
  {
    v22 = (__int64 *)v4[9].m128_u64[1];
    v23 = &v22[v20];
    if ( v23 == v22 )
      goto LABEL_95;
    do
    {
LABEL_28:
      v24 = *v22++;
      *(_BYTE *)(v24 + 513) = 0;
    }
    while ( v23 != v22 );
    if ( v21 )
    {
LABEL_95:
      v121[0] = 0;
      v100.m128i_i64[1] = (__int64)sub_10D84A0;
      *(__m128 *)v113 = _mm_loadh_ps((const double *)v100.m128i_i64);
      v100.m128i_i64[1] = (__int64)sub_1105DD0;
      v114 = _mm_loadh_ps((const double *)&v100.m128i_i64[1]);
      sub_10D84A0((const __m128i **)ptr, (const __m128i *)v113, 2);
      v58 = _mm_load_si128((const __m128i *)ptr);
      v59 = _mm_loadu_si128((const __m128i *)&v4[30].m128_u16[4]);
      v60 = (void (__fastcall *)(void **, __int64, __int64))v4[31].m128_u64[1];
      v61 = v114;
      v121[1] = v4[32].m128_u64[0];
      *(__m128i *)ptr = v59;
      *(__m128i *)((char *)v4 + 488) = v58;
      v121[0] = v60;
      *(__m128 *)((char *)v4 + 504) = v61;
      if ( v60 )
      {
        v60(ptr, v57, 3);
        v61.m128_u64[0] = v114.m128_u64[0];
      }
      if ( v61.m128_u64[0] )
        ((void (__fastcall *)(void **, void **, __int64))v61.m128_u64[0])(v113, v113, 3);
    }
  }
  v25 = v4[5].m128_i64[0];
  v100.m128i_i8[8] = 0;
  if ( !*(_BYTE *)(*(_QWORD *)v100.m128i_i64[0] + 192LL) )
  {
    v65 = sub_10DCD30(v25, 0xC7Du);
    v25 = v4[5].m128_i64[0];
    v100.m128i_i8[8] = v65 == 0;
  }
  sub_10DCD30(v25, 0x277u);
  sub_10DCD30(v4[5].m128_i64[0], 0x48u);
  sub_10DCD30(v4[5].m128_i64[0], 0x12Bu);
  sub_10DCD30(v4[5].m128_i64[0], 0xC9Fu);
  v26 = (_QWORD *)v4[9].m128_u64[1];
  v27 = 8LL * v4[10].m128_u32[0];
  v101 = &v26[(unsigned __int64)v27 / 8];
  v28 = v27 >> 3;
  v29 = v27 >> 5;
  if ( !v29 )
  {
LABEL_112:
    if ( v28 != 2 )
    {
      if ( v28 != 3 )
      {
        if ( v28 != 1 )
        {
          v26 = v101;
          goto LABEL_39;
        }
LABEL_137:
        if ( !strstr(*(const char **)(*(_QWORD *)(*v26 + 16LL) + 16LL), "assembler") )
          v26 = v101;
        goto LABEL_39;
      }
      if ( strstr(*(const char **)(*(_QWORD *)(*v26 + 16LL) + 16LL), "assembler") )
        goto LABEL_39;
      ++v26;
    }
    if ( strstr(*(const char **)(*(_QWORD *)(*v26 + 16LL) + 16LL), "assembler") )
      goto LABEL_39;
    ++v26;
    goto LABEL_137;
  }
  v30 = &v26[4 * v29];
  while ( !strstr(*(const char **)(*(_QWORD *)(*v26 + 16LL) + 16LL), "assembler") )
  {
    if ( strstr(*(const char **)(*(_QWORD *)(v26[1] + 16LL) + 16LL), "assembler") )
    {
      ++v26;
      break;
    }
    if ( strstr(*(const char **)(*(_QWORD *)(v26[2] + 16LL) + 16LL), "assembler") )
    {
      v26 += 2;
      break;
    }
    if ( strstr(*(const char **)(*(_QWORD *)(v26[3] + 16LL) + 16LL), "assembler") )
    {
      v26 += 3;
      break;
    }
    v26 += 4;
    if ( v26 == v30 )
    {
      v28 = v101 - v26;
      goto LABEL_112;
    }
  }
LABEL_39:
  v31 = v4[5].m128_u64[0];
  v32 = *(__int64 **)(v31 + 8);
  v33 = &v32[*(unsigned int *)(v31 + 16)];
  if ( v32 == v33 )
    goto LABEL_72;
  v34 = v32 + 1;
  if ( !*v32 )
  {
    do
    {
      v32 = v34;
      if ( v33 == v34 )
        goto LABEL_72;
      ++v34;
    }
    while ( !*(v34 - 1) );
  }
  v35 = v100.m128i_i64[0];
  v105 = v26;
  v103.m128i_i64[0] = (__int64)v113;
  v36 = v4;
  v104 = &v114;
  v106 = &v109;
  while ( 2 )
  {
    v37 = *v32;
    v38 = *(_QWORD *)(*v32 + 16);
    if ( !v38 )
      v38 = *v32;
    if ( (*(_BYTE *)(v38 + 44) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)v37 + 48LL) & 0x40) != 0 )
      goto LABEL_54;
    if ( *(_BYTE *)(*(_QWORD *)v37 + 44LL) != 3
      || (v66 = *v32,
          v100.m128i_i64[0] = v36[5].m128_i64[0],
          sub_21BB030(v103.m128i_i64[0], v66),
          LODWORD(ptr[0]) = v113[0],
          v67 = sub_21B6DA0(v100.m128i_i64[0], ptr, 1),
          v68 = *(_QWORD *)(v100.m128i_i64[0] + 8),
          v107 = v68 + 8LL * (unsigned int)v67,
          v100.m128i_i64[0] = v68 + 8 * HIDWORD(v67),
          sub_21BB030(v106, v37),
          v69 = _mm_loadl_epi64(&v100),
          LODWORD(v121[0]) = v109,
          *(__m128i *)ptr = _mm_unpacklo_epi64(v69, v69),
          sub_10DFFA0((__int64)ptr),
          sub_21BB030(&v108, v37),
          v70 = _mm_loadh_ps((const double *)v100.m128i_i64),
          v114.m128_i32[0] = v108,
          *(__m128 *)v113 = v70,
          sub_10DFFA0(v103.m128i_i64[0]),
          v71 = ptr[0],
          v72 = (char *)v113[0],
          *(__m128i *)ptr = _mm_load_si128((const __m128i *)v113),
          LODWORD(v121[0]) = v114.m128_i32[0],
          v113[0] == v71) )
    {
LABEL_47:
      if ( *(_DWORD *)(v35 + 16) == 3 && (unsigned __int8)sub_21B9810(v37, 71) )
        goto LABEL_54;
      if ( (*(_BYTE *)(*(_QWORD *)v37 + 49LL) & 4) == 0 )
        goto LABEL_53;
      v39 = *(_QWORD *)(v37 + 16);
      if ( !v39 )
        v39 = v37;
      if ( (*(_BYTE *)(v39 + 44) & 2) == 0 && v101 == v105 && v36[7].m128_i32[2] )
      {
        sub_FC70B0((__int64)ptr, *(_QWORD *)v35, 0, 495);
        sub_AEC220((unsigned __int8 **)ptr, *(_BYTE **)(v37 + 24), *(_QWORD *)(v37 + 32));
        v62 = v104;
        v63 = *(_BYTE **)(v35 + 944);
        v64 = *(_QWORD *)(v35 + 952);
        v113[0] = v104;
        sub_10D8CD0(v103.m128i_i64[0], v63, (__int64)&v63[v64]);
        sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)v113[0], (signed __int64)v113[1]);
        v56 = v113[0];
        if ( v113[0] == v62 )
          goto LABEL_90;
      }
      else
      {
LABEL_53:
        if ( !v100.m128i_i8[8] )
          goto LABEL_54;
        sub_FC70B0((__int64)ptr, *(_QWORD *)v35, 0, 611);
        sub_21B5FF0(v103.m128i_i64[0], v37, v36[5].m128_u64[0]);
        sub_AEC220((unsigned __int8 **)ptr, (_BYTE *)v113[0], (signed __int64)v113[1]);
        v56 = v113[0];
        if ( v113[0] == v104 )
          goto LABEL_90;
      }
      operator delete(v56);
LABEL_90:
      sub_AEA040((__int64)ptr);
      goto LABEL_54;
    }
    v100.m128i_i64[0] = v37;
    v73 = v71;
    while ( 1 )
    {
      v74 = *(_QWORD *)(*(_QWORD *)v72 + 16LL);
      if ( !v74 )
        v74 = *(_QWORD *)v72;
      if ( (*(_BYTE *)(v74 + 44) & 1) != 0 )
        break;
      ptr[0] = v72 + 8;
      sub_10DFFA0((__int64)ptr);
      v72 = (char *)ptr[0];
      if ( ptr[0] == v73 )
      {
        v37 = v100.m128i_i64[0];
        goto LABEL_47;
      }
    }
LABEL_54:
    v40 = v32 + 1;
    if ( v33 == v32 + 1 )
      goto LABEL_72;
    v41 = v32 + 2;
    if ( v32[1] )
    {
LABEL_56:
      v32 = v40;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v40 = v41;
    if ( v33 == v41 )
      break;
    if ( *v41++ )
      goto LABEL_56;
  }
LABEL_72:
  v46 = (char *)v116;
  if ( v116 )
  {
    while ( 1 )
    {
      sub_10E1480((__int64)&v115, *((_QWORD **)v46 + 3));
      v47 = *((char **)v46 + 9);
      v48 = *((char **)v46 + 2);
      if ( v47 != v46 + 88 )
        free(v47);
      v49 = *((char **)v46 + 5);
      if ( v49 == v46 + 56 )
      {
        operator delete(v46);
        if ( !v48 )
          break;
      }
      else
      {
        operator delete(v49);
        operator delete(v46);
        if ( !v48 )
          break;
      }
      v46 = v48;
    }
  }
  v50 = v111;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v51 = 0;
    v52 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    v53 = (char *)v111;
    do
    {
      v54 = *(_QWORD **)&v53[v51];
      if ( v54 != (_QWORD *)-8LL && v54 )
      {
        operator delete(v54, *v54 + 9LL, 8);
        v53 = (char *)v111;
      }
      v51 += 8;
    }
    while ( v51 != v52 );
    v50 = v53;
  }
  free(v50);
  v110[0] = &off_2BEB1D8;
  return sub_22338A0(v103.m128i_i64[1]);
}
