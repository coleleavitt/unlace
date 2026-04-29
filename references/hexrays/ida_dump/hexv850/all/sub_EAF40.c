__int64 __fastcall sub_EAF40(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int8 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r14
  const char *v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // r13
  __int64 v24; // r14
  void *v25; // rax
  __int64 v26; // r12
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  _QWORD *v32; // r13
  unsigned __int64 v33; // r12
  void *v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // r12
  _QWORD *v37; // rbx
  unsigned __int64 v38; // r14
  __int64 v39; // rdi
  _QWORD *v40; // rdi
  __int32 v41; // eax
  __int32 v42; // r12d
  __int64 v43; // r13
  int v44; // ebp
  int v45; // r12d
  int v46; // r14d
  __int64 v47; // r13
  __int64 v48; // rbp
  _DWORD *v49; // rax
  _DWORD *v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rdi
  _QWORD *v53; // r13
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned int v56; // edx
  __int64 v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r8
  int v61; // ecx
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rax
  __m128i v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // r13
  __int64 v71; // r12
  _QWORD *v72; // rbp
  __int64 v73; // rdi
  __int64 v74; // rdi
  _DWORD *v76; // rdi
  int tinfo_size; // ebx
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // rbp
  __m128i v81; // xmm0
  __int64 v82; // rdi
  __int64 v83; // rdi
  __m128i v84; // xmm0
  __int64 v85; // rdi
  __m128i v86; // xmm0
  __m128i v87; // [rsp+0h] [rbp-168h] BYREF
  __int64 v88; // [rsp+10h] [rbp-158h]
  __int64 v89; // [rsp+18h] [rbp-150h]
  __int64 v90; // [rsp+20h] [rbp-148h]
  __int64 v91; // [rsp+28h] [rbp-140h]
  __int32 v92; // [rsp+30h] [rbp-138h]
  __int32 v93; // [rsp+34h] [rbp-134h]
  __m128i *v94; // [rsp+38h] [rbp-130h]
  __int64 *v95; // [rsp+40h] [rbp-128h]
  __int64 v96; // [rsp+48h] [rbp-120h]
  __int64 *v97; // [rsp+50h] [rbp-118h]
  __int64 *v98; // [rsp+58h] [rbp-110h]
  int v99; // [rsp+60h] [rbp-108h]
  unsigned __int8 tinfo_details; // [rsp+67h] [rbp-101h]
  _QWORD *v101; // [rsp+68h] [rbp-100h]
  __int64 v102; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v103; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD v104[2]; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v105; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v106; // [rsp+A8h] [rbp-C0h]
  __int64 v107; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v108; // [rsp+C8h] [rbp-A0h]
  __int64 v109; // [rsp+D8h] [rbp-90h]
  __int64 v110; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v111; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v112; // [rsp+F0h] [rbp-78h]
  __int64 v113; // [rsp+100h] [rbp-68h]
  __int128 v114; // [rsp+108h] [rbp-60h]
  char v115; // [rsp+118h] [rbp-50h]
  unsigned __int64 v116; // [rsp+128h] [rbp-40h]

  v116 = __readfsqword(0x28u);
  v107 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v113 = 0;
  v115 = 16;
  v2 = *(_QWORD *)(a1 + 296);
  v94 = (__m128i *)&v107;
  v108 = 0;
  v112 = 0;
  v114 = 0;
  tinfo_details = get_tinfo_details(v2, 12, &v107);
  if ( !tinfo_details || (int)v108 < 0 )
    goto LABEL_128;
  if ( (get_tinfo_property(v110, 2) & 0x3F) != 1 )
  {
    tinfo_size = get_tinfo_size(0, v110, 0);
    if ( tinfo_size <= 0 )
      goto LABEL_128;
    if ( (get_tinfo_property(v110, 2) & 0x2F) != 0xD && !(unsigned __int8)sub_117EC0((unsigned int)tinfo_size) )
    {
      v78 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
      v79 = (unsigned __int8)getinf(66) ? (unsigned __int8)getinf(66) : *(_QWORD *)(v78 + 120);
      if ( tinfo_size != v79
        && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 120LL) != tinfo_size
        && tinfo_size != 16 )
      {
        goto LABEL_128;
      }
    }
  }
  v3 = j__qalloc_or_throw(312);
  v4 = *(_QWORD *)(a1 + 312);
  v5 = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v3 + 12) = 0;
  *(_QWORD *)v3 = v4;
  *(_DWORD *)(v3 + 8) = v5;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 72) = 0;
  *(_QWORD *)(v3 + 80) = 0;
  *(_QWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 96) = 0;
  *(_QWORD *)(v3 + 104) = 0;
  *(_QWORD *)(v3 + 112) = 0;
  *(_QWORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 144) = 0;
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)(v3 + 176) = 0;
  *(_QWORD *)(v3 + 184) = 0;
  *(_QWORD *)(v3 + 192) = 0;
  *(_QWORD *)(v3 + 216) = 0;
  *(_QWORD *)(v3 + 240) = 0;
  *(_QWORD *)(v3 + 248) = 0;
  *(_QWORD *)(v3 + 256) = 0;
  *(_QWORD *)(v3 + 280) = 0;
  *(_OWORD *)(v3 + 32) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 120) = 0;
  *(_OWORD *)(v3 + 160) = 0;
  *(_OWORD *)(v3 + 200) = 0;
  *(_OWORD *)(v3 + 224) = 0;
  *(_OWORD *)(v3 + 264) = 0;
  *(_QWORD *)(v3 + 288) = 0;
  *(_OWORD *)(v3 + 296) = 0;
