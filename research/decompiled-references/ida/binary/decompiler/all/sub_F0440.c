__int64 __fastcall sub_F0440(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int8 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r14
  const char *v14; // rdx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // r13
  __int64 v22; // r14
  void *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  _QWORD *v26; // r13
  unsigned __int64 v27; // r12
  void *v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r12
  _QWORD *v31; // rbx
  unsigned __int64 v32; // r14
  _QWORD *v33; // rdi
  int v34; // r12d
  __int64 v35; // r13
  int v36; // ebp
  int v37; // r12d
  int v38; // r14d
  __int64 v39; // r13
  __int64 v40; // rbp
  _DWORD *v41; // rax
  _DWORD *v42; // rdx
  _QWORD *v43; // r13
  __int64 v44; // rax
  unsigned int v45; // edx
  char v46; // al
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r8
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r13
  __int64 v61; // r12
  _QWORD *v62; // rbp
  _DWORD *v64; // rdi
  int tinfo_size; // ebx
  __int64 v66; // r12
  __int64 v67; // rax
  unsigned __int64 v68; // r12
  unsigned __int64 v69; // rbp
  __int64 v70; // r12
  __int64 v71; // rbp
  __int64 v72; // r13
  __int64 v73; // rdi
  __int64 v74; // rdi
  __m128i v75; // xmm0
  int v76; // [rsp+4h] [rbp-15Ch]
  bool v77; // [rsp+4h] [rbp-15Ch]
  unsigned __int8 v78; // [rsp+8h] [rbp-158h]
  void *v79; // [rsp+8h] [rbp-158h]
  __int64 v80; // [rsp+8h] [rbp-158h]
  void *v81; // [rsp+8h] [rbp-158h]
  __int64 v82; // [rsp+10h] [rbp-150h]
  __int64 v83; // [rsp+18h] [rbp-148h]
  __int64 v84; // [rsp+20h] [rbp-140h]
  int v85; // [rsp+28h] [rbp-138h]
  int v86; // [rsp+2Ch] [rbp-134h]
  __int64 v87; // [rsp+40h] [rbp-120h]
  int v88; // [rsp+58h] [rbp-108h]
  unsigned __int8 tinfo_details; // [rsp+5Fh] [rbp-101h]
  __int64 v90; // [rsp+68h] [rbp-F8h] BYREF
  __int128 v91; // [rsp+70h] [rbp-F0h]
  __int64 v92[2]; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v93; // [rsp+98h] [rbp-C8h] BYREF
  __int128 v94; // [rsp+A0h] [rbp-C0h]
  __int64 v95; // [rsp+B8h] [rbp-A8h] BYREF
  __int128 v96; // [rsp+C0h] [rbp-A0h]
  __int64 v97; // [rsp+D0h] [rbp-90h]
  __int64 v98; // [rsp+D8h] [rbp-88h]
  __int64 v99; // [rsp+E0h] [rbp-80h] BYREF
  __int128 v100; // [rsp+E8h] [rbp-78h]
  __int64 v101; // [rsp+F8h] [rbp-68h]
  __int128 v102; // [rsp+100h] [rbp-60h]
  char v103; // [rsp+110h] [rbp-50h]
  unsigned __int64 v104; // [rsp+120h] [rbp-40h]

  v104 = __readfsqword(0x28u);
  v95 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v101 = 0;
  v103 = 16;
  v96 = 0;
  v100 = 0;
  v102 = 0;
  tinfo_details = get_tinfo_details();
  if ( !tinfo_details
    || (int)v96 < 0
    || (get_tinfo_property() & 0x3F) != 1
    && ((tinfo_size = get_tinfo_size(), tinfo_size <= 0)
     || (get_tinfo_property() & 0x2F) != 0xD
     && !(unsigned __int8)sub_11A640((unsigned int)tinfo_size)
     && ((v66 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), (unsigned __int8)getinf())
       ? (v67 = (unsigned __int8)getinf())
       : (v67 = *(_QWORD *)(v66 + 120)),
         tinfo_size != v67
      && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 120LL) != tinfo_size
      && tinfo_size != 16)) )
  {
LABEL_101:
    v2 = 0;
    goto LABEL_102;
  }
  v2 = j__qalloc_or_throw();
  v3 = *(_QWORD *)(a1 + 312);
  v4 = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v2 + 12) = 0;
  *(_QWORD *)v2 = v3;
  *(_DWORD *)(v2 + 8) = v4;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 176) = 0;
  *(_QWORD *)(v2 + 184) = 0;
  *(_QWORD *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 216) = 0;
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0;
  *(_QWORD *)(v2 + 280) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 120) = 0;
  *(_OWORD *)(v2 + 160) = 0;
  *(_OWORD *)(v2 + 200) = 0;
  *(_OWORD *)(v2 + 224) = 0;
  *(_OWORD *)(v2 + 264) = 0;
  *(_QWORD *)(v2 + 288) = 0;
  *(_OWORD *)(v2 + 296) = 0;
