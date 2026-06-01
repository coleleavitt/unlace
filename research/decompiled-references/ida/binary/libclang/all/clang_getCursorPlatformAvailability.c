__int64 __fastcall clang_getCursorPlatformAvailability(
        _DWORD *a1,
        _QWORD *a2,
        _DWORD *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        __int128 a7)
{
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 *v15; // r8
  __int64 v16; // rbp
  char v17; // si
  _QWORD *v18; // r15
  __int64 v19; // rbx
  _QWORD *v20; // rbp
  __int64 *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  __int16 v24; // dx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  char v29; // al
  __int64 *v30; // r12
  unsigned int v31; // ebx
  __int64 v32; // rax
  char *v33; // r13
  char *v34; // rbp
  __int64 v35; // rbx
  int v36; // ecx
  int v37; // esi
  int v38; // r8d
  __int64 v39; // rax
  int v40; // ecx
  int v41; // esi
  int v42; // r8d
  __int64 v43; // rax
  int v44; // ecx
  int v45; // esi
  int v46; // r8d
  __int64 v47; // rdx
  unsigned int *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // rdi
  void *v52; // rcx
  unsigned __int64 v53; // rbx
  char *v54; // r12
  double *v55; // r13
  unsigned __int64 v56; // rdx
  void *v57; // r14
  double *v58; // r12
  __int64 v59; // rbx
  __int64 v60; // r13
  unsigned int *v61; // rsi
  unsigned int *v62; // rdi
  size_t v63; // r15
  size_t v64; // rbp
  size_t v65; // rdx
  int v66; // eax
  __int64 v67; // rdi
  _QWORD *v68; // rbp
  __int64 v69; // rax
  __int64 v70; // r15
  __int64 *v71; // rbx
  _QWORD *v72; // rax
  _QWORD *v73; // r14
  char v74; // si
  __int64 v75; // rbp
  _QWORD *v76; // r15
  __int64 v77; // rax
  __int16 v78; // dx
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // r15
  __int64 v82; // rbp
  __int64 v83; // rdx
  __int64 v84; // rax
  _QWORD *v85; // rdi
  unsigned __int64 v86; // rdx
  char v87; // al
  void *v88; // rcx
  __int64 *v89; // r14
  _QWORD *v90; // rbp
  __int64 *v91; // r13
  __int64 *i; // r12
  __int64 v93; // rdx
  __int64 v94; // rsi
  __m128i v95; // [rsp+0h] [rbp-118h]
  void *src; // [rsp+20h] [rbp-F8h]
  double *srca; // [rsp+20h] [rbp-F8h]
  char v98; // [rsp+30h] [rbp-E8h]
  double *v99; // [rsp+30h] [rbp-E8h]
  char v100; // [rsp+30h] [rbp-E8h]
  __int64 v101; // [rsp+38h] [rbp-E0h]
  __int64 v102; // [rsp+38h] [rbp-E0h]
  __int64 v103; // [rsp+38h] [rbp-E0h]
  __int64 v104; // [rsp+38h] [rbp-E0h]
  _QWORD *v105; // [rsp+38h] [rbp-E0h]
  __int64 v106; // [rsp+38h] [rbp-E0h]
  __int64 v109; // [rsp+50h] [rbp-C8h]
  _QWORD *v112; // [rsp+88h] [rbp-90h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v114; // [rsp+98h] [rbp-80h]
  _BYTE v115[120]; // [rsp+A0h] [rbp-78h] BYREF

  v7 = a4;
  if ( a1 )
    *a1 = 0;
  if ( a2 )
  {
    *a2 = sub_690460();
    a2[1] = v8;
  }
  if ( a3 )
    *a3 = 0;
  if ( v7 )
  {
    *v7 = sub_690460();
    v7[1] = v9;
  }
  if ( (unsigned int)(a7 - 1) > 0x26 && (unsigned int)(a7 - 600) > 4 )
    return 0;
  v95 = _mm_loadu_si128((const __m128i *)&a7);
  v11 = sub_63A250((_DWORD)a1, (_DWORD)a2, (int)a7 - 1, (_DWORD)a4, a5, a6, v95.m128i_i32[0], v95.m128i_i64[1]);
  if ( !v11 )
    return 0;
  ptr = v115;
  v114 = 0x800000000LL;
  if ( !a1 )
  {
    v67 = v11;
    v68 = a2;
    while ( 1 )
    {
      while ( 1 )
      {
        v100 = *(_BYTE *)(v67 + 29) & 1;
        if ( v100 )
        {
          v69 = sub_79A2B0(v67);
          v70 = *(_QWORD *)v69 + 8LL * *(unsigned int *)(v69 + 8);
          v71 = (*(_BYTE *)(v67 + 29) & 1) != 0 ? *(__int64 **)sub_79A2B0(v67) : nullptr;
          if ( v71 != (__int64 *)v70 )
            break;
        }
LABEL_115:
        if ( (*(_BYTE *)(v67 + 28) & 0x7F) != 0x1F )
          goto LABEL_120;
        v84 = *(_QWORD *)(v67 + 16);
        v85 = (_QWORD *)(v84 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v84 & 4) != 0 )
          v85 = (_QWORD *)*v85;
        v67 = sub_79A2E0(v85);
      }
      v72 = v7;
      v73 = v68;
      v74 = 0;
      v75 = v70;
      v76 = v72;
      while ( 2 )
      {
        v77 = *v71;
        v78 = *(_WORD *)(*v71 + 32);
        if ( v78 != 193 )
          goto LABEL_101;
        if ( !v73 )
        {
LABEL_98:
          v74 = v100;
          goto LABEL_99;
        }
        v105 = v76;
        v81 = v75;
        v82 = *v71;
        do
        {
          ++v71;
          clang_disposeString(*v73, v73[1]);
          *v73 = sub_6905C0(*(void **)(v82 + 40), *(unsigned int *)(v82 + 36));
          v73[1] = v83;
          if ( (__int64 *)v81 == v71 )
          {
            v68 = v73;
            v7 = v105;
            goto LABEL_120;
          }
          v82 = *v71;
          v78 = *(_WORD *)(*v71 + 32);
        }
        while ( v78 == 193 );
        v77 = *v71;
        v74 = v100;
        v75 = v81;
        v76 = v105;
LABEL_101:
        if ( v78 == 376 )
        {
          if ( a3 )
            *a3 = 1;
          v104 = v77;
          if ( v76 )
          {
            clang_disposeString(*v76, v76[1]);
            *v76 = sub_6905C0(*(void **)(v104 + 40), *(unsigned int *)(v104 + 36));
            v76[1] = v79;
          }
          goto LABEL_98;
        }
        if ( v78 == 136 )
        {
          v80 = (unsigned int)v114;
          if ( HIDWORD(v114) < (unsigned __int64)(unsigned int)v114 + 1 )
          {
            v106 = v77;
            sub_25D6060(&ptr, v115, (unsigned int)v114 + 1LL, 8);
            v80 = (unsigned int)v114;
            v77 = v106;
          }
          *((_QWORD *)ptr + v80) = v77;
          LODWORD(v114) = v114 + 1;
          goto LABEL_98;
        }
LABEL_99:
        if ( (__int64 *)v75 != ++v71 )
          continue;
        break;
      }
      v68 = v73;
      v7 = v76;
      if ( !v74 )
        goto LABEL_115;
LABEL_120:
      v27 = (unsigned int)v114;
      if ( (_DWORD)v114 )
      {
        v52 = (void *)v67;
        goto LABEL_79;
      }
      v86 = *(_QWORD *)(v67 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v67 + 16) & 4) != 0 )
        v86 = *(_QWORD *)v86;
      v87 = *(_BYTE *)(v67 + 28) & 0x7F;
      if ( v87 == 19 || v87 == 21 )
      {
        v67 = *(_QWORD *)(v67 + 88);
      }
      else
      {
        if ( v87 != 20 )
        {
          switch ( (*(_BYTE *)(v86 + 8) + 111) & 0x7F )
          {
            case 0:
            case 1:
            case 4:
              v67 = v86 - 48;
              continue;
            case 2:
              v67 = *(_QWORD *)(v86 + 40);
              goto LABEL_125;
            case 3:
              v67 = v86 - 48;
              goto LABEL_129;
            default:
LABEL_133:
              v30 = (__int64 *)ptr;
              v31 = 0;
              break;
          }
          goto LABEL_75;
        }
LABEL_129:
        v67 = sub_7BB6B0(v67);
      }