LABEL_5:
  v99 = sub_E8D00(a1, v94, v3);
  if ( *(_DWORD *)(a1 + 348) > v99 )
  {
    if ( v3 )
    {
      sub_B6560((_QWORD *)v3);
      j__qfree(v3);
    }
LABEL_128:
    v97 = &v110;
    v98 = &v111;
LABEL_102:
    v3 = 0;
    goto LABEL_103;
  }
  *(_DWORD *)(v3 + 12) = *(_QWORD *)(a1 + 328);
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(a1 + 328) + DWORD2(v112);
  v6 = *(_DWORD *)(a1 + 360);
  if ( v6 <= 0x10 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(_BYTE *)(v7 + 129);
    v6 = v8 & 0xF0;
    if ( (v8 & 0xF0) == 0xC0 )
      v6 = *(_DWORD *)(v7 + 140);
  }
  *(_DWORD *)(v3 + 20) = v6;
  v101 = (_QWORD *)(v3 + 24);
  v89 = v99;
  sub_7D880((_QWORD *)(v3 + 24), v99);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v96 = *(_QWORD *)(a1 + 328) + *(int *)(v9 + 120);
  v91 = *((_QWORD *)&v112 + 1) + *(_QWORD *)(v9 + 136) + *(int *)(v9 + 116);
  sub_E36B0(v3, (__int64)v94);
  *(_DWORD *)(v3 + 280) |= *(_DWORD *)(a1 + 352);
  v97 = &v110;
  copy_tinfo_t(v3 + 72, &v110);
  v98 = &v111;
  copy_argloc(v3 + 80, &v111);
  v10 = *(unsigned int *)(a1 + 360);
  v11 = tinfo_details;
  if ( (*(_BYTE *)(a1 + 352) & 4) != 0 )
    v11 = (v10 & 0xFFFFFFF0) == 64 || (v10 & 0xFFFFFFF0) == 208;
  LOBYTE(v88) = sub_36CD10(v10);
  if ( v99 <= 0 )
  {
LABEL_91:
    v95 = v104;
    goto LABEL_92;
  }
  v93 = -1;
  v12 = 1;
  v13 = 0;
  while ( 1 )
  {
    v87.m128i_i32[0] = v12 - 1;
    v16 = (_DWORD *)(v107 + v13);
    if ( (v11 & (unsigned __int8)v88) == 0 )
    {
      v14 = v13;
      v92 = v87.m128i_i32[0];
      goto LABEL_15;
    }
    if ( *v16 != 1 )
    {
      v14 = v13;
      v11 &= v88;
      v92 = v87.m128i_i32[0];
      goto LABEL_15;
    }
    if ( v93 != -1 )
      goto LABEL_90;
    if ( v99 <= (int)v12 )
    {
LABEL_129:
      v93 = v87.m128i_i32[0];
LABEL_90:
      v11 &= v88;
      v92 = v93 + v99 - v12;
      v14 = 80LL * v92;
      v16 = (_DWORD *)(v107 + v14);
      goto LABEL_15;
    }
    v76 = (_DWORD *)(v107 + v13 + 80);
    while ( *v76 == 1 )
    {
      v76 += 20;
      if ( (_DWORD *)(v107 + 80 * (v12 + (unsigned int)(v99 - 1 - v12)) + 80) == v76 )
        goto LABEL_129;
    }
    v14 = v13;
    v11 = 0;
    v92 = v87.m128i_i32[0];
    v93 = v87.m128i_i32[0];
LABEL_15:
    if ( !(unsigned __int8)sub_E0460(
                             v14 + *(_QWORD *)(v3 + 24),
                             *(_QWORD *)a1,
                             (__int64)v16,
                             *(_DWORD *)(v3 + 12),
                             *(_DWORD *)(v3 + 20),
                             1) )
    {
      if ( v3 )
      {
        sub_B6560((_QWORD *)v3);
        j__qfree(v3);
      }
      goto LABEL_102;
    }
    if ( v11 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
      v90 = v14 + *(_QWORD *)(v3 + 24);
      if ( (unsigned __int8)sub_E3730((__int64 *)a1, &v102, *(_QWORD *)(v17 + 16), v90) )
      {
        v18 = v102;
        if ( v102 < v91 )
        {
          if ( v102 < v96 )
            v18 = v91;
          v91 = v18;
        }
      }
      if ( *(_DWORD *)(a1 + 348) <= v87.m128i_i32[0]
        || (*(_BYTE *)(a1 + 352) & 4) == 0
        && !*(_DWORD *)(v3 + 284)
        && (v19 = *(_DWORD *)(a1 + 360) & 0xFFFFFFF0, v19 != 64)
        && v19 != 208 )
      {
        v95 = v104;
        if ( (unsigned __int8)sub_3297A0(v90, v104) )
        {
          if ( v104[0] >= v91 )
            break;
        }
      }
    }
    v15 = s1;
    if ( *(_QWORD *)(a1 + 32) )
      v15 = *(const char **)(a1 + 24);
    sub_B9780(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 480LL) + 112LL), v3, v15, 1);
    if ( !(_BYTE)v88 )
    {
      v55 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(v55 + 148) && (*(_BYTE *)(a1 + 352) & 4) == 0 )
      {
        if ( *(_QWORD *)(v3 + 32) )
        {
          v56 = *(_DWORD *)(v3 + 20) & 0xFFFFFFF0;
          if ( v56 != 64
            && v56 != 208
            && !*(_DWORD *)(v3 + 284)
            && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v55 + 112) + 136LL))(
                 *(_QWORD *)(v55 + 112),
                 v3)
            && (unsigned __int8)sub_ECB40(a1, v3, v87.m128i_u32[0]) )
          {
            copy_tinfo_t(v107 + v13 + 64, v13 + *(_QWORD *)(v3 + 24) + 24);
            sub_EEA90(a1, v3, v94, (unsigned int)v12);
            if ( !(unsigned __int8)get_tinfo_details(*(_QWORD *)(a1 + 296), 12, v94) || (int)v108 < 0 )
            {
              if ( !under_debugger )
                sub_37CFE0(52072);
              goto LABEL_153;
            }
            goto LABEL_5;
          }
        }
      }
    }
    v13 += 80;
    if ( v89 == v12 )
      goto LABEL_91;
    ++v12;
  }
  v20 = v107 + v14;
  if ( *(_DWORD *)v20 != 1 )
  {
    if ( !under_debugger )
      sub_37CFE0(51676);
    goto LABEL_153;
  }
  *((_QWORD *)&v112 + 1) = *(_QWORD *)(v20 + 8);
  *(_DWORD *)(v3 + 16) = v104[0];
  if ( (unsigned __int8)sub_36CD10(*(unsigned int *)(a1 + 360)) )
  {
    if ( *(_DWORD *)(v3 + 8) == v99 )
    {
      v21 = v107;
      v87.m128i_i32[0] = v92 + 1;
      v22 = 80LL * (v92 + 1);
      v23 = (_QWORD *)(v107 + v22);
      v24 = 80LL * v93;
      v25 = (void *)(v107 + v24);
      if ( v22 != v24 )
      {
        v88 = v107 + v24;
        v26 = 80LL * (v92 + 1);
        v89 = v3;
        v27 = (_QWORD *)(v107 + v24);
        do
        {
          clear_tinfo_t(v27 + 8);
          v28 = v27[5];
          if ( v28 )
          {
            v27[6] = 0;
            qfree(v28);
          }
          v29 = v27[2];
          if ( v29 )
          {
            v27[3] = 0;
            qfree(v29);
          }
          v30 = v27;
          v27 += 10;
          cleanup_argloc(v30);
        }
        while ( v23 != v27 );
        v25 = (void *)v88;
        v3 = v89;
        v22 = v26;
        v21 = v107;
      }
      v88 = v22;
      memmove(v25, v23, 80 * v108 + v21 - (_QWORD)v23);
      v31 = *(_QWORD *)(v3 + 24);
      v32 = (_QWORD *)(v31 + v88);
      v33 = 0xCCCCCCCCCCCCCCCDLL * ((v88 - v24) >> 4);
      v34 = (void *)(v31 + v24);
      *(_QWORD *)&v108 = v108 - v33;
      if ( v88 != v24 )
      {
        v88 = v31 + v24;
        v35 = v33;
        v36 = v3;
        v37 = (_QWORD *)(v31 + v24);
        v38 = v35;
        do
        {
          cleanup_argloc(v37 + 7);
          v39 = v37[4];
          if ( v39 )
          {
            v37[5] = 0;
            qfree(v39);
          }
          clear_tinfo_t(v37 + 3);
          v40 = v37;
          v37 += 10;
          sub_1181E0(v40);
        }
        while ( v32 != v37 );
        v3 = v36;
        v34 = (void *)v88;
        v33 = v38;
        v31 = *(_QWORD *)(v3 + 24);
      }
      memmove(v34, v32, 80LL * *(_QWORD *)(v3 + 32) + v31 - (_QWORD)v32);
      v41 = v87.m128i_i32[0];
      *(_QWORD *)(v3 + 32) -= v33;
      v42 = *(_DWORD *)(v3 + 8) + v93 - v41;
      *(_DWORD *)(v3 + 8) = v42;
      goto LABEL_54;
    }
    if ( !under_debugger )
      sub_37CFE0(52582);
LABEL_153:
    BUG();
  }
  if ( v92 != v87.m128i_i32[0] )
  {
    if ( !under_debugger )
      sub_37CFE0(52583);
    goto LABEL_153;
  }
  if ( *(_DWORD *)(v3 + 8) > v92 )
    *(_DWORD *)(v3 + 8) = v92;
  sub_E5FF0(v94, v12 - 1);
  sub_7D880(v101, v12 - 1);
  v42 = *(_DWORD *)(v3 + 8);