LABEL_5:
  v88 = sub_EF3F0(a1, (__m128i *)&v95, v2);
  if ( *(_DWORD *)(a1 + 348) > v88 )
  {
    if ( v2 )
    {
LABEL_100:
      sub_BA2C0((_QWORD *)v2);
      j__qfree();
    }
    goto LABEL_101;
  }
  *(_DWORD *)(v2 + 12) = *(_QWORD *)(a1 + 328);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a1 + 328) + DWORD2(v100);
  v5 = *(_DWORD *)(a1 + 360);
  if ( v5 <= 0x10 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_BYTE *)(v6 + 129);
    v5 = v7 & 0xF0;
    if ( (v7 & 0xF0) == 0xC0 )
      v5 = *(_DWORD *)(v6 + 140);
  }
  *(_DWORD *)(v2 + 20) = v5;
  sub_816C0((__int64 *)(v2 + 24), v88);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  v87 = *(_QWORD *)(a1 + 328) + *(int *)(v8 + 120);
  v84 = *((_QWORD *)&v100 + 1) + *(_QWORD *)(v8 + 136) + *(int *)(v8 + 116);
  sub_E25B0(v2, (__int64)&v95);
  *(_DWORD *)(v2 + 280) |= *(_DWORD *)(a1 + 352);
  copy_tinfo_t();
  copy_argloc();
  v9 = *(unsigned int *)(a1 + 360);
  v10 = tinfo_details;
  if ( (*(_BYTE *)(a1 + 352) & 4) != 0 )
    v10 = (v9 & 0xFFFFFFF0) == 64 || (v9 & 0xFFFFFFF0) == 208;
  v78 = sub_36F450(v9, &v99);
  if ( v88 <= 0 )
    goto LABEL_91;
  v86 = -1;
  v11 = 1;
  v12 = 0;
  while ( 1 )
  {
    v76 = v11 - 1;
    v15 = (_DWORD *)(v95 + v12);
    if ( (v10 & v78) == 0 )
    {
      v13 = v12;
      v85 = v11 - 1;
      goto LABEL_15;
    }
    if ( *v15 != 1 )
    {
      v13 = v12;
      v10 &= v78;
      v85 = v11 - 1;
      goto LABEL_15;
    }
    if ( v86 != -1 )
      goto LABEL_90;
    if ( v88 <= (int)v11 )
    {
LABEL_128:
      v86 = v11 - 1;
LABEL_90:
      v10 &= v78;
      v85 = v86 + v88 - v11;
      v13 = 80LL * v85;
      v15 = (_DWORD *)(v95 + v13);
      goto LABEL_15;
    }
    v64 = (_DWORD *)(v95 + v12 + 80);
    while ( *v64 == 1 )
    {
      v64 += 20;
      if ( v64 == (_DWORD *)(v95 + 80 * (v11 + (unsigned int)(v88 - 1 - v11)) + 80) )
        goto LABEL_128;
    }
    v13 = v12;
    v10 = 0;
    v85 = v11 - 1;
    v86 = v11 - 1;
LABEL_15:
    if ( !(unsigned __int8)sub_D34C0(
                             v13 + *(_QWORD *)(v2 + 24),
                             *(_QWORD *)a1,
                             (__int64)v15,
                             *(_DWORD *)(v2 + 12),
                             *(_DWORD *)(v2 + 20),
                             1) )
    {
      if ( !v2 )
        goto LABEL_101;
      goto LABEL_100;
    }
    if ( v10 )
    {
      v83 = v13 + *(_QWORD *)(v2 + 24);
      if ( (unsigned __int8)sub_E2630((__int64 *)a1, &v90, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 16LL), v83) )
      {
        v16 = v90;
        if ( v90 < v84 )
        {
          if ( v90 < v87 )
            v16 = v84;
          v84 = v16;
        }
      }
      if ( *(_DWORD *)(a1 + 348) <= v76
        || (*(_BYTE *)(a1 + 352) & 4) == 0
        && !*(_DWORD *)(v2 + 284)
        && (v17 = *(_DWORD *)(a1 + 360) & 0xFFFFFFF0, v17 != 64)
        && v17 != 208 )
      {
        if ( (unsigned __int8)sub_32BED0(v83, v92) && v92[0] >= v84 )
          break;
      }
    }
    v14 = s1;
    if ( *(_QWORD *)(a1 + 32) )
      v14 = *(const char **)(a1 + 24);
    sub_BD4C0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 480LL) + 112LL), v2, v14, 1);
    if ( !v78 )
    {
      v44 = *(_QWORD *)(a1 + 16);
      if ( !*(_BYTE *)(v44 + 148) && (*(_BYTE *)(a1 + 352) & 4) == 0 )
      {
        if ( *(_QWORD *)(v2 + 32) )
        {
          v45 = *(_DWORD *)(v2 + 20) & 0xFFFFFFF0;
          if ( v45 != 64
            && v45 != 208
            && !*(_DWORD *)(v2 + 284)
            && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v44 + 112) + 136LL))(
                 *(_QWORD *)(v44 + 112),
                 v2)
            && (unsigned __int8)sub_E27A0((__int64 *)a1, v2, v76) )
          {
            copy_tinfo_t();
            *(_DWORD *)(a1 + 348) = v11;
            *(_DWORD *)(v2 + 8) = v11;
            sub_EC590(&v95, (int)v11);
            v46 = v103;
            *(_DWORD *)(a1 + 360) = 64;
            HIDWORD(v97) = 0;
            v103 = v46 & 0xF | 0x40;
            create_tinfo();
            sub_E7290(a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
            if ( !(unsigned __int8)get_tinfo_details() || (int)v96 < 0 )
            {
              if ( !under_debugger )
                sub_37EA20(52072);
              goto LABEL_155;
            }
            goto LABEL_5;
          }
        }
      }
    }
    v12 += 80;
    if ( v88 == v11 )
      goto LABEL_91;
    ++v11;
  }
  v18 = v95 + v13;
  if ( *(_DWORD *)v18 != 1 )
  {
    if ( !under_debugger )
      sub_37EA20(51676);
    goto LABEL_155;
  }
  *((_QWORD *)&v100 + 1) = *(_QWORD *)(v18 + 8);
  *(_DWORD *)(v2 + 16) = v92[0];
  if ( (unsigned __int8)sub_36F450(*(unsigned int *)(a1 + 360), v84) )
  {
    if ( *(_DWORD *)(v2 + 8) == v88 )
    {
      v19 = v95;
      v20 = 80LL * (v85 + 1);
      v21 = (_QWORD *)(v95 + v20);
      v22 = 80LL * v86;
      v23 = (void *)(v95 + v22);
      if ( v20 != v22 )
      {
        v79 = (void *)(v95 + v22);
        v82 = v2;
        v24 = (_QWORD *)(v95 + v22);
        do
        {
          clear_tinfo_t();
          if ( v24[5] )
          {
            v24[6] = 0;
            qfree();
          }
          if ( v24[2] )
          {
            v24[3] = 0;
            qfree();
          }
          v24 += 10;
          cleanup_argloc();
        }
        while ( v21 != v24 );
        v23 = v79;
        v2 = v82;
        v20 = 80LL * (v85 + 1);
        v19 = v95;
      }
      v80 = v20;
      memmove(v23, v21, 80 * v96 + v19 - (_QWORD)v21);
      v25 = *(_QWORD *)(v2 + 24);
      v26 = (_QWORD *)(v25 + v80);
      v27 = 0xCCCCCCCCCCCCCCCDLL * ((v80 - v22) >> 4);
      v28 = (void *)(v25 + v22);
      *(_QWORD *)&v96 = v96 - v27;
      if ( v80 != v22 )
      {
        v81 = (void *)(v25 + v22);
        v29 = v27;
        v30 = v2;
        v31 = (_QWORD *)(v25 + v22);
        v32 = v29;
        do
        {
          cleanup_argloc();
          if ( v31[4] )
          {
            v31[5] = 0;
            qfree();
          }
          clear_tinfo_t();
          v33 = v31;
          v31 += 10;
          sub_11A960(v33);
        }
        while ( v26 != v31 );
        v2 = v30;
        v28 = v81;
        v27 = v32;
        v25 = *(_QWORD *)(v2 + 24);
      }
      memmove(v28, v26, 80LL * *(_QWORD *)(v2 + 32) + v25 - (_QWORD)v26);
      *(_QWORD *)(v2 + 32) -= v27;
      v34 = *(_DWORD *)(v2 + 8) + v86 - (v85 + 1);
      *(_DWORD *)(v2 + 8) = v34;
      goto LABEL_54;
    }
    if ( !under_debugger )
      sub_37EA20(52582);
LABEL_155:
    BUG();
  }
  if ( v85 != v76 )
  {
    if ( !under_debugger )
      sub_37EA20(52583);
    goto LABEL_155;
  }
  if ( *(_DWORD *)(v2 + 8) > v85 )
    *(_DWORD *)(v2 + 8) = v85;
  sub_EC590(&v95, v11 - 1);
  sub_816C0((__int64 *)(v2 + 24), v11 - 1);
  v34 = *(_DWORD *)(v2 + 8);