LABEL_125:
      if ( !v67 )
      {
LABEL_41:
        v30 = (__int64 *)ptr;
        v31 = v114;
        goto LABEL_42;
      }
    }
  }
  v12 = a2;
  v13 = v11;
  while ( 2 )
  {
    while ( 2 )
    {
      v98 = *(_BYTE *)(v13 + 29) & 1;
      if ( !v98 )
        goto LABEL_57;
      v14 = sub_79A2B0(v13);
      v15 = nullptr;
      v16 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
      if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
        v15 = *(__int64 **)sub_79A2B0(v13);
      if ( (__int64 *)v16 == v15 )
        goto LABEL_57;
      v109 = v13;
      v17 = 0;
      v18 = v12;
      v19 = v16;
      v20 = v7;
      v21 = v15;
      do
      {
        v23 = *v21;
        v24 = *(_WORD *)(*v21 + 32);
        switch ( v24 )
        {
          case 193:
            v101 = *v21;
            *a1 = 1;
            if ( v18 )
            {
              clang_disposeString(*v18, v18[1]);
              *v18 = sub_6905C0(*(void **)(v101 + 40), *(unsigned int *)(v101 + 36));
              v18[1] = v22;
            }
            goto LABEL_22;
          case 376:
            if ( a3 )
              *a3 = 1;
            v102 = v23;
            if ( v20 )
            {
              clang_disposeString(*v20, v20[1]);
              *v20 = sub_6905C0(*(void **)(v102 + 40), *(unsigned int *)(v102 + 36));
              v20[1] = v25;
            }
LABEL_22:
            v17 = v98;
            break;
          case 136:
            v26 = (unsigned int)v114;
            if ( HIDWORD(v114) < (unsigned __int64)(unsigned int)v114 + 1 )
            {
              v103 = *v21;
              sub_25D6060(&ptr, v115, (unsigned int)v114 + 1LL, 8);
              v26 = (unsigned int)v114;
              v23 = v103;
            }
            *((_QWORD *)ptr + v26) = v23;
            LODWORD(v114) = v114 + 1;
            goto LABEL_22;
        }
        ++v21;
      }
      while ( (__int64 *)v19 != v21 );
      v12 = v18;
      v7 = v20;
      v13 = v109;
      if ( v17 )
        break;
LABEL_57:
      if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x1F )
      {
        v51 = (_QWORD *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
          v51 = (_QWORD *)*v51;
        v13 = sub_79A2E0(v51);
        continue;
      }
      break;
    }
    v27 = (unsigned int)v114;
    if ( !(_DWORD)v114 )
    {
      v28 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
        v28 = *(_QWORD *)v28;
      v29 = *(_BYTE *)(v13 + 28) & 0x7F;
      if ( v29 == 19 || v29 == 21 )
      {
        v13 = *(_QWORD *)(v13 + 88);
      }
      else
      {
        if ( v29 != 20 )
        {
          switch ( (*(_BYTE *)(v28 + 8) + 111) & 0x7F )
          {
            case 0:
            case 1:
            case 4:
              v13 = v28 - 48;
              continue;
            case 2:
              v13 = *(_QWORD *)(v28 + 40);
              goto LABEL_40;
            case 3:
              v13 = sub_7BB6B0(v28 - 48);
              goto LABEL_40;
            default:
              goto LABEL_133;
          }
        }
        v13 = sub_7BB6B0(v13);
      }
LABEL_40:
      if ( !v13 )
        goto LABEL_41;
      continue;
    }
    break;
  }
  v52 = (void *)v13;
