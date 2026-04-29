__int64 __fastcall sub_EFB00(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int8 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r14
  const char *v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // r13
  __int64 v26; // r14
  void *v27; // rax
  __int64 v28; // r12
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 *v33; // r13
  unsigned __int64 v34; // r12
  void *v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // r12
  __int64 *v38; // rbx
  unsigned __int64 v39; // r14
  __int64 v40; // rdi
  __int64 *v41; // rdi
  __int32 v42; // eax
  __int32 v43; // r12d
  __int64 v44; // r13
  int v45; // ebp
  int v46; // r12d
  int v47; // r14d
  __int64 v48; // r13
  __int64 v49; // rbp
  _DWORD *v50; // rax
  _DWORD *v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rdi
  _QWORD *v54; // r13
  __int64 v55; // rdi
  __int64 v56; // rax
  unsigned int v57; // edx
  __int64 v58; // rbp
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // r8
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  __int64 v65; // rax
  __m128i v66; // xmm0
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // r13
  __int64 v72; // r12
  _QWORD *v73; // rbp
  __int64 v74; // rdi
  __int64 v75; // rdi
  _DWORD *v77; // rdi
  int tinfo_size; // ebx
  __int64 v79; // r12
  __int64 v80; // rax
  __int64 v81; // rbp
  __m128i v82; // xmm0
  __int64 v83; // rdi
  __int64 v84; // rdi
  __m128i v85; // xmm0
  __int64 v86; // rdi
  __m128i v87; // xmm0
  __m128i v88; // [rsp+0h] [rbp-168h] BYREF
  __int64 v89; // [rsp+10h] [rbp-158h]
  __int64 v90; // [rsp+18h] [rbp-150h]
  __int64 v91; // [rsp+20h] [rbp-148h]
  __int64 v92; // [rsp+28h] [rbp-140h]
  __int32 v93; // [rsp+30h] [rbp-138h]
  __int32 v94; // [rsp+34h] [rbp-134h]
  __m128i *v95; // [rsp+38h] [rbp-130h]
  __int64 *v96; // [rsp+40h] [rbp-128h]
  __int64 v97; // [rsp+48h] [rbp-120h]
  __int64 *v98; // [rsp+50h] [rbp-118h]
  __int64 *v99; // [rsp+58h] [rbp-110h]
  int v100; // [rsp+60h] [rbp-108h]
  unsigned __int8 tinfo_details; // [rsp+67h] [rbp-101h]
  __int64 *v102; // [rsp+68h] [rbp-100h]
  __int64 v103; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v104; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v105[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v107; // [rsp+A8h] [rbp-C0h]
  __int64 v108; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v109; // [rsp+C8h] [rbp-A0h]
  __int64 v110; // [rsp+D8h] [rbp-90h]
  __int64 v111; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v113; // [rsp+F0h] [rbp-78h]
  __int64 v114; // [rsp+100h] [rbp-68h]
  __int128 v115; // [rsp+108h] [rbp-60h]
  char v116; // [rsp+118h] [rbp-50h]
  unsigned __int64 v117; // [rsp+128h] [rbp-40h]

  v117 = __readfsqword(0x28u);
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v114 = 0;
  v116 = 16;
  v95 = (__m128i *)&v108;
  v109 = 0;
  v113 = 0;
  v115 = 0;
  tinfo_details = get_tinfo_details();
  if ( !tinfo_details || (int)v109 < 0 )
    goto LABEL_128;
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size <= 0 )
      goto LABEL_128;
    if ( (get_tinfo_property() & 0x2F) != 0xD && !(unsigned __int8)sub_11CA80((unsigned int)tinfo_size) )
    {
      v79 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
      v80 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v79 + 120);
      if ( tinfo_size != v80
        && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 120LL) != tinfo_size
        && tinfo_size != 16 )
      {
        goto LABEL_128;
      }
    }
  }
  v4 = j__qalloc_or_throw(312, 2, v2, v3);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v4 + 12) = 0;
  *(_QWORD *)v4 = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 72) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_QWORD *)(v4 + 136) = 0;
  *(_QWORD *)(v4 + 144) = 0;
  *(_QWORD *)(v4 + 152) = 0;
  *(_QWORD *)(v4 + 176) = 0;
  *(_QWORD *)(v4 + 184) = 0;
  *(_QWORD *)(v4 + 192) = 0;
  *(_QWORD *)(v4 + 216) = 0;
  *(_QWORD *)(v4 + 240) = 0;
  *(_QWORD *)(v4 + 248) = 0;
  *(_QWORD *)(v4 + 256) = 0;
  *(_QWORD *)(v4 + 280) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 56) = 0;
  *(_OWORD *)(v4 + 120) = 0;
  *(_OWORD *)(v4 + 160) = 0;
  *(_OWORD *)(v4 + 200) = 0;
  *(_OWORD *)(v4 + 224) = 0;
  *(_OWORD *)(v4 + 264) = 0;
  *(_QWORD *)(v4 + 288) = 0;
  *(_OWORD *)(v4 + 296) = 0;