LABEL_54:
  v43 = 0;
  if ( !(unsigned __int8)sub_5FE00((_QWORD *)(a1 + 232)) )
    v43 = (int)(sub_60180((_QWORD *)(a1 + 232)) + 1);
  if ( !(unsigned __int8)sub_5FE00((_QWORD *)(a1 + 248)) )
    v43 += (int)(sub_60180((_QWORD *)(a1 + 248)) + 1);
  if ( v42 == v43 )
  {
    v44 = v12 - 2;
    v87.m128i_i8[0] = (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 208 || (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 64;
    if ( v87.m128i_i8[0] )
    {
      v45 = *(_DWORD *)(v3 + 8);
      if ( v45 > v44 )
        goto LABEL_92;
LABEL_61:
      v46 = v44;
      do
      {
        v47 = 80LL * v46;
        v48 = v47 + v107;
        if ( *(_DWORD *)(v47 + v107) == 3 )
        {
          v49 = *(_DWORD **)(a1 + 264);
          v50 = &v49[*(_QWORD *)(a1 + 272)];
          if ( v49 != v50 )
          {
            while ( *(unsigned __int16 *)(v48 + 8) != *v49 )
            {
              if ( v50 == ++v49 )
                goto LABEL_62;
            }
            if ( v49 != v50 )
            {
              clear_tinfo_t(v48 + 64);
              v51 = *(_QWORD *)(v48 + 40);
              if ( v51 )
              {
                *(_QWORD *)(v48 + 48) = 0;
                qfree(v51);
              }
              v52 = *(_QWORD *)(v48 + 16);
              if ( v52 )
              {
                *(_QWORD *)(v48 + 24) = 0;
                qfree(v52);
              }
              cleanup_argloc(v48);
              memmove((void *)v48, (const void *)(v48 + 80), v107 + 80 * v108 - v48 - 80);
              v53 = (_QWORD *)(*(_QWORD *)(v3 + 24) + v47);
              *(_QWORD *)&v108 = v108 - 1;
              cleanup_argloc(v53 + 7);
              v54 = v53[4];
              if ( v54 )
              {
                v53[5] = 0;
                qfree(v54);
              }
              clear_tinfo_t(v53 + 3);
              sub_1181E0(v53);
              memmove(v53, v53 + 10, *(_QWORD *)(v3 + 24) + 80LL * *(_QWORD *)(v3 + 32) - (_QWORD)v53 - 80);
              --*(_QWORD *)(v3 + 32);
              if ( !v87.m128i_i8[0] )
                --*(_DWORD *)(v3 + 8);
            }
          }
        }
LABEL_62:
        --v46;
      }
      while ( v46 >= v45 );
    }
    else
    {
      v45 = 0;
      if ( v44 != -1 )
        goto LABEL_61;
    }
    v57 = a1 + 296;
    if ( *(_BYTE *)(a1 + 366) == 1 && !v87.m128i_i8[0] )
    {
      create_tinfo(a1 + 296, 12, 12, v94);
      sub_E26A0(a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
    }
    goto LABEL_93;
  }
LABEL_92:
  v57 = a1 + 296;
LABEL_93:
  v58 = *(_QWORD *)a1;
  v106 = 0;
  v59 = *(_QWORD *)(a1 + 8);
  v60 = *(_QWORD *)(a1 + 304);
  v104[0] = 0;
  v104[1] = 0;
  v105 = 0;
  sub_134500(v59, v3 + 96, v95, v57, v60, (*(_BYTE *)(*(_QWORD *)(v58 + 56) + 4LL) & 0x40) != 0);
  sub_5F800((__int64 *)(v3 + 136), v95);
  sub_3113F0(v3 + 152, &v105);
  if ( (*(_BYTE *)(v3 + 280) & 0x10) == 0 )
  {
    v103 = 0;
    v102 = 0;
    v102 = qvector_reserve(&v102, 0, 1, 16);
    *(__m128i *)(v102 + 16 * v103) = _mm_load_si128((const __m128i *)&xmmword_400180);
    v80 = v102;
    v102 = 0;
    v81 = (__m128i)_mm_loadh_ps((const double *)&v103 + 1);
    v103 = 0;
    v82 = *(_QWORD *)(v3 + 216);
    if ( v82 )
    {
      *(_QWORD *)(v3 + 224) = 0;
      v87 = v81;
      qfree(v82);
      v83 = v102;
      v84 = _mm_load_si128(&v87);
      *(_QWORD *)(v3 + 216) = v80;
      *(__m128i *)(v3 + 224) = v84;
      if ( v83 )
      {
        *(_QWORD *)&v103 = 0;
        qfree(v83);
      }
    }
    else
    {
      *(_QWORD *)(v3 + 216) = v80;
      *(__m128i *)(v3 + 224) = v81;
    }
  }
  v64 = *(_QWORD *)(v3 + 288);
  v65 = _mm_loadu_si128((const __m128i *)(v3 + 296));
  *(_QWORD *)(v3 + 288) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v3 + 296) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v3 + 304) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 48) = v64;
  v66 = *(_QWORD *)a1;
  *(__m128i *)(a1 + 56) = v65;
  v67 = *(_QWORD *)(v66 + 512);
  if ( v67 )
  {
    v68 = *(_QWORD *)(v3 + 32);
    if ( v68 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v3 + 24) + 80 * v68 - 24) == 1 )
      {
        v85 = *(_QWORD *)(a1 + 8);
        v86 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v85 + 1472) + 40 * v67 + 8));
        if ( *(int *)(v3 + 16) > _mm_add_epi64(v86, _mm_srli_si128(v86, 8)).m128i_i64[0] )
          sub_32B650(v85, *(_QWORD *)(a1 + 304), 55, v61, v62, v63);
      }
    }
  }
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree(v105);
  }
  qfree(v104[0]);
LABEL_103:
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113);
  }
  cleanup_argloc(v98);
  clear_tinfo_t(v97);
  v69 = v107;
  if ( v107 )
  {
    v70 = v108;
    if ( (_QWORD)v108 )
    {
      v71 = 0;
      do
      {
        v72 = (_QWORD *)(v69 + 80 * v71);
        clear_tinfo_t(v72 + 8);
        v73 = v72[5];
        if ( v73 )
        {
          v72[6] = 0;
          qfree(v73);
        }
        v74 = v72[2];
        if ( v74 )
        {
          v72[3] = 0;
          qfree(v74);
        }
        ++v71;
        cleanup_argloc(v72);
        v69 = v107;
      }
      while ( v70 != v71 );
    }
    *(_QWORD *)&v108 = 0;
    qfree(v69);
  }
  return v3;
}