LABEL_79:
  v53 = 8 * v27;
  v54 = (char *)ptr;
  src = v52;
  v55 = (double *)((char *)ptr + 8 * v27);
  _BitScanReverse64(&v56, (8 * v27) >> 3);
  sub_5FB030((__int64)ptr, v55, (char *)(2LL * (int)v56));
  if ( v53 <= 0x80 )
  {
    sub_5F8F20(v54, (char *)v55);
    v88 = src;
  }
  else
  {
    sub_5F8F20(v54, v54 + 128);
    v57 = src;
    v99 = v55;
    srca = (double *)(v54 + 128);
    do
    {
      v58 = srca;
      v59 = *(_QWORD *)srca;
      while ( 1 )
      {
        while ( 1 )
        {
          v60 = *((_QWORD *)v58 - 1);
          v61 = *(unsigned int **)(*(_QWORD *)(v60 + 40) + 16LL);
          v62 = *(unsigned int **)(*(_QWORD *)(v59 + 40) + 16LL);
          v63 = *v61;
          v64 = *v62;
          v65 = v64;
          if ( v63 <= v64 )
            v65 = *v61;
          if ( v65 )
          {
            v66 = memcmp(v62 + 4, v61 + 4, v65);
            if ( v66 )
              break;
          }
          if ( v64 >= v63 )
            goto LABEL_81;
          *(_QWORD *)v58-- = v60;
        }
        if ( v66 >= 0 )
          break;
        *(_QWORD *)v58-- = v60;
      }
LABEL_81:
      ++srca;
      *(_QWORD *)v58 = v59;
    }
    while ( v99 != srca );
    v88 = v57;
  }
  v30 = (__int64 *)ptr;
  v89 = (__int64 *)((char *)ptr + 8 * (unsigned int)v114);
  if ( ptr == v89 )
  {
LABEL_141:
    LODWORD(v114) = v89 - v30;
    v31 = v114;
    goto LABEL_42;
  }
  v112 = (_QWORD *)sub_798D40(v88);
  v90 = v112;
  while ( 2 )
  {
    v91 = v30++;
    if ( v89 == v30 )
    {
      v91 = v89;
      goto LABEL_140;
    }
    if ( !(unsigned __int8)sub_600AC0(&v112, *(v30 - 1), v91[1]) )
      continue;
    break;
  }
  if ( v89 == v91 )
  {
LABEL_140:
    v30 = (__int64 *)ptr;
    v89 = v91;
    goto LABEL_141;
  }
  for ( i = v91 + 2; v89 != i; ++i )
  {
    v93 = *i;
    v94 = *v91;
    v112 = v90;
    if ( !(unsigned __int8)sub_600AC0(&v112, v94, v93) )
      *++v91 = *i;
  }
  v30 = (__int64 *)ptr;
  LODWORD(v114) = ((char *)(v91 + 1) - (_BYTE *)ptr) >> 3;
  v31 = v114;