LABEL_5:
  v100 = sub_ED8C0(a1, v95, v4);
  if ( *(_DWORD *)(a1 + 348) > v100 )
  {
    if ( v4 )
    {
      sub_BB120((_QWORD *)v4);
      j__qfree(v4);
    }
LABEL_128:
    v98 = &v111;
    v99 = &v112;
LABEL_102:
    v4 = 0;
    goto LABEL_103;
  }
  *(_DWORD *)(v4 + 12) = *(_QWORD *)(a1 + 328);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a1 + 328) + DWORD2(v113);
  v7 = *(_DWORD *)(a1 + 360);
  if ( v7 <= 0x10 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(_BYTE *)(v8 + 129);
    v7 = v9 & 0xF0;
    if ( (v9 & 0xF0) == 0xC0 )
      v7 = *(_DWORD *)(v8 + 140);
  }
  *(_DWORD *)(v4 + 20) = v7;
  v102 = (__int64 *)(v4 + 24);
  v90 = v100;
  sub_82440((__int64 *)(v4 + 24), v100);
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v97 = *(_QWORD *)(a1 + 328) + *(int *)(v10 + 120);
  v92 = *((_QWORD *)&v113 + 1) + *(_QWORD *)(v10 + 136) + *(int *)(v10 + 116);
  sub_E8270(v4, (__int64)v95);
  *(_DWORD *)(v4 + 280) |= *(_DWORD *)(a1 + 352);
  v98 = &v111;
  copy_tinfo_t();
  v99 = &v112;
  copy_argloc();
  v11 = *(unsigned int *)(a1 + 360);
  v12 = tinfo_details;
  if ( (*(_BYTE *)(a1 + 352) & 4) != 0 )
    v12 = (v11 & 0xFFFFFFF0) == 64 || (v11 & 0xFFFFFFF0) == 208;
  LOBYTE(v89) = sub_372D90(v11, &v112);
  if ( v100 <= 0 )
  {
LABEL_91:
    v96 = v105;
    goto LABEL_92;
  }
  v94 = -1;
  v13 = 1;
  v14 = 0;
  while ( 1 )
  {
    v88.m128i_i32[0] = v13 - 1;
    v17 = (_DWORD *)(v108 + v14);
    if ( (v12 & (unsigned __int8)v89) == 0 )
    {
      v15 = v14;
      v93 = v88.m128i_i32[0];
      goto LABEL_15;
    }
    if ( *v17 != 1 )
    {
      v15 = v14;
      v12 &= v89;
      v93 = v88.m128i_i32[0];
      goto LABEL_15;
    }
    if ( v94 != -1 )
      goto LABEL_90;
    if ( v100 <= (int)v13 )
    {
LABEL_129:
      v94 = v88.m128i_i32[0];
LABEL_90:
      v12 &= v89;
      v93 = v94 + v100 - v13;
      v15 = 80LL * v93;
      v17 = (_DWORD *)(v108 + v15);
      goto LABEL_15;
    }
    v77 = (_DWORD *)(v108 + v14 + 80);
    while ( *v77 == 1 )
    {
      v77 += 20;
      if ( (_DWORD *)(v108 + 80 * (v13 + (unsigned int)(v100 - 1 - v13)) + 80) == v77 )
        goto LABEL_129;
    }
    v15 = v14;
    v12 = 0;
    v93 = v88.m128i_i32[0];
    v94 = v88.m128i_i32[0];
LABEL_15:
    if ( !(unsigned __int8)sub_E5020(
                             v15 + *(_QWORD *)(v4 + 24),
                             *(_QWORD *)a1,
                             (__int64)v17,
                             *(_DWORD *)(v4 + 12),
                             *(_DWORD *)(v4 + 20),
                             1) )
    {
      if ( v4 )
      {
        sub_BB120((_QWORD *)v4);
        j__qfree(v4);
      }
      goto LABEL_102;
    }
    if ( v12 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
      v91 = v15 + *(_QWORD *)(v4 + 24);
      if ( (unsigned __int8)sub_E82F0((__int64 *)a1, &v103, *(_QWORD *)(v18 + 16), v91) )
      {
        v19 = v103;
        if ( v103 < v92 )
        {
          if ( v103 < v97 )
            v19 = v92;
          v92 = v19;
        }
      }
      if ( *(_DWORD *)(a1 + 348) <= v88.m128i_i32[0]
        || (*(_BYTE *)(a1 + 352) & 4) == 0
        && !*(_DWORD *)(v4 + 284)
        && (v20 = *(_DWORD *)(a1 + 360) & 0xFFFFFFF0, v20 != 64)
        && v20 != 208 )
      {
        v96 = v105;
        if ( (unsigned __int8)sub_32F330(v91, v105) )
        {
          v21 = v92;
          if ( v105[0] >= v92 )
            break;
        }
      }
    }
    v16 = s1;
    if ( *(_QWORD *)(a1 + 32) )
      v16 = *(const char **)(a1 + 24);
    sub_BE340(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 480LL) + 112LL), v4, v16, 1);
    if ( !(_BYTE)v89 )
    {
      v56 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(v56 + 148) && (*(_BYTE *)(a1 + 352) & 4) == 0 )
      {
        if ( *(_QWORD *)(v4 + 32) )
        {
          v57 = *(_DWORD *)(v4 + 20) & 0xFFFFFFF0;
          if ( v57 != 64
            && v57 != 208
            && !*(_DWORD *)(v4 + 284)
            && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v56 + 112) + 136LL))(
                 *(_QWORD *)(v56 + 112),
                 v4)
            && (unsigned __int8)sub_F1700(a1, v4, v88.m128i_u32[0]) )
          {
            copy_tinfo_t();
            sub_F3650(a1, v4, v95, (unsigned int)v13);
            if ( !(unsigned __int8)get_tinfo_details() || (int)v109 < 0 )
            {
              if ( !under_debugger )
                sub_383060(52072);
              goto LABEL_153;
            }
            goto LABEL_5;
          }
        }
      }
    }
    v14 += 80;
    if ( v90 == v13 )
      goto LABEL_91;
    ++v13;
  }
  v22 = v108 + v15;
  if ( *(_DWORD *)v22 != 1 )
  {
    if ( !under_debugger )
      sub_383060(51676);
    goto LABEL_153;
  }
  *((_QWORD *)&v113 + 1) = *(_QWORD *)(v22 + 8);
  *(_DWORD *)(v4 + 16) = v105[0];
  if ( (unsigned __int8)sub_372D90(*(unsigned int *)(a1 + 360), v21) )
  {
    if ( *(_DWORD *)(v4 + 8) == v100 )
    {
      v23 = v108;
      v88.m128i_i32[0] = v93 + 1;
      v24 = 80LL * (v93 + 1);
      v25 = (_QWORD *)(v108 + v24);
      v26 = 80LL * v94;
      v27 = (void *)(v108 + v26);
      if ( v24 != v26 )
      {
        v89 = v108 + v26;
        v28 = 80LL * (v93 + 1);
        v90 = v4;
        v29 = (_QWORD *)(v108 + v26);
        do
        {
          clear_tinfo_t();
          v30 = v29[5];
          if ( v30 )
          {
            v29[6] = 0;
            qfree(v30);
          }
          v31 = v29[2];
          if ( v31 )
          {
            v29[3] = 0;
            qfree(v31);
          }
          v29 += 10;
          cleanup_argloc();
        }
        while ( v25 != v29 );
        v27 = (void *)v89;
        v4 = v90;
        v24 = v28;
        v23 = v108;
      }
      v89 = v24;
      memmove(v27, v25, 80 * v109 + v23 - (_QWORD)v25);
      v32 = *(_QWORD *)(v4 + 24);
      v33 = (__int64 *)(v32 + v89);
      v34 = 0xCCCCCCCCCCCCCCCDLL * ((v89 - v26) >> 4);
      v35 = (void *)(v32 + v26);
      *(_QWORD *)&v109 = v109 - v34;
      if ( v89 != v26 )
      {
        v89 = v32 + v26;
        v36 = v34;
        v37 = v4;
        v38 = (__int64 *)(v32 + v26);
        v39 = v36;
        do
        {
          cleanup_argloc();
          v40 = v38[4];
          if ( v40 )
          {
            v38[5] = 0;
            qfree(v40);
          }
          clear_tinfo_t();
          v41 = v38;
          v38 += 10;
          sub_11CDA0(v41);
        }
        while ( v33 != v38 );
        v4 = v37;
        v35 = (void *)v89;
        v34 = v39;
        v32 = *(_QWORD *)(v4 + 24);
      }
      memmove(v35, v33, 80LL * *(_QWORD *)(v4 + 32) + v32 - (_QWORD)v33);
      v42 = v88.m128i_i32[0];
      *(_QWORD *)(v4 + 32) -= v34;
      v43 = *(_DWORD *)(v4 + 8) + v94 - v42;
      *(_DWORD *)(v4 + 8) = v43;
      goto LABEL_54;
    }
    if ( !under_debugger )
      sub_383060(52582);
LABEL_153:
    BUG();
  }
  if ( v93 != v88.m128i_i32[0] )
  {
    if ( !under_debugger )
      sub_383060(52583);
    goto LABEL_153;
  }
  if ( *(_DWORD *)(v4 + 8) > v93 )
    *(_DWORD *)(v4 + 8) = v93;
  sub_EABB0(v95->m128i_i64, v13 - 1);
  sub_82440(v102, v13 - 1);
  v43 = *(_DWORD *)(v4 + 8);