LABEL_54:
  v35 = 0;
  if ( !(unsigned __int8)sub_63F80((_QWORD *)(a1 + 232)) )
    v35 = (int)(sub_64300((_QWORD *)(a1 + 232)) + 1);
  if ( !(unsigned __int8)sub_63F80((_QWORD *)(a1 + 248)) )
    v35 += (int)(sub_64300((_QWORD *)(a1 + 248)) + 1);
  if ( v34 == v35 )
  {
    v36 = v11 - 2;
    v77 = (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 208 || (*(_DWORD *)(a1 + 360) & 0xFFFFFFF0) == 64;
    if ( v77 )
    {
      v37 = *(_DWORD *)(v2 + 8);
      if ( v37 > v36 )
        goto LABEL_91;
LABEL_61:
      v38 = v36;
      do
      {
        v39 = 80LL * v38;
        v40 = v39 + v95;
        if ( *(_DWORD *)(v39 + v95) == 3 )
        {
          v41 = *(_DWORD **)(a1 + 264);
          v42 = &v41[*(_QWORD *)(a1 + 272)];
          if ( v41 != v42 )
          {
            while ( *(unsigned __int16 *)(v40 + 8) != *v41 )
            {
              if ( v42 == ++v41 )
                goto LABEL_62;
            }
            if ( v42 != v41 )
            {
              clear_tinfo_t();
              if ( *(_QWORD *)(v40 + 40) )
              {
                *(_QWORD *)(v40 + 48) = 0;
                qfree();
              }
              if ( *(_QWORD *)(v40 + 16) )
              {
                *(_QWORD *)(v40 + 24) = 0;
                qfree();
              }
              cleanup_argloc();
              memmove((void *)v40, (const void *)(v40 + 80), v95 + 80 * v96 - v40 - 80);
              v43 = (_QWORD *)(*(_QWORD *)(v2 + 24) + v39);
              *(_QWORD *)&v96 = v96 - 1;
              cleanup_argloc();
              if ( v43[4] )
              {
                v43[5] = 0;
                qfree();
              }
              clear_tinfo_t();
              sub_11A960(v43);
              memmove(v43, v43 + 10, *(_QWORD *)(v2 + 24) + 80LL * *(_QWORD *)(v2 + 32) - (_QWORD)v43 - 80);
              --*(_QWORD *)(v2 + 32);
              if ( !v77 )
                --*(_DWORD *)(v2 + 8);
            }
          }
        }
LABEL_62:
        --v38;
      }
      while ( v38 >= v37 );
    }
    else
    {
      v37 = 0;
      if ( v36 != -1 )
        goto LABEL_61;
    }
    v47 = a1 + 296;
    if ( *(_BYTE *)(a1 + 366) == 1 && !v77 )
    {
      create_tinfo();
      sub_E7290(a1, **(_DWORD **)(*(_QWORD *)a1 + 56LL) != 56, 1);
    }
    goto LABEL_92;
  }
LABEL_91:
  v47 = a1 + 296;
LABEL_92:
  v48 = *(_QWORD *)a1;
  v94 = 0;
  v49 = *(_QWORD *)(a1 + 8);
  v50 = *(_QWORD *)(a1 + 304);
  v92[0] = 0;
  v92[1] = 0;
  v93 = 0;
  sub_136BE0(v49, v2 + 96, v92, v47, v50, (*(_BYTE *)(*(_QWORD *)(v48 + 56) + 4LL) & 0x40) != 0);
  sub_63980((__int64 *)(v2 + 136), v92);
  sub_313730(v2 + 152, &v93);
  if ( (*(_BYTE *)(v2 + 280) & 0x10) == 0 )
  {
    v90 = 0;
    v91 = 0;
    v68 = xmmword_4ED7D0;
    v69 = *((_QWORD *)&xmmword_4ED7D0 + 1);
    if ( (unsigned __int64)xmmword_4ED7D0 + v69 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
    {
      v90 = qvector_reserve();
      *(__m128i *)(v90 + 16 * v91) = _mm_unpacklo_epi64((__m128i)v68, (__m128i)v69);
      v72 = v90;
      v70 = *((_QWORD *)&v91 + 1);
      v71 = v91 + 1;
    }
    else
    {
      v70 = 0;
      v71 = 0;
      v72 = 0;
    }
    v90 = 0;
    v91 = 0;
    if ( *(_QWORD *)(v2 + 216) )
    {
      *(_QWORD *)(v2 + 224) = 0;
      qfree();
      v73 = v90;
      *(_QWORD *)(v2 + 216) = v72;
      *(_QWORD *)(v2 + 224) = v71;
      *(_QWORD *)(v2 + 232) = v70;
      if ( v73 )
      {
        *(_QWORD *)&v91 = 0;
        qfree();
      }
    }
    else
    {
      *(_QWORD *)(v2 + 216) = v72;
      *(_QWORD *)(v2 + 224) = v71;
      *(_QWORD *)(v2 + 232) = v70;
    }
  }
  v54 = *(_QWORD *)(v2 + 288);
  v55 = _mm_loadu_si128((const __m128i *)(v2 + 296));
  *(_QWORD *)(v2 + 288) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v2 + 296) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v2 + 304) = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 48) = v54;
  v56 = *(_QWORD *)a1;
  *(__m128i *)(a1 + 56) = v55;
  v57 = *(_QWORD *)(v56 + 512);
  if ( v57 )
  {
    v58 = *(_QWORD *)(v2 + 32);
    if ( v58 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v2 + 24) + 80 * v58 - 24) == 1 )
      {
        v74 = *(_QWORD *)(a1 + 8);
        v75 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v74 + 1472) + 40 * v57 + 8));
        if ( *(int *)(v2 + 16) > _mm_add_epi64(v75, _mm_srli_si128(v75, 8)).m128i_i64[0] )
          sub_32DD50(v74, *(_QWORD *)(a1 + 304), 55, v51, v52, v53);
      }
    }
  }
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    qfree();
  }
  qfree();
LABEL_102:
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v59 = v95;
  if ( v95 )
  {
    v60 = v96;
    if ( (_QWORD)v96 )
    {
      v61 = 0;
      do
      {
        v62 = (_QWORD *)(v59 + 80 * v61);
        clear_tinfo_t();
        if ( v62[5] )
        {
          v62[6] = 0;
          qfree();
        }
        if ( v62[2] )
        {
          v62[3] = 0;
          qfree();
        }
        ++v61;
        cleanup_argloc();
        v59 = v95;
      }
      while ( v60 != v61 );
    }
    *(_QWORD *)&v96 = 0;
    qfree();
  }
  return v2;
}