LABEL_42:
  v32 = a6;
  if ( a6 > (unsigned __int64)v31 )
    v32 = v31;
  v33 = (char *)&v30[v32];
  if ( v33 != (char *)v30 )
  {
    v34 = (char *)v30;
    v35 = a5;
    do
    {
      v48 = *(unsigned int **)(*(_QWORD *)(*(_QWORD *)v34 + 40LL) + 16LL);
      *(_QWORD *)v35 = sub_6905C0(v48 + 4, *v48);
      *(_QWORD *)(v35 + 8) = v49;
      v50 = *(_QWORD *)(*(_QWORD *)v34 + 48LL);
      if ( (unsigned int)v50
         | HIDWORD(*(_QWORD *)(*(_QWORD *)v34 + 56LL)) & 0x7FFFFFFF
         | ((unsigned int)*(_QWORD *)(*(_QWORD *)v34 + 56LL) | HIDWORD(v50)) & 0x7FFFFFFF )
      {
        v38 = v50;
        v36 = -1;
        v37 = -1;
        if ( v50 < 0 )
        {
          v37 = HIDWORD(v50) & 0x7FFFFFFF;
          v36 = *(_DWORD *)(*(_QWORD *)v34 + 56LL) & 0x7FFFFFFF;
          if ( (BYTE3(*(_QWORD *)(*(_QWORD *)v34 + 56LL)) & 0x80u) == 0 )
            v36 = -1;
        }
      }
      else
      {
        v36 = -1;
        v37 = -1;
        v38 = -1;
      }
      *(_DWORD *)(v35 + 20) = v37;
      *(_DWORD *)(v35 + 24) = v36;
      *(_DWORD *)(v35 + 16) = v38;
      v39 = *(_QWORD *)(*(_QWORD *)v34 + 64LL);
      if ( (unsigned int)v39
         | HIDWORD(*(_QWORD *)(*(_QWORD *)v34 + 72LL)) & 0x7FFFFFFF
         | ((unsigned int)*(_QWORD *)(*(_QWORD *)v34 + 72LL) | HIDWORD(v39)) & 0x7FFFFFFF )
      {
        v42 = v39;
        v40 = -1;
        v41 = -1;
        if ( v39 < 0 )
        {
          v41 = HIDWORD(v39) & 0x7FFFFFFF;
          v40 = *(_DWORD *)(*(_QWORD *)v34 + 72LL) & 0x7FFFFFFF;
          if ( (BYTE3(*(_QWORD *)(*(_QWORD *)v34 + 72LL)) & 0x80u) == 0 )
            v40 = -1;
        }
      }
      else
      {
        v40 = -1;
        v41 = -1;
        v42 = -1;
      }
      *(_DWORD *)(v35 + 32) = v41;
      *(_DWORD *)(v35 + 36) = v40;
      *(_DWORD *)(v35 + 28) = v42;
      v43 = *(_QWORD *)(*(_QWORD *)v34 + 80LL);
      if ( (unsigned int)v43
         | HIDWORD(*(_QWORD *)(*(_QWORD *)v34 + 88LL)) & 0x7FFFFFFF
         | ((unsigned int)*(_QWORD *)(*(_QWORD *)v34 + 88LL) | HIDWORD(v43)) & 0x7FFFFFFF )
      {
        v46 = v43;
        v44 = -1;
        v45 = -1;
        if ( v43 < 0 )
        {
          v45 = HIDWORD(v43) & 0x7FFFFFFF;
          v44 = *(_DWORD *)(*(_QWORD *)v34 + 88LL) & 0x7FFFFFFF;
          if ( (BYTE3(*(_QWORD *)(*(_QWORD *)v34 + 88LL)) & 0x80u) == 0 )
            v44 = -1;
        }
      }
      else
      {
        v44 = -1;
        v45 = -1;
        v46 = -1;
      }
      *(_DWORD *)(v35 + 44) = v45;
      v34 += 8;
      v35 += 72;
      *(_DWORD *)(v35 - 32) = v46;
      *(_DWORD *)(v35 - 24) = v44;
      *(_DWORD *)(v35 - 20) = *(unsigned __int8 *)(*((_QWORD *)v34 - 1) + 96LL);
      *(_QWORD *)(v35 - 16) = sub_6905C0(
                                *(void **)(*((_QWORD *)v34 - 1) + 104LL),
                                *(unsigned int *)(*((_QWORD *)v34 - 1) + 100LL));
      *(_QWORD *)(v35 - 8) = v47;
    }
    while ( v33 != v34 );
    v31 = v114;
    v30 = (__int64 *)ptr;
  }
LABEL_75:
  if ( v30 != (__int64 *)v115 )
    free(v30);
  return v31;
}