LABEL_54:
  v44 = 0;
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 232)) )
    v44 = (int)(sub_64C00((_QWORD *)(a1 + 232)) + 1);
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 248)) )
    v44 += (int)(sub_64C00((_QWORD *)(a1 + 248)) + 1);
  if ( v43 == v44 )
  {
    v45 = v13 - 2;
    v88.m128i_i8[0] = (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 208 || (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 64;
    if ( v88.m128i_i8[0] )
    {
      v46 = *(_DWORD *)(v4 + 8);
      if ( v46 > v45 )
        goto LABEL_92;
LABEL_61:
      v47 = v45;
      do
      {
        v48 = 80LL * v47;
        v49 = v48 + v108;
        if ( *(_DWORD *)(v48 + v108) == 3 )
        {
          v50 = *(_DWORD **)(a1 + 264);
          v51 = &v50[*(_QWORD *)(a1 + 272)];
          if ( v50 != v51 )
          {
            while ( *(unsigned __int16 *)(v49 + 8) != *v50 )
            {
              if ( v51 == ++v50 )
                goto LABEL_62;
            }
            if ( v50 != v51 )
            {
              clear_tinfo_t();
              v52 = *(_QWORD *)(v49 + 40);
              if ( v52 )
              {
                *(_QWORD *)(v49 + 48) = 0;
                qfree(v52);
              }
              v53 = *(_QWORD *)(v49 + 16);
              if ( v53 )
              {
                *(_QWORD *)(v49 + 24) = 0;
                qfree(v53);
              }
              cleanup_argloc();
              memmove((void *)v49, (const void *)(v49 + 80), v108 + 80 * v109 - v49 - 80);
              v54 = (_QWORD *)(*(_QWORD *)(v4 + 24) + v48);
              *(_QWORD *)&v109 = v109 - 1;
              cleanup_argloc();
              v55 = v54[4];
              if ( v55 )
              {
                v54[5] = 0;
                qfree(v55);
              }
              clear_tinfo_t();
              sub_11CDA0(v54);
              memmove(v54, v54 + 10, *(_QWORD *)(v4 + 24) + 80LL * *(_QWORD *)(v4 + 32) - (_QWORD)v54 - 80);
              --*(_QWORD *)(v4 + 32);
              if ( !v88.m128i_i8[0] )
                --*(_DWORD *)(v4 + 8);
            }
          }
        }
LABEL_62:
        --v47;
      }
      while ( v47 >= v46 );
    }
    else
    {
      v46 = 0;
      if ( v45 != -1 )
        goto LABEL_61;
    }
    v58 = a1 + 296;
    if ( *(_BYTE *)(a1 + 366) == 1 && !v88.m128i_i8[0] )
    {
      create_tinfo();
      sub_E7260(a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
    }
    goto LABEL_93;
  }
LABEL_92:
  v58 = a1 + 296;
LABEL_93:
  v59 = *(_QWORD *)a1;
  v107 = 0;
  v60 = *(_QWORD *)(a1 + 8);
  v61 = *(_QWORD *)(a1 + 304);
  v105[0] = 0;
  v105[1] = 0;
  v106 = 0;
  sub_1390C0(v60, v4 + 96, v96, v58, v61, (*(_BYTE *)(*(_QWORD *)(v59 + 56) + 4LL) & 0x40) != 0);
  sub_64280((__int64 *)(v4 + 136), v96);
  sub_316CB0(v4 + 152, &v106);
  if ( (*(_BYTE *)(v4 + 280) & 0x10) == 0 )
  {
    v104 = 0;
    v103 = 0;
    v103 = qvector_reserve((__int64)&v103, 0, 1, 16);
    *(__m128i *)(v103 + 16 * v104) = _mm_load_si128((const __m128i *)&xmmword_424800);
    v81 = v103;
    v103 = 0;
    v82 = (__m128i)_mm_loadh_ps((const double *)&v104 + 1);
    v104 = 0;
    v83 = *(_QWORD *)(v4 + 216);
    if ( v83 )
    {
      *(_QWORD *)(v4 + 224) = 0;
      v88 = v82;
      qfree(v83);
      v84 = v103;
      v85 = _mm_load_si128(&v88);
      *(_QWORD *)(v4 + 216) = v81;
      *(__m128i *)(v4 + 224) = v85;
      if ( v84 )
      {
        *(_QWORD *)&v104 = 0;
        qfree(v84);
      }
    }
    else
    {
      *(_QWORD *)(v4 + 216) = v81;
      *(__m128i *)(v4 + 224) = v82;
    }
  }
  v65 = *(_QWORD *)(v4 + 288);
  v66 = _mm_loadu_si128((const __m128i *)(v4 + 296));
  *(_QWORD *)(v4 + 288) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v4 + 296) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v4 + 304) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 48) = v65;
  v67 = *(_QWORD *)a1;
  *(__m128i *)(a1 + 56) = v66;
  v68 = *(_QWORD *)(v67 + 512);
  if ( v68 )
  {
    v69 = *(_QWORD *)(v4 + 32);
    if ( v69 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 80 * v69 - 24) == 1 )
      {
        v86 = *(_QWORD *)(a1 + 8);
        v87 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v86 + 1472) + 40 * v68 + 8));
        if ( *(int *)(v4 + 16) > _mm_add_epi64(v87, _mm_srli_si128(v87, 8)).m128i_i64[0] )
          sub_3311F0(v86, *(_QWORD *)(a1 + 304), 55, v62, v63, v64);
      }
    }
  }
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106);
  }
  qfree(v105[0]);
LABEL_103:
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree(v114);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v70 = v108;
  if ( v108 )
  {
    v71 = v109;
    if ( (_QWORD)v109 )
    {
      v72 = 0;
      do
      {
        v73 = (_QWORD *)(v70 + 80 * v72);
        clear_tinfo_t();
        v74 = v73[5];
        if ( v74 )
        {
          v73[6] = 0;
          qfree(v74);
        }
        v75 = v73[2];
        if ( v75 )
        {
          v73[3] = 0;
          qfree(v75);
        }
        ++v72;
        cleanup_argloc();
        v70 = v108;
      }
      while ( v71 != v72 );
    }
    *(_QWORD *)&v109 = 0;
    qfree(v70);
  }
  return v4;
}
